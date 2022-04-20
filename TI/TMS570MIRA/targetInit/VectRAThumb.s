@ FROM CortexA8 TRM:
@
@ 2.8.1 Switching state
@ You can switch the operating state of the processor between:
@ - ARM state and Thumb state using the BX and BLX instructions, and loads to the PC.
@ Switching state is described in the ARM Architecture Reference Manual.
@ - Thumb state and ThumbEE state using the ENTERX and LEAVEX instructions.
@ Exceptions cause the processor to enter ARM or Thumb state according to the value held in the
@ TE bit within the system control coprocessor. Normally, on exiting an exception handler, the
@ processor restores the original contents of the T and J bits.
@ 
@ 2.8.2 Interworking ARM and Thumb state
@ The processor enables you to mix ARM Thumb-2 code. See Chapter 4 Interworking ARM and
@ Thumb in the RealView Compilation Tools Developer Guide for details.
@ 
@ ...
@ 
@ 2.15.3 Reset
@ When the reset signals, as described in Chapter 10 Clock, Reset, and Power Control, are driven
@ appropriately a reset occurs, and the processor abandons the executing instruction.
@ When the reset signals are deasserted, the processor:
@ 1. Forces the NS bit in SCR to 0 for secure and CPSR M[4:0] to 5'b10011 for secure
@ Supervisor mode.
@ 2. Sets the A, I, and F bits in the CPSR.
@ 3. Clears the CPSR J bit. The CPSR T bit is set based on the state of the CFGTE input. Other
@ bits in the CPSR are indeterminate.
@ 4. Forces the PC to fetch the next instruction from the reset vector address.
@ 5. Resumes execution in ARM or Thumb state based on the state of the CFGTE input.
@ After reset, all register values except the PC and CPSR are indeterminate.
@ 
@ FROM forumz:
@ Note that .THUMB_FUNC must be used before EVERY thumb entry point
@ label from C or otherwise the assembler assumes that it is a ARM
@ entry point... even if the code is in a .THUMB section.


  .GLOBAL reset
  .GLOBAL __init_
  .GLOBAL IntDefaultHandler
  .GLOBAL RTIHandler
  
.ARM

.section .text.vect
  
reset: 
  b __init0_
  b IntDefaultHandler       
  b IntDefaultHandler       
  b IntDefaultHandler       
  b IntDefaultHandler       
  b IntDefaultHandler       
  ldr pc,[pc,#-0x1B0]      
  ldr pc,[pc,#-0x1B0]      
  b IntDefaultHandler
  b IntDefaultHandler
  b IntDefaultHandler

@ Stub to prevent linker warning from calling __init_ (blx __init_) directly.
@ __init_ is not marked as .THUMB_FUNC since it is in ARM/THUMB shared source file.

.THUMB

.ALIGN  2     

.TYPE   __init0_,function

.THUMB_FUNC

__init0_:
  ldr   r0,   =init_address
  ldr   r0,   [r0]
  mov   pc,   r0
  

.ALIGN 4
init_address: .word __init_ 
