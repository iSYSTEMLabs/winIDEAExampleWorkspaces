#include "stm32c0.h"


__attribute__ ((section(".stack")))

static unsigned pulStack[256]; 


/* internal clock source */
void initClockFromHSI()
{
  //Flash initialization
  FLASH |= 0b111;
  
  
  /*Set HSI divide to 1. Default freq. 48MhZ */
  RCC.CR.B.HSIDIV = 0; 
  
  /*Enable HSI*/
  RCC.CR.B.HSION = 1;
  
  /*Wait until stable*/
 while (RCC.CR.B.HSIRDY == 0)
  {
   
   
  }
  
  /* use PLL as system clock */
  RCC.CFGR.B.SW = 0;
}

void initTimer()
{
  /* TIM3 clock enable */ 
  TIM3EN |= 1 << 1;
 
  /* Set HCLK Division factor to 1 */ 
  RCC.CFGR.B.HPRE = 0x1;
  
  /* Set PCLK Division factor to 1 */ 
  RCC.CFGR.B.PPRE = 0x1;
  
  /* set timer to 1ms cycle @48MHz clock = ((Period + 1) * (Prescaler + 1))/clock */
  TIM3CR1 &= 0x8F;
  TIM3CR1 |= (0<<8)  | (0<<4);
  
  // Set period
  TIM3ARR = 0xFA0;
  
  // Set prescaler 
  TIM3PSC = 0b1011;
  
  // Force timer update
  TIM3EGR = 0b1;
  
  // Enable update interrupt
  TIM3DIER |= (1 << 0);
  
  // Enable timer
  TIM3CR1 = 0b1;
}

void initNVIC()
{ 
  // Disable timer interrupt
  NVICCLRENA0_31 |= 1 << 16;
}

void enableInterrupts()
{
  // Enable interrupt in ISER
  NVICSETENA0_31|= 1 << 16;
  }

void CPU_Init()
{
  /* internal clock init */
  initClockFromHSI();
  
  /* external clock init */
  initTimer();
  initNVIC();
  }

void ITMInit(void)
{
  memW32(ITM_LOCK_ACCESS_REGISTER) = 0xC5ACCE55; //unlock write access to ITM
  memW32(ITM_TRACE_ENABLE_REGISTER) = 0xFFFFFFFF; //enable stimulus port 0-31 
  memW32(ITM_TRACE_PRIVILEGE_REGISTER) = 0x1; //set privilege
}


void disableWatchdog()
{
}
