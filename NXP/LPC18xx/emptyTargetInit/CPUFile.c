#include "CortexM3_LPC18xx.h"

#include <stdint.h>

static uint32_t SysTick_Config(uint32_t ticks);
uint32_t	CGU_SetPLL1(uint32_t mult);
void sysTickInit(void);
uint32_t CGU_Init(void);
void CGU_UpdateClock(void);



int _getpid(void) {
  while(1);
}

int _exit(void) {
  while(1);
}

int _kill(void) {
  while(1);
}

int _sbrk(void) {
  while(1);
}

int LPC18xx_InitClock()
{   
  CGU_Init();
  //CGU_SetPLL1(15); //set clock to 180MHz(12MHz multiply by 15)
  CGU_SetPLL1(10); //set clock to 120MHz(12MHz multiply by 10)
	CGU_UpdateClock();
}

void ITMInit(void)
{
  ITM_LOCK_ACCESS_REGISTER = 0xC5ACCE55; //unlock write access to ITM
  ITM_TRACE_ENABLE_REGISTER = 0xFFFFFFFF; //enable stimulus port 0-31 
  ITM_TRACE_PRIVILEGE_REGISTER = 0x1; //set privilege
}


void targetEnableInterrupts()
{ 
  sysTickInit();
  __asm volatile ("cpsie i");   
}


void targetInit()
{
  #ifndef EMPTY_TARGET_INIT

  NVIC_SetVTOR(0x1A000000);
  LPC18xx_InitClock();
  ITMInit();
  targetEnableInterrupts();

  #endif /* EMPTY_TARGET_INIT */
}


void sysTickInit (void)
{
  SYSTICK_CSR = 0x00000007;  // set reload register
  SYSTICK_RVR = 0x0001D4BF;  // load the SysTick Counter Value
  SYSTICK_CVR = 0x0001D4BE;
  SYSTICK_CLB = 0x0001D4C0;  // enable SysTick IRQ and SysTick Timer
}

void check_failed(uint8_t *file, uint32_t line)
{
	/* User can add his own implementation to report the file name and line number,
	 ex: printf("Wrong parameters value: file %s on line %d\r\n", file, line) */

	/* Infinite loop */
	while(1);
}

void disableWatchdog()
{
}
