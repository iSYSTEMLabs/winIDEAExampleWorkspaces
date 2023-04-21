#include "stm32g4.h"


void initTimer()
{
  RCC_APB1ENR |= (1 << TIM2EN); // enable timer TIM2, clock is 64 MHz
  TIMER2_CR1 |= (1 << OPM);     // Counter stops counting at the next update event (clearing the bit CEN)
  TIMER2_DIER |= (1 << CC1IE);  // Capture/Compare 1 interrupt enable
  TIMER2_ARR = 100000;           // set counter when interrupt triggers
}

void initNVIC(void)
{
  INT_0_31_SET_EN |= (1 << TIM2_IRQ); //enable interrupt TIM2
}

void CPU_Init()
{
  RCC_CR &= ~(1 << PLLON); // Disable the PLL by setting PLLON to 0
  while (RCC_CR & (1 << PLLRDY)); //Wait until PLLRDY is cleared. The PLL is now fully stopped

  // We use external 24 MHz oscillator
  int value = 0;
  value |= (3 << PLLSRC); // PLL source is HSE - 0
  value |= (1 << PLLREN); // Enable PLL R - 24
  value |= (25 << PLLN);  // Multiply factor for PLL is 25
  value |= (2 << PLLM);   // Division factor for PLL is 3
  value |= (0 << PLLR);   // Main PLL division factor for PLL R is 2
  RCC_PLLCFGR = value;

  RCC_CR |= (1 << HSEON); // Enable HSE
  while (!(RCC_CR & (1 << HSERDY))); //Wait until HSERDY is set. The HSE is now fully functional

  RCC_CR |= (1 << PLLON); // Enable the PLL by setting PLLON to 1
  while (!(RCC_CR & (1 << PLLRDY))); //Wait until PLLRDY is set. The PLL is now fully functional

  // Set flash latency for 64 MHz
  value = FLASH_ACR;
  value &= ~(0xF << LATENCY);
  value |= (4 << LATENCY);
  FLASH_ACR = value;

  RCC_CFGR |= (3 << SW); // Set PLL as system clock*/
}

void ITMInit(void)
{
  memW32(ITM_LOCK_ACCESS_REGISTER) = 0xC5ACCE55;  //unlock write access to ITM
  memW32(ITM_TRACE_ENABLE_REGISTER) = 0xFFFFFFFF; //enable stimulus port 0-31
  memW32(ITM_TRACE_PRIVILEGE_REGISTER) = 0x1;     //set privilege
}

void targetEnableInterrupts()
{
  TIMER2_CR1 |= (1 << TIM2EN); //enable counter
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
