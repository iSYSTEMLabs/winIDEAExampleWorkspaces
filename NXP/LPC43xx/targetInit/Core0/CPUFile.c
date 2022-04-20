#include "lpc43xx_cgu.h"
#include "lpc43xx_gpio.h"
#include "LPC43xx.h"


void initClock(void)
{   
  CGU_Init();
  CGU_SetPLL1(10); //set clock to 120MHz(12MHz multiply by 10)
	CGU_UpdateClock();
}

void initITM(void)
{
  ITM_LOCK_ACCESS_REGISTER = 0xC5ACCE55; //unlock write access to ITM
  ITM_TRACE_ENABLE_REGISTER = 0xFFFFFFFF; //enable stimulus port 0-31 
  ITM_TRACE_PRIVILEGE_REGISTER = 0x1; //set privilege
}


void targetEnableInterrupts()
{ 
  SysTick_Config(120000); //generate system tick for 120k ticks
  __asm volatile ("cpsie i");   
}


void targetInit(void)
{
  #ifndef EMPTY_TARGET_INIT

  initClock();
  initITM(); 
	GPIO_SetDir(4,0xFFFF,1); //setting all pins in the port as output
  M0APPMEMMAP=0x1B000000; // set 0x0 for M0 core
  RESET_CTRL1=0x0; // release second core so it can be set to run after DL of symbol table
  targetEnableInterrupts();

  #endif /* EMPTY_TARGET_INIT */
}


void enableSecondCore()
{
  RESET_CTRL1=0xBA; //release reset on second core
  RESET_CTRL1=0x0; //release reset on second core
}

void check_failed(uint8_t *file, uint32_t line)
{
	/* User can add his own implementation to report the file name and line number,
	 ex: printf("Wrong parameters value: file %s on line %d\r\n", file, line) */

	/* Infinite loop */
	while(1);
}

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


void disableWatchdog()
{
}
