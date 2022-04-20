#include "mcKinley.h"

#ifdef METROWERKS_2_5_NONSTRIP_DEADCODE
#pragma force_active on
#endif


unsigned char gotoStopLowPowerMode;  
unsigned char gotoHaltLowPowerMode;  
unsigned char mustInitLPM;
unsigned char isEnableSecondCore;

void initVariables(void)
{                             
  gotoStopLowPowerMode = 0;  
  gotoHaltLowPowerMode = 0;
  mustInitLPM = 1;
  isEnableSecondCore = 1;
}

void targetEnableInterrupts()
{
  INTC.CPR[2].B.PRI = 0;  //lower current INTC priority
  PIT_0.MCR.B.MDIS = 0; //enable PIT
  PIT_0.TIMER[0].TCTRL.B.TIE = 1; //enable PIT0 interrupt
  PIT_0.TIMER[0].TFLG.B.TIF = 1; // clear interrupt flag    
  PIT_0.TIMER[0].TCTRL.B.TEN = 1; //start PIT  */
  asm(" wrteei 1"); //enable external interrupts
}


void targetInit()
{
  #ifndef EMPTY_TARGET_INIT

  MC_MODE_INIT(); //on max CPU clock OCTB timestamp messages sometimes aren't generated.
  initINTC();                        
  initPIT();
  initVariables();  
  enableSecondCore();
  //initLPM();                                     
  //haltMode();
  //stopMode();
  targetEnableInterrupts();

  #endif /* EMPTY_TARGET_INIT */
}


void targetEnableWakeupInterrupts()
{
  INTC.CPR[2].B.PRI = 0;  //lower current INTC priority 
  PIT_0.RTI_TCTRL.B.TIE = 1; //enable interrupts
  PIT_0.RTI_TFLG.B.TIF = 1;  // clear interrupt flag
  PIT_0.RTI_TCTRL.B.TEN = 1; //enable RTI timer
  asm(" wrteei 1"); //enable external interrupts 
}

void TimerInterruptHandler()
{
  int dummy = INTC.IACKR[2].R;
  
  InterruptRoutine();
  
  PIT_0.TIMER[0].TFLG.B.TIF = 1; 
  //targetDisableWakeupInterrupts(); 
}

void enableSecondCore()
{
  MC_ME.CADDR[1].R = 0x00FE2001; // Set Start address for core 0: Will reset and start
  MC_ME.CCTL[0].R = 0x00FE;   // Enable core 2(IOP)
  MC_ME.CCTL[1].R = 0x00FE;   // enable core 0 in all modes 

  /* Mode change to re-enter the drun mode, for the CPU0 to start */
	MC_ME.MCTL.R = 0x30005AF0; // Mode & Key 
	MC_ME.MCTL.R = 0x3000A50F; // Mode & Key inverted
}


void targetDisableWakeupInterrupts()
{
  PIT_0.RTI_TCTRL.B.TEN = 0; // stop RTI timer
  PIT_0.RTI_TCTRL.B.TIE = 0; // disable interrupts
  PIT_0.RTI_TFLG.B.TIF = 1; // clear interrupt flag
}


void initPIT()
{
  //SSCM.ERROR.B.RAE = 1; //Mask 1N83B Errata, access to disabled PIT causes CPU to hang, if RAE == 0. Workaround causes other issues (unaccessible registers elsewhere).
  PIT_0.MCR.B.MDIS = 0; //enable PIT
  PIT_0.TIMER[0].LDVAL.R = 15500; //set the counter to reach 1ms 80000 old value
  INTC.PSR226_227.B.PRC_SELa =0xE; //CPU 0,1 and 2
  INTC.PSR226_227.B.PRIa = 0x1; //priority 1                 
  
  // this enables PIT_RTI which is needed for low-power mode wakeup
  PIT_0.MCR.B.MDIS_RTI = 0; //enable PIT_RTI
  PIT_0.RTI_LDVAL.R = 0x00800000; //set LDVAL
  INTC.PSR238_239.B.PRC_SELb =0xE; //CPU 0,1 and 2
  INTC.PSR238_239.B.PRIb = 2; //priority 1 
}

void disableWatchdog()
{
  SWT_2.SR.R = 0xc520;
  SWT_2.SR.R = 0xd928;
  SWT_2.CR.R = 0xFF00010A;  
}

void initINTC()
{
  e200zX_Interrupt_Setup();
}


void initLPM()
{                                                    
  MC_ME.ME.R = 0x000005FD;       // Enable RUN0,RUN3, STOP, HALT, DRUN, other modes 
  
  /* Mode change Re-enter the drun mode, to start cores, clock tree & PLL1 */
	MC_ME.MCTL.R = 0x30005AF0;                                  /* Mode & Key */
	MC_ME.MCTL.R = 0x3000A50F;                         /* Mode & Key inverted */
										
	while(MC_ME.GS.B.S_MTRANS == 1);          /* Wait for mode entry complete */
	while(MC_ME.GS.B.S_CURRENT_MODE != 0x3);       /* Check DRUN mode entered */
  
  
  /*ME.MCTL.R = 0x30005AF0;      // Enter DRUN Mode & Key 
  ME.MCTL.R = 0x3000A50F;      // Enter DRUN Mode & Inverted Key   
  while (MC_ME.GS.B.S_MTRANS) {}  // Wait for any mode transition to complete */    
 
  MC_ME.DRUN_MC.R     = 0x00130070;  // DRUN cfg: 16MHIRCON=1, syclk=16 MHz FIRC
  MC_ME.RUN_MC[3].R   = 0x00130070;  // RUN3 cfg: 16MHIRCON=1, syclk=16 MHz FIRC
  MC_ME.STOP_MC.R     = 0x00130010;  // 56xxB STOP cfg: FIRCON=MVRON=1, flash LP, no sysclk  
  MC_ME.HALT_MC.R     = 0x00130010;  // 56xxB HALT0 cfg: FIRCON=MVRON=1, flash running, sysclk
  
  MC_ME.RUN_PC[7].R = 0x00000088;  // Run Peri. Cfg 7 settings: run in DRUN, RUN3 modes 
  MC_ME.LP_PC[7].R = 0x00000500;   // LP Peri. Cfg. 7 settings: run in STOP, HALT0    
  //MC_ME.PCTL15.R = 0x3F; 	     // SIUL: select ME.RUNPC[7], ME.LPPC[7] 	
  MC_ME.PCTL30.R = 0x3F; 	     // PIT_RTC0: select ME.RUNPC[7], ME.LPPC[7]
  //PCTL15 = 0x3F; 	     // SIUL: select ME.RUNPC[7], ME.LPPC[7] 
  //MC_ME.PCTL31.R = 0x3F; 	     // PIT_RTC1: select ME.RUNPC[7], ME.LPPC[7]
  //MC_ME.PCTL91.R = 0x3F; 	     // MPC56xxB//S RTC//API: select ME.RUNPC[7], ME.LPPC[7] 	
   
  while (MC_ME.GS.B.S_MTRANS) {}  // Ensure any STANDBY to DRUN mode transition completed     
  MC_ME.MCTL.R = 0x70005AF0;      // Enter RUN3 Mode & Key 
  MC_ME.MCTL.R = 0x7000A50F;      // Enter RUN3 Mode & Inverted Key   
  while (MC_ME.GS.B.S_MTRANS) {}  // Wait for RUN3 mode transition to complete     
                               // Note: could wait here using timer and//or I_TC IRQ 
  while(MC_ME.GS.B.S_CURRENT_MODE != 7) {} // Verify RUN3 (0x7) is the current mode
  
  MC_CGM.AC9_SC.B.SELCTL = 0;
  MC_CGM.AC9_DC0.B.DE = 1;
  MC_CGM.AC9_DC0.B.DIV = 0;
  while(MC_CGM.AC9_SS.B.SELSTAT != 0){}   
  
  targetEnableWakeupInterrupts();
}

#define TRUE 1
#define FALSE 0

void targetEnterAndExitLowPowerMode()
{
  if(mustInitLPM)
  {
    initLPM();
    mustInitLPM = FALSE;
  }
  else
  {}
  
  PIT_0.RTI_TFLG.B.TIF = 1; // clear RTI interrupt flag
  
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

void enterAndExitHaltMode()
{ 
  MC_ME.MCTL.R = 0x80005AF0;      // Enter HALT Mode & Key 
  MC_ME.MCTL.R = 0x8000A50F;      // Enter HALT Mode & Inverted Key   
  while (MC_ME.GS.B.S_MTRANS) {}  // Wait for HALT mode transition to complete
}

void enterAndExitStopMode()
{                          
  MC_ME.MCTL.R = 0xA0005AF0;      // Enter STOP Mode & Key 
  MC_ME.MCTL.R = 0xA000A50F;      // Enter STOP Mode & Inverted Key   
  while (MC_ME.GS.B.S_MTRANS) {}  // Wait for STOP mode transition to complete
}
