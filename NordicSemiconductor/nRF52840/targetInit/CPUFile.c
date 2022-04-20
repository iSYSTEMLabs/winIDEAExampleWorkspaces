#include "nRF52840.h"


void targetEnableInterrupts()
{ 
  INT_0_31_SET_EN = 0x100; //enable interrupt for timer 0
  asm("CPSIE i");
  TIMER0_TASKS_START = 1; // start timer  
}


void targetInit()
{
  #ifndef EMPTY_TARGET_INIT

  initTIMER();
  //CPU has no PLL. Fixed frequency at 64 MHz

  targetEnableInterrupts();

  #endif /* EMPTY_TARGET_INIT */
}

void initTIMER()
{
  TIMER0_MODE = 0; //set timer as timer
  TIMER0_BITMODE = 0; //16 bit timer width
  TIMER0_SHORTS = (1 << COMPARE0_STOP); //on interrupt stop timer
  TIMER0_PRESCALER = 0;  // f_tim = 16 MHz / (2^PRESCALER)
  
  TIMER0_CC0 = 16000;
  
  TIMER0_INTENSET = (1 << COMPARE0); //enable interrupt
}


void disableWatchdog()
{
}
