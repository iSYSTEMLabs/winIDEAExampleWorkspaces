#include "LPC55S6x.h"


void enableSecondaryCores()
{
  SYSCON_CPUCFG |= 1 << CPU1ENABLE;  /* Enable bit for enabling second core */
  SYSCON_CPBOOT = 0x00050000;        /* secondary core boot address */
  SYSCON_CPUCTRL = 0xC0C40028;
  SYSCON_CPUCTRL = 0xC0C40008;
}

void initClock()
{
  PMC_PDRUNCFGCLR0 |= 1 << 5;                                             
  
  SYSCON_PRESETCTRLCLR2 |= 1 << SYSCON_PRESETCTRLCLR2_ANALOG_CTRL_RST;    /* Analog control reset control. */
  SYSCON_AHBCLKCTRLSET2 = SYSCON_AHBCLKCTRLSET2_ANALOG_CTRL_MASK;         /* Enables the clock for the analog control. */
  ANACTRL_FRO192M_CTRL |= 1 << ANACTRL_FRO192M_CTRL_ENA_12MHZCLK;         /* 12 MHz clock is enabled. */
  
  SYSCON_MAINCLKSELA =  0;                                                /* Switch to main clk (FRO 12MHz) first to ensure we can change the clock setting */
  SYSCON_MAINCLKSELB =  0;                                                /* Switch to main clk (FRO 12MHz) first to ensure we can change the clock setting */
  
  ANACTRL_FRO192M_CTRL |= 1 << ANACTRL_FRO192M_CTRL_ENA_96MHZCLK;         /* 96 MHz clock is enabled. */

  PMC_PDRUNCFGCLR0 |= 1 << PMC_PDRUNCFGCLR0_PDEN_XTAL32M;                 /* Crystal 32 MHz is powered. */
  PMC_PDRUNCFGCLR0 |= 1 << PMC_PDRUNCFGCLR0_PDEN_LDOXO32M;                /* Crystal 32 MHz LDO is powered. */
  SYSCON_CLOCK_CTRL |= 1 << SYSCON_CLOCK_CTRL_CLKIN_ENA;                  /* Enable CLCKIN from XTAL32M clock for clock module. */
  
  ANACTRL_XO32M_CTRL |= 1 << ANACTRL_XO32M_CTRL_ENABLE_SYSTEM_CLK_OUT;    /* Enable XO 32 MHz output to CPU system, SCT, and CLKOUT  */
  
  SYSCON_PLL0CLKSEL = 1;                                                  /* PLL0 Selection (clk_in) */
  
  PMC_PDRUNCFGSET0 |= 1 << PMC_PDRUNCFGCLR0_PDEN_PLL0;                    /* PLL0 is powered-down. */
  PMC_PDRUNCFGSET0 |= 1 << PMC_PDRUNCFGCLR0_PDEN_PLL0_SSCG;               /* PLL0 spread spectrum module is powered-down. */
  
  SYSCON_PLL0CTRL = (1 << SYSCON_PLL0CTRL_CLKEN) | ((53 << SYSCON_PLL0CTRL_SELI) & 0x3F0) | ((26 << SYSCON_PLL0CTRL_SELP) & 0x7C00);  /* Enable the output clock and select bandwidth */
  SYSCON_PLL0NDEC = ((4 << SYSCON_PLL0NDEC_NDIV) & 0xFF) | (1 << SYSCON_PLL0NDEC_NREQ);                                               /* Same as above but with request set to 1 */
  SYSCON_PLL0PDEC = ((2 << SYSCON_PLL0PDEC_PDIV) & 0xFF) | (1 << SYSCON_PLL0PDEC_PREQ);                                               /* Same as above but with request set to 1 */
  SYSCON_PLL0SSCG0 = 0;                                                                                                               /* PLL0 spred spectrum wrapper control register set to 0 */
  SYSCON_PLL0SSCG1 = ((100 << SYSCON_PLL0SSCG1_MDIV_EXT) & 0x3FFFC00) | (1 << SYSCON_PLL0SSCG1_SEL_EXT) | (1 << SYSCON_PLL0SSCG1_MREQ) | 1 << (SYSCON_PLL0SSCG1_MD_REQ);
  
  PMC_PDRUNCFGCLR0 |= 1 << PMC_PDRUNCFGCLR0_PDEN_PLL0;                    /* PLL0 is powered.  */
  PMC_PDRUNCFGCLR0 |= 1 << PMC_PDRUNCFGCLR0_PDEN_PLL0_SSCG;               /* PLL0 spread spectrum module is powered. */
    
  while ((SYSCON_PLL0STAT & 0x1) != 1);                                   /* Waiting PLL0STAT for proccessor to stabilize */
  
  SYSCON_MAINCLKSELA = 0;
  SYSCON_MAINCLKSELB = 1;                                                 /* MAIN_CLK to PLL0 */
}


void initTimer()
{
  SYSCON_CTIMERCLKSEL0 = 0;
  SYSCON_AHBCLKCTRLSET1 |= 1 << SYSCON_AHBCLKCTRLSET1_TIMER0; /* Enables the clock for the Timer 0. */
  
  CTIMER0_MR0 = 100000;
  CTIMER0_MCR |= 1 << CTIMER0_MCR_MR0R; /* Reset the timer when we hit the 100000. */
  CTIMER0_MCR |= 1 << CTIMER0_MCR_MR0I; /* Interrupt on MR0: an interrupt is generated when MR0 matches the value in the TC */
  CTIMER0_TCR |= 1 << CTIMER0_TCR_CEN;  /* Enables the counter  */
} 


void targetEnableInterrupts(void)
{
  NVIC_ISER0_ISER15 |= 1 << NVIC_CTIMER0;
}


void targetInit(void)
{
  #ifndef EMPTY_TARGET_INIT

  enableSecondaryCores();
  initClock();
  initTimer();
  targetEnableInterrupts();

  #endif /* EMPTY_TARGET_INIT */
}


void disableWatchdog(void)
{
  
}
