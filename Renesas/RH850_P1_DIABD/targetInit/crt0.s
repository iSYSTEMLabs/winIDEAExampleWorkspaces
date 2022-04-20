//
//	crt0.s: startup for an embedded environment: RH850 F1L/X 
//	--------------------------------------------------------
//
//	Copyright 2013 Wind River Systems
//
//	Include definitions for interrupt vector table
//
//#include "dr7f7010352afp_irq.h"
  .file		"crt0.c"
	.text
	.export		__start
	.align		2
_RESET:
__start:
	movhi		___SP_INIT@ha,r0,r10	// Initialize stack pointer sp to
	movea		___SP_INIT@l,r10,sp	// value in linker command file.
	addi		-16,sp,sp
	st.w		r0,0[sp]

	// _SDA3_BASE_ is the base for the "tiny data" area. It will be defined 
	// by the linker if either section ".tidata" or ".tibss" is present.

	.weak		_SDA_BASE_		// No error if not defined.
	.weak		_SDA2_BASE_		// No error if not defined.
	.weak		_SDA3_BASE_		// No error if not defined.
	movhi		_SDA_BASE_@ha,r0,gp	// Initialize gp to _SDA_BASE_
	movea		_SDA_BASE_@l,gp,gp	// base (provided by linker).
	movhi		_SDA2_BASE_@ha,r0,tp	// Initialize tp to _SDA2_BASE_
	movea		_SDA2_BASE_@l,tp,tp	// base (provided by linker).
	movhi		_SDA3_BASE_@ha,r0,ep	// Initialize ep to tiny data
	movea		_SDA3_BASE_@l,ep,ep	// base (provided by linker).

//
// Insert other initialization code here.
//
// Initialization of the interrupt base pointer
	mov		  0x200,r1
	ldsr		r1,4,1
	ldsr		r1,intbp 

	jarl		___lowinit,r31		// Call hardware initialization
	jarl		___init_main,r31	// Finish initialization; call
						// main().
	jr		_exit			// Never returns.

//-------------  Interrupt service routine of unused interrupts
  .global  ____unused_isr
___unused_isr:
  br	___unused_isr
//-------------------------------------------------------------------------------

//-------------------------------------------------------------------------------
//-------------  Exception service routine of unhandled exceptions
  .global  ___unused_ex
___unused_ex:
  br	___unused_ex
//-------------------------------------------------------------------------------

//-------------------------------------------------------------------------------
//-------------  Exception service routine of unhandled exceptions
  .global  ___unused_eisr
___unused_eisr:
  br	___unused_eisr
//-------------------------------------------------------------------------------
//-------------------------------------------------------------------------------
//-------------  Add section ".intvect" to your linker command file
//-------------  at address 0x0000
//-------------
//-------------	i.e.	.intvect    0x0000:
//-------------------------------------------------------------------------------
	.section	".intvect",x
ivt:	.equ		.
//-------------------------------------------------------------------------------
//-------------  Initializing of interrupt vector table
//-------------  Please don't modify this section
//-------------------------------------------------------------------------------

  .= ivt+0x0000
  .extern _RESET
  jr _RESET
  
  .= ivt+0x0100
  .extern _TimerInterruptHandler
  jr _TimerInterruptHandler

// OS interrupt code can be added here 
