#include "stm32f7.h"
void init_PLL()
{
  /*
    Tested and working on 120 MHz (not on 216 MHz (Max) becouse trace is not working correctly on frequency that high)  
  */
  // set Flash access latency based on System clock (90-120 MHz -> 3 wait states)
  FLASH_ACR &= ~(0xf << FLASH_ACR_LATENCY);
  FLASH_ACR |= (0x3 << FLASH_ACR_LATENCY);
  
  // enable external clock source
  RCC_CR |= (1 << RCC_CR_HSEON);
  // wait for oscilator to become stable
  while (!(RCC_CR & (1 << RCC_CR_HSERDY)));
  
  RCC_PLLCFGR = 0;
  // set PLL source to HSE
  RCC_PLLCFGR |= (1 << RCC_PLLCFGR_PLLSRC);
  // set division factors so PLL output for main clock is 120 MHz
  RCC_PLLCFGR |= (0x5 << RCC_PLLCFGR_PLLQ);
  RCC_PLLCFGR |= (0x0 << RCC_PLLCFGR_PLLP); 
  RCC_PLLCFGR |= (0xF0 << RCC_PLLCFGR_PLLN); 
  RCC_PLLCFGR |= (0x19 << RCC_PLLCFGR_PLLM);
  
  // set divisor for RTC clock so that RTC clock is 1 MHz
  RCC_CFGR |= (0x19 << RCC_CFGR_RTCPRE);
  // set high speed prescaler (2 so high speed clock is 60 MHz - max is 90 MHz)
  RCC_CFGR |= (0x4 << RCC_CFGR_PPRE2);
  // set low speed prescaler (4 so high speed clock is 30 MHz - max is 45 MHz)
  RCC_CFGR |= (0x5 << RCC_CFGR_PPRE1);
  // turn PLL on
  RCC_CR |= (1 << RCC_CR_PLLON);
  
  // wait for PLL to become stable
  while (!(RCC_CR & (1 << RCC_CR_PLLRDY)));
  // select PLL as system clock
  RCC_CFGR |= (0x2 << RCC_CFGR_SW);
  
  // turn HSI off
  RCC_CR &= ~(1 << RCC_CR_HSION);
}

void init_timer()
{
  // enable clock for TIM2
  RCC_APB1ENR |= (1 << RCC_APB1ENR_TIM2EN);
  // only overflow triggers generates update interrupt
  TIM2_CR1 |= (1 << TIM2_CR1_URS);
  // enable interrupts
  TIM2_DIER |= (1 << TIM2_DIER_UIE);
  // set reload value
  TIM2_ARR = 0xEA60;
  // enable TIM2 counter
  TIM2_CR1 |= (1 << TIM2_CR1_CEN);
}

void initNVIC(void)
{
  TIM2_DIER |= 0x02;
  TIM2_CR1 |= 0x01;
}

void fix_NVIC_address(){
  VTOR = 0x08000000;
}


void ITMInit(void)
{
  memW32(ITM_LOCK_ACCESS_REGISTER) = 0xC5ACCE55; //unlock write access to ITM
  memW32(ITM_TRACE_ENABLE_REGISTER) = 0xFFFFFFFF; //enable stimulus port 0-31 
  memW32(ITM_TRACE_PRIVILEGE_REGISTER) = 0x1; //set privilege
}


void targetEnableInterrupts()
{
  ISER0 |= (1 << 28);  
}

void targetInit()
{
  #ifndef EMPTY_TARGET_INIT

    initNVIC();
    fix_NVIC_address();
    ITMInit();
    init_PLL();
    init_timer();
    targetEnableInterrupts();

  #endif /* EMPTY_TARGET_INIT */
}

void disableWatchdog()
{
}