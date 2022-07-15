#include "AWR2944.h"

extern unsigned long _stext, _etext;
extern unsigned long _sdata, _edata;
extern unsigned long _sbss, _ebss;
extern unsigned long _estack;

extern void main();
extern void InterruptRoutine();

ARM_IRQ_FUNC void TimerInterruptHandler() {
  // Call our interrupt function
  InterruptRoutine();
  // Clear the timer interrupt
  MSS_RTIA_RTIINTFLAG = (1 << MSS_RTIA_RTIINTFLAG_INT0);
  // Clear the VIM interrupt
  MSS_VIM_R5A_STS = (1 << MSS_VIM_R5A_STS_MSS_RTIA_INT0);
  // Clear active interrupt by writing anything into IRQVEC
  MSS_VIM_R5A_IRQVEC = 0;
}

ARM_IRQ_FUNC void undefined_instruction_ISR()  { while(1); }
ARM_IRQ_FUNC void software_ISR()               { while(1); }
ARM_IRQ_FUNC void abort_prefetch_ISR()         { while(1); }
ARM_IRQ_FUNC void abort_data_ISR()             { while(1); }
ARM_IRQ_FUNC void reserved_ISR()               { while(1); }
ARM_IRQ_FUNC void irq_ISR()                    { while(1); }
ARM_IRQ_FUNC void fiq_ISR()                    { while(1); }

__attribute__((naked))
void reset() {
  __asm volatile("cpsid fi");
  
  unsigned long* d = &_sbss;
  while(d < &_ebss)
     *d++ = 0;
  
  main();
  while(1);
}
