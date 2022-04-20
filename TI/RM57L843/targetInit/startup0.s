.extern _estack_sys
.extern _estack_usr
.extern _estack_svc
.extern _estack_abt
.extern _estack_und
.extern _estack_irq
.extern _estack_fiq

.extern IntDefaultHandler
.extern TimerInterruptHandler
.extern Reset

.cpu cortex-r5

.global  Vector
.syntax unified

/*****************************************************************************
 *  Vector table
 *****************************************************************************/
.align  5

#-------------------------------------------------------------------------------
# From reset core is in ARM mode, our app is in thumb mode, so we need to
# firstly load init address to internal register, then add 1 and jump to that address.         
#-------------------------------------------------------------------------------

.section .text.isr_vectors

Vector:         
  B     _goto_thumb_ 
  B     IntDefaultHandler       
  B     IntDefaultHandler       
  B     IntDefaultHandler       
  B     IntDefaultHandler       
  B     IntDefaultHandler       
        ldr pc,[pc,#-0x1B0]   
  B     IntDefaultHandler

.previous


_goto_thumb_:
  LDR   R0, =ResetHandler
  ADD   R0, #1 
  BX    R0 

.thumb 

ResetHandler:
  # Core registers initialization for lock-step device
  MOV   R0, #0x0000
  MOV   R1, #0x00
  MOV   R2, #0x00
  MOV   R3, #0x00
  MOV   R4, #0x00
  MOV   R5, #0x00
  MOV   R6, #0x00
  MOV   R7, #0x00
  MOV   R8, R1
  MOV   R9, R1
  MOV   R10, R1
  MOV   R11, R1
  MOV   R12, R1
  
  BL    _initStacks
  BL    _memInit_
  BL    Reset

_initStacks:
  MOV   R2, LR
  
  LDR   R0, =_estack_fiq
  LDR   R1, =0xD1
  MSR   CPSR_cxsf, R1
  MOV   SP, R0
  
  LDR   R0, =_estack_irq
  LDR   R1, =0xD2
  MSR   CPSR_cxsf, R1
  MOV   SP, R0
  
  LDR   R0, =_estack_abt
  LDR   R1, =0xD7
  MSR   CPSR_cxsf, R1
  MOV   SP, R0
  
  LDR   R0, =_estack_und
  LDR   R1, =0xDB
  MSR   CPSR_cxsf, R1
  MOV   SP, R0
  
  LDR   R0, =_estack_svc
  LDR   R1, =0xD3
  MSR   CPSR_cxsf, R1
  MOV   SP, R0
  
  LDR   R0, =_estack_sys
  LDR   R1, =0xDF
  MSR   CPSR_cxsf, R1
  MOV   SP, R0
  
  MOV   LR, R2
  BX    LR


#-------------------------------------------------------------------------------
#Initialize RAM memory
     
_memInit_:
  ldr   r2, MINITGCR    /*Load MINITGCR register address*/
  mov   r4, #0xA      
  str   r4, [r2]        /*nable global memory hardware initialization*/
  
  ldr   r1, MSIENA    /*Load MSIENA register address*/
  mov   r4, #0x1        /*Bit position 0 of MSIENA corresponds to SRAM*/
  str   r4, [r1]        /*Enable auto hardware initalisation for SRAM*/
mloop:                    /*Loop till memory hardware initialization comletes*/
  ldr   r5, MSTCGSTAT
  ldr   r4, [r5]
  tst   r4, #0x100
  beq   mloop
  
  mov   r4, #5
  str   r4, [r2]          /*Disable global memory hardware initialization*/
  bx lr
  
.ALIGN 4
MINITGCR:    .word 0xFFFFFF5C
MSIENA:      .word 0xFFFFFF60
MSTCGSTAT:   .word 0xFFFFFF68

__end_:
  BKPT
  B       __end_       
