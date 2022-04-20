#include "dr7f7010352afp_0.h"
#include "dr7f7010352afp_irq.h"
#include "RH850.h"


void InterruptRoutine(void);


void InitIO(void)
{
  //IO Setup
  PM0 = 0x0;
  P0 = 0xFFFF;
}

void InitOSTM()
{
  /* Start OS Timer */
  OSTM0CMP=0x00013800;  // load compare value
  OSTM0CTL=0x1;           // select interrupt mode
  EIC74=0x0;     // disable interrupt masking
}

__interrupt void TimerInterruptHandler(void)
{
  #pragma ghs interrupt
  __DI();
  InterruptRoutine();
  __EI();
}

void targetEnableInterrupts(void)
{
  OSTM0TS=0x1;            // start trigger
  __EI();
}


void targetInit(void)
{
  #ifndef EMPTY_TARGET_INIT

  InitIO();
  InitOSTM();
  targetEnableInterrupts();

  #endif /* EMPTY_TARGET_INIT */
}

void disableWatchdog()
{
}
