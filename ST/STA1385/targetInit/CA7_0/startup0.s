#.section .text.trampoline
#reset_trampoline:
# 	ldr	r0, =__reset_@
#	bx	r0


.section .text.vect

  .GLOBAL __reset_
  .GLOBAL __init_
  .GLOBAL IntDefaultHandler
  
__reset_: 
      b __init_
      b IntDefaultHandler       
      b IntDefaultHandler       
      b IntDefaultHandler       
      b IntDefaultHandler       
      b IntDefaultHandler       
      b IntDefaultHandler       
      b IntDefaultHandler       
      b IntDefaultHandler
      b IntDefaultHandler
      b IntDefaultHandler
 
.section .text

__init_:
#-------------------------------------------------------------------------------

#if seconday core jump to it's memory location 
  mrc p15, 0, r1, c0, c0,0x5   ;#Core index in r1
  cpy r3,r1
  and r3,r3,#0x01
  cpy r1,r3
  cmp r3,#0x00
  beq __clearRegisters_
  b  0x00020000

# Clear all CPU registers

__clearRegisters_:
  mov   r1,   #0x00
  mov   r3,   r1
  mov   r4,   r1
  mov   r5,   r1
  mov   r6,   r1
  mov   r7,   r1
  mov   r8,   r1
  mov   r9,   r1
  mov   r10,  r1
  mov   r11,  r1
  mov   r12,  r1
  mov   r0,   #0xD1
  msr   cpsr, r0
  mov   r8,   r1
  mov   r9,   r1
  mov   r10,  r1
  mov   r11,  r1
  mov   r12,  r1
  mov   r0,   #0xD3
  msr   cpsr, r0
  nop
  nop

#-------------------------------------------------------------------------------
# Set stack pointer

__stackPointer_:
  mov   r0,   #0xD1
  msr   cpsr, r0        
  ldr   r0,   =fiq
  ldr   r0,   [r0]
  mov   sp,   r0
  
  mov   r0,   #0xD2
  msr   cpsr, r0
  ldr   r0,   =irq
  ldr   r0,   [r0]
  mov   sp,   r0        
  
  mov   r0,   #0xDF
  msr   cpsr, r0
  ldr   r0,   =user
  ldr   r0,   [r0]
  mov   sp,   r0        
  
  mov   r0,   #0xD3
  msr   cpsr, r0
  ldr   r0,   =svc
  ldr   r0,   [r0]
  mov   sp,   r0        
  
  mov   r0,   #0x00
      
@.LONG 0x164732F2 @ UNDFINED exception test
 
  bl Reset

__end_:
  b __end_                

.ALIGN 4
svc:    .word _estack_svc
fiq:    .word _estack_irq
irq:    .word _estack_fiq
user:   .word _estack_usr       

