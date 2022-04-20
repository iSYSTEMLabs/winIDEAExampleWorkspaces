#include "mpc5600.h"
#include "bolero3m.h"
#include "MPC5604B_0M27V_0102.h"


int EXTERNAL_OSC = 1;
int INTERNAL_OSC = 0;

char neverTrueFlag = 0;

void TimerInterruptHandler();


void targetEnableInterrupts(void)
{
  enableInterrupts();  
}


void targetInit(void)
{
  #ifndef EMPTY_TARGET_INIT

  CPU_Init();
  meml(SWT_SR)=0xc520;
  meml(SWT_SR)=0xd928;
  meml(SWT_CR)=0x8000010A;
  targetEnableInterrupts();

  #endif /* EMPTY_TARGET_INIT */
}

void CPU_Init(void)
{   
  initModesAndClock(INTERNAL_OSC);
  initIrqVectors();
  initINTC();
  initPIT();
  enableSecondCore();
}

void disableWatchdog()
{
}

asm void initIrqVectors(void)
{
  lis r5, __IVPR_VALUE@h   
  ori r5, r5, __IVPR_VALUE@l
  mtIVPR r5 
  
  // Setup IVORx Registers
  lis r5, IVOR0_Handler@h
  ori r5, r5, IVOR0_Handler@l
  mtIVOR0 r5
    
  lis r5, IVOR1_Handler@h
  ori r5,  r5, IVOR1_Handler@l
  mtIVOR1 r5
    
  lis r5, IVOR2_Handler@h
  ori r5,  r5, IVOR2_Handler@l
  mtIVOR2 r5
    
  lis r5, IVOR3_Handler@h
  ori r5,  r5, IVOR3_Handler@l
  mtIVOR3 r5
    
  lis r5, IVOR4_Handler@h
  ori r5,  r5, IVOR4_Handler@l
  mtIVOR4 r5
    
  lis r5, IVOR5_Handler@h
  ori r5,  r5, IVOR5_Handler@l
  mtIVOR5 r5
    
  lis r5, IVOR6_Handler@h
  ori r5,  r5, IVOR6_Handler@l
  mtIVOR6 r5
    
  lis r5, IVOR7_Handler@h
  ori r5,  r5, IVOR7_Handler@l
  mtIVOR7 r5
    
  lis r5, IVOR8_Handler@h
  ori r5,  r5, IVOR8_Handler@l
  mtIVOR8 r5
    
  lis r5, IVOR9_Handler@h
  ori r5,  r5, IVOR9_Handler@l
  mtIVOR9 r5
    
  lis r5, IVOR10_Handler@h
  ori r5,  r5, IVOR10_Handler@l
  mtIVOR10 r5
    
  lis r5, IVOR11_Handler@h
  ori r5,  r5, IVOR11_Handler@l
  mtIVOR11 r5
    
  lis r5, IVOR12_Handler@h
  ori r5,  r5, IVOR12_Handler@l
  mtIVOR12 r5
    
  lis r5, IVOR13_Handler@h
  ori r5,  r5, IVOR13_Handler@l
  mtIVOR13 r5
    
  lis r5, IVOR14_Handler@h
  ori r5,  r5, IVOR14_Handler@l
  mtIVOR14 r5
    
  lis r5, IVOR15_Handler@h
  ori r5,  r5, IVOR15_Handler@l
  mtIVOR15 r5
}

void initINTC(void)
{
	/* Single core: initialize for HW vector mode */
  INTC.MCR.B.HVEN = 0;       
}


void enableInterrupts(void)
{
  /* Enable PIT1 interrupt & start PIT counting */
  PIT.CH[1].TCTRL.R = 0x000000003; 
  /* Single Core: Lower INTC's current priority */
  INTC.CPR.B.PRI = 0; 
  /* Enable external interrupts */
  asm(" wrteei 1");	    	     
}


void enableSecondCore(void)
{
  //start Z0 core
  meml(SSCM_DPM_BOOT)=0x42002; //start address at 0x10200 VLE code 
  meml(SSCM_DPM_KEY)=0x5AF0; //write key 1
  meml(SSCM_DPM_KEY)=0xA50F; //write key 2
}

unsigned char gotoStopLowPowerMode = 0;
unsigned char gotoStandbyLowPowerMode = 0;  

void targetEnterAndExitLowPowerMode()
{
  if(gotoStopLowPowerMode)
  {
    enterAndExitStopMode();
  }
  else
  {}
  
  if(gotoStandbyLowPowerMode)
  {
  }
  else
  {}
}

void enterAndExitStopMode()
{   
  ME.MER.R = 0x0000248D;      // Enable RUN3, STANDBY, STOP, DRUN, other modes 
  ME.DRUN.R     = 0x001F0010; // DRUN cfg: 16MHIRCON=1, syclk=16 MHz FIRC 
  ME.RUN[3].R   = 0x001F0010; // RUN3 cfg: 16MHIRCON, syclk=16 MHz FIRC 
  ME.STOP0.R    = 0x0015001F; // 56xxB STOP cfg: FIRCON=MVRON=1, flash LP, no sysclk
  ME.RUNPC[7].R = 0x00000088; // Run Peri. Cfg 7 settings: run in DRUN, RUN3 modes 
  ME.LPPC[7].R = 0x00000400;  // LP Peri. Cfg 7 settings: run in STOP    
  ME.PCTL[68].R = 0x3F; 	  // MPC56xxB/S SIU: select ME.RUNPC[7], ME>LPPC[7] 	
  ME.PCTL[69].R = 0x3F; 	  // MPC56xxB/S WKPU: select ME.RUNPC[7], ME>LPPC[7] 	
  ME.PCTL[91].R = 0x3F; 	  // MPC56xxB/S RTC/API: select ME.RUNPC[7], ME.LPPC[7]	
  
  ME.MCTL.R = 0x70005AF0;     // Enter RUN3 Mode & Key 
  ME.MCTL.R = 0x7000A50F;     // Enter RUN3 Mode & Inverted Key   
  while (ME.GS.B.S_MTRANS) {} // Wait for RUN3 mode transition to complete     
                              // Note: could wait here using timer and/or I_TC IRQ 
  while(ME.GS.B.S_CURRENTMODE != 7) {} // Verify RUN3 (0x7) is the current mode 

  CGM.SIRC_CTL.R = 0x00000301; // MPC56xxB: Div. SIRC by 4 & turn SIRC on in STANDBY
  RTC.RTCC.R = 0x00000000;     // Clear CNTEN to reset RTC (counter) 
  RTC.RTCC.R = 0xA01B1000;     // CLKSEL=SIRC div. by 4, FRZEN=CNTEN=1, RTCVAL=27 
  WKUP.WIREER.R = 0x00000002;  // MPC56xxB: Enable rising edge events on RTC 
  WKUP.WIFER.R  = 0x00000000;  // MPC56xxB: Enable analog filters - none   
  WKUP.WRER.R   = 0x00000002;  // MPC56xxB: Enable wakeup events for RTC 
  WKUP.WIPUER.R = 0x000FFFFF;  // MPC56xxB: Ena. WKUP pins pullups to stop leakage
   
  //enter LPM
  RTC.RTCC.R = 0x00000000;    // Clear CNTEN to reset RTC, enable reloading RTCVAL
 	RTC.RTCC.R = 0xA01B1000;    // CLKSEL=SIRC div. by 4, FRZEN=CNTEN=1, RTCVAL=27 
  WKUP.WISR.R = 0x00000002;   // MPC56xxB: Clear wake up flag RTC 

  ME.MCTL.R = 0xA0005AF0;     // Enter STOP mode and key 
  ME.MCTL.R = 0xA000A50F;     // Enter STOP mode and inverted key 
  while (ME.GS.B.S_MTRANS) {} // Wait STOP mode transition to complete  
  // STOP MODE ENTERED
   
  // ON STOP MODE EXIT, CODE CONTINUES HERE:
  while(ME.GS.B.S_CURRENTMODE != 7) {} // Verify RUN3 (0x7) is the current mode  
}


void TimerInterruptHandler()
{
  InterruptRoutine();
  /* MPC56xxP/B/S: CLear PIT 1 flag by writing 1 */
  PIT.CH[1].TFLG.B.TIF = 1;    
}
