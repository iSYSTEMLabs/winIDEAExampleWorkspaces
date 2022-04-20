
#include "dr7f7010352afp_0.h"
#include "dr7f7010352afp_irq.h"
#include "RH850.h"

/*
  Option byte configurations:
  OPBT1 = BFFFC9D8 (set PLL to work on 240 Mhz)
*/


extern void InterruptRoutine();    


/*
  GPIO port 0 pin 0 in use (on board CN8 pin 25)   
*/
void InitIO(void)
{
  PM0 = 0x0;    // set port mode to output
}

void InitSTM0()
{ 
  STM0CMPlA = 0x13880;
  STM0CMPlB = 0xFFFFFFFF;
  STM0CMPlC = 0xFFFFFFFF;
  STM0CMPlD = 0xFFFFFFFF;
  STM0STC |= 0xE0; 
  
  /*Interrupt settings*/
  FEINTFMSK |= 0x1;
  EIC14 &= ~(0xF << EIC14_P);
  EIC14 |= (0x1 << EIC14_TB);
  EIC14 &= ~(0x1 << EIC14_MK); 
  STM0TS = (1 << STM0TS_TS1);
}

__interrupt void TimerInterruptHandler(void)
{
  #pragma ghs interrupt
  __DI();
  STM0TT |= (0x1 << STM0TT_TT1);
  InterruptRoutine();
  
  STM0STC |= 0x10;
  STM0CNT1 = 0;
  STM0TS |= (0x1 << STM0TS_TS1);
  __EI();
}

void targetEnableInterrupts(void)
{
  __EI();
}


void targetInit(void)
{                              
  #ifndef EMPTY_TARGET_INIT

  InitIO();
  InitSTM0();
  // clock is configured in Option bytes
  targetEnableInterrupts();

  #endif /* EMPTY_TARGET_INIT */
}

void disableWatchdog()
{
}
