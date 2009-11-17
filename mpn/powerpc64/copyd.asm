dnl  PowerPC-64 mpn_copyd

dnl  Copyright 2004, 2005 Free Software Foundation, Inc.

dnl  This file is part of the GNU MP Library.

dnl  The GNU MP Library is free software; you can redistribute it and/or modify
dnl  it under the terms of the GNU Lesser General Public License as published
dnl  by the Free Software Foundation; either version 2.1 of the License, or (at
dnl  your option) any later version.

dnl  The GNU MP Library is distributed in the hope that it will be useful, but
dnl  WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
dnl  or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU Lesser General Public
dnl  License for more details.

dnl  You should have received a copy of the GNU Lesser General Public License
dnl  along with the GNU MP Library; see the file COPYING.LIB.  If not, write
dnl  to the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
dnl  Boston, MA 02110-1301, USA.

include(`../config.m4')

C		cycles/limb
C POWER3/PPC630:     1
C POWER4/PPC970:     1

C INPUT PARAMETERS
C rp	r3
C up	r4
C n	r5

ASM_START()
PROLOGUE(mpn_copyd)
	rldic.	r0, r5, 3, 59	C r0 = (r5 & 3) << 3; cr0 = (n == 4t)?
	cmpldi	cr6, r0, 16	C cr6 = (n cmp 4t + 2)?

ifdef(`HAVE_ABI_mode32',
`	rldic	r6, r5, 3, 32',	C byte count corresponding to n
`	rldicr	r6, r5, 3, 60')	C byte count corresponding to n

	addi	r5, r5, 4	C compute...
ifdef(`HAVE_ABI_mode32',
`	rldicl	r5, r5, 62,34',	C ...branch count
`	rldicl	r5, r5, 62, 2')	C ...branch count
	mtctr	r5

	add	r4, r4, r6
	add	r3, r3, r6
	sub	r4, r4, r0	C offset up
	sub	r3, r3, r0	C offset rp

	beq	cr0, L(L00)
	blt	cr6, L(L01)
	beq	cr6, L(L10)
	b	L(L11)

	ALIGN(16)
L(oop):	ld	r6, 24(r4)
	std	r6, 24(r3)
L(L11):	ld	r6, 16(r4)
	std	r6, 16(r3)
L(L10):	ld	r6, 8(r4)
	std	r6, 8(r3)
L(L01):	ld	r6, 0(r4)
	std	r6, 0(r3)
L(L00):	addi	r4, r4, -32
	addi	r3, r3, -32
	bdnz	L(oop)

	blr
EPILOGUE()