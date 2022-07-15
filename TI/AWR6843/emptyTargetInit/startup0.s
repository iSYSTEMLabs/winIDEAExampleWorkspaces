.section .isr_vector

.syntax unified

.global reset
.global ResetHandler


reset: 
      b ResetHandler
      b UndefinedInstructionHandler
      b SupervisorCallHandler
      b PrefetchAbortHandler
      b DataAbortHandler
      b HypervisorTrapHandler
      b TimerInterruptHandler
      b FIQHandler
      b IntDefaultHandler

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
      LDR     R1, =0xDB
      MSR     CPSR_cxsf, R1
      MOV     SP, R0
      MOV     R14, #0x0000
      MSR     SPSR_cxsf, R1@SOFTRST2
      
      LDR     R0, =_estack_abt
      LDR     R1, =0xD7
      MSR     CPSR_cxsf, R1
      MOV     SP, R0
      MOV     R14, #0x0000
      MSR     SPSR_cxsf, R1
      
      LDR     R0, =_estack_fiq
      LDR     R1, =0xD1
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
      LDR     R1, =0xD2
      MSR     CPSR_cxsf, R1
      MOV     SP, R0
      MOV     R14, #0x0000
      MSR     SPSR_cxsf, R1
      
      LDR     R0, =_estack_svc
      LDR     R1, =0xD3
      MSR     CPSR_cxsf, R1
      MOV     SP, R0
      MOV     R14, #0x0000
      MSR     SPSR_cxsf, R1
      
      LDR     R0, =_estack_sys
      LDR     R1, =0xDF
      MSR     CPSR_cxsf, R1
      MOV     R14, #0x0000
      MOV     SP, R0
      
  #    # Enable VIC in SCTLR
  #    MRC p15, 0, R1, c1, c0, 0
  #    ORR R1, R1, (1 << 24)
  #    MCR p15, 0, R1, c1, c0, 0
      
      LDR     R13, =_estack_sys
      bl resetHandler
      
__end_:
      B __end_
      