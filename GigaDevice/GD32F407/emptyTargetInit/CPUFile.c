#include "GD32F407_sfr.h"

void targetEnableInterrupts()
{
  System_Control_Space_SysTick.SYST_CSR.B.ENABLE = 1;     // Counter and exception request enable
  System_Control_Space_SysTick.SYST_CSR.B.TICKINT = 1;    // Exception request enable
}

void initClock()
{
  // Register reset
  RCU.PLL.R = 0x24000000;
  RCU.CFG0.R = 0x00000000;
  
  RCU.PLL.B.PLLSEL = 0;                 // IRC16M PPL source clock -> 16MHz
  RCU.PLL.B.PLLPSC = 8;                 // 16MHz / 8 -> 2MHz
  RCU.PLL.B.PLLN = 200;                 // 2MHz * 200 -> 400MHz
  RCU.PLL.B.PLLP = 0;                   // 400MHz / 2 -> 200MHz
  
  RCU.CTL.B.PLLEN = 1;                  // PLL enable
  while( !(RCU.CTL.B.PLLSTB) );         // Wait for PLL to stabilize
  
  RCU.CFG0.B.AHBPSC = 0x0;              // CK_AHB = CK_SYS
  RCU.CFG0.B.APB1PSC = 5;               // CK_APB1 = CK_AHB / 4
  RCU.CFG0.B.APB2PSC = 4;               // CK_APB2 = CK_AHB / 2
  
  RCU.CFG0.B.SCS = 2;                   // CK_PLLP as CK_SYS source
  while( !(RCU.CFG0.B.SCSS == 2) );     // Wait for clock switch
}

void initSysTick()
{
  System_Control_Space_SysTick.SYST_CSR.B.ENABLE = 0;     // Disables counter and exception request
  System_Control_Space_SysTick.SYST_RVR.R = 0x30D0E;      // SysTick start value = 199950 @ 200MHz
  System_Control_Space_SysTick.SYST_CVR.R = 0X0;          // Clear current value
  System_Control_Space_SysTick.SYST_CSR.B.CLKSOURCE = 1;  // Use CPU clock
}

void targetInit()
{
  #ifndef EMPTY_TARGET_INIT

  initClock();
  initSysTick();
  targetEnableInterrupts();

  #endif /* EMPTY_TARGET_INIT */
}

void disableWatchdog()
{
}
