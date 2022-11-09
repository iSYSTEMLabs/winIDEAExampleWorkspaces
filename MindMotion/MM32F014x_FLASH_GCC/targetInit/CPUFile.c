#include "MM32F014x.h"
#include "main.h"


void initClock()
{
  FLASH_ACR |= 0b010 << 0;  // LATENCY (two wait states for 72 MHz)
  
  // clock input mode (HSE selected)
  RCC_CR |= 1 << 16;  // HSEON (external high-speed clock enable)
  while(!(RCC_CR & (1 << 17))); // HSERDY
  
  // Clock security system enable
  //RCC_CR |= 1 << 19;
  
  // Phase locked loop configuration
  RCC_PLLCFGR |= 0 << 1;  // PLLXTPRE (no HSE clock divison)
  RCC_PLLCFGR |= 1 << 0;  // PLLSRC (HSE clock used as PLL input clock)
  // HSE = 8 MHz, PLL_MUL = 35, PLL_DIV = 1
  RCC_PLLCFGR |= 1 << 8;  // PLLDIV (division factor 1)
  RCC_PLLCFGR |= 1 << 29; // PLLPDIV (Pre-divide factor 1)
  RCC_PLLCFGR |= 0b100011 << 16;  // PLLMUL (multiplication factor 35)
  
  RCC_CR |= 1 << 24;  //<PLLON (Enable PLL)
  
  while(!(RCC_CR & (1 << 25))); //PLLRDY
  // Select the system clock
  RCC_CFGR |= 0x2 << 0;  // SW (PLL output as system clock)
}

void initTimer()
{
  // Enable peripheral clock for Timer 2
  RCC_APB1ENR |= 1 << 0;
  
  // Prescaler 
  TIM2_PSC = 72 - 1;
  
  // Auto reload preload enable
  TIM2_CR1 |= 1 << 7;
  
  // Auto Reload Register
  TIM2_ARR = 1330 - 1;
   
  // Counter enable
  TIM2_CR1 |=  1 << 0;
  
  // NVIC enable timer2 update interrupt
  NVIC_ISER_0 |= 1 << 15; // position for timer2 in vector 
}


void ITMInit(void)
{
  /*
  memW32(ITM_LOCK_ACCESS_REGISTER) = 0xC5ACCE55; //unlock write access to ITM
  memW32(ITM_TRACE_ENABLE_REGISTER) = 0xFFFFFFFF; //enable stimulus port 0-31 
  memW32(ITM_TRACE_PRIVILEGE_REGISTER) = 0x1; //set privilege
  */
}


void targetEnableInterrupts()
{
  TIM2_DIER |= 1 << 0; // UIE (Enable update interrupt)
}


void targetInit()
{
  #ifndef EMPTY_TARGET_INIT

  initClock();
  initTimer();
  targetEnableInterrupts();

  #endif /* EMPTY_TARGET_INIT */
}


void disableWatchdog()
{
  
}

void TimerInterruptHandler()
{
  TIM2_SR &= ~(1 << 0);
  InterruptRoutine();
}