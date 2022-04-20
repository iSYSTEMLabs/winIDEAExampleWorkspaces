#include "stm32l4.h"


/*
   Initialize general purpose timer TIM15 (count to 40000 with 40 MHz clock - main clock divided by 2)
*/
void initTIM(){
  RCC_APB2ENR |= (0x1 << RCC_APB2ENR_TIM15EN);
  TIM15_PSC = 0x1;
  TIM15_ARR = 0x9C40;
  TIM15_DIER |= (0x1 << TIM15_DIER_UIE);                                   
}

/*
  Init clock to 80 MHz (max) from 8 MHz ext. osc.
*/
void initClock()
{
  /* Turn on ext. osc. and wait for it to become ready */
  RCC_CR |= (0x1 << RCC_CR_HSEON);
  while (!(RCC_CR & (0x1 << RCC_CR_HSERDY)));
  
  /* Initialize PLL */
  RCC_CR &= ~(0x1 << RCC_CR_PLLON);
  while (RCC_CR & (0x1 << RCC_CR_PLLRDY));
  RCC_PLLCFGR |= (0x3 << RCC_PLLSRC);
  RCC_PLLCFGR &= ~(0x7 << RCC_PLLM);
  RCC_PLLCFGR &= ~(0x7F << RCC_PLLN);
  RCC_PLLCFGR |= (0x14 << RCC_PLLN);
  RCC_PLLCFGR &= ~(0x3 << RCC_PLLR);
  RCC_PLLCFGR |= (0x1 << RCC_PLLREN);
  RCC_CR |= (0x1 << RCC_CR_PLLON);
  while (!(RCC_CR & (0x1 << RCC_CR_PLLRDY)));
  
  /* Configure number of flash wait states */
  FLASH_ACR &= ~(0x7 << FLASH_ACR_LATENCY);
  FLASH_ACR |= (0x4 << FLASH_ACR_LATENCY);
  
  /* Switch to PLL clock as main clock */
  RCC_CFGR |= (0x3 << RCC_CFGR_SW);
  while ((RCC_CFGR & (0x3 << RCC_CFGR_SW)) != 0x3);
}

void ITMInit(void)
{
  memW32(ITM_LOCK_ACCESS_REGISTER) = 0xC5ACCE55; //unlock write access to ITM
  memW32(ITM_TRACE_ENABLE_REGISTER) = 0xFFFFFFFF; //enable stimulus port 0-31 
  memW32(ITM_TRACE_PRIVILEGE_REGISTER) = 0x1; //set privilege
}


void targetEnableInterrupts()
{
  INT_0_31_SET_EN |= (0x1 << INT_0_31_SET_EN_TIM15);
  TIM15_CR1 |= (0x1 << TIM15_CR1_CEN);
}


void targetInit()
{           
  #ifndef EMPTY_TARGET_INIT

  initClock();
  initTIM();
  ITMInit();
  targetEnableInterrupts();

  #endif /* EMPTY_TARGET_INIT */
}


void disableWatchdog()
{
}
