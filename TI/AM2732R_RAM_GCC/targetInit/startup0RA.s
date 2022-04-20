@ This strtup file should compile in ARM or THUMB with same functionality
  .GLOBAL _Enable_Irq
  .GLOBAL _Disable_Irq
  .GLOBAL _Enable_Fiq
  .GLOBAL _Disable_Fiq
  .GLOBAL Reset
  .GLOBAL __init_
  .GLOBAL _HW_Vec_Init

__init_:
#-------------------------------------------------------------------------------
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

.syntax unified
_Enable_Irq:
  MRS R1, CPSR
  BIC R1, R1, #0x80
  MSR CPSR, R1
  MOV PC, LR  

_Disable_Irq:
  MRS R1, CPSR
  ORR R1, R1, #0x80
  MSR CPSR, R1
  MOV PC, LR
  
_Enable_Fiq:
  MRS R1, CPSR
  BIC R1, R1, #0x40
  MSR CPSR, R1
  MOV PC, LR  

_Disable_Fiq:
  MRS R1, CPSR
  ORR R1, R1, #0x40
  MSR CPSR, R1
  MOV PC, LR
