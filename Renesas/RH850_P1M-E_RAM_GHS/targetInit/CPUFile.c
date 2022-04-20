#include "R7F701378.h"
#include "R7F701378_sfr.h"


void initClock(void)
{
  // P4_5 = EXTCLK1O
  // P3_14 = EXTCLK0O
  
  // Output Clock divider for EXTCLK1O (max 20MHz)
  SYS.CLKD3DIV.R = 1023;
  
  // Output CPU clock on pin
  SYS.CKSC3C.R = 0x5;  
  
  // Alternate mode as EXTCLK1O
  PORT.PMC4.B.PMC4_5 = 0x01;
  
  PORT.PFC4.B.PFC4_5 = 0x00;
  PORT.PFCE4.B.PFCE4_5 = 0x01;
  PORT.PFCAE4.B.PFCAE4_5 = 0x00;
  PORT.PM4.B.PM4_5 = 0x00;
}


void initTimer(void)
{
  // Load timer compare value
  OSTM0.CMP = 80000;  // load compare value
  
  // Enable interrupts when counting starts
  OSTM0.CTL.R = 0x1;
  
  // Disable interrupt masking
  INTC2.EIC74 = 0x0; 
}

__interrupt void TimerInterruptHandler(void)
{
  #pragma ghs interrupt
  
  // Disable global interrupts
  __DI();
  
  InterruptRoutine();
  
  // Enable global interrupts
  __EI();
}

void targetEnableInterrupts(void)
{
  // Start counter
  OSTM0.TS.R = 0x1;
  
  // Enable global interrupts
  __EI();
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
