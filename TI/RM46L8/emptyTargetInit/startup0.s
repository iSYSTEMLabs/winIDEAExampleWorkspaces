  .section .vectors, "ax"
  .code 32
  .align 0
  .global _vectors
  .global reset_handler
  
/*****************************************************************************
 *                                                                           *
 * Exception Vectors                                                         *
 *                                                                           *
 *****************************************************************************/
_vectors:
  b reset_handler     /*  RESET interrupt                  */
  b undef_handler     /*  UNDEFINED INSTRUCTION interrupt  */
  b swi_handler       /*  SOFTWARE interrupt               */
  b pabort_handler    /*  ABORT (PREFETCH) interrupt       */
  b dabort_handler    /*  ABORT (DATA) interrupt           */
  nop                 /*  Reserved                         */
  ldr pc,[pc,#-0x1B0] /*  IRQ interrupt                    */
  ldr pc,[pc,#-0x1B0] /*  FIQ interrupt                    */
                     
  .section .init, "ax"
  .code 32
  .align 0

/******************************************************************************
 *                                                                            *
 * Default exception handlers                                                 *
 *                                                                            *
 ******************************************************************************/
reset_handler:

#ifndef __NO_FPU
  /*  enable cp11 and cp10    */
  mrc p15, #0x00, r0, c1, c0, #0x02
  orr r0, r0, #0x00F00000
  mcr p15, #0x00, r0, c1, c0, #0x02
  /*  enable VFP       */
  mov r0, #0x40000000
  fmxr fpexc, r0
#ifndef __NO_RUNFAST_MODE
  nop
  nop
  nop  
  vmrs r0, fpscr
  orrs r0, r0, #(0x3 << 24) /*  FZ and DN   */
  vmsr fpscr, r0
#endif
#endif

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
  MSR     SPSR_cxsf, R1
      
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
  
  LDR     R13, =_estack_sys
 
  vmov d0, r0, r0
  vmov d1, r0, r0
  vmov d2, r0, r0
  vmov d3, r0, r0
  vmov d4, r0, r0
  vmov d5, r0, r0
  vmov d6, r0, r0
  vmov d7, r0, r0
  vmov d8, r0, r0
  vmov d9, r0, r0
  vmov d10, r0, r0
  vmov d11, r0, r0
  vmov d12, r0, r0
  vmov d13, r0, r0
  vmov d14, r0, r0
  vmov d15, r0, r0

#ifndef __NO_SYSTEM_INIT
  ldr sp, =__SRAM_segment_start__
  add sp, sp, #0x10000
  bl systemInit
#endif

  /****************************************************************************
   * Jump to the default C runtime startup code.                              *
   ****************************************************************************/
  b Reset

#ifndef __NO_SYSTEM_INIT  
  .weak systemInit
systemInit:
  bx lr
#endif

/******************************************************************************
 *                                                                            *
 * Default exception handlers                                                 *
 * These are declared weak symbols so they can be redefined in user code.     * 
 *                                                                            *
 ******************************************************************************/

undef_handler:
  b .  /* Endless loop */

swi_handler:
  b .  /* Endless loop */

pabort_handler:
  b .  /* Endless loop */

dabort_handler:
  b .  /* Endless loop */

  .weak undef_handler, swi_handler, pabort_handler, dabort_handler

.GLOBAL _Enable_Irq
.GLOBAL _Disable_Irq

_Enable_Irq:
  stmfd r13!,{r11,r14}
  MRS R1, CPSR
  BIC R1, R1, #0x80
  MSR CPSR, R1
  ldmfd r13!,{r11,r14}
  MOV PC, LR 
  
_Disable_Irq:
  stmfd r13!,{r11,r14}
  MRS R1, CPSR
  ORR R1, R1, #0x80
  MSR CPSR, R1
  ldmfd r13!,{r11,pc}  
  MOV PC, LR  
  
