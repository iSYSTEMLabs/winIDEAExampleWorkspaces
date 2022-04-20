#include "RH850.h"

void InterruptRoutine();

void targetEnableInterrupts(void)
{

}


void CPU_Init(void)
{
  //IO Setup
  PM0 = 0x0;
  P0 = 0xFFFF;
  
  targetEnableInterrupts();
}

void InitOSTM()
{
  /* Start OS Timer */
  OSTM0CMP=0x00009C00;  // load compare value
  OSTM0CTL=0x1;           // select interrupt mode
  ICOSTM0=0x0;     // disable interrupt masking
  
}

#pragma interrupt TimerInterruptHandler 0x100 1 
void TimerInterruptHandler(void)
{

}      


void targetInit(void)
{
  #ifndef EMPTY_TARGET_INIT

  CPU_Init();
  InitOSTM();
  targetEnableInterrupts();

  #endif /* EMPTY_TARGET_INIT */
}


void disableWatchdog()
{
}
