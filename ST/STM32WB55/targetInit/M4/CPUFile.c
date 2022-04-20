#include "STM32WB55_sfr.h"

extern void InterruptRoutine();

#define ITM_BASE_32         (*(unsigned volatile int *)0xE0000000)
#define ITM_BASE_16         (*(unsigned volatile short *)0xE0000000)
#define ITM_BASE_8          (*(unsigned volatile char *)0xE0000000)
#define ITM_LOCK_ACCESS     (*(unsigned volatile int *)0xE0000FB0)
#define ITM_TRACE_ENABLE    (*(unsigned volatile int *)0xE0000E00)
#define ITM_TRACE_PRIVILEGE (*(unsigned volatile int *)0xE0000E40)

#define TIM2_BASE 0x40000000
#define TIM2_CR1 (*(unsigned volatile int*)(TIM2_BASE + 0x00))
#define TIM2_CR2 (*(unsigned volatile int*)(TIM2_BASE + 0x04))
#define TIM2_CEN 0
#define TIM2_PSC (*(unsigned volatile int*)(TIM2_BASE + 0x28))
#define TIM2_ARR (*(unsigned volatile int*)(TIM2_BASE + 0x2C))
#define TIM2_DIER (*(unsigned volatile int*)(TIM2_BASE + 0x0C))
#define TIM2_CC1IE 1
#define TIM2_SR (*(unsigned volatile int*)(TIM2_BASE + 0x10))
#define TIM2_CC1IF 1

void initClock(void) {
  
  Flash.ACR.B.LATENCY = 0x3; // Maximum latency time for flash (3 WS)
  while(!(Flash.ACR.B.LATENCY & 0x3)); // Wait for flash latency to be set
  
  RCC.CR.B.PLLON = 0x0; // Disable the PLL
  while(RCC.CR.B.PLLRDY); // Wait until PLL is fully stopped
  
  RCC.CR.B.HSEON = 0x1; // Enable HSE clock
  while(!RCC.CR.B.HSERDY); // Wait until HSE stabilizes
  
  RCC.CR.B.HSEPRE = 0x1; // Divide HSE clock and PLLM clock by 2
  RCC.CFGR.B.HPRE = 0x8; // HCLK1 prescaler set to 2
  
  RCC.PLLCFGR.B.PLLSRC = 0x3; // PLL source from HSE
  RCC.PLLCFGR.B.PLLR = 0x1; // Main PLL division factor for PLLRCLK
  RCC.PLLCFGR.B.PLLN = 0x20; // Sets PLLN factor (PLL must be disabled) - set to 32
  RCC.PLLCFGR.B.PLLM = 0x3; // Sets PLLM factor (PLL must be disabled, HSEPRE output freq. included) - set to 4 
  RCC.PLLCFGR.B.PLLREN = 0x1; // Enable PLLRCLK output
  RCC.CR.B.PLLON = 0x1; // Enable PLL
  
  while(RCC.CR.B.PLLRDY); // Wait for PLL to be ready
  
  RCC.CFGR.B.SW = 0x3; // Use PLL as system clock
}


void initTIM(void) 
{
  System_Control_Space_NVIC.INT_0_31_SET_EN |= (1 << 28); // Enable TIM2 global interrupt on NVIC
  
  RCC.APB1ENR1.B.TIM2EN = 0x1; // Enable TIM2 clock on APB1 - consider HPRE is equal to 2
  TIM2_ARR = 32000; // Set reload value to 32000 (interrupt will trigger on 1kHz considering PSC)
  TIM2_DIER |= (1 << TIM2_CC1IE); // Enable trigger interrupt when CNT reaches ARR
}


void ITMInit(void)
{
  ITM_LOCK_ACCESS = 0xC5ACCE55; //unlock write access to ITM
  ITM_TRACE_ENABLE = 0xFFFFFFFF; //enable stimulus port 0-31 
  ITM_TRACE_PRIVILEGE = 0x1; //set privilege
}


void targetEnableInterrupts(void)
{
  TIM2_CR1 |= (1 << TIM2_CEN); // Start timer 2
}


void targetInit(void)
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


void TimerInterruptHandler()
{
  TIM2_SR &= ~(1 << TIM2_CC1IF); // Clear timer compare interrupt flag
  
  InterruptRoutine();
}