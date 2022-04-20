.extern _estack
.extern IntDefaultHandler
.extern TimerInterruptHandler

.cpu cortex-r7 
.global	Vector

/*****************************************************************************
 *	Vector table
 *****************************************************************************/
	.align	5


#-------------------------------------------------------------------------------
# When we arrive here from IPL we are in ARM mode, our app is in thumb mode, so we need to
# firstly load init address to internal register, then add 1 and jump to that address.         
#-------------------------------------------------------------------------------

.section .text.isr_vectors

Vector:
        LDR     PC, =__goto_thumb_
        LDR     PC, =IntDefaultHandler
        LDR     PC, =IntDefaultHandler
        LDR     PC, =IntDefaultHandler
        LDR     PC, =IntDefaultHandler
        LDR     PC, =IntDefaultHandler
        LDR     PC, =TimerInterruptHandler
        LDR     PC, =IntDefaultHandler

.section .text.crt0
        
__goto_thumb_:
        LDR     R0, =__init_
        ADD     R0, #1 
        BX      R0  
    

.global _data
.thumb
__init_:
        BL      __clearRegisters_
        BL      __initStacks_
        BL      __RSTVectCpy_
        BL      Reset
__end_:
        B       __end_

#-------------------------------------------------------------------------------
# Clear all CPU registers  
#-------------------------------------------------------------------------------
__clearRegisters_:
        MOV     R0,   LR
        MOV     R1,   #0x00
        MOV     R2,   #0x00
        MOV     R3,   #0x00
        MOV     R4,   #0x00
        MOV     R5,   #0x00
        MOV     R6,   #0x00
        MOV     R7,   #0x00
        MOV     R8,   R1
        MOV     R9,   R1
        MOV     R10,  R1
        MOV     R11,  R1
        MOV     R12,  R1
        MOV     R1,   #0xD1
        MOV     R13,  R1
        MSR     CPSR, R1
        MOV     R1,   #0x00
        MOV     R8,   R1
        MOV     R9,   R1
        MOV     R10,  R1
        MOV     R11,  R1
        MOV     R12,  R1
        MOV     R1,   #0xD3
        MOV     R13,  R1    
        MSR     CPSR, R1 
        MOV     R1,   #0x00
        BL      .+4
        BL      .+4
        BL      .+4
        BL      .+4
        BX      R0 

#-------------------------------------------------------------------------------
# Suggested by Renesas, in order for interrupts to work on R7 core,
# reset vector should be copied to I-TCM  (Instruction TCM), GCC labels stack
# is also copied       
#-------------------------------------------------------------------------------
__RSTVectCpy_:
        MOV     R4, LR
        LDR     R0, =Vector
        LDR     R1, =0xEB000000
        LDR     R2, =0x104
        # Copy reset vector to I-TCM
copyRSTVect:
        SUB     R2, R2, #4
        LDR     R3, [R0, R2]
        STR     R3, [R1, R2]
        CMP     R2, #0
        BNE     copyRSTVect        
        # Enable 32 KB I-TCM
        LDR     R1, =0x00000019       
        MCR     p15, 0, R1, c9, c1, 1
        BX      R4
        
#-------------------------------------------------------------------------------
# Initialize stacks for all modes (max stack size is 0x80 in each mode)
#-------------------------------------------------------------------------------
__initStacks_:
        # Prologue
        MOV     R4, LR
        LDR     R1, =_estack
        LDR     R3, =0x80
        
        # Initialize FIQ mode stack
        LDR     R2, =0x11
        MSR     CPSR_c, R2
        MOV     SP, R1
        
        # Initialize IRQ mode stack
        LDR     R2, =0x12
        MSR     CPSR_c, R2
        SUB     R1, R1, R3
        MOV     SP, R1
        
        # Initialize supervisor mode stack
        LDR     R2, =0x13
        MSR     CPSR_c, R2
        SUB     R1, R1, R3
        MOV     SP, R1
        
        # Initialize abort mode stack
        LDR     R2, =0x17
        MSR     CPSR_c, R2
        SUB     R1, R1, R3
        MOV     SP, R1
        
        # Initialize undefined mode stack
        LDR     R2, =0x1B
        MSR     CPSR_c, R2
        SUB     R1, R1, R3
        MOV     SP, R1
        
        # Initialize system mode stack
        LDR     R2, =0x1F
        MSR     CPSR_c, R2
        SUB     R1, R1, R3
        MOV     SP, R1     
        
        # Epilogue
        LDR     R2, =0x13
        MSR     CPSR_c, R2 
        BX      LR