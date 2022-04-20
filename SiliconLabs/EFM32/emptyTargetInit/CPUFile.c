#include "efm32.h" 


#ifdef EFM32LG990F256
  #include "efm32lg990f256.h"
#endif
#ifdef EFM32G230F128 
  #include "efm32g230f128.h"
#endif


void ITMInit(void)
{
  memW32(ITM_LOCK_ACCESS_REGISTER) = 0xC5ACCE55; //unlock write access to ITM
  memW32(ITM_TRACE_ENABLE_REGISTER) = 0xFFFFFFFF; //enable stimulus port 0-31 
  memW32(ITM_TRACE_PRIVILEGE_REGISTER) = 0x1; //set privilege
}


void ClockInit()
{
  CMU->HFPERCLKEN0 = CMU_HFPERCLKEN0_TIMER0 | CMU_HFPERCLKEN0_GPIO;; //enable clock for timer 0,enable clock for GPIO
}

void TimerInit()
{
  TIMER0->CTRL = TIMER_CTRL_MODE_DOWN | TIMER_CTRL_FALLA_RELOADSTART; //Reload and start counter,Down-count mode
  TIMER0->CMD = TIMER_CMD_START; //start timer
  TIMER0->TOP = 0x3700;//counter top vaue set to 1,004ms
  TIMER0->IEN = TIMER_IEN_UF;//enable underflow interrupt
  TIMER0->IFC = TIMER_IFC_UF;//Clear uf interupt flag 
}

void TimerInterruptHandler()
{
  TIMER0->IFC = TIMER_IFC_UF;//Clear uf interupt flag
  InterruptRoutine();
}


void targetEnableInterrupts()
{
  NVIC->ISER[0] = 0x04; // enable timer0 interrupt
}


void targetInit()
{
  #ifndef EMPTY_TARGET_INIT

    ClockInit();
    ITMInit();
    TimerInit();
  targetEnableInterrupts();

  #endif /* EMPTY_TARGET_INIT */
}


void disableWatchdog()
{
}
