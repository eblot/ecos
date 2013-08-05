/* =================================================================
 *
 *      relocate_arm.c
 *
 *      Relocation types for the ARM processor (Little Endian).
 *
 * ================================================================= 
 * ####ECOSGPLCOPYRIGHTBEGIN####
 * -------------------------------------------
 * This file is part of eCos, the Embedded Configurable Operating System.
 * Copyright (C) 2008, 2009 Free Software Foundation, Inc.
 * 
 * eCos is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 or (at your option)
 * any later version.
 * 
 * eCos is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with eCos; if not, write to the Free Software Foundation,
 * Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307 USA.
 * 
 * As a special exception, if other files instantiate templates or
 * use macros or inline functions from this file, or you compile this
 * file and link it with other works to produce a work based on this
 * file, this file does not by itself cause the resulting work to be
 * covered by the GNU General Public License. However the source code
 * for this file must still be made available in accordance with
 * section (3) of the GNU General Public License.
 * 
 * This exception does not invalidate any other reasons why a work
 * based on this file might be covered by the GNU General Public
 * License.
 *
 * -------------------------------------------
 * ####ECOSGPLCOPYRIGHTEND####
 * =================================================================
 * #####DESCRIPTIONBEGIN####
 * 
 *  Author(s):    Anthony Tonizzo (atonizzo@gmail.com)
 *  Contributors: Sergei Gavrikov (sergei.gavrikov@gmail.com)
 *  Date:         2008-12-01
 *  Purpose:      
 *  Description:  
 *               
 * ####DESCRIPTIONEND####
 * 
 * =================================================================
 */

#include <cyg/infra/diag.h>     // For diagnostic printing.
#include <cyg/hal/hal_cache.h>
#include <cyg/hal/hal_io.h>

#include <pkgconf/objloader.h>
#include <cyg/objloader/elf.h>
#include <cyg/objloader/objelf.h>

#if CYGPKG_SERVICES_OBJLOADER_DEBUG_LEVEL > 1
// Always 16 characters long, with blank padding is necessary, so
//  the printing is pretty. If the name is longer than 16, shorten it.
// We print the relocation symbols only is 
//  CYGPKG_SERVICES_OBJLOADER_DEBUG_LEVEL is set to 2.
char *relocation_name[] =
{
    "", "R_ARM_PC24      ", "R_ARM_ABS32     ", "", "", "", "", "", "", "",
    "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "",
    "", "", "R_ARM_CALL      ", "R_ARM_JUMP24    ", "", "", "", "",
    "", "", "", "", "", "", "R_ARM_V4BX      "
};
#endif

#if defined(CYGPKG_HAL_ARM)

void
cyg_ldr_flush_cache(void)
{
    HAL_DCACHE_SYNC();
    HAL_ICACHE_SYNC();
}

// in:
// 
// sym_type  Type of relocation to apply,
// mem       Address in memory to modify (relocate).
// sym_value The value of the symbol to use for the relocation.
// The proper relocation to apply (i.e. the proper use of mem and sym_value)
//  depend on the relocation to apply. The number and types of relocations
//  that must be supported by any given architecture is spelled in the ELF/EABI
//  guide for that architecture.
cyg_int32 
cyg_ldr_relocate(cyg_int32 sym_type, cyg_uint32 mem, cyg_int32 sym_value)
{
    cyg_int32  i, rel_offset;
    
    // ARM uses rel, so we don't have to add the addend.
    switch( sym_type )
    {
    case R_ARM_ABS32: // [2]
        HAL_READ_UINT32(mem , i);
        HAL_WRITE_UINT32(mem, i + sym_value);
        return 0;
    case R_ARM_PC24: // Arm B/BL instruction [1]
    #ifdef CYGBLD_HAL_ARM_EABI
    // the following symbols work as the OABI R_ARM_PC24
    // check out http://sourceware.org/ml/binutils/2004-10/msg00450.html 
    case R_ARM_CALL: // [28]
    case R_ARM_JUMP24: // [29]
    #endif // CYGBLD_HAL_ARM_EABI
        {
            #define OFFSET_MASK ((1<<24)-1)
            // read the current opcode
            HAL_READ_UINT32(mem, i);
            // compute the relative offset (2's complement)
            rel_offset = sym_value - mem;
            // the MSB contains the instruction:
            //   1st nibble is the condition, 2nd nibble is the instruction
            cyg_uint32 instr = i & ~OFFSET_MASK;
            // the 3 LSB contains the PC-relative offset, /4
            cyg_uint32 offset = (i & OFFSET_MASK)<<2;
            // update the new offset
            offset += rel_offset;
            // apply the /4 factor back
            offset >>= 2;
            // truncate the offset to be sure it does not overlap with the
            // instruction
            offset &= OFFSET_MASK;
            HAL_WRITE_UINT32(mem, instr | offset);
            return 0;
        }
    case R_ARM_V4BX: // [40]
        HAL_READ_UINT32(mem , i);
        // Preserve Rm and the condition code
        i &= 0xf000000f;
        // Alter other bits to re-code instruction as MOV PC,Rm.
        i |= 0x01a0f000;
        HAL_WRITE_UINT32(mem , i);
        return 0;
    default:
        #if CYGPKG_SERVICES_OBJLOADER_DEBUG_LEVEL > 0
        diag_printf("FIXME: Unknown relocation type: %d\n", (int)sym_type);
        #endif // CYGPKG_SERVICES_OBJLOADER_DEBUG_LEVEL
        return -1;
    }
}

#endif // CYGPKG_HAL_ARM
