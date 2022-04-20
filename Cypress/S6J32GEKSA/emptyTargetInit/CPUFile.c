#include "S6J32GEKSA.h"


extern void TimerInterruptHandler();
extern int _estack_irq;
/*
  Init clock to max (240 MHz)   
*/

void initClock(){
  
  // enable ext. fast oscilator
  SYSC0_PROTKEYR = 0x5CACCE55;
  SYSC_MOSCCNTR = 0;
  
  // configure dividers and wait cycles
  TCFCFG_FCPROTKEY = TCFCFG_KEY; 
  
  // Insert 3 wait cycles when flash memory is accessed
  TCFCFG_FCFGR |= (0b11 << TCFCFG_FCFGR_FAWC);
  
  SYSC1_PROTKEYR = KEY;
  // ATB clock = SYS clock / 2
  SYSC1_RUNCKDIVR0 |= (1 << SYSC1_RUNCKDIVR0_ATBDIV);
  
  SYSC1_PROTKEYR = KEY;
  // EXTBUS = HPM / 2
  SYSC1_RUNCKDIVR1 |= (1 << SYSC1_RUNCKDIVR1_EXTBUSDIV);
  
  SYSC1_PROTKEYR = KEY;
  // SYSC1 = HPM / 2
  SYSC1_RUNCKDIVR1 |= (1 << SYSC1_RUNCKDIVR1_SYSC1DIV);
  
  SYSC1_PROTKEYR = KEY;
  // HAPP0A0 = HPM / 2
  SYSC1_RUNCKDIVR1 |= (1 << SYSC1_RUNCKDIVR1_HAPP0A0DIV);
  
  SYSC1_PROTKEYR = KEY;
  // HAPP0A1 = HPM / 2
  SYSC1_RUNCKDIVR1 |= (1 << SYSC1_RUNCKDIVR1_HAPP0A1DIV);
  
  SYSC1_PROTKEYR = KEY;
  // HAPP1B0 = HPM / 2
  SYSC1_RUNCKDIVR1 |= (1 << SYSC1_RUNCKDIVR1_HAPP1B0DIV);
  
  SYSC1_PROTKEYR = KEY;
  // HAPP1B1 = HAPP1B0 / 2
  SYSC1_RUNCKDIVR1 |= (1 << SYSC1_RUNCKDIVR1_HAPP1B1DIV);
  
  SYSC1_PROTKEYR = KEY;
  // LCP clock = CPU / 2
  SYSC1_RUNCKDIVR2 |= (1 << SYSC1_RUNCKDIVR2_LCPDIV);
  
  SYSC1_PROTKEYR = KEY;
  // LCP0 = CPU / 2
  SYSC1_RUNCKDIVR2 |= (1 << SYSC1_RUNCKDIVR2_LCP0DIV);
  
  SYSC1_PROTKEYR = KEY;
  // LCP1 = CPU / 2
  SYSC1_RUNCKDIVR2 |= (1 << SYSC1_RUNCKDIVR2_LCP1DIV);
  
  SYSC1_PROTKEYR = KEY;
  // LAPP0 = CPU / 2
  SYSC1_RUNCKDIVR2 |= (1 << SYSC1_RUNCKDIVR2_LAPP0DIV);
  
  SYSC1_PROTKEYR = KEY;
  // LAPP1 = CPU / 2
  SYSC1_RUNCKDIVR2 |= (1 << SYSC1_RUNCKDIVR2_LAPP1DIV);
  
  SYSC1_PROTKEYR = KEY;
  // LCP0A = CPU / 2
  SYSC1_RUNCKDIVR3 |= (1 << SYSC1_RUNCKDIVR3_LCP0ADIV);
  
  SYSC1_PROTKEYR = KEY;
  // LCP1A = CPU / 2
  SYSC1_RUNCKDIVR3 |= (1 << SYSC1_RUNCKDIVR3_LCP1ADIV);
  
  SYSC1_PROTKEYR = KEY;
  // LPP0A = CPU / 2
  SYSC1_RUNCKDIVR3 |= (1 << SYSC1_RUNCKDIVR3_LAPP0ADIV);
  
  SYSC1_PROTKEYR = KEY;
  // LPP1A = CPU / 2
  SYSC1_RUNCKDIVR3 |= (1 << SYSC1_RUNCKDIVR3_LAPP1ADIV);

  // PLL configuration
  SYSC0_PROTKEYR = KEY;
  SYSC0_RUNPLL0CNTR &= ~(0xFF << SYSC0_RUNPLL0CNTR_PLL0DIVN);
  SYSC0_PROTKEYR = KEY;
  // Multiplication factor = 0x78
  SYSC0_RUNPLL0CNTR |= (0x78 << SYSC0_RUNPLL0CNTR_PLL0DIVN);
  
  SYSC0_PROTKEYR = KEY;
  // Select main clock as input
  SYSC0_RUNPLL0CNTR &= ~(1 << SYSC0_RUNPLL0CNTR_PLL0ISEL);
  
  int to_write = 0;
  to_write |= (0x3B << SYSC_PLL0CGCNTR_PLLCGLP);  // Number of loops per step : 60
  to_write |= (0x3 << SYSC_PLL0CGCNTR_PLLCGSTP);  // Number of step width at gear up/down operation : 3
  to_write |= (1 << SYSC_PLL0CGCNTR_PLLCGEN);     // PLL clock gear enable
  to_write |= (1 << SYSC_PLL0CGCNTR_PLLCGSTS);    // Clock gear status : Gear up operation
  SYSC0_PROTKEYR = KEY;
  SYSC_PLL0CGCNTR = to_write; 
  
  SYSC0_PROTKEYR = KEY;
  // Enable oscillation of the PLL0 clock. 
  SYSC0_RUNCKSRER |= (1 << SYSC0_RUNCKSRER_PLL0EN);
  
  SYSC0_PROTKEYR = KEY;
  // Start updating the RUN profile
  SYSC0_TRGRUNCNTR = 0xAB;
  
  // Wait for stable state
  while (!(SYSC0_STSCKSRER & (1 << SYSC0_STSCKSRER_PLL0RDY)));
  
  SYSC0_PROTKEYR = KEY;
  // Start clock gear operation 
  SYSC_PLL0CGCNTR |= (1 << SYSC_PLL0CGCNTR_PLLCGSTR);
  
  SYSC0_PROTKEYR = KEY;
  
  // Start updating the RUN profile
  SYSC0_TRGRUNCNTR = 0xAB;
  
  // wait till clock gear operation reaches maximum frequency 
  while (((SYSC_PLL0CGCNTR >> SYSC_PLL0CGCNTR_PLLCGSTS) & 0x3) != 0x2);
  
  SYSC1_PROTKEYR = KEY;
  
  // Source clock for domain 0 : PLL0 clock
  SYSC1_RUNCKSELR0 |= (0x4 << SYSC1_RUNCKSELR0_CD0CSL);
  SYSC0_PROTKEYR = KEY;
  // Start updating the RUN profile
  SYSC0_TRGRUNCNTR = 0xAB;
}

/*
  Init timer, it needs tor each 0x1D4C0 value for, becouse clock is 1/2 of main clock (120 MHz)   
*/
void initTimer(){
   FRT00_CPCLRB = 0x1D4C0;
  // Enable interrupt requests
  FRT00_TCCS |= (1 << FRT00_TCCS_ICRE);
  
  // Enable the compare clear buffer register (CPCLRB)
  FRT00_TCCS |= (1 << FRT00_TCCS_BFE);
}


void initInterrupts(void)
{
  IRC0_UNLOCK = IRC0_KEY;
  // Setting of the interrupt address
  IRC0_IRQVA176 = &TimerInterruptHandler;
  
  IRC0_UNLOCK = IRC0_KEY;
  // Enable IRQ 176
  IRC0_IRQCE5 |= (1 << IRC0_IRQCE5_IRQCE176);
  
  IRC0_UNLOCK = IRC0_KEY;
  // Set interrupt priority
  IRC0_IRQPL44 &= ~(0x1F);
  
  IRC0_UNLOCK = IRC0_KEY;
  // IRQ processing block enable
  IRC0_CSR |= (1 << IRC0_CSR_IRQEN);
  
  __asm("MRC p15, 0, r1, c1, c0, 0");
  __asm("BIC r1, r1, #1 << 13");    // Enable low interrupt vector (0x00000000)
  __asm("ORR r1, r1, #1 << 24");    // Enable VIC to send handler address to CPU
  __asm("ORR r1, r1, #1 << 30");    // Enable thumb exception generation
  __asm("MCR p15, 0, r1, c1, c0, 0");
}

void targetEnableInterrupts(void);


void targetInit(void)
{ 
  #ifndef EMPTY_TARGET_INIT

  initClock();
  initInterrupts();
  initTimer();
  targetEnableInterrupts();

  #endif /* EMPTY_TARGET_INIT */
}


void targetEnableInterrupts(void)
{ 
  __asm("CPSIE i");
    
  // Start the timer 
  FRT00_TCCS &= ~(1 << FRT00_TCCS_STOP); 
}


void disableWatchdog()
{
  HWDG_PROT = HWDG_KEY;
  // Registers values are locked
  HWDG_CFG |= 1 << 24;
}
