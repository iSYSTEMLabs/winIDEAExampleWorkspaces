#include "mpc5600.h"
#include "MPC5604B_0M27V_0102.h"
#include "lowPowerMode.h"

#ifdef METROWERKS_2_5_NONSTRIP_DEADCODE
#pragma force_active on
#endif


/* Counter for PIT 1 interrupts */
uint32_t Pit1Ctr = 0;

unsigned char gotoStandbyLowPowerMode;
unsigned char gotoStopLowPowerMode;  
unsigned char gotoHaltLowPowerMode;  
unsigned char mustInitLPM = TRUE;


void targetEnableInterrupts(void)
{
  enableInterrupts();  
}


void targetInit(void)
{
  #ifndef EMPTY_TARGET_INIT

  initCPU();

  isITest = 0;  //compiler hack 
  targetEnableInterrupts();

  #endif /* EMPTY_TARGET_INIT */
}

void initCPU(void)
{
  initModesAndClock();
  initIrqVectors();
  initINTC();
  initPIT();
}  

void disableWatchdog()
{
  /* clear soft lock bit */
  SWT.SR.R = 0x0000c520;
  SWT.SR.R = 0x0000d928;
  /* clear watchdog enable */
  SWT.CR.R = 0x8000010A;
}

asm void initIrqVectors(void)
{
  lis	   r3, __IVPR_VALUE@h
  ori      r3, r3, __IVPR_VALUE@l 
  mtivpr   r3								
}

void initINTC(void)
{
	/* Single core: initialize for HW vector mode */
  INTC.MCR.B.HVEN = 1;       
}

void initPIT(void)
{
  /* Enable PIT and configure to stop in debug mode */
  PIT.PITMCR.R = 0x00000001;       
  /* Timeout= 64000 sysclks x 1sec/64M sysclks (measured with OSC set to 1ms)*/
  PIT.CH[1].LDVAL.R = 64000;
  /* Enable PIT1 interrupt & start PIT counting */
  PIT.CH[1].TCTRL.R = 0x000000003; 
  /* PIT 1 interrupt vector with priority 1 */
  INTC.PSR[60].R = 0x01;           
}


void enableInterrupts(void)
{
  /* Single Core: Lower INTC's current priority */
  INTC.CPR.B.PRI = 0;          
  /* Enable external interrupts */
  asm(" wrteei 1");	    	     
}


#define TRUE 1
#define FALSE 0

void initLPM()
{
  ME.MER.R = 0x0000259D;       // Enable RUN3, STANDBY, STOP, HALT, DRUN, other modes 
  
  ME.MCTL.R = 0x30005AF0;      // Enter DRUN Mode & Key 
  ME.MCTL.R = 0x3000A50F;      // Enter DRUN Mode & Inverted Key   
  while (ME.GS.B.S_MTRANS) {}  // Wait for RUN3 mode transition to complete     
 
  ME.DRUN.R     = 0x001F0074;  // DRUN cfg: 16MHIRCON=1, syclk=16 MHz FIRC 
  ME.RUN[3].R   = 0x001F0074;  // RUN3 cfg: 16MHIRCON=1, syclk=16 MHz FIRC 
  ME.STOP0.R    = 0x0015001F;  // 56xxB STOP cfg: FIRCON=MVRON=1, flash LP, no sysclk
  ME.STANDBY0.R = 0x0015001F;  // 56xxB STANDBY cfg: FIRCON=MVRON=1, flash LP, no sysclk
  ME.HALT0.R    = 0x001A0010;  // 56xxB HALT0 cfg: FIRCON=MVRON=1, flash running, sysclk
  //ME.STANDBY0.R  = 0x0085000F; // 56xxB STANDBY cfg: FIRCON = 0 
  ME.RUNPC[7].R = 0x00000088;  // Run Peri. Cfg 7 settings: run in DRUN, RUN3 modes 
  ME.LPPC[7].R = 0x00000500;   // LP Peri. Cfg. 7 settings: run in STOP, HALT0    
  ME.PCTL[68].R = 0x3F; 	     // MPC56xxB//S SIU: select ME.RUNPC[7], ME.LPPC[7] 	
  ME.PCTL[69].R = 0x3F; 	     // MPC56xxB//S WKPU: select ME.RUNPC[7], ME.LPPC[7] 	
  ME.PCTL[91].R = 0x3F; 	     // MPC56xxB//S RTC//API: select ME.RUNPC[7], ME.LPPC[7] 	
 
  while (ME.GS.B.S_MTRANS) {}  // Ensure any STANDBY to DRUN mode transition completed     
  ME.MCTL.R = 0x70005AF0;      // Enter RUN3 Mode & Key 
  ME.MCTL.R = 0x7000A50F;      // Enter RUN3 Mode & Inverted Key   
  while (ME.GS.B.S_MTRANS) {}  // Wait for RUN3 mode transition to complete     
                               // Note: could wait here using timer and//or I_TC IRQ 
  while(ME.GS.B.S_CURRENTMODE != 7) {} // Verify RUN3 (0x7) is the current mode 

  CGM.SIRC_CTL.R = 0x00000301; // MPC56xxB: Divide SIRC by 4 & turn SIRC on in STANDBY 
  RTC.RTCC.R = 0x00000000;     // Clear CNTEN to reset 
  RTC.RTCC.R = 0xA01B1000;     // CLKSEL=SIRC (div. by 4), FRZEN=CNTEN=1, RTCVAL=27  
  WKUP.WIREER.R = 0x00000002;  // MPC56xxB: Enable rising edge events on RTC 
  WKUP.WIFER.R  = 0x00000000;  // MPC56xxB: Enable analog filters
  WKUP.WRER.R   = 0x00000002;  // MPC56xxB: Enable wakeup events for RTC - for STOP, STANDBY 
  WKUP.IRER.R   = 0x00000002;  // MPC56xxB: Enable wakeup interrupts for RTC - for HALT 
  WKUP.WIPUER.R = 0x000FFFFF;  // MPC56xxB: Enable WKUP pins pullups to stop leakage
}

void targetEnterAndExitLowPowerMode()
{
  if(mustInitLPM)
  {
    initLPM();
    mustInitLPM = FALSE;
  }
  else
  {}
  
  WKUP.WISR.R   = 0x000FFFFF;  // MPC56xxB: Clear all wake up flags 
  RTC.RTCC.R  = 0x00000000;   // Clear CNTEN to reset RTC, enable reloading RTCVAL
 	RTC.RTCC.R  = 0xA0031000;   // CLKSEL=SIRC div. by 4, FRZEN=CNTEN=1, RTCVAL=3 
  WKUP.WISR.R = 0x00000002;   // MPC56xxB: Clear wake up flag RTC 
  enableInterrupts();
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
  
  if(gotoHaltLowPowerMode)
  {
    enterAndExitHaltMode();
  }
  else
  {}
}

void enterAndExitStandbyMode()
{  
  RGM.DES.R = 0xFFFF;          // Clear destructive reset flags 
  RGM.FES.R = 0xFFFF;          //  & clear functional reset flags 

  ME.MCTL.R = 0xD0005AF0;      // Enter STANDBY mode and key 
  ME.MCTL.R = 0xD000A50F;      // Enter STANDBY mode and inverted key 
  while (ME.GS.B.S_MTRANS) {}  /* Wait mode transition to complete */
}

void enterAndExitStopMode()
{  
  ME.MCTL.R = 0xA0005AF0;     // Enter STOP mode and key 
  ME.MCTL.R = 0xA000A50F;     // Enter STOP mode and inverted key 
  while (ME.GS.B.S_MTRANS) {} // Wait STOP mode transition to complete  
}

void enterAndExitHaltMode()
{  
  ME.MCTL.R = 0x80005AF0;     // Enter HALT mode and key 
  ME.MCTL.R = 0x8000A50F;     // Enter HALT mode and inverted key 
  while (ME.GS.B.S_MTRANS) {} // Wait HALT mode transition to complete  
}

void catchResetFromStandby()
{
  if(RGM.FES.B.F_EXR == 0 && RGM.DES.B.F_POR == 0)//Reset from low power mode
  {
    onExitLowPowerModeTestBreakpoint(FROM_RESET);
  }
  else
  {}
}
