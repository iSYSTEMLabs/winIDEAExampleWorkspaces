#include "XMC1200.h"


void CPU_Init()
{
  SCU_GENERAL_PASSWD = 0x000000C0UL;
	SCU_CLK_CLKCR = 0x3FF00400UL; // 8 MHz MCLK, 8 MHz PCLK
	while((SCU_CLK_CLKCR)&0x40000000UL);	// wait for VDDC to stabilize
	SCU_GENERAL_PASSWD = 0x000000C3UL;
}

void SysTickHandler()
{
}

void targetInit()
{   
  #ifndef EMPTY_TARGET_INIT

  CPU_Init();

  #endif /* EMPTY_TARGET_INIT */
}


void disableWatchdog()
{
}
