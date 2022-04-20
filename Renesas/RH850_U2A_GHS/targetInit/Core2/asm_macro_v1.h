#ifdef __LANGUAGE_ASM__
-------------------------------------------------------------------------------
-- Module      = asm_macro_v1.h
-- Version     = E1.05
--               manually created  
--               
-------------------------------------------------------------------------------
--                                  COPYRIGHT
-------------------------------------------------------------------------------
-- Copyright (c) 2014 by Renesas Electronics Europe GmbH,
--               a company of the Renesas Electronics Corporation
-------------------------------------------------------------------------------
-- Purpose:      Startup Code
--
-------------------------------------------------------------------------------
--
-- Warranty Disclaimer
--
-- Because the Product(s) is licensed free of charge, there is no warranty
-- of any kind whatsoever and expressly disclaimed and excluded by Renesas,
-- either expressed or implied, including but not limited to those for
-- non-infringement of intellectual property, merchantability and/or
-- fitness for the particular purpose.
-- Renesas shall not have any obligation to maintain, service or provide bug
-- fixes for the supplied Product(s) and/or the Application.
--
-- Each User is solely responsible for determining the appropriateness of
-- using the Product(s) and assumes all risks associated with its exercise
-- of rights under this Agreement, including, but not limited to the risks
-- and costs of program errors, compliance with applicable laws, damage to
-- or loss of data, programs or equipment, and unavailability or
-- interruption of operations.
--
-- Limitation of Liability
--
-- In no event shall Renesas be liable to the User for any incidental,
-- consequential, indirect, or punitive damage (including but not limited
-- to lost profits) regardless of whether such liability is based on breach
-- of contract, tort, strict liability, breach of warranties, failure of
-- essential purpose or otherwise and even if advised of the possibility of
-- such damages. Renesas shall not be liable for any services or products
-- provided by third party vendors, developers or consultants identified or
-- referred to the User by Renesas in connection with the Product(s) and/or
-- the Application.
--
-------------------------------------------------------------------------------
-- Environment:
--              Device:         All RH850 Mutlicore
--              IDE:            GHS Multi for V800  V6.1.4/2013.5.5 or later
-------------------------------------------------------------------------------

#ifndef __ASM_MACRO_H__
#define __ASM_MACRO_H__

-------------------------------------------------------------------------------
-- List of services provided by asm_macro_v1.h:
-- E2XFCC1:
--          PORT_CREATE( pe)
--          SETLED( pe, n) [0<n<0xff, 1<pe<8]
-- All:
--          BOOT_ALL_PE
--          jmpIfPE1 address
--          jmpIfPE2 address
--          jmpIfPE3 address
--          CallWeak address
-------------------------------------------------------------------------------

#ifndef ENTER
#define ENTER( f) \
	.global	 f; \
	.section .text; \
	.align   4; \
	.type    f, @function; \
f:;
#endif

#ifndef LEAVE
#define LEAVE( f) \
	.type  f, @function; \
	.size	f, .-f;
#endif



#if !defined(__RH850G4MH__) & defined(__E2XFCC1)
#error undefined Core/MCU!
#endif

#ifdef __RH850G4MH__  // __RH850G4MH__
#define SHIFTCORE 
    .set PE1        0
    .set PE2        1
    .set PE3        2
    .set PE4        3
    .set PE5        4
    .set PE6        5
    .set PE7        6
    .set PE8        7
#else
#define SHIFTCORE       shr	16, r10
    .set PE1        1
    .set PE2        2
    .set PE3        3
#endif

    .set BOOTCTRL   0xFFFB2000

    .macro BOOT_ALL_PE
    mov   BOOTCTRL, r1
    ori   3, r0, r2
    st.w  r2, 0[r1]
    .endm
 
#ifdef __E2XFCC1__       // __RH850G4MH__
    .macro PORT_CREATE pe
    GETPEID
    cmp     pe, r10
    be     1f

    mov       -1515870975, r1
    mov       -10408128, r11
    st.w      r1, 0[r11]
    mov       1048642, r1
    mov       -10408124, r11
    st.w      r1, 0[r11]
    st.h      zero, -4110268[zero]
    st.h      zero, -4110272[zero]
    ori       0xffff, zero, r1
    mov       -10418096, r11
    st.h      r1, 0[r11]
    mov       -10418092, r11
    st.h      zero, 0[r11]
    st.h      zero, -4110264[zero]
    mov       -10418060, r11
    st.h      zero, 0[r11]
    mov       1, r1
    st.h      r1, -4110252[zero]
    st.h      r1, -4110216[zero]
    st.h      zero, -4110248[zero]
    mov       -10418064, r11
    st.h      zero, 0[r11]
    st.h      zero, -4110232[zero]
    mov       -10418112, r11
    st.h      zero, 0[r11]
    mov       -10418092, r11
    st.h      zero, 0[r11]
    ori       0xff00, zero, r1
    mov       -10418096, r11
    st.h      r1, 0[r11]
    st.h      zero, -4110272[zero]
    st.h      zero, -4110268[zero]
    mov       -10408124, r11
    st.w      zero, 0[r11]
    mov       -1515870976, r1
    mov       -10408128, r11
    st.w      r1, 0[r11]
    movhi     0xff61, zero, r1
--  ld.hu     80[r1], r1
--  mov       -37746616, r12
--  st.w      r1, 0[r12]
 1: syncp     
    .endm

    -- Turn on/off LED on Piggy board
    -- occupies r10, r1
    .macro SETLED pe, n
    GETPEID
    cmp     pe, r10
    bne     1f
    mov     n, r6
    mov     -10418112, r10
    st.h    r6, 0[r10]
 1:      
    .endm
#else
    .macro PORT_CREATE pe
    .endm
    .macro SETLED pe, n
    .endm
#endif          // __E2XFCC1

    -- return PE number in r10
    .macro GETPEID
	stsr	0, r10, 2
	SHIFTCORE
	andi	0x7, r10, r10
    .endm

    -- occupies r10, jumps to r1
    .macro jmpIf    pe, addr
    GETPEID
    cmp     pe, r10
    bne     2f
 1:	mov	addr, r1
 	jmp	[r1]
 2:
    .endm

-------------------------------------------------------------------------------
-------------  Jump to a target address (label) specified as a parameter
-------------  if the core executing the code is PE2
-------------------------------------------------------------------------------

	.macro jmpIfPE1	addr
	GETPEID
	cmp	PE1, r10
	bne	2f
 1:	mov	addr, r1
 	jmp	[r1]
 2:
 	.endm

-------------------------------------------------------------------------------
-------------  Jump to a target address (label) specified as a parameter
-------------  if the core executing the code is PE2
-------------------------------------------------------------------------------
	.macro jmpIfPE2	addr
	GETPEID
	cmp	PE2, r10
	bne	2f
 1:	mov	addr, r1
 	jmp	[r1]
 2:
 	.endm

-------------------------------------------------------------------------------
-------------  Jump to a target address (label) specified as a parameter
-------------  if the core executing the code is PE3
-------------------------------------------------------------------------------
	.macro jmpIfPE3	addr
	GETPEID
	cmp	PE3, r10
	bne	2f
 1:	
	movhi	hi(addr), r0, r6
	addi	lo(addr), r6, r6	-- Use addi to set zero flag.
	be      2f
 	jmp	[r1]
 2:
 	.endm


-------------------------------------------------------------------------------
-------------  Jump to a target address (label) specified as a parameter
-------------  if the core executing the code is PE4
-------------------------------------------------------------------------------
	.macro jmpIfPE4	addr
	GETPEID
	cmp	PE4, r10
	bne	2f
 1:	
	movhi	hi(addr), r0, r6
	addi	lo(addr), r6, r6	-- Use addi to set zero flag.
	be      2f
 	jmp	[r1]
 2:
 	.endm


-------------------------------------------------------------------------------
-------------  Jump to a target address (label) specified as a parameter
-------------  if the core executing the code is PE5
-------------------------------------------------------------------------------
	.macro jmpIfPE5	addr
	GETPEID
	cmp	PE5, r10
	bne	2f
 1:	
	movhi	hi(addr), r0, r6
	addi	lo(addr), r6, r6	-- Use addi to set zero flag.
	be      2f
 	jmp	[r1]
 2:
 	.endm


-------------------------------------------------------------------------------
-------------  Calls a subfunction, if it is defined as weak.
-------------------------------------------------------------------------------
	.macro CallWeak	addr
	movhi	hi(addr), r0, r6
	addi	lo(addr), r6, r6	-- Use addi to set zero flag.
	be    1f
	jarl	addr, lp
 1:
 	.endm

#if __RH850_additional_sda_reg==1
.rh850_flags SDA_EXTRA_REGS_1
#elif __RH850_additional_sda_reg==2
.rh850_flags SDA_EXTRA_REGS_2
#elif __RH850_additional_sda_reg==3
.rh850_flags SDA_EXTRA_REGS_3
#elif __RH850_additional_sda_reg==4
.rh850_flags SDA_EXTRA_REGS_4
#elif __RH850_additional_sda_reg==5
.rh850_flags SDA_EXTRA_REGS_5
#endif

#endif  /* __ASM_MACRO_H__ */
#endif  /* __LANGUAGE_ASM__ */
