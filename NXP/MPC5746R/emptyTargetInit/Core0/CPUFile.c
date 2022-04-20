#include "mcKinley.h"


#define SWT_SR 0xFC054010
#define SWT_CR 0xFC054000

unsigned char gotoStopLowPowerMode;  
unsigned char gotoHaltLowPowerMode;  
unsigned char mustInitLPM;
unsigned char isEnableSecondCore;

extern const uint32_t IntcIsrVectorTable[];
extern void e200zX_Interrupt_Setup(void);
void enableSecondCore();

void initVariables(void)
{                             
  gotoStopLowPowerMode = 0;  
  gotoHaltLowPowerMode = 0;
  mustInitLPM = 1;
}


void MC_MODE_INIT_TMP(){
  // Clear reset escalation
  MC_RGM.FRET.R = 0; 
  MC_RGM.DRET.R = 0;
  
  MC_ME.RUN_PC[0].R=0x000000FE;              /* Peripheral ON in every mode */
	MC_ME.RUN_PC[1].R=0x000000FE;              /* Peripheral ON in every mode */
	MC_ME.RUN_PC[2].R=0x000000FE;              /* Peripheral ON in every mode */
	MC_ME.RUN_PC[3].R=0x000000FE;              /* Peripheral ON in every mode */
	MC_ME.RUN_PC[4].R=0x000000FE;              /* Peripheral ON in every mode */
	MC_ME.RUN_PC[5].R=0x000000FE;              /* Peripheral ON in every mode */
	MC_ME.RUN_PC[6].R=0x000000FE;              /* Peripheral ON in every mode */
	MC_ME.RUN_PC[7].R=0x000000FE;              /* Peripheral ON in every mode */

  MC_ME.MCTL.R = 0x30005AF0;                                  /* Mode & Key */
	MC_ME.MCTL.R = 0x3000A50F;                         /* Mode & Key inverted */
	while(MC_ME.GS.B.S_MTRANS == 1);
  
  /* Turn On XOSC - PLL's remain off */
	MC_ME.DRUN_MC.R = 0x00130020; 			  /* Enable the XOSC */

	/* Route XOSC to the PLL's - IRC is default */
	MC_CGM.AC3_SC.B.SELCTL=1;                  /* Connect XOSC to PLL0 */
	MC_CGM.AC4_SC.B.SELCTL=1;                  /* Connect XOSC to PLL1 */

	/* Configure PLL0 Dividers - 200MHz from 40Mhz XOSC */
	PLLDIG.PLL0DV.B.RFDPHI1 = 4;  
	PLLDIG.PLL0DV.B.RFDPHI = 2;   
	PLLDIG.PLL0DV.B.PREDIV = 2;   
	PLLDIG.PLL0DV.B.MFD = 40;     

	/*Put PLL0 into Normal mode*/
	PLLDIG.PLL0CR.B.CLKCFG = 3;

	/* Configure PLL1 Dividers - 200MHz from 40Mhz XOSC */
	PLLDIG.PLL1DV.B.RFDPHI = 2;  
	PLLDIG.PLL1DV.B.MFD = 20;      

	/*Put PLL1 into Normal mode*/
	PLLDIG.PLL1CR.B.CLKCFG = 3;

	/* Enable loss of lock interrupts */
	PLLDIG.PLL0CR.B.LOLIE = 1;
	PLLDIG.PLL1CR.B.LOLIE = 1;

	/* Set the System Clock */
	// MC_ME.DRUN_MC.R = 0x001300F0;    /* Enable XOSC and PLLs - IRC is sysclk  */
	// MC_ME.DRUN_MC.R = 0x001300F1;    /* Enable XOSC and PLLs - XOSC is sysclk */
	// MC_ME.DRUN_MC.R = 0x001300F2;    /* Enable XOSC and PLLs - PLL0 is sysclk */
	MC_ME.DRUN_MC.R = 0x001300F4;    /* Enable XOSC and PLLs - PLL1 is sysclk */  
	  
	/* Configure System clock dividers */
	MC_CGM.SC_DC[0].B.DIV=0;         /* Fast crossbar Clock Divide by 0 */
	MC_CGM.SC_DC[0].B.DE=1;          /* Fast crossbar Clock Divide Enable */

	MC_CGM.SC_DC[1].B.DIV=1;         /* Slow crossbar Clock Divide by 2 */
	MC_CGM.SC_DC[1].B.DE=1;          /* Slow crossbar Clock Divide Enable */

	MC_CGM.SC_DC[2].B.DIV=3;         /* PBRIDGE Clock Divide by 4 */
	MC_CGM.SC_DC[2].B.DE=1;          /* PBRIDGE Clock Divide Enable */

	/* Enable and configure Aux clocks */
	MC_CGM.AC0_SC.B.SELCTL=2;        /* PLL0 PHI */

	MC_CGM.AC0_DC[0].B.DIV=4;        /* Divide by 5 -> 40MHz*/
	MC_CGM.AC0_DC[0].B.DE=1;         /* Enable Auxilliary Clock 0 divider 0 (general peripheral clock) */

	MC_CGM.AC0_DC[1].B.DIV=4;        /* Divide by 5 */   
	MC_CGM.AC0_DC[1].B.DE=1;         /* Enable Auxilliary Clock 0 divider 1 (SDADC clock) */

	MC_CGM.AC0_DC[2].B.DIV=4;        /* Divide by 5 */
	MC_CGM.AC0_DC[2].B.DE=1;         /* Enable Auxilliary Clock 0 divider 2 (SARADC clock) */

	/* Not Implemented on Cut 1 Silicon */
	//MC_CGM.AC0_DC[3].B.DIV=3;        /* Divide by 4 */
	//MC_CGM.AC0_DC[3].B.DE=1;         /* Enable Auxilliary Clock 0 divider 3 (DSPI_CLK0) */

	/* Not Implemented on Cut 1 Silicon */
	//MC_CGM.AC0_DC[4].B.DIV=3;        /* Divide by 4 */
	//MC_CGM.AC0_DC[4].B.DE=1;         /* Enable Auxilliary Clock 0 divider 4 (DSPI_CLK1/LIN_CLK) */

	MC_CGM.AC2_DC[0].B.DIV=3;        /* Divide by 4 */
	MC_CGM.AC2_DC[0].B.DE=1;         /* Enable Auxilliary Clock 2 divider 0 (FlexRay) */
	//MC_CGM.AC2_DC[1].B.DIV=3;        /* Divide by 6 */
	//MC_CGM.AC2_DC[1].B.DE=1;         /* Enable Auxilliary Clock 2 divider 1 (SENT) */

	MC_CGM.AC5_DC0.B.DIV=3;          /* Divide by 4 */
	MC_CGM.AC5_DC0.B.DE=1;           /* Enable Auxilliary Clock 5 divider 0 (PSI5) */

	MC_CGM.AC5_DC1.B.DIV=3;          /* Divide by 4 */
	MC_CGM.AC5_DC1.B.DE=1;           /* Enable Auxilliary Clock 5 divider 1 (PSI5) */

	//MC_CGM.AC5_DC2.B.DIV=3;          /* Divide by 4 */
	//MC_CGM.AC5_DC2.B.DE=1;           /* Enable Auxilliary Clock 5 divider 2 (PSI5) */

	/* Set Up clock selectors to allow clock out to be viewed */
	MC_CGM.AC6_SC.B.SELCTL=2;        /* Select PLL0-sysclk0 */
	MC_CGM.AC6_DC0.B.DE=1;           /* Enable AC2 divider 0 (SYSCLK0)*/
	MC_CGM.AC6_DC0.B.DIV=9;          /* Divide by 10 */

	//MC_CGM.AC7_SC.B.SELCTL=4;        /* Select PLL1-sysclk1 */
	//MC_CGM.AC7_DC0.B.DE=1;           /* Enable AC2 divider 1 (SYSCLK1)*/
	//MC_CGM.AC7_DC0.B.DIV=9;          /* Divide by 10 */

	/* Configure Pins for Clock out */
	//SIUL2.MSCR[15].R = 0x22800001;                          /* PA15 as Sysclk1 */
	//SIUL2.MSCR[88].R = 0x22800001;                           /* PF8 as Sysclk0 */
	
	/* CAN Clock Runs from XOSC by Default */
	MC_CGM.AC8_SC.R = 0x01000000;
	//MC_CGM.AC8_DC0.B.DE =1;                                  // Enable Auxilliary Clock 8 divider 0 (CAN Clock)
	//MC_CGM.AC8_DC0.B.DIV=7;                                  // CAN Clock Clock Divide by 4
	// Enable Auxilliary Clock 8 divider 0 (CAN Clock)
	// CAN Clock Clock Divide by 1
	MC_CGM.AC8_DC0.R = 0x80040000;

	MC_CGM.AC9_SC.B.SELCTL=1;       /* XOSC */   
	MC_CGM.AC9_DC0.B.DE =1;         /* Enable Auxilliary Clock 8 divider 0 (RTI/PIT?) */
	MC_CGM.AC9_DC0.B.DIV=3;         /* CAN Clock Clock Divide by 4 */

	MC_CGM.AC10_DC0.B.DE =1;                                // Enable Auxilliary Clock 10 divider 0 (ENET)
	MC_CGM.AC10_DC0.B.DIV=4;                                // Divide by 6

	/* Enable core 2 in all modes */
	MC_ME.CCTL[0].R = 0x00FE;
   
	/* Mode change Re-enter the drun mode, to start cores, clock tree & PLL1 */
	MC_ME.MCTL.R = 0x30005AF0;                                  /* Mode & Key */
	MC_ME.MCTL.R = 0x3000A50F;                         /* Mode & Key inverted */
										
	while(MC_ME.GS.B.S_MTRANS == 1);          /* Wait for mode entry complete */
	while(MC_ME.GS.B.S_CURRENT_MODE != 0x3);       /* Check DRUN mode entered */
}

void targetEnableInterrupts()
{
  INTC.CPR[1].B.PRI = 0;  //lower current INTC priority 
  PIT_0.TIMER[0].TCTRL.B.TIE = 1; //enable PIT0 interrupt
  PIT_0.TIMER[0].TFLG.B.TIF = 1; // clear interrupt flag
  PIT_0.TIMER[0].TCTRL.B.TEN = 1; //start PIT
  asm(" wrteei 1"); //enable external interrupts  
}


void targetInit()
{
  #ifndef EMPTY_TARGET_INIT

  /* 
    clock init is commented because on PLL init the chip flies away,
    suggested by Davor. TMP version of clock init function enables just peripheral
    clocks in all modes.
  */   
  //MC_MODE_INIT(); //on max CPU clock OCTB timestamp messages sometimes aren't generated.
  MC_MODE_INIT_TMP();
  initINTC();
  /*
    After mass erase PIT initialization fails (chip goes to running and can't be stopped),
    this is chip bug (PPC5746R2MMZ5 ON83M SBAA1433A). To get chip to work properly after
    mass erase, power cycle it. Then it should work.
  */
  initPIT();
  enableSecondCore();
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

void enableSecondCore()
{
  MC_ME.CADDR[1].R = 0xFE0001; //Set reset vector of CPU0, reset on mode change.
  MC_ME.CCTL[1].R = 0xFE; //Enable CPU0 modes.

  /* Mode change to re-enter the drun mode, for the CPU0 to start */
	MC_ME.MCTL.R = 0x30005AF0; // Mode & Key 
	MC_ME.MCTL.R = 0x3000A50F; // Mode & Key inverted
}

void InterruptHandler()
{
  int dummy = INTC.IACKR[1].R; 
  
  InterruptRoutine();
  
  PIT_0.TIMER[0].TFLG.B.TIF = 1;
}


void initPIT()
{
  PIT_0.MCR.B.MDIS = 0; //enable PIT
  PIT_0.TIMER[0].LDVAL.R = 0x9C40; //set the counter to reach 1ms 40000 old value
  INTC.PSR226_227.B.PRC_SELa =0x4; //CPU 1
  INTC.PSR226_227.B.PRIa = 0x1; //priority 1
}

void disableWatchdog()
{
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
