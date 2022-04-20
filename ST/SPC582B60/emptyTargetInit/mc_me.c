#include "mc_me.h"

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
	
	/* Turn On XOSC - PLL's remain off */
  MC_ME.DRUN_MC.R = 0x00130030; 			  /* Enable the XOSC */
	
  /* Force transition mode */
  MC_ME.MCTL.R = 0x30005AF0;        		// DRUN Mode & Key
  MC_ME.MCTL.R = 0x3000A50F;        		// DRUN Mode & Key

  //while(!MC_ME.GS.B.S_XOSC);                 // ME_GS Wait for external osc to stabilize.
  while(MC_ME.GS.B.S_MTRANS);                   // Waiting for end of transaction
  while(MC_ME.GS.B.S_CURRENT_MODE != 0x3); // ME_GS Check DRUN mode has successfully been entered

  /* Route XOSC to the PLL's - IRC is default */
   MC_CGM.AC3_SC.B.SELCTL=1;                        /* Connect XOSC to PLL0 */
   MC_CGM.AC4_SC.B.SELCTL=1;                        /* Connect XOSC to PLL1 */

	
 // XOSC = 40MHZ
 /* Configure PLL0 Dividers - PHI:160MHz PHI1:200MHz from 40Mhx XOSC - VCO:800MHz */
  /* Configure PLL0 Dividers - PHI:160MHz PHI1:160MHz from 16MHz IRC - VCO:800MHz */
  PLLDIG.PLL0DV.B.RFDPHI1 = 4;
  //PLLDIG.PLL0DV.B.RFDPHI1 = 12; //in order to have: fPLL0_PHI1 = (fpll0_ref * 2 * MFD) / (PREDIV * RFDPHI1 * 2) = 16 * 2 * 30 / 1 * 12 * 2 = 40MHz
  PLLDIG.PLL0DV.B.RFDPHI = 4;
  PLLDIG.PLL0DV.B.PREDIV = 1;
   
  PLLDIG.PLL0DV.B.MFD = 4; //for XOSC
  //PLLDIG.PLL0DV.B.MFD = 30; //for FIRC=16MHz

  /*Put PLL0 into Normal mode*/
  PLLDIG.PLL0CR.B.CLKCFG = 3;

/* Configure PLL1 Dividers - 80MHz Out from 40Mhz XOSC - VCO:800MHz - No FM*/
  PLLDIG.PLL1DV.B.RFDPHI = 0;
  PLLDIG.PLL1DV.B.MFD = 3; //for PH1=40MHz, in order to have: fPLL1_PHI = (fpll1_ref * MFD) / (RFDPHI * 2) = 40 * 20 / 2 * 2 = 200MHz
  PLLDIG.PLL1FD.R = 0;

   
 /*Put PLL1 into Normal mode*/
  PLLDIG.PLL1CR.B.CLKCFG = 3;


//PLL0 (PLL0_PHI) = 40MHz, PLL1 (PLL1_PHI) = 80MHz      

  MC_ME.DRUN_MC.R = 0x001300F4;    /* Enable XOSC and PLLs - PLL1 is sysclk */ //80Mhz

 /*! Execute mode change: Re-enter the DRUN mode to start cores, clock tree dividers, PCS, and PLL1 */
  MC_ME.MCTL.R = 0x30005AF0;                    /*! Write Mode and Key | MC_ME.MCTL */
  MC_ME.MCTL.R = 0x3000A50F;                    /*! Write Mode and Key inverted | MC_ME.MCTL */
  while(MC_ME.GS.B.S_MTRANS == 1);              /*! Wait for mode entry complete | MC_ME.GS[S_MTRANS] */
  while(MC_ME.GS.B.S_CURRENT_MODE != 0x3);      /*! Check DRUN mode entered |MC_ME.GS[S_CURRENT_MODE] */         
}


