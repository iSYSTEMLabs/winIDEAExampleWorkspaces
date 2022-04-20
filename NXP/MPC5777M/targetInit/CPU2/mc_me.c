#include "mc_me.h"


/******************** Configure the Mode and Clock Tree **********************/
uint32_t ui32_mc_me_init(void)
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
   
   return 0;   
}


