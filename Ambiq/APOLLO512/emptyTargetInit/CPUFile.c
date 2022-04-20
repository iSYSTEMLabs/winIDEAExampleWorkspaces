#include "APOLLO512.h"


/*
  Core clock is configured to 24 MHz
*/
void initClock()
{
  CLKGEN_CLKKEY = 0x47;
  CLKGEN_CCTRL = 0;  // Set HFRC as core clock
}

/*
  Timer interrupt initialization with 1 ms period
*/
void initTimer()
{
  CTIMER_CMPRA0 = 0x5DC0;                         // Set compare value
  CTIMER_CTRL0 |= (1 << CTIMER_CTRL0_TMRA0CLK);   // Select HFRC clock source
  CTIMER_CTRL0 |= (1 << CTIMER_CTRL0_TMRA0FN);    // Select repeated count function
  CTIMER_CTRL0 |= (1 << CTIMER_CTRL0_TMRA0IE);    // Enable interrupt
  CTIMER_INTEN |= (1 << CTIMER_INTEN_CTMRA0INT);  
  CTIMER_CTRL0 |= (1 << CTIMER_CTRL0_TMRA0EN);    
}

void clearTimerFlag()
{
  CTIMER_INTCLR |= (1 << CTIMER_INTCLR_CTMRA0INT);
}


void targetEnableInterrupts()
{
  __asm__("CPSIE i");
  NVIC_ISER |= (1 << NVIC_TMR0);
}


void disableWatchdog()
{

}


void targetInit()
{
  #ifndef EMPTY_TARGET_INIT

  initClock();
  initTimer();
  targetEnableInterrupts();

  #endif /* EMPTY_TARGET_INIT */
}