/*****************************************************************************/
/* FILE NAME: mcu_init.c                       COPYRIGHT (c) Freescale 2012  */
/*                                                      All Rights Reserved  */
/* DESCRIPTION: Provides function to Initilise MPC5746M MCU                 */
/*                                                                           */
/*****************************************************************************/ /********
   
   The cat1 1N65H has PLL bug: PLL can't be enabled and used
   The core runs on external XCOS on max. 40MHz ( max clock speed 160MHz 
   can't be configured duree to PLL bug )
   
********/  


#include "typedefs.h"
#include "mpc5744p.h"
#include "panther.h"

void MC_MODE_INIT(void);


/******************** Configure the Mode and Clock Tree **********************/


/******************** Configure the Mode and Clock Tree **********************/
void MC_MODE_INIT(void){  
  
   initResetReg();
   
   MC_ME.ME.R = 0x000005FF;
   
   /* Setting RUN Configuration Register ME_RUN_PC[0] */
   MC_ME.RUN_PC[0].R=0x000000FE;        /* Peripheral ON in every mode */   
   XOSC.CTL.B.OSCM  =1;	 	              //oscillator mode
   XOSC.CTL.B.EOCV = 0x80;              //stabilization counter

   //target mode RUN0
   MC_ME.MCTL.R = 0x40005AF0;     	    /* Mode & Key */
   MC_ME.MCTL.R = 0x4000A50F;           /* Mode & Key inverted */
   MC_ME.RUN_MC[0].B.XOSCON=1; 	        //Enable the EXTAL clk in RUN0 mode
   MC_ME.DRUN_MC.B.XOSCON=1; 	          //Enable the EXTAL clk in DRUN mode
   
   /* RE enter the drun mode, to update the configuration */
   //target mode DRUN
   MC_ME.MCTL.R = 0x30005AF0;           /* Mode & Key */
   MC_ME.MCTL.R = 0x3000A50F;           /* Mode & Key inverted */
   while(MC_ME.GS.B.S_MTRANS == 1);	    /* Wait for mode entry to complete */
   while(MC_ME.GS.B.S_CURRENT_MODE != 0x3);     /* Check DRUN mode has been entered */
   while(!MC_ME.GS.B.S_XOSC);		 	      // Wait for clock to stabilise

   // Configure CLK_OUT
   SIUL2.MSCR[22].R=0x22800001;      
   MC_CGM.AC6_SC.R = 0x01000000;	      // Select 40MHz XOSC as source for Aux clock select 6
   MC_CGM.AC6_DC0.R=0x80030000;		      // Enable Divider & div by 4
   
   //Check CLK_OUT 10MHz here
   MC_CGM.AC0_SC.B.SELCTL=1;		        // source AC0 is XOSC 
   MC_CGM.AC0_DC0.R = 0x80000000;	      // Aux clock select 0 divider 0 --> div by 1 (MOTC_CLK)
   MC_CGM.AC0_DC1.R = 0x80070000;   	  // Aux clock select 0 divider 1 --> div by 8 (SWG_CLK)
   MC_CGM.AC0_DC2.R = 0x80010000;   	  // Aux clock select 0 divider 2 --> div by 2 (ADC_CLK)
   MC_CGM.AC1_DC0.R = 0x80010000;  	    // Aux clock select 1 divider 0 --> div by 2 (FRAY_PLL_CLK)
   MC_CGM.AC1_DC1.R = 0x80030000;  	    // Aux clock select 1 divider 1 --> div by 4 (SENT_CLK)
   MC_CGM.AC2_DC0.R = 0x80070000; 	    // Aux clock select 2 divider 0 --> div by 8 (CAN_PLL_CLK)
   MC_CGM.PCS_SDUR.R = 0xFF;		        // Configure Switch Duration
   MC_ME.DRUN_MC.B.SYSCLK = 1;          /* Select system clock as 40MHz XOSC */

   //target mode DRUN
   MC_ME.MCTL.R = 0x30005AF0;     	    /* Mode & Key */
   MC_ME.MCTL.R = 0x3000A50F;           /* Mode & Key inverted */
  
   while(MC_ME.GS.B.S_MTRANS==1);	      /* Wait for mode entry to complete */
   while(MC_ME.GS.B.S_CURRENT_MODE!=0x3); /* Check DRUN mode has been entered */  
   while(MC_ME.GS.B.S_SYSCLK != 1);       /* fail is stuck here	 */
  
// it is running @ 40MHz external clock now   
   MC_CGM.PCS_SDUR.R = 0xFF;		        // Configure Switch Duration
   MC_ME.DRUN_MC.B.SYSCLK = 1;          /* Select system clock as 40MHz XOSC */
   MC_ME.MCTL.R = 0x30005AF0;           /* Mode & Key */
   MC_ME.MCTL.R = 0x3000A50F;           /* Mode & Key inverted */
  
   while(MC_ME.GS.B.S_MTRANS == 1);	    /* Wait for mode entry to complete */
   while(MC_ME.GS.B.S_CURRENT_MODE != 0x3); /* Check DRUN mode has been entered */  
   while(MC_ME.GS.B.S_SYSCLK != 1);     /* fail is stuck here	 */  
   
}


/********
   
   The cat1 1N65H has PLL bug: PLL can't be enabled and used
   The core runs on external XCOS on max. 40MHz ( max clock speed 160MHz 
   can't be configured duree to PLL bug )
   
********/  

void PLL_sys()
{ 
/*
   System Clk 40MHz - XOSC, Perif. Clk 40MHz
*/   
   MC_CGM.PCS_SDUR.R = 0xFF;		        // Configure Switch Duration
   MC_ME.DRUN_MC.B.SYSCLK = 1;          /* Select system clock as 40MHz XOSC */
   MC_ME.MCTL.R = 0x30005AF0;           /* Mode & Key */
   MC_ME.MCTL.R = 0x3000A50F;           /* Mode & Key inverted */
  
   while(MC_ME.GS.B.S_MTRANS == 1);	    /* Wait for mode entry to complete */
   while(MC_ME.GS.B.S_CURRENT_MODE != 0x3); /* Check DRUN mode has been entered */  
   while(MC_ME.GS.B.S_SYSCLK != 1);     /* fail is stuck here	 */  
   MC_CGM.AC3_SC.B.SELCTL = 1; 	        // Select XOSC as PLL0 ref
   MC_CGM.AC4_SC.B.SELCTL = 1; 	        // Select XOSC as PLL1 ref
   MC_CGM.AC6_SC.R = 0x01000000;		    // Select XOSC as source for Aux clock select 6
   MC_CGM.AC6_DC0.R = 0x80000000;		    // Enable Divider & div by 1

   MC_ME.DRUN_MC.B.SYSCLK = 1;          /* Select system clock as xosc */
   MC_ME.MCTL.R = 0x30005AF0;     	    /* Mode & Key */
   MC_ME.MCTL.R = 0x3000A50F;           /* Mode & Key inverted */
  
   while(MC_ME.GS.B.S_MTRANS == 1);	    /* Wait for mode entry to complete */
   while(MC_ME.GS.B.S_CURRENT_MODE != 0x3); /* Check DRUN mode has been entered */  
   while(MC_ME.GS.B.S_SYSCLK != 1);     /* fail is stuck here	 */
   
   // it is running @ 40MHz primary XOSC
   MC_CGM.SC_DC0.R = 0x80000000;	      // Sys clock select divider 0 --> div by 1 (PBRIDGEx_CLK)
   MC_CGM.AC6_SC.R = 0x02000000;	      // Select XOSC as source for Aux clock select 6
   MC_CGM.AC6_DC0.R = 0x80000000;		    // Enable Divider & div by 1

} 

void initResetReg(void){
  
   MC_RGM.DES.B.F_EDR         = 1;
   MC_RGM.DES.B.F_FFRR        = 1;
   MC_RGM.DES.B.F_POR         = 1;
   MC_RGM.DES.B.F_SUF         = 1;
   MC_RGM.DES.B.F_FIF         = 1;
   MC_RGM.DES.B.F_SOFT_DEST   = 1;
   MC_RGM.DES.B.F_TSR_DEST    = 1;
   MC_RGM.DES.B.F_VOR_DEST    = 1;

   MC_RGM.FRET.B.FRET         = 0;  
   MC_RGM.DRET.B.DRET         = 0;  

   MC_RGM.DERD.B.D_EDR        = 1;
   MC_RGM.DERD.B.D_FIF        = 1;
   MC_RGM.DERD.B.D_SUF        = 1;
   MC_RGM.DERD.B.D_FFRR       = 1;
   MC_RGM.DERD.B.D_POR        = 1;
   MC_RGM.DERD.B.D_SOF_DEST   = 1;
   MC_RGM.DERD.B.D_TSR_DEST   = 1;
   MC_RGM.DERD.B.D_VOR_DEST   = 1;

   MC_RGM.FES.B.F_VOR_FUNC    = 1;
   MC_RGM.FES.B.F_TSR_FUNC    = 1;
   MC_RGM.FES.B.F_JTAG_FUNC   = 1;
   MC_RGM.FES.B.F_FCCU_SOFT   = 1;
   MC_RGM.FES.B.F_FCCU_HARD   = 1;
   MC_RGM.FES.B.F_SOFT_FUNC   = 1;
   MC_RGM.FES.B.F_ST_DONE     = 1;
   MC_RGM.FES.B.F_EXR         = 1;
   
   MC_RGM.FERD.B.D_VOR_FUNC   = 1;
   MC_RGM.FERD.B.D_TSR_FUNC   = 1;
   MC_RGM.FERD.B.D_JTAG_FUNC  = 1;
   MC_RGM.FERD.B.D_FCCU_SOFT  = 1;
   MC_RGM.FERD.B.D_FCCU_HARD  = 1;
   MC_RGM.FERD.B.D_SOFT_FUNC  = 1;
   MC_RGM.FERD.B.D_ST_DONE    = 1;
   
   MC_RGM.FBRE.B.BE_VOR_FUNC  = 1;
   MC_RGM.FBRE.B.BE_TSR_FUNC  = 1;
   MC_RGM.FBRE.B.BE_JTAG_FUNC = 1;
   MC_RGM.FBRE.B.BE_FCCU_SOFT = 1;
   MC_RGM.FBRE.B.BE_FCCU_HARD = 1;
   MC_RGM.FBRE.B.BE_SOFT_FUNC = 1;
   MC_RGM.FBRE.B.BE_ST_DONE   = 1;
   MC_RGM.FBRE.B.BE_EXR       = 1;
   
}  