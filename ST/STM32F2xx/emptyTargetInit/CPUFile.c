#include "stm32f2.h"


void initTimer()
{
  RCC_APB1ENR |= (1 << TIM2EN); // enable timer TIM2, clock is 64 MHz
  TIM2_CR1 |= (1 << OPM);       // Counter stops counting at the next update event (clearing the bit CEN)
  TIM2_DIER |= (1 << CC1IE);    // Capture/Compare 1 interrupt enable
  TIM2_ARR = 120000;             // set counter when interrupt triggers
}

void initNVIC(void)
{
  INT_0_31_SET_EN |= (1 << TIM2_IRQ); //enable interrupt TIM2
}


void CPU_Init()
{
  RCC_CR &= ~(1 << PLLON); // Disable the PLL by setting PLLON to 0
  while (RCC_CR & (1 << PLLRDY)); //Wait until PLLRDY is cleared. The PLL is now fully stopped
  
  RCC_CR |= (1 << HSEON); // Enable the HSE by setting HSEON to 1
  while (!(RCC_CR & (1 << HSERDY))); //Wait until HSERDY is set. The HSE is now fully operational

  // We use external 25 MHz oscillator
  int value = 0;
  value |= (192 << PLLN);  // Set multiplication factor N to 192
  value |= (20 << PLLM); // Set division factor M to 20
  value |= (0 << PLLP);   // Set division factor P to 2
  value |= (1 << PLLSRC);   // Set PLL source to HSE
  RCC_PLLCFGR = value;

  RCC_CR |= (1 << PLLON); // Enable the PLL by setting PLLON to 1
  while (!(RCC_CR & (1 << PLLRDY))); //Wait until PLLRDY is set. The PLL is now fully functional

  // Set flash latency for 120 MHz
  FLASH_ACR |= (7 << LATENCY);

  RCC_CFGR |= (2 << SW); // Set PLL as system clock
}

void ITMInit(void)
{
  memW32(ITM_LOCK_ACCESS_REGISTER) = 0xC5ACCE55;  //unlock write access to ITM
  memW32(ITM_TRACE_ENABLE_REGISTER) = 0xFFFFFFFF; //enable stimulus port 0-31
  memW32(ITM_TRACE_PRIVILEGE_REGISTER) = 0x1;     //set privilege
}


void targetEnableInterrupts()
{
  TIM2_CR1 |= (1 << TIM2EN); //enable counter
}


void targetInit()
{
  #ifndef EMPTY_TARGET_INIT

  CPU_Init();
  initTimer();
  initNVIC();
  ITMInit();
  targetEnableInterrupts();

  #endif /* EMPTY_TARGET_INIT */
}


void disableWatchdog()
{
}
