#include "Traveo.h"


extern void TimerInterruptHandler();
/*
  Init clock to max (240 MHz)   
*/
void initClock(){
  
  // enable ext. fast oscilator
  SYSC0_PROTKEYR = 0x5CACCE55;
  SYSC_MOSCCNTR = 0;
  
  // configure dividers and wait cycles
  TCFCFG_FCPROTKEY = TCFCFG_KEY; 
  TCFCFG_FCFGR |= (0b11 << TCFCFG_FCFGR_FAWC);
  SYSC1_PROTKEYR = KEY;
  SYSC1_RUNCKDIVR0 |= (1 << SYSC1_RUNCKDIVR0_ATBDIV);
  SYSC1_PROTKEYR = KEY;
  SYSC1_RUNCKDIVR1 |= (1 << SYSC1_RUNCKDIVR1_EXTBUSDIV);
  SYSC1_PROTKEYR = KEY;
  SYSC1_RUNCKDIVR1 |= (1 << SYSC1_RUNCKDIVR1_SYSC1DIV);
  SYSC1_PROTKEYR = KEY;
  SYSC1_RUNCKDIVR1 |= (1 << SYSC1_RUNCKDIVR1_HAPP0A0DIV);
  SYSC1_PROTKEYR = KEY;
  SYSC1_RUNCKDIVR1 |= (1 << SYSC1_RUNCKDIVR1_HAPP0A1DIV);
  SYSC1_PROTKEYR = KEY;
  SYSC1_RUNCKDIVR1 |= (1 << SYSC1_RUNCKDIVR1_HAPP1B0DIV);
  SYSC1_PROTKEYR = KEY;
  SYSC1_RUNCKDIVR1 |= (1 << SYSC1_RUNCKDIVR1_HAPP1B1DIV);
  SYSC1_PROTKEYR = KEY;
  SYSC1_RUNCKDIVR2 |= (1 << SYSC1_RUNCKDIVR2_LCPDIV);
  SYSC1_PROTKEYR = KEY;
  SYSC1_RUNCKDIVR2 |= (1 << SYSC1_RUNCKDIVR2_LCP0DIV);
  SYSC1_PROTKEYR = KEY;
  SYSC1_RUNCKDIVR2 |= (1 << SYSC1_RUNCKDIVR2_LCP1DIV);
  SYSC1_PROTKEYR = KEY;
  SYSC1_RUNCKDIVR2 |= (1 << SYSC1_RUNCKDIVR2_LAPP0DIV);
  SYSC1_PROTKEYR = KEY;
  SYSC1_RUNCKDIVR2 |= (1 << SYSC1_RUNCKDIVR2_LAPP1DIV);
  SYSC1_PROTKEYR = KEY;
  SYSC1_RUNCKDIVR3 |= (1 << SYSC1_RUNCKDIVR3_LCP0ADIV);
  SYSC1_PROTKEYR = KEY;
  SYSC1_RUNCKDIVR3 |= (1 << SYSC1_RUNCKDIVR3_LCP1ADIV);
  SYSC1_PROTKEYR = KEY;
  SYSC1_RUNCKDIVR3 |= (1 << SYSC1_RUNCKDIVR3_LAPP0ADIV);
  SYSC1_PROTKEYR = KEY;
  SYSC1_RUNCKDIVR3 |= (1 << SYSC1_RUNCKDIVR3_LAPP1ADIV);
  
  // PLL configuration
  SYSC0_PROTKEYR = KEY;
  SYSC0_RUNPLL0CNTR &= ~(0xFF << SYSC0_RUNPLL0CNTR_PLL0DIVN);
  SYSC0_PROTKEYR = KEY;
  SYSC0_RUNPLL0CNTR |= (0x78 << SYSC0_RUNPLL0CNTR_PLL0DIVN);
  
  SYSC0_PROTKEYR = KEY;
  SYSC0_RUNPLL0CNTR &= ~(1 << SYSC0_RUNPLL0CNTR_PLL0ISEL);
  
  int to_write = 0;
  to_write |= (0x3B << SYSC_PLL0CGCNTR_PLLCGLP);
  to_write |= (0x3 << SYSC_PLL0CGCNTR_PLLCGSTP);
  to_write |= (1 << SYSC_PLL0CGCNTR_PLLCGEN);
  to_write |= (1 << SYSC_PLL0CGCNTR_PLLCGSTS);
  SYSC0_PROTKEYR = KEY;
  SYSC_PLL0CGCNTR = to_write; 
  
  SYSC0_PROTKEYR = KEY;
  SYSC0_RUNCKSRER |= (1 << SYSC0_RUNCKSRER_PLL0EN);
  
  SYSC0_PROTKEYR = KEY;
  SYSC0_TRGRUNCNTR = 0xAB;
  
  while (!(SYSC0_STSCKSRER & (1 << SYSC0_STSCKSRER_PLL0RDY)));
  
  SYSC0_PROTKEYR = KEY;
  SYSC_PLL0CGCNTR |= (1 << SYSC_PLL0CGCNTR_PLLCGSTR);
  
  SYSC0_PROTKEYR = KEY;
  SYSC0_TRGRUNCNTR = 0xAB;
  while (((SYSC_PLL0CGCNTR >> SYSC_PLL0CGCNTR_PLLCGSTS) & 0x3) != 0x2);
  
  SYSC1_PROTKEYR = KEY;
  SYSC1_RUNCKSELR0 |= (0x4 << SYSC1_RUNCKSELR0_CD0CSL);
  SYSC0_PROTKEYR = KEY;
  SYSC0_TRGRUNCNTR = 0xAB;
}

/*
  Init timer, it needs tor each 0x1D4C0 value for, becouse clock is 1/2 of main clock (120 MHz)   
*/
void initTimer(){
  FRT00_CPCLRB = 0x0001D4C0;
  FRT00_TCCS |= (1 << FRT00_TCCS_ICRE);
  FRT00_TCCS |= (1 << FRT00_TCCS_BFE);
  FRT00_TCCS &= ~(1 << FRT00_TCCS_STOP);  
}


int GPIO_on = 0;


void targetEnableInterrupts(void)
{ 
  IRC0_UNLOCK = IRC0_KEY;
  IRC0_IRQVA176 = &TimerInterruptHandler;
  IRC0_UNLOCK = IRC0_KEY;
  IRC0_IRQCE5 |= (1 << IRC0_IRQCE5_IRQCE176);
  asm("CPSIE i");
  IRC0_CSR |= (1 << IRC0_CSR_IRQEN);
}


void targetInit(void)
{  
  #ifndef EMPTY_TARGET_INIT

  initClock();
  initTimer();
  targetEnableInterrupts();

  #endif /* EMPTY_TARGET_INIT */
}


void disableWatchdog()
{
}
