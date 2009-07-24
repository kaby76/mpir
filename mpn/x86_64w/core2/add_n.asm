
;  mpn_add_n

;  Copyright 2009 Jason Moxham

;  Windows Conversion Copyright 2008 Brian Gladman
;
;  This file is part of the MPIR Library.
;  The MPIR Library is free software; you can redistribute it and/or modify
;  it under the terms of the GNU Lesser General Public License as published
;  by the Free Software Foundation; either version 2.1 of the License, or (at
;  your option) any later version.
;  The MPIR Library is distributed in the hope that it will be useful, but
;  WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
;  or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU Lesser General Public
;  License for more details.
;  You should have received a copy of the GNU Lesser General Public License
;  along with the MPIR Library; see the file COPYING.LIB.  If not, write
;  to the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
;  Boston, MA 02110-1301, USA.
;
;	rax=mpn_add_n(mp_ptr r9 ,mp_ptr rdx ,mp_ptr r8 ,mp_size_t rcx)
;	(r9,rcx)=(rdx,rcx)+(r8,rcx)  return rax=carry

%include "..\yasm_mac.inc"

%define TR2 r10
%define TR4 r10

    CPU  Core2
    BITS 64

	LEAF_PROC mpn_add_n	
	movsxd  rax, r9d
	mov     r9, rcx
	mov     rcx, rax
	and     rax, 3
	sub     rcx, rax
	lea     r9, [r9+rcx*8]
	lea     rdx, [rdx+rcx*8]
	lea     r8, [r8+rcx*8]
	neg     rcx
	cmp     rcx, 0
	jz      L_skiplp
	xalign  16
L_lp:
	mov     r10, [rdx+rcx*8]
	mov     r11, [rdx+rcx*8+16]
	adc     r10, [r8+rcx*8]
	mov     [r9+rcx*8], r10
	mov     TR2, [rdx+rcx*8+8]
	adc     TR2, [r8+rcx*8+8]
	mov     [r9+rcx*8+8], TR2
	lea     rcx, [rcx+4]
	mov     TR4, [rdx+rcx*8-8]
	adc     r11, [r8+rcx*8-16]
	adc     TR4, [r8+rcx*8-8]
	mov     [r9+rcx*8-16], r11
	mov     [r9+rcx*8-8], TR4
	jrcxz   L_exitlp
	jmp     L_lp
L_exitlp:
	sbb     rcx, rcx
L_skiplp:
	cmp     rax, 2
	ja      L_case3
	jz      L_case2
	jp      L_case1
L_case0:
	sub     rax, rcx
	ret
	xalign  16
L_case1:
	add     rcx, rcx
	mov     r10, [rdx]
	adc     r10, [r8]
	mov     [r9], r10
	sbb     rax, rax
	neg     rax
	ret
	xalign  16
L_case3:
	add     rcx, rcx
	mov     r10, [rdx]
	mov     r11, [rdx+16]
	adc     r10, [r8]
	mov     [r9], r10
	mov     TR2, [rdx+8]
	adc     TR2, [r8+8]
	mov     [r9+8], TR2
	adc     r11, [r8+16]
	mov     [r9+16], r11
	sbb     rax, rax
	neg     rax
	ret
	xalign  16
L_case2:
	add     rcx, rcx
	mov     r10, [rdx]
	adc     r10, [r8]
	mov     [r9], r10
	mov     TR2, [rdx+8]
	adc     TR2, [r8+8]
	mov     [r9+8], TR2
	sbb     rax, rax
	neg     rax
	ret
	end