#include "stm32f4xx.h"
#include "stm32f4.h"


void initTimer()
{ 
  TIM_TimeBaseInitTypeDef  TIM_TimeBaseStructure;
  TIM_OCInitTypeDef  TIM_OCInitStructure;
  
  /* TIM2 clock enable */ 
  RCC_APB1PeriphClockCmd(RCC_APB1Periph_TIM2, ENABLE);
  
  /* set timer to 1ms cycle @168MHz clock = ((Period + 1) * (Prescaler + 1))/clock */
  TIM_TimeBaseStructure.TIM_Period = 1000 - 1;
  TIM_TimeBaseStructure.TIM_Prescaler = 168 - 1;
  TIM_TimeBaseStructure.TIM_ClockDivision = TIM_CKD_DIV1;
  TIM_TimeBaseStructure.TIM_CounterMode = TIM_CounterMode_Up;
  TIM_TimeBaseInit(TIM2, &TIM_TimeBaseStructure);
  TIM_OCStructInit(&TIM_OCInitStructure);
  TIM_ClearFlag(TIM2, TIM_FLAG_Update);
}

void initNVIC(void)
{
  NVIC_InitTypeDef  NVIC_InitStructure;
  /* Enable the WAKEUP_BUTTON_EXTI_IRQn Interrupt */
  NVIC_InitStructure.NVIC_IRQChannel = TIM2_IRQn;
  NVIC_InitStructure.NVIC_IRQChannelPreemptionPriority = 0;;
  NVIC_InitStructure.NVIC_IRQChannelSubPriority = 1;
  NVIC_InitStructure.NVIC_IRQChannelCmd = DISABLE;
  NVIC_Init(&NVIC_InitStructure);
  TIM_ITConfig(TIM2, TIM_IT_Update, ENABLE);
  TIM_Cmd(TIM2, ENABLE); 
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
    NVIC_InitTypeDef  NVIC_InitStructure;
    /* Enable the WAKEUP_BUTTON_EXTI_IRQn Interrupt */
    NVIC_InitStructure.NVIC_IRQChannel = TIM2_IRQn;
    NVIC_InitStructure.NVIC_IRQChannelPreemptionPriority = 0;;
    NVIC_InitStructure.NVIC_IRQChannelSubPriority = 1;
    NVIC_InitStructure.NVIC_IRQChannelCmd = ENABLE;
    NVIC_Init(&NVIC_InitStructure);
    TIM_ITConfig(TIM2, TIM_IT_Update, ENABLE);
    TIM_Cmd(TIM2, ENABLE);   
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


unsigned char gotoStopLowPowerMode = 0;
unsigned char gotoStandbyLowPowerMode = 0;
unsigned char gotoSleepLowPowerMode = 0;

void targetEnterAndExitLowPowerMode()
{
  if(gotoSleepLowPowerMode)
  {
    enterAndExitSleepMode();
  }
  else
  {}
  if(gotoStandbyLowPowerMode)
  {
    enterAndExitStandbyMode();
  }
  else
  {}
  if(gotoStopLowPowerMode)
  {
    enterAndExitStopMode();
  }
  else
  {}

}

void enterAndExitSleepMode()
{
  HAL_Init_Timer_And_IT_SLEEP_Mode_WakeUp_After_10Micro_Seconds(30000);  
  HAL_Enter_SLEEP_Mode();  
} 

void enterAndExitStandbyMode()
{
  HAL_Clear_STANDBY_Flag(); 
  HAL_Enter_STANDBY_Mode();
} 

void enterAndExitStopMode()
{   
  EXTI_InitTypeDef EXTI_InitStruct;
  NVIC_InitTypeDef NVIC_InitStruct;
  
  // in order to be able to wakeup from stop mode we need to enable EXTI line 22(22 is for RTC wakeup interrupt) 
  EXTI_InitStruct.EXTI_Line = EXTI_Line22;
  EXTI_InitStruct.EXTI_LineCmd = ENABLE; /* Enable interrupt */
  EXTI_InitStruct.EXTI_Mode = EXTI_Mode_Interrupt; /* Interrupt mode */
  EXTI_InitStruct.EXTI_Trigger = EXTI_Trigger_Rising; /* Triggers on rising edge */
  EXTI_Init(&EXTI_InitStruct); /* Add to EXTI */
  
  // before we can wakeup from stop mode we need to add IRQ vector, otherwise we won't be able to handle the interrupt from EXTI22
  NVIC_InitStruct.NVIC_IRQChannel = RTC_WKUP_IRQn; /* PD0 is connected to EXTI_Line0, which has EXTI0_IRQn vector */
  NVIC_InitStruct.NVIC_IRQChannelPreemptionPriority = 0x01; /* Set priority */
  NVIC_InitStruct.NVIC_IRQChannelSubPriority = 0x01; /* Set sub priority */
  NVIC_InitStruct.NVIC_IRQChannelCmd = ENABLE; /* Enable interrupt */
  NVIC_Init(&NVIC_InitStruct); /* Add to NVIC */
  
  HAL_Clear_STOP_Flag();
  HAL_Enter_STOP_Mode();
} 


void disableWatchdog()
{
}
