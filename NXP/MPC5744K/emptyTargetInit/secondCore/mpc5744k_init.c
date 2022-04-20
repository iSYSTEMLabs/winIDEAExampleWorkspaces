/*****************************************************************************/
/* FILE NAME: mcu_init.c                       COPYRIGHT (c) Freescale 2012  */
/*                                                      All Rights Reserved  */
/* DESCRIPTION: Provides function to Initilise MPC5746M MCU                 */
/*                                                                           */
/*****************************************************************************/

#include "typedefs.h"
#include "mpc5746m.h"

/******************** Configure the Mode and Clock Tree **********************/
void MC_MODE_INIT(void){       
  
  meml(SWT_SR)=0xc520;
  meml(SWT_SR)=0xd928;
  meml(SWT_CR)=0xFF00010A;
  // best setting, DO NOT TOUCH THIS !
  // optimize xbar settings, park on last 
  // park Flash port 0 on core 1 instruction bus
  XBAR_0.CHANNEL[0].CRS.R = 0x003F0112;
  // park Flash port 1 on core 1 data bus
  XBAR_0.CHANNEL[1].CRS.R = 0x003F0113;  
  // park global RAM on core 1 data bus
  XBAR_0.CHANNEL[4].CRS.R = 0x003F0113;  
  // park slave 0 on core 2 data bus
  XBAR_1.CHANNEL[0].CRS.R = 0x003F0110;
  
  MC_RGM.DES.R = 0xFFFF;
  MC_RGM.FES.R = 0xFFFF;
  MC_ME.ME.R = 0x000005FF;
  
  /* Setting RUN Configuration Register ME_RUN_PC[0] */
  MC_ME.RUN_PC[0].R=0x000000FE;
  MC_ME.RUN_PC[1].R=0x000000FE;  
  MC_ME.RUN_PC[2].R=0x000000FE;  
  MC_ME.RUN_PC[3].R=0x000000FE;  
  MC_ME.RUN_PC[4].R=0x000000FE;  
  MC_ME.RUN_PC[5].R=0x000000FE;  
  MC_ME.RUN_PC[6].R=0x000000FE;  
  MC_ME.RUN_PC[7].R=0x000000FE;  
  
  /* Trigger DRUN mode Transision */
  MC_ME.MCTL.R = 0x30005AF0;                                  /* Mode & Key */
  MC_ME.MCTL.R = 0x3000A50F;                         /* Mode & Key inverted */
  while(MC_ME.GS.B.S_MTRANS == 1);               /* Wait for mode entry to complete */
  while(MC_ME.GS.B.S_CURRENT_MODE != 0x3);       /* Check DRUN mode has been entered */
  
  
  /*MC_ME.CCTL[0].R = 0x00FE;   // Enable core 2(IOP)
  MC_ME.CCTL[1].R = 0x00FE;   // enable core 0 in all modes 
  
  MC_ME.CADDR[1].R = 0x00FE2001; // Set Start address for core 0: Will reset and start
  
  /* RE enter the drun mode, to update the configuration */
  MC_ME.MCTL.R = 0x30005AF0;                       /* Mode & Key */
  MC_ME.MCTL.R = 0x3000A50F;                /* Mode & Key inverted */
                                      
  while(MC_ME.GS.B.S_MTRANS == 1);               /* Wait for mode entry to complete */
  while(MC_ME.GS.B.S_CURRENT_MODE != 0x3);       /* Check DRUN mode has been entered */
  

}
