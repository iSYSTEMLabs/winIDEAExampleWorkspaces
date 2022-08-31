#include "iMXRT685.h"


void disableWatchdog()
{
  // Disable watchdog clocks
  CLKCTL0.PSCCTL2_CLR.B.WWDT0_CLK = 1;
  CLKCTL1.PSCCTL2_CLR.B.WWDT1_CLK_CLR = 1;
}

void targetEnableInterrupts()
{
  NVIC.NVIC_ISER0.B.SETENA = (1 << NVIC_SRC_CTIMER0);
}


// Initialize the system clock to 300 MHz
void initClock()
{
  /* 
    The system uses the main PLL as the clock source.
    The formula for the main PLL output is as follows:
      
      PLL output = Fref * (MULT + NUM/DENOM) * 18 / PFD0
      
      Fref - input frequency, in this case 1/2 of the FFRO frequency (24 MHz)
      MULT - multiplier from 16 to 22, in this case 20
      NUM - fraction numerator, in this case 5
      DENOM - fraction denominator, in this case 6
      PFD0 - PFD divisor from 12 to 35, in this case 30
      
      300 MHz = 24 MHz * ( 20 + 5 / 6 ) * 18 / 30
  */
  // Enable FFRO clock (48 MHz)
  SYSCTL0.PDRUNCFG0_CLR.B.FFRO_PD = 1;
  
  // Set PLL numerator and denominator
  CLKCTL0.SYSPLL0NUM.B.NUM = 5;
  CLKCTL0.SYSPLL0DENOM.B.DENOM = 6;
  
  // Set PLL clock source to FFRO/2
  CLKCTL0.SYSPLL0CLKSEL.B.SEL = SYSPLLCLKSEL_4860M_IRC;
  
  // Release PLL from reset
  CLKCTL0.SYSPLL0CTL0.B.RESET = 0;
  
  // Set PLL multiplier to 20
  CLKCTL0.SYSPLL0CTL0.R |= (20 << 16);

  // Set up PFD
  CLKCTL0.SYSPLL0PFD.B.PFD0_CLKGATE = 1;
  CLKCTL0.SYSPLL0PFD.B.PFD0 = 30;
  CLKCTL0.SYSPLL0PFD.B.PFD0_CLKGATE = 0;
  while (CLKCTL0.SYSPLL0PFD.B.PFD0_CLKRDY == 0)
  {
    
  }
  
  CLKCTL0.SYSPLL0PFD.B.PFD0_CLKRDY = 1;
  
  // Start the PLL divider
  CLKCTL0.MAINPLLCLKDIV.R = 0;
  
  // Switch clock source to main PLL
  CLKCTL0.MAINCLKSELB.B.SEL = 2;
  
  // Set main clock as clock out
  CLKCTL1.CLKOUTSEL0.B.SEL = 4;
  CLKCTL1.CLKOUTSEL1.B.SEL = 0;
  
  // Enable clock out pin
  IOPCTL.PIO2_29.B.FSEL = 5;
  
  // Set clock out divider to 6
  CLKCTL1.CLKOUTDIV.R = 6 - 1;
}

// Use CTIMER0
void initTimer()
{
  // Enable timer clock
  CLKCTL1.PSCCTL2_SET.B.CT32BIT0_CLK_SET = 1;
  
  // Set main clock as timer source
  CLKCTL1.CT32BITFCLKSEL0.B.SEL = 0;
  
  // Clear timer reset
  RSTCTL1.PRSTCTL2_CLR.B.CT32BIT0_RST_CLR = 1;
  
  // Set channel 0 match value
  CTIMER0.MR_0.B.MATCH = 300000;
  
  // Enable interrupt on channel 0
  CTIMER0.MCR.B.MR0I = 1;
  
  // Reset counter after match on channel 0
  CTIMER0.MCR.B.MR0R = 1;
  
  // Enable timer counter
  CTIMER0.TCR.B.CEN = 1;
}


void targetInit()
{
  #ifndef EMPTY_TARGET_INIT

  initClock();
  initTimer();
  targetEnableInterrupts();

  #endif /* EMPTY_TARGET_INIT */
}