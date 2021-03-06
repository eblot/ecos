#ifndef __LOADER_MEMORY_H__
#define __LOADER_MEMORY_H__

/* =================================================================
 *
 *      loader_memory.h
 *
 * ================================================================= 
 * ####ECOSGPLCOPYRIGHTBEGIN####
 * -------------------------------------------
 * This file is part of eCos, the Embedded Configurable Operating
 * System.
 * Copyright (C) 2006, 2008 Free Software Foundation, Inc.
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
 *  Author(s):    Gernot Zankl zankl@decomsys.com
 *  Date:         2006-11-21
 *  Purpose:      
 *  Description:  
 *               
 * ####DESCRIPTIONEND####
 * 
 * =================================================================
 */

#include <cyg/objloader/objelf.h>

PELF_OBJECT cyg_ldr_open_library_memory(CYG_ADDRWORD);
void cyg_ldr_close_library_memory(PELF_OBJECT);

#endif // __LOADER_MEMORY_H__
