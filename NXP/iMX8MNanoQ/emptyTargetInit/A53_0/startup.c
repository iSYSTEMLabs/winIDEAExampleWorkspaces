extern unsigned long long _estack, _sidata, _sdata, _edata, _sbss, _ebss;
extern int main(void);
extern void TimerInterruptHandler();

void resetHandler()
{
  unsigned long long *pulSrc = &_sidata;
  unsigned long long *pulDest = &_sdata;
 
  while( pulDest < &_edata )
  {
    *pulDest++ = *pulSrc++;
  }
  
  pulDest = &_sbss;
  while ( pulDest < &_ebss )
  {
    *pulDest++ = 0;
  }

  main();
  asm(" BRK #0");
}



void IntDefaultHandler()
{
  while(1)
  {
  }
}

__attribute__ ((section(".isr_vector")))
void reset()
{
  asm(" B _rst");
  asm(" B IntDefaultHandler");
  asm(" B IntDefaultHandler");
  asm(" B IntDefaultHandler");
  asm(" B IntDefaultHandler");
  asm(" B IntDefaultHandler");
  asm(" B IntDefaultHandler");
  asm(" B IntDefaultHandler");
  asm("_rst:");
  asm(" LDR X0, =_estack");
   asm(" MOV SP, X0");
  asm(" B resetHandler");
  
  
  //interrupt vector table
  asm(".balign 128");
  asm(".global _vector_table");
  asm("_vector_table:");

  asm(".balign 128");
  asm("_synch_current_sp_0:");
  asm("b .");
  
  asm(".balign 128");
  asm("_fiq_current_sp_0:");
  asm("b .");
  
  asm(".balign 128");
  asm("_irg_current_sp_0:");
  asm("b .");
  
  asm(".balign 128");
  asm("_serr_current_sp_0:");
  asm("b .");
  
  asm(".balign 128");
  asm("_synch_current_sp_x:");
  asm("b .");
  
  asm(".balign 128");
  asm("_fiq_current_sp_x:");
  asm("b _first_FIQHandler");
  
  asm(".balign 128");
  asm("_irg_current_sp_x:");
  asm("b .");
  
  asm(".balign 128");
  asm("_serr_current_sp_x:");
  asm("b .");
  
  asm(".balign 128");
  asm("_synch_lower_aarch64:");
  asm("b .");
  
  asm(".balign 128");
  asm("_fiq_lower_aarch64:");
  asm("b .");
  
  asm(".balign 128");
  asm("_irg_lower_aarch64:");
  asm("b .");
  
  asm(".balign 128");
  asm("_serr_lower_aarch64:");
  asm("b .");
  
  asm(".balign 128");
  asm("_synch_lower_aarch32:");
  asm("b .");
  
  asm(".balign 128");
  asm("_fiq_lower_aarch32:");
  asm("b .");
  
  asm(".balign 128");
  asm("_irg_lower_aarch32:");
  asm("b .");
  
  asm(".balign 128");
  asm("_serr_lower_aarch32:");
  asm("b .");

  asm("_first_FIQHandler:");
  //asm(" MSR DAIFSet, 0x3");
  
  asm("STP x29, x30, [sp, #-16]!");
  asm("STP x6, x7, [sp, #-16]!");
  asm("STP x4, x5, [sp, #-16]!");
  asm("STP x2, x3, [sp, #-16]!");
  asm("STP x0, x1, [sp, #-16]!");
  
  asm("bl TimerInterruptHandler");
  
  asm("LDP x0, x1, [sp], #16");
  asm("LDP x2, x3, [sp], #16");
  asm("LDP x4, x5, [sp], #16");
  asm("LDP x6, x7, [sp], #16");
  asm("LDP x29, x30, [sp], #16");
  
  //asm(" MSR DAIFClr, 0x3");
  asm("ERET");  
}
