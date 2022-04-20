#include "Racerunner.h"


disableEscalationTresholdReset()
{
   MC_RGM.FRET.R = 0x0;
   MC_RGM.DRET.R = 0x0;
}


void initPIT()
{
  
  PIT_0.MCR.B.FRZ = 1;  //stop when in debug mode
  PIT_0.MCR.B.MDIS = 0; //enable PIT
  PIT_0.TIMER[0].LDVAL.R = 125000; //set the counter to reach 1ms
  INTC.PSR226_227.B.PRC_SELa =0x8; //CPU 0,1 and 2
  INTC.PSR226_227.B.PRIa = 0x1; //priority 1
}

void initINTC()
{
  e200zX_Interrupt_Setup();
}

//=============================================================================
// PLL0 SETUP (200MHz)
//=============================================================================
void PLL0_cfg(void)
{
    MC_CGM.AC3_SC.B.SELCTL=1;			// use XOSC 40MHz as PLL0 ref, IRC is default

    PLLDIG.PLL0DV.R = 0x5803201E;	// divider for PLL0: ref * { MFD / ( PREDIV * RFDHI) } = 40 MHz * { 30 / ( 2 * 3 ) } = 200 MHz
    PLLDIG.PLL0CR.R = 0x308;		// Set PLL0 into Normal mode

    MC_ME.DRUN_MC.B.PLL0ON=1; 		//Enable PLL0

    // re-enter the drun mode to update the configuration
    MC_ME.MCTL.R = 0x30005AF0;					// Mode & Key
    MC_ME.MCTL.R = 0x3000A50F;					// Mode & Key inverted
    while(MC_ME.GS.B.S_MTRANS == 1);			// Wait for mode entry to complete
    while(MC_ME.GS.B.S_CURRENT_MODE != 0x3);	// Check DRUN mode has been entered

    //waiting for PLL0 to lock
    while(PLLDIG.PLL0SR.B.LOCK ==0);
    while(MC_ME.GS.B.S_PLL0 ==0);
}
//=============================================================================
// PLL1 SETUP (266 MHz)
//=============================================================================
void PLL1_cfg(void)
{
    MC_CGM.AC4_SC.B.SELCTL=1;			// use XOSC as PLL1 ref, IRC is default

    PLLDIG.PLL1DV.R = 0x2001A;		// Divider for PLL1 40 * {(26+0.6) / (2*2)} = 266 Mhz
    PLLDIG.PLL1FD.R = 0x40030999;	// Fractional Divider 2457/2^12=0.6 in above calculation
    PLLDIG.PLL1CR.R = 0x8;			// Set PLL1 into Normal mode

    MC_ME.DRUN_MC.B.PLL1ON=1; 		//Enable PLL1

    // re-enter the drun mode to update the configuration
    MC_ME.MCTL.R = 0x30005AF0;					// Mode & Key
    MC_ME.MCTL.R = 0x3000A50F;					// Mode & Key inverted
    while(MC_ME.GS.B.S_MTRANS == 1);			// wait for mode entry to complete
    while(MC_ME.GS.B.S_CURRENT_MODE != 0x3);	// Check DRUN mode has been entered

    // waiting for PLL1 to lock
    while(PLLDIG.PLL1SR.B.LOCK ==0);
    while(MC_ME.GS.B.S_PLL1 ==0);

    MC_ME.DRUN_MC.B.SYSCLK=4;					// PLL1 system CLK

    // re-enter the drun mode to update the configuration
    MC_ME.MCTL.R = 0x30005AF0;					// Mode & Key
    MC_ME.MCTL.R = 0x3000A50F;					// Mode & Key inverted
    while(MC_ME.GS.B.S_MTRANS == 1);			// wait for mode entry to complete
    while(MC_ME.GS.B.S_CURRENT_MODE != 0x3);	// Check DRUN mode has been entered
}

void setClocks()
{
  /* Enable all modes */
  MC_ME.ME.R = 0x000005FF;                   
   
  /* Disable PLLs */
  MC_ME.DRUN_MC.B.PLL0ON = 0;
  MC_ME.DRUN_MC.B.PLL1ON = 0;
   
  /* Setting RUN Configuration Register ME_RUN_PC[0] */
  MC_ME.RUN_PC[0].R=0x000000FE;                     /* Peripheral ON in every mode */
  MC_ME.RUN_PC[1].R=0x000000FE;                     /* Peripheral ON in every mode */
  MC_ME.RUN_PC[2].R=0x000000FE;                     /* Peripheral ON in every mode */
  MC_ME.RUN_PC[3].R=0x000000FE;                     /* Peripheral ON in every mode */
  MC_ME.RUN_PC[4].R=0x000000FE;                     /* Peripheral ON in every mode */
  MC_ME.RUN_PC[5].R=0x000000FE;                     /* Peripheral ON in every mode */
  MC_ME.RUN_PC[6].R=0x000000FE;                     /* Peripheral ON in every mode */
  MC_ME.RUN_PC[7].R=0x000000FE;                     /* Peripheral ON in every mode */
  
  /* Enable the XOSC */
  MC_ME.DRUN_MC.B.XOSCON = 1;                      
  
  /* Trigger DRUN mode Transision */
  MC_ME.MCTL.R = 0x30005AF0;                        /* Mode & Key */
  MC_ME.MCTL.R = 0x3000A50F;                        /* Mode & Key inverted */
  while(MC_ME.GS.B.S_MTRANS == 1);                  /* Wait for mode entry to complete */
  while(MC_ME.GS.B.S_CURRENT_MODE != 0x3);          /* Check DRUN mode has been entered */
  
  /* Configure the MCU to run*/
  PLL0_cfg();
  PLL1_cfg();
}
void targetEnableInterrupts()
{
  INTC.CPR[0].B.PRI = 0;  //lower current INTC priority 
  PIT_0.TIMER[0].TCTRL.B.TIE = 1; //enable PIT0 interrupt
  PIT_0.TIMER[0].TFLG.B.TIF = 1; // clear interrupt flag
  PIT_0.TIMER[0].TCTRL.B.TEN = 1; //start PIT
  asm(" wrteei 1"); //enable external interrupts
}


void targetInit()
{
  #ifndef EMPTY_TARGET_INIT

  disableEscalationTresholdReset();
  setClocks();
  initINTC();
  initPIT();
  targetEnableInterrupts();

  #endif /* EMPTY_TARGET_INIT */
}


void TimerInterruptHandler(void)
{
  InterruptRoutine();
  targetEnableInterrupts();
}


void disableWatchdog()
{
}
