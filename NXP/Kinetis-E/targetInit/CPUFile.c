#include "MKE06.h"


void TimerInterruptHandler();

void initPITInterrupt(void)
{
  SIM_SCGC |= (1<<SIM_SCGC_BIT); //SIM_SCGC -- enable PIT gate control
  while(PIT_MCR != 0x0)
  {
    PIT_MCR = 0x0;  //turn on PIT
  }
  PIT_LDVAL0 = 0x00006000; //LDVAL
}

void initNVIC(void)
{        
  
  INT_0_31_CLR_PEND = (1<<22); //clear PIT pending interrupt
  INT_0_31_SET_ENA = INT_0_31_SET_ENA | (1<<22);
  NVIC_IP_PRI22 = NVIC_IP_PRI22 | NVIC_IP_PRI22_MASK; //interrupt priority register
}


void targetEnableInterrupts()
{
  // enable timer interrupt and enable timer (PIT_TCTRL0)
  PIT_TCTRL0 = PIT_TCTRL_TIE_MASK | PIT_TCTRL_TEN_MASK;
}


void targetInit()
{
  #ifndef EMPTY_TARGET_INIT

  initPITInterrupt();
  initNVIC();
  targetEnableInterrupts();

  #endif /* EMPTY_TARGET_INIT */
}


void TimerInterruptHandler()
{
  PIT_TFLG0 = PIT_TFLG_TIF_MASK;
  InterruptRoutine();
}


void disableWatchdog()
{
}
