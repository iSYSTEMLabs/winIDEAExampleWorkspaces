#include "Chorus4M.h" 


/*
  Clock is running on 120 MHz, PIT clock on 60 MHz (max. 80 Mhz)    
*/
void MC_INIT(void)
{
  MC_RGM.DES.R 	= 0xFFFF;
  MC_RGM.FES.R 	= 0xFFFF;
  MC_ME.ME.R 	= 0x000005FF;
  MC_ME.ME.R = 0x0000FFFF;
  
  /*! Set RUN Configuration Registers | MC_ME.RUN_PC[n] */
  MC_ME.RUN_PCN[0].R=0x000000FE;              /* Peripheral ON in every mode  */
  MC_ME.RUN_PCN[1].R=0x000000FE;              /* Peripheral ON in every mode  */
  MC_ME.RUN_PCN[2].R=0x000000FE;              /* Peripheral ON in every mode  */
  MC_ME.RUN_PCN[3].R=0x000000FE;              /* Peripheral ON in every mode  */
  MC_ME.RUN_PCN[4].R=0x000000FE;              /* Peripheral ON in every mode  */
  MC_ME.RUN_PCN[5].R=0x000000FE;              /* Peripheral ON in every mode  */
  MC_ME.RUN_PCN[6].R=0x000000FE;              /* Peripheral ON in every mode  */
  MC_ME.RUN_PCN[7].R=0x000000FE;              /* Peripheral ON in every mode  */

  MC_ME.LP_PCN[0].R=0xFFFFFFFF;              /* Peripheral ON in every mode  */
	
	/* Turn On XOSC - PLL0 remain off */
  MC_ME.DRUN_MC.R = 0x00130030; 			  /* Enable the XOSC */
	
  /* Force transition mode */
  MC_ME.MCTL.R = 0x30005AF0;        		// DRUN Mode & Key
  MC_ME.MCTL.R = 0x3000A50F;        		// DRUN Mode & Key

  while(!MC_ME.GS.B.S_XOSC);                    // ME_GS Wait for external osc to stabilize.
  while(MC_ME.GS.B.S_MTRANS);                   // Waiting for end of transaction
  while(MC_ME.GS.B.S_CURRENT_MODE != 0x3);      // ME_GS Check DRUN mode has successfully been entered
    
  MC_CGM.AC3_SC.B.SELCTL=1;                        /* Connect XOSC to PLL0 */
  
  // XOSC = 40MHZ
  /* Configure PLL0 Dividers - PHI:180MHz PHI1:180MHz from 40Mhx XOSC - VCO:360MHz */
  PLLDIG.PLL0DV.B.RFDPHI1 = 4;
  PLLDIG.PLL0DV.B.RFDPHI = 1;
  PLLDIG.PLL0DV.B.PREDIV = 2;
   
  PLLDIG.PLL0DV.B.MFD = 9; //for XOSC

  /*Put PLL0 into Normal mode*/
  PLLDIG.PLL0CR.B.CLKCFG = 3; 

  MC_ME.DRUN_MC.R = 0x00130072;    /* Enable XOSC and PLL0 - PLL0 is sysclk */ //180Mhz

 /*! Execute mode change: Re-enter the DRUN mode to start cores, clock tree dividers, PCS, and PLL1 */
  MC_ME.MCTL.R = 0x30005AF0;                    /*! Write Mode and Key | MC_ME.MCTL */
  MC_ME.MCTL.R = 0x3000A50F;                    /*! Write Mode and Key inverted | MC_ME.MCTL */
  while(MC_ME.GS.B.S_MTRANS == 1);              /*! Wait for mode entry complete | MC_ME.GS[S_MTRANS] */
  while(MC_ME.GS.B.S_CURRENT_MODE != 0x3);      /*! Check DRUN mode entered |MC_ME.GS[S_CURRENT_MODE] */         
  
  
  CGM_AC12_DC4 |= (1 << CGM_AC12_DC4_DE);
  CGM_AC12_DC4 |= (0x1 << CGM_AC12_DC4_DIV);
  CGM_AC12_SC &= ~(0xF << CGM_AC12_SC_SELCTL);
  CGM_AC12_SC |= (0x2 << CGM_AC12_SC_SELCTL);
}

void MC_RUN_CORES(void)
{
   MC_ME.CCTL0.R = 0x00FE;   // Enable core 2(IOP)
   MC_ME.CCTL1.R = 0x00FE;   // enable core 0 in all modes 
   MC_ME.CCTL4.R = 0x00FE;   // Enable HSM cores in all modes
   
   MC_ME.CADDR1.R = 0x01012001; // Set Start address for core 0: Will reset and start
   MC_ME.CADDR4.R = 0x00622001; // Set Start address for HSM core: Will reset and start
   
   /* RE enter the drun mode, to update the configuration */
   MC_ME.MCTL.R = 0x30005AF0;                       /* Mode & Key */
   MC_ME.MCTL.R = 0x3000A50F;                /* Mode & Key inverted */
                                        
   while(MC_ME.GS.B.S_MTRANS == 1);               /* Wait for mode entry to complete */
   while(MC_ME.GS.B.S_CURRENT_MODE != 0x3);       /* Check DRUN mode has been entered */
}

void initTimer(){
  PIT0_MCR |= (1 << PIT0_MCR_MDIS);           // Disable clock
  PIT0_LDVAL0 = 0x2BF20;                      // Load value
  PIT0_MCR &= ~(1 << PIT0_MCR_MDIS);          // Enable clock  
}

void targetEnableInterrupts()
{
  e200zX_Interrupt_Setup();
  INTC_PSR226 &= ~(1 << INTC_PSR226_PRC_SEL0);     // Disable interrupt on proc. 0
  INTC_PSR226 |= (1 << INTC_PSR226_PRC_SEL2);      // Enable interrupt on proc. 2
  INTC_PSR226 |= (1 << INTC_PSR226_PRI);           // Set interrupt priority to 0; lowest
  INTC_CPR2 &= ~(0x3F << INTC_CPR2_PRI);           // Set interrupt priority to 0; lowest
  
  PIT0_TCTRL0 |= (1 << PIT0_TCTRL0_TIE);           // Timer interrupt enable
  PIT0_TFLG0 |= (1 << PIT0_TFLG0_TIF);             // Clear timeout flag
  PIT0_TCTRL0 |= (1 << PIT0_TCTRL0_TEN);           // Timer enable
  asm("wrteei 1");
}


void targetInit()
{
  #ifndef EMPTY_TARGET_INIT

  MC_INIT();  
  MC_RUN_CORES();
  initTimer();
  targetEnableInterrupts();

  #endif /* EMPTY_TARGET_INIT */
}


void disableWatchdog()
{
  SWT2_SR = 0xc520;
  SWT2_SR = 0xd928;
  SWT2_CR = 0xFF00010A;
  MC_RGM.FRET.R = 0;
  MC_RGM.DRET.R = 0;
  MC_RGM.DES.R = 0xFFFFFFFF;//'Destructive' Event Status Register
}

void InterruptHandler()
{
  int dummy = INTC_IACKR2; 
  
  InterruptRoutine();
  
  PIT0_TFLG0 |= (1 << PIT0_TFLG0_TIF);
}