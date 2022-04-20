#include "CortexM.h"


__attribute__ ((section(".stack")))

static unsigned pulStack[256]; 
GPIO_InitTypeDef GPIO_InitStructure;

/* internal clock source */
void initClockFromHSI()
{
  /* set FLASH latency value */
  FLASH->ACR |= FLASH_LATENCY_CYCLE_2;
  
  /* HSI clock (8MHz), divide by 2 (4MHz), multiply by 16 (64MHz)*/
  RCC_PLLConfig(RCC_PLLSource_HSI_Div2, RCC_PLLMul_16);
  RCC_PLLCmd(ENABLE);
  while(RCC_GetFlagStatus(RCC_FLAG_PLLRDY) == RESET)
  {
  }
  
  /* use PLL as system clock */
  RCC_SYSCLKConfig(RCC_SYSCLKSource_PLLCLK); 
}

/* external clock source */
void initClockFromHSE()
{
  /* set FLASH latency value */
  FLASH->ACR |= FLASH_LATENCY_CYCLE_2;
  
  /* HSE clock (8MHz), multiply by 8 (64MHz)*/
  RCC_PLLConfig(RCC_PLLSource_HSE_Div1, RCC_PLLMul_8);
  RCC_PLLCmd(ENABLE);
  RCC_HSEConfig(RCC_HSE_ON);
  while(RCC_GetFlagStatus(RCC_FLAG_PLLRDY) == RESET)
  {
  }
  
  /* use PLL as system clock */
  RCC_SYSCLKConfig(RCC_SYSCLKSource_PLLCLK); 
}

void initTimer()
{
  TIM_TimeBaseInitTypeDef TIM_TimeBaseStructure;
  
  /* TIM2 clock enable */ 
  RCC_APB1PeriphClockCmd(RCC_APB1Periph_TIM2, ENABLE);
  
  /* set timer to 1ms cycle @64MHz clock = ((Period + 1) * (Prescaler + 1))/clock */
  TIM_TimeBaseStructure.TIM_Period = 4000 - 1;
  TIM_TimeBaseStructure.TIM_Prescaler = 16 - 1;
  TIM_TimeBaseStructure.TIM_ClockDivision = TIM_CKD_DIV1;
  TIM_TimeBaseStructure.TIM_CounterMode = TIM_CounterMode_Up;
  TIM_TimeBaseInit(TIM2, &TIM_TimeBaseStructure);
  
  TIM_ITConfig(TIM2, TIM_IT_Update, ENABLE);
  TIM_Cmd(TIM2, ENABLE); 
}

void initNVIC()
{
  NVIC_InitTypeDef NVIC_InitStructure;
  
  /* set TIM2 interrupt and disable it */ 
  NVIC_InitStructure.NVIC_IRQChannel = TIM2_IRQChannel;
  NVIC_InitStructure.NVIC_IRQChannelPreemptionPriority = 0;
  NVIC_InitStructure.NVIC_IRQChannelSubPriority = 1;
  NVIC_InitStructure.NVIC_IRQChannelCmd = DISABLE;
  NVIC_Init(&NVIC_InitStructure);
}

void enableInterrupts()
{
  NVIC_InitTypeDef NVIC_InitStructure;
  
  /* set TIM2 interrupt and enable it */ 
  NVIC_InitStructure.NVIC_IRQChannel = TIM2_IRQChannel;
  NVIC_InitStructure.NVIC_IRQChannelPreemptionPriority = 0;
  NVIC_InitStructure.NVIC_IRQChannelSubPriority = 1;
  NVIC_InitStructure.NVIC_IRQChannelCmd = ENABLE;
  NVIC_Init(&NVIC_InitStructure);
}

void CPU_Init()
{
  /* internal clock init */
  initClockFromHSI();
  /* external clock init */
  //initClockFromHSE();
  initTimer();
  initNVIC();
}

void ITMInit(void)
{
  memW32(ITM_LOCK_ACCESS_REGISTER) = 0xC5ACCE55; //unlock write access to ITM
  memW32(ITM_TRACE_ENABLE_REGISTER) = 0xFFFFFFFF; //enable stimulus port 0-31 
  memW32(ITM_TRACE_PRIVILEGE_REGISTER) = 0x1; //set privilege
}


void targetEnableInterrupts()
{
  enableInterrupts();
}


void targetInit()
{
  #ifndef EMPTY_TARGET_INIT

  CPU_Init();
  ITMInit();
  targetEnableInterrupts();

  #endif /* EMPTY_TARGET_INIT */
}


void disableWatchdog()
{
}
