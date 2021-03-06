//==========================================================================
//
//      src/sys/netinet6/esp_twofish.c
//
//==========================================================================
// ####BSDCOPYRIGHTBEGIN####                                    
// -------------------------------------------                  
// This file is part of eCos, the Embedded Configurable Operating System.
//
// Portions of this software may have been derived from FreeBSD 
// or other sources, and if so are covered by the appropriate copyright
// and license included herein.                                 
//
// Portions created by the Free Software Foundation are         
// Copyright (C) 2002 Free Software Foundation, Inc.            
// -------------------------------------------                  
// ####BSDCOPYRIGHTEND####                                      
//==========================================================================

/*	$KAME: esp_twofish.c,v 1.4 2001/03/02 07:04:57 itojun Exp $	*/

/*
 * Copyright (C) 1995, 1996, 1997, and 1998 WIDE Project.
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 * 3. Neither the name of the project nor the names of its contributors
 *    may be used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE PROJECT AND CONTRIBUTORS ``AS IS'' AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE PROJECT OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
 * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 */

#include <sys/param.h>
#include <sys/socket.h>
#include <sys/queue.h>

#include <net/if.h>
#include <net/route.h>

#include <netinet6/ipsec.h>
#include <netinet6/esp.h>
#include <netinet6/esp_twofish.h>

#include <crypto/twofish/twofish.h>

/*
 * twofish actually do not use assymetric scheduled keys, however, AES C API
 * suggests assymetric key setup.
 */
int
esp_twofish_schedlen(algo)
	const struct esp_algorithm *algo;
{

	return sizeof(keyInstance) * 2;
}

int
esp_twofish_schedule(algo, sav)
	const struct esp_algorithm *algo;
	struct secasvar *sav;
{
	keyInstance *k;

	k = (keyInstance *)sav->sched;
	if (twofish_makeKey(&k[0], DIR_DECRYPT, _KEYLEN(sav->key_enc) * 8,
	    _KEYBUF(sav->key_enc)) < 0)
		return -1;
	if (twofish_makeKey(&k[1], DIR_ENCRYPT, _KEYLEN(sav->key_enc) * 8,
	    _KEYBUF(sav->key_enc)) < 0)
		return -1;
	return 0;
}

int
esp_twofish_blockdecrypt(algo, sav, s, d)
	const struct esp_algorithm *algo;
	struct secasvar *sav;
	u_int8_t *s;
	u_int8_t *d;
{
	cipherInstance c;
	keyInstance *p;

	/* does not take advantage of CBC mode support */
	bzero(&c, sizeof(c));
	if (twofish_cipherInit(&c, MODE_ECB, NULL) < 0)
		return -1;
	p = (keyInstance *)sav->sched;
	if (twofish_blockDecrypt(&c, &p[0], s, algo->padbound * 8, d) < 0)
		return -1;
	return 0;
}

int
esp_twofish_blockencrypt(algo, sav, s, d)
	const struct esp_algorithm *algo;
	struct secasvar *sav;
	u_int8_t *s;
	u_int8_t *d;
{
	cipherInstance c;
	keyInstance *p;

	/* does not take advantage of CBC mode support */
	bzero(&c, sizeof(c));
	if (twofish_cipherInit(&c, MODE_ECB, NULL) < 0)
		return -1;
	p = (keyInstance *)sav->sched;
	if (twofish_blockEncrypt(&c, &p[1], s, algo->padbound * 8, d) < 0)
		return -1;
	return 0;
}
