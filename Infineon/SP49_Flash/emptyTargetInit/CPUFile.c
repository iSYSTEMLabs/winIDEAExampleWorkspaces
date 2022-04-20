#include "SP49.h"


unsigned char gotoStopLowPowerMode = 0;
unsigned char gotoStandbyLowPowerMode = 0;
unsigned char gotoSleepLowPowerMode = 0;

#define LOW_PWR_PWRDOWN   0x0
#define LOW_PWR_STANDBY   0x1


void disableWatchdog()
{
}


void enterAndExitSleepMode()
{
  //Configure timer0 to wakeup before watchdog elapses. Select Timer-Mode0 (16-bit timer with reload). Timer0 uses clksel = LPRC * 2
  Corelogic_TIMERCFG01 = ((0x2 << Corelogic_TIMERCFG01_T0CLKSEL) | (0x0 << Corelogic_TIMERCFG01_T0DIVSEL) | (0x0 << Corelogic_TIMERCFG01_T01MODE) | (Corelogic_TIMERCFG01_T01EN_Msk));

  //Load Timer-values appropriate for ~500ms
  Corelogic_TIMER01 = (uint16_t)((float)(2200 * 2 / 2) + 0.5);							// T0H and T0L
  Corelogic_TIMER01 |= (((uint32_t)((float)(2200 * 2 / 2) + 0.5)) << 16);	// T1H and T1L
  
  // Enable resume from T0 and start T0
  System_Controller_RESUMEMASK &= ~(0x1 << System_Controller_RESUMEMASK_RET0M);
  Corelogic_TIMERCFG01 |= (0x1 << Corelogic_TIMERCFG01_T0RUN);        
  System_Controller_RESUMEFLAGS = 0x0000000F;
  Wakeup_Controller_DEVSTATUS = 0xFFFFFFFF;
  System_Controller_SYSCCTRL |= (0x1 << System_Controller_SYSCCTRL_IDLE);
  Corelogic_COLFLAGS = Corelogic_COLFLAGS_T0FULL_Msk;		// Write-clear T0FULL-flag
  Corelogic_TIMERCFG01 |= (0x1 << Corelogic_TIMERCFG01_WDRES); // Watchdog feed
} 

void enterAndExitStandbyMode()
{
  //Configure sampling-timer for typ. 500ms and start it
  System_Controller_STMR = (45000);
  System_Controller_STMR |= (0x1 << System_Controller_STMR_STMREN);
  System_Controller_RESUMEMASK &= ~(0x1 << System_Controller_RESUMEMASK_RESTFM);		// Enable resume by sampling-timer
  
  Corelogic_TIMERCFG01 |= (0x1 << Corelogic_TIMERCFG01_WDRES); // Watchdog feed
  System_Controller_RESUMEFLAGS = 0xFFFFFFFF;	// Write-clear all resume-flags
  Wakeup_Controller_DEVSTATUS = 0xFFFFFFFF;		// Write-clear all flags in DEVSTATUS
  Lib_State_Low_Power(COM_MISC_EXT_LP_STNDBY);
} 

void enterAndExitStopMode()
{
  Lib_Calib_Precounter(179);
  Lib_Serv_Init_Interval_Timer(30);
  
  Wakeup_Controller_DEVSTATUS = 0xFFFFFFFF;		// Write-clear all flags in DEVSTATUS
  
  // All wakeup- and reset-flags should be cleared here from branches above. Go to PDWN.
  Lib_State_Low_Power(COM_MISC_EXT_LP_PWD);
} 

void targetEnterAndExitLowPowerMode()
{
  Corelogic_TIMERCFG01 |= (0x1 << Corelogic_TIMERCFG01_WDRES); // Watchdog feed
  Wakeup_Controller_DEVSTATUS = 0xFFFFFFFF; //must be cleared before entering LOW POWER
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

void targetInit(void)
{
  #ifndef EMPTY_TARGET_INIT



  #endif /* EMPTY_TARGET_INIT */
}
