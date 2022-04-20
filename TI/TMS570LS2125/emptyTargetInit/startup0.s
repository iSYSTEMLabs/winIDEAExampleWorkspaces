.extern IntDefaultHandler
.extern TimerInterruptHandler
.global reset_strt
.section .isr_vect

reset_strt: 
      b ResetHandler
undefEntry:
        b   undefEntry
svcEntry:
        b   svcEntry
prefetchEntry:
        b   prefetchEntry
dabortEntry:        
        b   dabortEntry
        b   phantomInterrupt
        ldr pc,[pc,#-0x1b0]
        ldr pc,[pc,#-0x1b0]

.global  ResetHandler

ResetHandler:   
     
      # Core registers initialization for lock-step device
      MOV     r0,  #0x0000
      MOV     r1,  #0x0000
      MOV     r2,  #0x0000
      MOV     r3,  #0x0000
      MOV     r4,  #0x0000
      MOV     r5,  #0x0000
      MOV     r6,  #0x0000
      MOV     r7,  #0x0000
      MOV     r8,  #0x0000
      MOV     r9,  #0x0000
      MOV     r10, #0x0000
      MOV     r11, #0x0000
      MOV     r12, #0x0000
      
      # Initialization of return stack
      BL      .+4
      BL      .+4
      BL      .+4
      BL      .+4

      LDR     R0, =_estack_und
      LDR     R1, =0x2DB
      MSR     CPSR_cxsf, R1
      MOV     SP, R0
      MOV     R14, #0x0000
      MSR     SPSR_cxsf, R1
      
      LDR     R0, =_estack_abt
      LDR     R1, =0x2D7
      MSR     CPSR_cxsf, R1
      MOV     SP, R0
      MOV     R14, #0x0000
      MSR     SPSR_cxsf, R1
      
      LDR     R0, =_estack_fiq
      LDR     R1, =0x2D1
      MSR     CPSR_cxsf, R1
      MOV     SP, R0
      MOV     R8,  #0x0000
      MOV     R9,  #0x0000
      MOV     R10, #0x0000
      MOV     R11, #0x0000
      MOV     R12, #0x0000
      MOV     R14, #0x0000
      MSR     SPSR_cxsf, R1
      
      
      LDR     R0, =_estack_irq
      LDR     R1, =0x2D2
      MSR     CPSR_cxsf, R1
      MOV     SP, R0
      MOV     R14, #0x0000
      MSR     SPSR_cxsf, R1
      
      LDR     R0, =_estack_svc
      LDR     R1, =0x2D3
      MSR     CPSR_cxsf, R1
      MOV     SP, R0
      MOV     R14, #0x0000
      MSR     SPSR_cxsf, R1
      
      LDR     R0, =_estack_sys
      LDR     R1, =0x2DF
      MSR     CPSR_cxsf, R1
      MOV     R14, #0x0000
      MOV     SP, R0
     
      b Reset
      
__end_:
      bkpt
      b       __end_                
