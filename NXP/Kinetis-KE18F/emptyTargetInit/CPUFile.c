#include "Kinetis-KE18F.h"


void targetEnableInterrupts(void)
{
  INT_32_63_SET_EN |= (0x1 << INT_32_63_SET_EN_LPIT0);
  asm("CPSIE i");
  LPIT0_MIER |= (0x1 << LPIT0_MIER_TIE0);
  LPIT0_TCTRL0 |= (0x1 << LPIT0_TCTRL0_TEN);
}


/*
  Init clock to 120 MHz using 8 MHz ext. oscillator and PLL
  120 Mhz is max clock that can be achieved in RUN mode, in HSRUN mode we can achieve 168 MHz but we cannot write to Flash memory.
*/
void initClock()
{
  int value;
  
  /* Initialize System oscillator to ext. osc. */
  SCG_SOSCCFG |= (0x3 << SCG_SOSCCFG_RANGE);
  SCG_SOSCCFG |= (0x1 << SCG_SOSCCFG_HGO);       
  SCG_SOSCCFG |= (0x1 << SCG_SOSCCFG_EREFS);
  SCG_SOSCCSR |= (0x1 << SCG_SOSCCSR_SOSCEN);
  while (!(SCG_SOSCCSR & (0x1 << SCG_SOSCCSR_SOSCVLD)));
  
  /* Initialize System PLL */
  SCG_SPLLCFG &= ~(0x1 << SCG_SPLLCFG_SOURCE);
  SCG_SPLLCFG &= ~(0x7 << SCG_SPLLCFG_PREDIV);
  SCG_SPLLCFG |= (0xE << SCG_SPLLCFG_MULT);
  SCG_SPLLCSR |= (0x1 << SCG_SPLLCSR_SPLLEN);
  while (!(SCG_SPLLCSR & (0x1 << SCG_SPLLCSR_SPLLVLD)));
  
  /* Switch to System PLL output clock as system clock */
  value = 0x0;
  value |= (0x6 << SCG_RCCR_SCS);
  value |= (0x1 << SCG_RCCR_DIVBUS);
  value |= (0x4 << SCG_RCCR_DIVSLOW);
  SCG_RCCR = value;
  while (SCG_CSR != value);
} 


/*
  Init LPIT timer, it is running on 168 MHz System PLL clock   
*/
void initTimer()
{
  PCC_LPIT0 &= ~(0x7 << PCC_LPIT0_PCS); 
  PCC_LPIT0 |= (0x6 << PCC_LPIT0_PCS);
  PCC_LPIT0 |= (0x1 << PCC_LPIT0_CGC);
  SCG_SPLLDIV |= (0x1 << SCG_SPLLDIV_SPLLDIV2);
  LPIT0_MCR |= (0x1 << LPIT0_MCR_MCEN);
  LPIT0_TVAL0 = 0x1D4C0;               
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
  WDOG_CNT = 0xD928C520;
  WDOG_CS &= ~(1 << WDOG_CS_EN);
}
