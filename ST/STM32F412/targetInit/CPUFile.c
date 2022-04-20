#include "stm32f4xx.h"
#include "stm32f4.h"


void SystTickInit(){

  SYS_TICK_RELOAD = 0x1a2b;
  SYS_TICK_CURRENT =0x0;
  SYS_TICK_CONTROL = 0x3;
}

void CPU_Init()
{
  FLASH_ACR = 5;                               // Change Flash latency
  while(!(FLASH_ACR & 5));                     // Check that latency has changed
  
  
  RCC_PLLCFGR = 0;
  RCC_PLLCFGR |= 0x04000000;                   // Default PLLQ value
  RCC_PLLCFGR |= (1<<PLLSRC);                  // PLL source; set HSE as source (1), HSI (0)
  //RCC_PLLCFGR |= (1<<PLLP0) | (1<<PLLP1);      // PLL_P factor for main clock
  RCC_PLLCFGR |= (336<<6);                     // PLL_N factor for main clock
  RCC_PLLCFGR |= 25;                           // PLL_M must mach input freq in MHz
  RCC_CFGR |= (1<<MCO10) | (1<<MCO11);         // Microcontroller clock output 1 select PLL  
  
  
  /* Enable HSE */
  RCC_CR |= (1<<HSEON);
  while(!(RCC_CR & HSERDY));
  
  
  /* Enable PLL */
  RCC_CR |= (1<<PLLON);
  while(!(RCC_CR & PLLRDY));
  
  RCC_CFGR = (1<<SW1);                         // System clock switch; select PLL P as system clock
  while((RCC_CFGR & 0x00000003) != 2);
}

void ITMInit(void)
{
  memW32(ITM_LOCK_ACCESS_REGISTER) = 0xC5ACCE55; //unlock write access to ITM
  memW32(ITM_TRACE_ENABLE_REGISTER) = 0xFFFFFFFF; //enable stimulus port 0-31 
  memW32(ITM_TRACE_PRIVILEGE_REGISTER) = 0x1; //set privilege
}


void targetEnableInterrupts()
{
  SystTickInit();
  __asm volatile ("CPSIE i");
}


void targetInit()
{
  #ifndef EMPTY_TARGET_INIT

    CPU_Init();
    //SystTickInit();
    ITMInit(); 
  targetEnableInterrupts();

  #endif /* EMPTY_TARGET_INIT */
}


unsigned char gotoStopLowPowerMode = 0;
unsigned char gotoStandbyLowPowerMode = 0;
unsigned char gotoSleepLowPowerMode = 0;

void targetEnterAndExitLowPowerMode()
{
  if(gotoSleepLowPowerMode)
  {
  }
  else
  {}
  if(gotoStandbyLowPowerMode)
  {
  }
  else
  {}
  if(gotoStopLowPowerMode)
  {
  }
  else
  {}

}


void disableWatchdog()
{
}
