.cpu cortex-r4

.section .ResetFix
reset:
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

.section .text.crt0
.global _data
__init_:
      bl __clearRegisters_
      bl __stackPointer_

      bl Reset
__end_:
      b __end_
#-------------------------------------------------------------------------------
# Clear all CPU registers

__clearRegisters_:

        mov   r0,   lr
        mov   r1,   #0x00
        mov   r2,   #0x00
        mov   r3,   #0x00
        mov   r4,   #0x00
        mov   r5,   #0x00
        mov   r6,   #0x00
        mov   r7,   #0x00
        mov   r8,   #0x00
        mov   r9,   #0x00
        mov   r10,  #0x00
        mov   r11,  #0x00
        mov   r12,  #0x00
        mov   r13,  #0xD1
        msr   cpsr, r13
        mov   r8,   #0x00
        mov   r9,   #0x00
        mov   r10,  #0x00
        mov   r11,  #0x00
        mov   r12,  #0x00
        mov   r13,  #0xD3
        msr   cpsr, r13
        bl    .+4
        bl    .+4
        bl    .+4
        bl    .+4
        bx     r0

#-------------------------------------------------------------------------------
# Set stack pointer

__stackPointer_:
     
      LDR     R0, =_estack_sys
      LDR     R1, =0xDF
      MSR     CPSR_cxsf, R1
      MOV     R14, #0x0000
      MOV     SP, R0
      
      LDR     R13, =_estack_sys
      bl Reset              

