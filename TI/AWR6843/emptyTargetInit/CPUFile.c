#include "AWR6843_sfr.h"


void targetEnableInterrupts(void) 
{
  // Enable timer and enable interrupts
  __asm("CPSIE i");
  RTIA.RTIGCTRL.B.CNT0EN = 1;
}

void initClock()
{
  // Select PLL1200 / 2 (600Mhz) clock as MSS_VCLK
  RCM.CLKSRCSEL1.B.VCLKCLKSRCSEL = 2;
  
  // Divide the PLL600 clock with 3 to get 200Mhz clock
  RCM.CLKDIVCTL0.B.VCLKCLKDIV = 2;
}

void initTimer()
{
  // RTICLK = 200Mhz
  // Make sure the timer is stopped
  RTIA.RTIGCTRL.B.CNT0EN = 0;
 
  // Disable timer interrupts
  RTIA.RTICLEARINT.B.CLEARINT0 = 1;
  
  // Clear the interrupt flag
  RTIA.RTIINTFLAG.B.INT0 = 1;
  
  // Unused compare registers use unused counter
  RTIA.RTICOMPCTRL.B.COMP1SEL = 1;
  RTIA.RTICOMPCTRL.B.COMP2SEL = 1;
  RTIA.RTICOMPCTRL.B.COMP3SEL = 1;

  // Prescaler timer compare value
  RTIA.RTICPUC0.R = 200000;
  
  // Set free running counter to 0
  RTIA.RTIFRC0.R = 0;
  
  // Free-running timer compare value
  RTIA.RTICOMP0.R = 1;
  
  // Free-running counter increment value
  RTIA.RTIUDCP0.R = 1;
  
  // Enable compare match interrupts
  RTIA.RTISETINT.B.SETINT0 = 1;  
}

void initInterrupts() 
{
  // Perform a soft reset of VIM
  RCM.SOFTRST2.B.VIMRST = 0xAD;
  RCM.SOFTRST2.B.VIMRST = 0x0;

  // Enable interrupt channel 2
  VIM.REQMASKSET0.B.REQMASKSET0 = 1;
}


void targetInit(void)
{
  #ifndef EMPTY_TARGET_INIT

  initClock();
  initInterrupts();
  initTimer();
  targetEnableInterrupts();

  #endif /* EMPTY_TARGET_INIT */
}

int toggle = 0;

void disableWatchdog()
{
  
}
