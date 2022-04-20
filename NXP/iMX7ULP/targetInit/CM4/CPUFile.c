#include "IMX7ULP_sfr.h"
#include "iMX7ULP.h"


#define SCR_SCB_VTOR (*(unsigned volatile int*)0xE000ED08)
extern void InterruptRoutine();


void SysTickInit() 
{
  System_Control_Space_SysTick.SYST_RVR.B.RELOAD = 0x3A1B0;
  System_Control_Space_SysTick.SYST_CVR.B.CURRENT = 0x000000;
  System_Control_Space_SysTick.SYST_CSR.B.CLKSOURCE = 0x1;
  System_Control_Space_SysTick.SYST_CSR.B.TICKINT = 0x1;
  System_Control_Space_SysTick.SYST_CSR.B.ENABLE = 0x1;
}

void targetEnableInterrupts(void)
{
  SysTickInit();
  SCR_SCB_VTOR = 0x1FFD0000;
  __asm volatile ("CPSIE i");
}


void TimerInterruptHandler()
{
  //Disable timer
  System_Control_Space_SysTick.SYST_CSR.B.ENABLE = 0x0;
  InterruptRoutine();
  //Enable timer
  System_Control_Space_SysTick.SYST_CSR.B.ENABLE = 0x1;
}

void enableAllCores()
{
  PCC0.PCC_MU_A.B.CGC = 1;
  
  SIM.SIM_DGO_GP3.R = 0x2F000000;
  
  MUA.CR.B.GIRn = 0;
  MUA.CR.B.NMI = 0;
  MUA.CR.B.RSTH = 0;
  MUA.CR.B.BHR = 0;
  MUA.CR.B.BBOOT = 0;
}

void setupPLL()
{
  // Max clock is 200 MHz for M4 core.
  // System Osc. is 16MHz to 32MHz
  // PLL0 is PLL for M4 domain, main freq is 480MHz.
  // Page 1040 in PRM
  
  
  SCG0.SOSCCFG.R = 0x4;
  SCG0.SOSCDIV.R = 0x00010101;
  SCG0.SOSCCSR.R = 0x3;
  
  
  //Set run mode
  SCG0.RCCR.B.DIVCORE = 0x0;
  SCG0.RCCR.B.DIVPLAT = 0x0;
  SCG0.RCCR.B.DIVBUS = 0x0;
  SCG0.RCCR.B.DIVSLOW = 0x1;
  SCG0.RCCR.B.SCS = 0x3;
  SCG0.HCCR.B.SCS = 0x3;
  
  //Deinit SPLL0 first.
  SCG0.SPLLCSR.B.SPLLERR = 0x1;
  
  //Init SPLL0
  SCG0.SPLLDIV.R = 0x00010101;

  //SCG0.SPLLCFG.R = 0x00060100; //This is closer to MAX clock but then DAQ interrupt counter doesn't always get incremented.
  //I think this should be ~120MHz
  SCG0.SPLLCFG.R = 0x00030100;
  
  SCG0.SPLLCSR.R = 0x3;
  
  while (SCG0.SPLLCSR.B.SPLLVLD != 1) {}
  
  //Switch to SPLL as clock
  SCG0.RCCR.R = 0x06000015;
  SCG0.HCCR.B.SCS = 0x6;
}


void targetInit(void)
{
  #ifndef EMPTY_TARGET_INIT

  enableAllCores();
  setupPLL();
  //targetEnableInterrupts();
  targetEnableInterrupts();

  #endif /* EMPTY_TARGET_INIT */
}

void disableWatchdog()
{
  WDOG0.CS.B.EN = 0;
  WDOG0.TOVAL.R = 0xFFFF;
  while (WDOG0.CS.B.ULK);
  while (!WDOG0.CS.B.RCS);
  
  WDOG1.CS.B.EN = 0;
  WDOG1.TOVAL.R = 0xFFFF;
  while (WDOG1.CS.B.ULK);
  while (!WDOG1.CS.B.RCS);
  
  WDOG2.CS.B.EN = 0;
  WDOG2.TOVAL.R = 0xFFFF;
  while (WDOG2.CS.B.ULK);
  while (!WDOG2.CS.B.RCS);
}