; Copyright (c) 2000-2017 Synopsys Inc. 
	.file	"crt1.s"

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;;; Startup
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
	;.extern __arc_main
	.extern	main; in case main is in user library (like eembc tests)
	;.extern _mwhalt_cpu
	.text
	.weak	_SDA_BASE_

        .macro  lda, reg, addr
            .if $defined(__ARC64)
                .if "\&reg\&" == "gp"
                    movhl       reg, addr@hi32
                    orl\&$suffix         reg, reg, addr@lo32
                .else
                    movhl_s     reg, addr@hi32
		    .if $suffix == ".f"
			orl.f       reg, reg, addr@lo32
		    .else
			orl_s       reg, reg, addr@lo32
		    .endif
                .endif
            .else
                mov\&$suffix     reg, addr
            .endif
        .endm

	.macro jmpl,target
	    .if $defined(__ARC64)
		lda	blink,target
		jl	[%blink]
	    .elseif $core_version > 5
		jl	target		; "large" model call
	    .else
		lr	%blink, [%status]
		add	%blink, %blink, 3
		j	target
	    .endif
	.endm

	.if $defined(__Mlarge) || $defined(__Mxlarge)
	    .if $defined(__ARC64)
		.macro linked_call, target
			lda	%blink, target
			jl	[%blink]
		.endm
		.macro branch_far, target
			lda	%blink, target
			j	[%blink]
		.endm
	    .else
		.macro linked_call, target
			jl	target
		.endm
		.macro branch_far, target
			j	target
		.endm
	    .endif
	.else
		.macro linked_call, target
			bl	target
		.endm
		.macro branch_far, target
			b	target
		.endm
	.endif

	.if $isa == "ARC" && $core_version <= 0x05
	    .macro nop_a4
		nop
	    .endm
	.else
	    .macro nop_a4
	    .endm
	.endif

	.if $arc_family == "ARC600"
	    ; st825222 sometimes a nop is needed after a BRcc instr:
;Since the BRZ_S here has a positive offset then it is predicted not taken.
;The following jump is fetched and moves through the pipeline one stage behind
;the BRZ_S. The BRZ_S does not resolve until it reaches the final stage (5)
;of the pipeline, but the jump is taken from stage 3, so before the BRZ_S can
;resolve and kill the incorrect instructions in the pipe, the jump has caused
;the PC to change to the value from r2 and a fetch from this address to be made.
	    .macro nop_a6
		nop
	    .endm
	.else
	    .macro nop_a6
	    .endm
	.endif

	.if $isa == "ARCompact"
	    .on	assume_short, assume_nop_short
	    .define S, _s
	.else
	    .define S,
	.endif

	.if $arc_family == "ARC64"
	    .define L, l
	    .define mov0, movl_l
	.else
	    .define L,
	    .define mov0, mov
	.endif

	.ifndef MULTIPLE_BANKS
	    .define	MULTIPLE_BANKS, 0
	.endif

	.global	_start
	.type	_start, @function
_start:
.if $is_arcv2 && MULTIPLE_BANKS
    .define PERFORM_REGISTER_INITIALIZATION, 1

    .ifdef _PICTABLE
	; under PICTABLE, r0 is assumed to contain the base of the data segment
	; so must preserve it.
	mov\&L	r3, r0
    .else
	mov0	r3, 0
    .endif
    .if $arc_family == "ARC64"
	.ifndef _PICTABLE
	mov\&L	r0, r3
	.endif
	mov\&L	r1, r3
	mov\&L	r2, r3
    .endif

	lr	r0, [rf_build]
    .ifdef __Xbarrel_shifter
        lsr	r0, r0, 11
        and	r1, r0, 7	; r1 contains number of additional banks
	lsr	r0, r0, 3
    .elif $defined(__Xshift_assist)
	lsr8	r0, r0
	lsr	r0, r0
	lsr	r0, r0
	lsr	r0, r0
        and	r1, r0, 7	; r1 contains number of additional banks
	lsr	r0, r0
	lsr	r0, r0
	lsr	r0, r0
    .else
        .rep 11
	    lsr	r0, r0
	.endr
        and	r1, r0, 7	; r1 contains number of additional banks
	lsr	r0, r0
	lsr	r0, r0
	lsr	r0, r0
    .endif
	add	r1, r1, 1	; r1 contains number of banks to initialize
        and	r2, r0, 3	; r2 contains code for number of duped regs.
				; 0=4 duplicated
				; 1=8 duplicated
				; 2=16 duplicated
				; 3=32 duplicated


    .ifndef _ARC_RF16
	banked32:
	    mov0	r4, 0
	    .if $is_arcv3
		.irep num, 5, 6, 7, 8, 9, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26
		    mov\&L	r\&num, r4
		.endr
	    .else
		.irep num, 5, 6, 7, 8, 9, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25
		    mov\&L	r\&num, r4
		.endr
	    .endif
    .endif
	banked16:
	    mov0	r10, 0
	    .if $is_arcv3
		.irep num,  11, 16, 27, 28, 31
		    mov\&L	r\&num, r10
		.endr
	    .else
		.irep num,  11, 26, 27, 28, 31
		    mov\&L	r\&num, r10
		.endr
	    .endif
	    mov\&L	r30, 0
	banked8:
	    mov0	r12, 0
	    .irep num,  13, 14, 15
		    mov\&L	r\&num, r12
	    .endr

	; don't trash r0-3 if bank 0
	lr	r0, [status32]
	and.f	r0, r0, 0x70000
	bz	next_bank

	banked4:
	    mov0	r0, 0
	    .irep num,  1, 2, 3
		    mov\&L	r\&num, r0
	    .endr
next_bank:
	; return to bank 0
	lr	r0, [status32]
	and	r0, r0, 0xfff8ffff
	kflag	r0

	sub.f	r1, r1, 1
	bz	done_reg_init

	; r1 now contains the next bank number to initialize (counting down to
	; zero). set up the next status32 value to use to switch banks
    .ifdef __Xbarrel_shifter
        lsl	r1, r1, 16
	or	r0, r0, r1
        lsr	r1, r1, 16	; we don't have a spare reg to trash, so restore
    .elif $defined(__Xswap)
	lsl16	r1, r1
	or	r0, r0, r1
        lsr16	r1, r1
    .elif $defined(__Xshift_assist)
	lsl8	r1, r1
	lsl8	r1, r1
	or	r0, r0, r1
        lsr8	r1, r1
        lsr8	r1, r1
    .else
    	.rep 16
	     lsl	r1, r1
	.endr
	or	r0, r0, r1
    	.rep 16
	     lsr	r1, r1
	.endr
    .endif

	; now branch back and initialize another bank
	breq	r2, 0, go_banked4
	breq	r2, 1, go_banked8
	breq	r2, 2, go_banked16
    .ifndef _ARC_RF16
	breq	r2, 3, go_banked32
    .endif
    	b	done_reg_init	; shouldn't ever happen unless BCR is malformed

	; once we switch banks, we can't reference anything in registers
	; since those registers are now swapped out for a different register set
go_banked4:
	kflag	r0
	b	banked4
go_banked8:
	kflag	r0
	b	banked8
go_banked16:
	kflag	r0
	b	banked16
    .ifndef _ARC_RF16
go_banked32:
	kflag	r0
	b	banked32
    .endif


done_reg_init:
	mov\&L	r29, 0		; r29 not duplicated in banks, just in bank 0

.elif $arc_family != "ARC700"
	; for ram-based registers files! If you use flop-based, then
	; this code can be commented out. A700 family is always flop-based
	; and those come up in a known state.

	; Initialize the register file.  This is necessary because
	; of an idiosyncracy of the register file implementation.
	; Compiled code may generate sub  r0, r1, r1, expecting to
	; load 0 into r0, but the individual reads of r1 for the two source
	; operands may return different (garbage) values if r1 had never
	; been written to since reset.

	; Register initialization is also required for builds with ECC
	; protection on the register file.
    .define PERFORM_REGISTER_INITIALIZATION, 1

.ifndef _PICTABLE
    .define init_reg, r0
    mov0	r0, 0
    mov\&L	r1, init_reg
.else
    .define init_reg, r1
    mov0	r1, 0
.endif
    .ifdef _ARC_RF16
	.if $is_arcv3
	    .irep num, 2, 3, 10, 11, 12, 13, 14, 15, 16, 27
		mov\&L	r\&num, init_reg
	    .endr
	.else
	    .irep num, 2, 3, 10, 11, 12, 13, 14, 15, 27
		mov\&L	r\&num, init_reg
	    .endr
	.endif
    .else
	.irep num, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 27
		mov\&L	r\&num, init_reg
	.endr
    .endif

    .if $is_arcv3 && !$defined(_ARC_RF16)
	mov\&L	r26, r1
    .endif
    ; Use: $is_arcv2 || $is_arcv3
    .if $is_arcv2
	mov\&L	r29, r1
	mov\&L	r30, r1
    .endif
.endif

	.weak __xcheck

.ifndef _PICTABLE
    .if $isa == "ARCompact"
	lda.f     r0, __xcheck
	beq	.Lsetstack
	jl	[r0]
    .else
        mov.f	r0, __xcheck
	nop_a4
	beq	.Lsetstack
	mov	r0, 0
	jmpl	__xcheck	; check compiled extensions against ARC build
    .endif
.else
	; r0 is assumed to contain the base of the data segment
	; so must preserve it.  __xcheck modifies only r0 and r1 and is
	; position-independent
    .if $is_arcv2 && MULTIPLE_BANKS
	; previous code saved r0 in r3
        mov\&L	r2, r3
    .else
	mov\&L	r2, r0
    .endif
        lda.f	r0, __xcheck
	nop_a4
	beq	.Linit_pic

	linked_call	__xcheck

    .Linit_pic:
	mov\&L	r0, r2
	.weak	__PICTABLE__
	; In PIC mode, we assume that we were loaded by a loader and may not
	; reside at the addresses that the ELF file was linked with.  In
	; this case, the address of where the data segment has been loaded
	; is passed to _start in the r0 register.  We figure out the new code
	; segment base ourselves.
	lda.f	r2, __PICTABLE__
	nop_a4
	beq	no_pic
	linked_call	_init_pic

no_pic:
.endif

    .Lsetstack:
	lda	sp, _estack	; initialize stack pointer
	lda	gp, _SDA_BASE_	; initialize small-data base register
.ifdef __Xvdsp
	bl	_mwinit_vdsp
.endif

    .if $isa == "ARCompact"
	.cfa_bf	_start

	; we now perform a set of initialization routines that may or may
	; not be present, depending on whether the weak symbol for the
	; initialization function was chosen by the linker or not.
	; A smaller sequence for doing this is as follows:
	;     mov_s	r0, symbol
	;     breq_s r0, 0, label
	;     jl_s	[r0]
	; label:
	; This is 10 bytes instead of the more efficient 12-byte sequence used
	; below

	.if $is_arcv2
	    .define INIT_JLI, _init_jli
	.else
	    .define INIT_JLI, _init_spe
	.endif
	.weak	INIT_JLI
	; must do this after %sp %gp are setup
    	lda.f	%r2, INIT_JLI
	jlnz	[%r2]
    .Lcheck_ldi:
	.if $is_arcv2
	.weak	_init_ei
	.weak	_init_ad
.if $arc_family == "ARCV2EM"
	.weak	_init_sjli
.endif
  .ifndef __ARC64
	.weak	_init_ldi
	mov.f	%r2, _init_ldi
	jlnz	[%r2]
    .Lcheck_ei:
	mov.f	%r2, _init_ei
	jlnz	[%r2]
  .endif
    .Lcheck_ad:
	lda.f	%r2, _init_ad
	jlnz	[%r2]
    .Lcheck_sjli:
.if $arc_family == "ARCV2EM"
	mov.f	%r2, _init_sjli
	jlnz	[%r2]
.endif
    .Lcheck_end:
        .endif

    .else
	; $isa is not ARCompact
	sub	sp, sp, 16	; allocate expected call frame
    .endif

    .ifndef PERFORM_REGISTER_INITIALIZATION
	mov0	fp, 0		; initialize frame pointer
    .endif
	jmpl	main
	b	_exit_halt
	.reloc	main, 0; force main in if its in a library
	.if $isa == "ARCompact"
	.cfa_ef
	.endif


	.include "mwhalt_code.i"
	.global	_exit_halt
	.type	_exit_halt, @function
	.align 4
_exit_halt:
	.if $isa == "ARCompact"
	.cfa_bf	_exit_halt
	.endif
	mov	r0, _MWHALT_EXIT_HALT
	jmpl	_mwhalt_cpu

	.if $isa == "ARCompact"
	.cfa_ef
	.endif

.ifdef __Xvdsp
	.define	vec_build0, 0x540
	.define	aux_vecmem_region, 0x544
	.global	_mwinit_vdsp
	.type	_mwinit_vdsp, @function
	.align 4
_mwinit_vdsp:
	.cfa_bf	_mwinit_vdsp
	; Calculate the end of VCCM memory.
	lr	r0, [vec_build0] ; Read bits 4-7 from VEC_BUILD0
	lsr_s	r0, r0, 4
	and	r0, r0, 15 ; 0x7 -> 32K, 0x8 -> 64K, 0x9 -> 128K, 0xA -> 256K
	breq_s	r0, 0, .skip_vccm_init
	mov	r1, 256
	lsl_s	r1, r1, r0 ; (256 << 7 == 32K)
	lr	r0, [aux_vecmem_region] ; Read AUX_VECMEM_REGION
    .ifdef _EMU256
	; Set the first half of p0 to 1.  Second half to 0.
	vvpmovsp	p0, 0, -1
	vvpmovsp	p0, 1, 0
    .endif
    .ifdef __Xvdsp4
	; Setup r56 as the vccm stack pointer for VDSP4.
	add	r56, r0, r1
    .else
	; Setup r24 as the vccm stack pointer for VDSP3 and earlier.
	add	r24, r0, r1
    .endif
.skip_vccm_init:
	j	[%blink]
	.cfa_ef
.endif

	; weak versions of small data symbols normally defined by the linker.
	.weak	_fsbss
	.weak	_esbss
	.set	_fsbss,0
	.set	_esbss,0

	; weak versions of BSS section symbols in case there is no .bss section
	.weak	_fbss
	.weak	_ebss
	.set	_fbss,0
	.set	_ebss,0

	; weak versions of heap section boundaries.  If a .heap section
	; is provided, our low-level allocator "sbrk" allocates within it.
	; If no .heap is provided, we allocate from _end to the end of memory.
	.weak	_fheap
	.weak	_eheap
	.set	_fheap,0
	.set	_eheap,0

	; reference the beginning of the stack for debugger's stack checking
	.weak	_fstack
	.set	_fstack,0
  
  
.text
_mwhalt_cpu::
    .ifdef _NO_RUNTIME_FLAG1
        b	_mwhalt_cpu
    .else
	flag	1
	.if $is_arcv2
	    nop_s
	    b_s	_mwhalt_cpu
	.else
	    ; we want halted PC to not run into the following label, so we
	    ; provide some pipeline buffer instructions
	    nop
	    nop
	    nop
	    nop
	    nop
	    nop
	    b	_mwhalt_cpu
	.endif
    .endif
    
  .end
