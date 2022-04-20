#include "Matterhorn.h"
#include "mpc5777m.h"


volatile int dummyVar = 0;
extern void ProfilerC_Interrupt(void);


#ifndef BOOT_ALL_FROM_BAF
void enableSecondaryCores()
{
  // clear Destructive Event Reset register									   
  MC_RGM.DES.R = 0xFFFF;
  // clear Functional Event Status register
  MC_RGM.FES.R = 0xFFFF;
  // enable all run modes except destructive reset mode
  MC_ME.ME.R = 0x000005FF;
   
  /* Trigger DRUN mode Transision */
  MC_ME.MCTL.R = 0x30005AF0;                     // Mode & Key 
  MC_ME.MCTL.R = 0x3000A50F;                     // Mode & Key inverted 
  while(MC_ME.GS.B.S_MTRANS == 1);               // Wait for mode entry to complete 
  while(MC_ME.GS.B.S_CURRENT_MODE != 0x3);       // Check DRUN mode has been entered 

  MC_ME.CCTL[1].R = 0x00FE;   // enable core 1 (Z7) in all modes - main_core0
  MC_ME.CCTL[3].R = 0x00FE;   // enable core 2 (Z7) in all modes - main_core1

  //MC_ME.CADDR[1].R = 0x00FF0000 | 0x00000001; // Set Start address for core 1 (Z7). Will reset and start
  //MC_ME.CADDR[3].R = 0x01020000 | 0x00000001; // Set Start address for core 2 (Z7). Will reset and start 
  
  MC_ME.CADDR[3].R = 0x00FF0000 | 0x00000001; // Set Start address for core 1 (Z7). Will reset and start
  MC_ME.CADDR[1].R = 0x01020000 | 0x00000001; // Set Start address for core 2 (Z7). Will reset and start 
  
   
  /* RE enter the drun mode, to update the configuration */
  MC_ME.MCTL.R = 0x30005AF0;                // Mode & Key 
  MC_ME.MCTL.R = 0x3000A50F;                // Mode & Key inverted 
                                        
  while(MC_ME.GS.B.S_MTRANS == 1);          // Wait for mode entry to complete 
  while(MC_ME.GS.B.S_CURRENT_MODE != 0x3);  // Check DRUN mode has been entered
}
#endif // BOOT_ALL_FROM_BAF
void setClock()
{
   MC_RGM.DES.R = 0xFFFF;
   MC_RGM.FES.R = 0xFFFF;
   MC_ME.ME.R = 0x000005FF;
   
   /* Setting RUN Configuration Register ME_RUN_PC[0] */
   MC_ME.RUN_PC[0].R=0x000000FE;                     /* Peripheral ON in every mode */
   MC_ME.RUN_PC[1].R=0x000000FE;                     /* Peripheral ON in every mode */
   MC_ME.RUN_PC[2].R=0x000000FE;                     /* Peripheral ON in every mode */
   MC_ME.RUN_PC[3].R=0x000000FE;                     /* Peripheral ON in every mode */
   MC_ME.RUN_PC[4].R=0x000000FE;                     /* Peripheral ON in every mode */
   MC_ME.RUN_PC[5].R=0x000000FE;                     /* Peripheral ON in every mode */
   MC_ME.RUN_PC[6].R=0x000000FE;                     /* Peripheral ON in every mode */
   MC_ME.RUN_PC[7].R=0x000000FE;                     /* Peripheral ON in every mode */

   /* Turn On XOSC - PLL's remain off */
   MC_ME.DRUN_MC.R = 0x00130020; 			  /* Enable the XOSC */

   /* Trigger DRUN mode Transision */
   MC_ME.MCTL.R = 0x30005AF0;                                  /* Mode & Key */
   MC_ME.MCTL.R = 0x3000A50F;                         /* Mode & Key inverted */
   while(MC_ME.GS.B.S_MTRANS == 1);               /* Wait for mode entry to complete */
   while(MC_ME.GS.B.S_CURRENT_MODE != 0x3);       /* Check DRUN mode has been entered */

   /* Route XOSC to the PLL's - IRC is default */
   MC_CGM.AC3_SC.B.SELCTL=1;                        /* Connect XOSC to PLL0 */
   MC_CGM.AC4_SC.B.SELCTL=1;                        /* Connect XOSC to PLL1 */

   /* Configure PLL0 Dividers -  from 40Mhx XOSC */
   PLLDIG.PLL0DV.B.RFDPHI1 = 15;
   PLLDIG.PLL0DV.B.RFDPHI = 2;
   PLLDIG.PLL0DV.B.PREDIV = 4;
   PLLDIG.PLL0DV.B.MFD = 40;// 200 MHz
//   PLLDIG.PLL0DV.B.MFD = 32; // 160Mhz
//   PLLDIG.PLL0DV.B.MFD = 16; // 80Mhz

   /*Put PLL0 into Normal mode*/
   PLLDIG.PLL0CR.B.CLKCFG = 3;

   /* Configure PLL1 Dividers - from 40Mhx XOSC */
   PLLDIG.PLL1DV.B.RFDPHI = 4;
//   PLLDIG.PLL1DV.B.MFD = 24;  // 120MHz
//   PLLDIG.PLL1DV.B.MFD = 32;  // 160MHz
   PLLDIG.PLL1DV.B.MFD = 16;  // 80MHz

   /*Put PLL1 into Normal mode*/
   PLLDIG.PLL1CR.B.CLKCFG = 3;

   /* Set the System Clock */
// MC_ME.DRUN_MC.R = 0x001300F0;	// ME_DRUN_MC - enable XOSC and PLLs - IRC is sysclk
 //MC_ME.DRUN_MC.R = 0x001300F1;	// ME_DRUN_MC - enable XOSC and PLLs - XOSC is sysclk   (20MHz)
//   MC_ME.DRUN_MC.R = 0x001300F2;       // ME_DRUN_MC - enable XOSC and PLLs - PLL0 is sysclk  (100MHz)
  MC_ME.DRUN_MC.R = 0x001300F4;       // ME_DRUN_MC - enable XOSC and PLLs - PLL1 is sysclk  (80MHz)

   /* Trigger DRUN mode Transision */
   MC_ME.MCTL.R = 0x30005AF0;                                  /* Mode & Key */
   MC_ME.MCTL.R = 0x3000A50F;                         /* Mode & Key inverted */
   while(MC_ME.GS.B.S_MTRANS == 1);               /* Wait for mode entry to complete */
   while(MC_ME.GS.B.S_CURRENT_MODE != 0x3);       /* Check DRUN mode has been entered */
}


void initPIT()
{
  PIT_0.MCR.B.MDIS = 0; //enable PIT
  PIT_0.TIMER[0].LDVAL.R = 18000; //set the counter to reach 1ms
  INTC.PSR226_227.B.PRC_SELa =0xE; //CPU 0,1 and 2
  INTC.PSR226_227.B.PRIa = 0x1; //priority 1
}

void initINTC()
{
  e200zX_Interrupt_Setup();
}

void targetEnableInterrupts()
{
  INTC.CPR[2].B.PRI = 0;  //lower current INTC priority 
  PIT_0.TIMER[0].TCTRL.B.TIE = 1; //enable PIT0 interrupt
  PIT_0.TIMER[0].TFLG.B.TIF = 1; // clear interrupt flag
  PIT_0.TIMER[0].TCTRL.B.TEN = 1; //start PIT
  asm(" wrteei 1"); //enable external interrupts
}


void targetInit()
{
  #ifndef EMPTY_TARGET_INIT

  setClock();
  initINTC();
  initPIT();
#ifndef BOOT_ALL_FROM_BAF
  enableSecondaryCores();
#endif // BOOT_ALL_FROM_BAF

  targetEnableInterrupts();

  #endif /* EMPTY_TARGET_INIT */
}


void TimerInterruptHandlerC()
{
  int dummy = INTC.IACKR[2].R;
  InterruptRoutine();
  PIT_0.TIMER[0].TFLG.B.TIF = 1;
}

void disableWatchdog()
{
  SWT_2_SR = 0xC520;
  SWT_2_SR = 0xD928;
  SWT_2_CR = 0xFF00010A;
}
