	.text
	.align		4

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
  .extern __start
  jr __start
  
  .= ivt+0x0100
  .extern _TimerInterruptHandler
  jr _TimerInterruptHandler

// OS interrupt code can be added here 
