#include "AWR1843.h"


void InterruptRoutine();


void initClocks(void)
{  
  // Select PLL1200 / 2 (600Mhz) clock as MSS_VCLK
  CLKSRCSEL1 = 0x2;
  
  // Divide the PLL600 clock with 3 to get 200Mhz clock
  CLKDIVCTL0 = (0x2 << 8);
}


void targetEnableInterrupts(void) 
{
  __asm("CPSIE fi");
  // Start the timer
  RTIGCTRL |= 1;
}

void initTimer()
{
  // RTICLK = 200Mhz
  // Make sure the timer is stopped
  RTIGCTRL &= ~(0x1);
 
  // Disable timer interrupts
  RTICLEARINTENA |= 0x1;
  
  // Clear the interrupt flag
  RTIINTFLAG |= 1;

  // Prescaler timer compare value
  RTICPUC0 = 0x30D40;
  
  // Set free running counter to 0
  RTIFRC0 = 0;
  
  // Free-running timer compare value
  RTICOMP0 = 1;
  
  // Free-running counter increment value
  RTIUDCP0 = 1;

  // Enable free-running counter 0 compare match interrupts 
  //RTISETINTENA |= 0xFFFFFFFF;
  RTISETINTENA |= 0x1;

}

void initInterrupts() 
{
  // Perform a soft reset of VIM
  SOFTRST2 = 0xAD << 24;
  SOFTRST2 = 0x0;

  // Enable interrupt channel 2
  REQENASET0UP |= 0x1 << 2;
}


void targetInit(void)
{
  #ifndef EMPTY_TARGET_INIT

  initClocks();
  initInterrupts();
  initTimer();
  targetEnableInterrupts();

  #endif /* EMPTY_TARGET_INIT */
}


void disableWatchdog()
{
}


void timerInterruptHandler() 
{
  // Clear the interrupt flag
  RTIINTFLAG |= 1;

  InterruptRoutine();
}
