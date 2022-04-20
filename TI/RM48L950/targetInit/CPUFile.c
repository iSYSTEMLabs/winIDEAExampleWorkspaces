#include "RM48L950.h"


int delay = 1000;


void initTimer(void)
{
  RTICOMPCTRL = 0x0; // all comparators are compared to RTIFRC0
  RTITBCTRL = 0x0; // RTICLK is used for RTIFRC0
  RTIGCTRL = 0x1; // enable Counter block 0
  RTICPUC0 = 0x1B6; // prescaler value
  RTICOMP0 = 0xFF; // compare value for interrupt flag
  RTIUDCP0 = 0xFF; // increment compare value for periodic interrupts
  RTIINTCLEARENABLE = 0x0; // enable auto clear of compare event
  RTIINTFLAG = 0xFF; //clear flags
  RTISETINTENA = 0x1; //enable compare 0 interrupt
  REQENASET0 = 0x4; //enable interrupt chanell
}


void targetEnableInterrupts(void)
{ 
  RTIINTFLAG = 0xff;
  _Enable_Irq();
}


void targetInit(void)
{
  #ifndef EMPTY_TARGET_INIT

  initVIM();
  initTimer(); 
  targetEnableInterrupts();

  #endif /* EMPTY_TARGET_INIT */
}


void disableWatchdog()
{
}
