#ifndef __RELOCATE_ARM_H__
#define __RELOCATE_ARM_H__

/* =================================================================
 *
 *      relocate_arm.h
 *
 *      Architecture dependent relocation routines for the ARM
 *
 * ================================================================= 
 * ####ECOSGPLCOPYRIGHTBEGIN####
 * -------------------------------------------
 * This file is part of eCos, the Embedded Configurable Operating System.
 * Copyright (C) 2008 Free Software Foundation, Inc.
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

#include <pkgconf/system.h>

#ifdef CYGPKG_HAL_ARM

#include <cyg/infra/cyg_type.h>

#define Elf_Rel                   0
#define Elf_Rela                  1

#define ELF_ARCH_MACHINE_TYPE  40    // ARM
#define ELF_ARCH_ENDIANNESS    ELFDATA2LSB
#define ELF_ARCH_RELTYPE       Elf_Rel

// binutils: bfd/elf32-arm.c:
#define R_ARM_NONE                0
#define R_ARM_PC24                1   /* deprecated */
#define R_ARM_ABS32               2
#define R_ARM_REL32               3
#define R_ARM_LDR_PC_G0           4
#define R_ARM_ABS16               5
#define R_ARM_ABS12               6
#define R_ARM_THM_ABS5            7
#define R_ARM_ABS8                8
#define R_ARM_SBREL32             9
#define R_ARM_THM_CALL           10
#define R_ARM_THM_PC8            11
#define R_ARM_BREL_ADJ 	         12
#define R_ARM_SWI24              13 /* obsolete */
#define R_ARM_THM_SWI8           14 /* obsolete */
#define R_ARM_XPC25              15 /* obsolete */
#define R_ARM_THM_XPC22          16 /* obsolete */
#define R_ARM_TLS_DTPMOD32       17
#define R_ARM_TLS_DTPOFF32       18
#define R_ARM_TLS_TPOFF32        19
#define R_ARM_COPY               20 /* Copy symbol at runtime.  */
#define R_ARM_GLOB_DAT           21 /* Create GOT entry.  */
#define R_ARM_JUMP_SLOT          22 /* Create PLT entry.  */
#define R_ARM_RELATIVE           23 /* Adjust by program base.  */
#define R_ARM_GOTOFF32           24 /* 32 bit offset to GOT.  */
#define R_ARM_BASE_PREL          25 /* 32 bit PC relative offset to GOT.  */
#define R_ARM_GOT_BREL           26 /* 32 bit GOT entry.  */
#define R_ARM_PLT32              27 /* deprecated - 32 bit PLT address.  */
#define R_ARM_CALL               28
#define R_ARM_JUMP24             29
#define R_ARM_THM_JUMP24         30
#define R_ARM_BASE_ABS           31
#define R_ARM_ALU_PCREL7_0       32 /* obsolete */
#define R_ARM_ALU_PCREL15_8      33 /* obsolete */
#define R_ARM_ALU_PCREL23_15     34 /* obsolete */
#define R_ARM_LDR_SBREL_11_0     35 /* deprecated  should have _NC suffix */
#define R_ARM_ALU_SBREL_19_12    36 /* deprecated  should have _NC suffix */
#define R_ARM_ALU_SBREL_27_20    37 /* deprecated  should have _CK suffix */
#define R_ARM_TARGET1            38 
#define R_ARM_SBREL31            39 /* deprecated */
#define R_ARM_V4BX               40
#define R_ARM_TARGET2            41
#define R_ARM_PREL31             42
#define R_ARM_MOVW_ABS_NC        43
#define R_ARM_MOVT_ABS           44
#define R_ARM_MOVW_PREL_NC       45
#define R_ARM_MOVT_PREL          46
#define R_ARM_THM_MOVW_ABS_NC    47
#define R_ARM_THM_MOVT_ABS       48
#define R_ARM_THM_MOVW_PREL_NC   49
#define R_ARM_THM_MOVT_PREL      50
#define R_ARM_THM_JUMP19         51
#define R_ARM_THM_JUMP6          52
#define R_ARM_THM_ALU_PREL_11_0  53
#define R_ARM_THM_PC12           54
#define R_ARM_ABS32_NOI          55
#define R_ARM_REL32_NOI          56
#define R_ARM_ALU_PC_G0_NC       57
#define R_ARM_ALU_PC_G0          58
#define R_ARM_ALU_PC_G1_NC       59
#define R_ARM_ALU_PC_G1          60
#define R_ARM_ALU_PC_G2          61
#define R_ARM_LDR_PC_G1          62
#define R_ARM_LDR_PC_G2          63
#define R_ARM_LDRS_PC_G0         64
#define R_ARM_LDRS_PC_G1         65
#define R_ARM_LDRS_PC_G2         66
#define R_ARM_LDC_PC_G0          67
#define R_ARM_LDC_PC_G1          68
#define R_ARM_LDC_PC_G2          69
#define R_ARM_ALU_SB_G0_NC       70
#define R_ARM_ALU_SB_G0          71
#define R_ARM_ALU_SB_G1_NC       72
#define R_ARM_ALU_SB_G1          73
#define R_ARM_ALU_SB_G2          74
#define R_ARM_LDR_SB_G0          75
#define R_ARM_LDR_SB_G1          76
#define R_ARM_LDR_SB_G2          77
#define R_ARM_LDRS_SB_G0         78
#define R_ARM_LDRS_SB_G1         79
#define R_ARM_LDRS_SB_G2         80
#define R_ARM_LDC_SB_G0          81
#define R_ARM_LDC_SB_G1          82
#define R_ARM_LDC_SB_G2          83
#define R_ARM_MOVW_BREL_NC       84
#define R_ARM_MOVT_BREL          85
#define R_ARM_MOVW_BREL          86
#define R_ARM_THM_MOVW_BREL_NC   87
#define R_ARM_THM_MOVT_BREL      88
#define R_ARM_THM_MOVW_BREL      89

#define R_ARM_PLT32_ABS          94
#define R_ARM_GOT_ABS            95
#define R_ARM_GOT_PREL           96
#define R_ARM_GOT_BREL12         97
#define R_ARM_GOTOFF12           98
#define R_ARM_GOTRELAX           99
#define R_ARM_GNU_VTENTRY       100 /* deprecated - old C++ abi */
#define R_ARM_GNU_VTINHERIT     101 /* deprecated - old C++ abi */
#define R_ARM_THM_JUMP11        102
#define R_ARM_THM_JUMP8         103
#define R_ARM_TLS_GD32          104
#define R_ARM_TLS_LDM32         105
#define R_ARM_TLS_LDO32         106
#define R_ARM_TLS_IE32          107
#define R_ARM_TLS_LE32          108
#define R_ARM_TLS_LDO12         109
#define R_ARM_TLS_LE12          110
#define R_ARM_TLS_IE12GP        111
#define R_ARM_ME_TOO            128 /* obsolete */

#define R_ARM_RXPC25            249
#define R_ARM_RSBREL32          250
#define R_ARM_THM_RPC22         251
#define R_ARM_RREL32            252
#define R_ARM_RABS32            253
#define R_ARM_RPC24             254
#define R_ARM_RBASE             255

void      cyg_ldr_flush_cache(void);
cyg_int32 cyg_ldr_relocate(cyg_int32, cyg_uint32, cyg_int32);
extern char *relocation_name[];

#endif // CYGPKG_HAL_ARM

#endif //__RELOCATE_ARM_H__
