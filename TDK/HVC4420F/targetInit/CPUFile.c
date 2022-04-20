#include "HVC4420F.h"
char pinState;


void flashUnlock()
{
  // Unlock a memory region in flash by setting 
  // the unlock code in register FLASH_ULA and inverse code in FLASH_ULB. 
  FLASH_ULA = 0x7260322B;
  FLASH_ULB = 0x8D9FCDD4;
  FLASH1_ULA = 0x7260322B;
  FLASH1_ULB = 0x8D9FCDD4;
}


/*
  Setup timer for 1 ms interrupt
*/
void initTimer()
{
  TIM0_PS = 0;      // Set prescaler
  TIM0_AR = 20000;  // Set auto reload value
  TIM0_IEN = 1;     // Enable update interrupt
  TIM0_CR = 1;      // Enable timer
}


void targetEnableInterrupts()
{
  INT_0_31_SET_EN = 2;  // Enable timer 0 interrupt
}


void disableWatchdog()
{
  
}


void targetInit()
{
  #ifndef EMPTY_TARGET_INIT

  flashUnlock();
  initTimer();
  targetEnableInterrupts();

  #endif /* EMPTY_TARGET_INIT */
}