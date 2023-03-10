#include "MSPM0L1306.h"


 //Initializing Sys tick timer 
void initTimer()
{
  SYST_RVR &= (0x7D00);   //Timer interval
  SYST_CVR |= (0x00);     //Current value of timer is set to zero
  SYST_CSR |= (0x1);      //Start timer  
}


void targetEnableInterrupts()
{
  SYST_CSR |= (0x01 << TICKINT);  //Enable exception
}


void targetInit()
{
  #ifndef EMPTY_TARGET_INIT

  initTimer();  
  targetEnableInterrupts();

  #endif /* EMPTY_TARGET_INIT */
}


void disableWatchdog()
{
}