#include "DA14699.h"


#include "DA14699.h"


void targetEnableInterrupts()
{
  /*Enable interrupts*/
  __asm__("cpsie i"); 
  
  /*Enable interrupt for timer 0*/
  NVIC_ISER0 |= (0x01 << TIMER_IRQ);
}

void targetDisableInterrupts()
{
  __asm__("cpsid i"); 
}


void __attribute__ ((interrupt ("IRQ"))) TimerInterruptHandler(void) 
{
  targetDisableInterrupts();
  /*Disable timer*/
  TIMER_CTRL_REG &= ~(0x01 << TIM_EN);
  /*Clear time interrupt*/
  TIMER_CLEAR_GPIO_EVENT_REG |= (0x01 << TIM_CLEAR_IRQ);
  TIMER_CLEAR_IRQ_REG |= (0x01 << TIM_CLEAR_IRQ);
  /*Clear pending interrupt*/
  NVIC_ICPR0 |= (0x01 << TIMER_IRQ);
  NVIC_ICER0 |= (0x01 << TIMER_IRQ);
  
  InterruptRoutine();
  targetEnableInterrupts();
  
  /*Enable timer*/
  TIMER_CTRL_REG |= (0x01 << TIM_EN);
}


/*
  Timer source is 32MHz. 
*/
void initTimer()
{
  /*Enable the timer clock*/
  TIMER_CTRL_REG |= (0x01 << TIM_CLK_EN);
  /*Set the timer to count up*/
  TIMER_CTRL_REG &= ~(0x01 << TIM_COUNT_DOWN_EN);
  /*Select DIVN clock as source (32 MHz)*/
  TIMER_CTRL_REG |= (1 << TIM_SYS_CLK_EN);
  /*Set compare value to 32000*/
  TIMER_RELOAD_REG = 0x7530;
  
  /*Enable timer interrupts*/
  TIMER_CTRL_REG |= (0x01 << TIM_IRQ_EN);
  /*Enable timer interrupt 1*/
  TIMER_CTRL_REG |= (0x01 << TIM_IN1_EVENT_FALL_EN);
  
  /*Enable timer interrupt*/
  TIMER_CTRL_REG |= (0x01 << TIM_EN);
}

/* 
  Init PLL:
    Target can only use 32 MHz external osc. and has 96MHz PLL.
*/
void initClock()
{                             
  /*Set PLL enable and PLL LDO enable bits (both needed for PLL lock)*/
  PLL_SYS_CTRL1_REG |= (0x01 << PLL_EN);
  PLL_SYS_CTRL1_REG |= (0x01 << LDO_PLL_ENABLE);
  
  /*Wait until PLL is initialized*/
  while(!(PLL_SYS_STATUS_REG &= ~(0x01 << PLL_LOCK_FINE)));
  
  /*Select PLL for system clock*/
  CLK_CTRL_REG |= (0x03 << SYS_CLK_SEL);
}


void disableWatchdog()
{
}

void targetInit(void)
{  
  #ifndef EMPTY_TARGET_INIT

  initClock();
  initTimer();
  targetEnableInterrupts();

  #endif /* EMPTY_TARGET_INIT */
}
