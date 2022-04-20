extern unsigned long long _estack;
extern int main(void);

void resetHandler()
{
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
  asm("b .");
  
  asm("ERET");
}
