#include "SR6Px_1.0D7_RMrev1.h"
#include "MC.h"

//------------
void DOMAIN_P_RunCores(void)
{
  MC_ME_PERIPHERAL_DOMAIN.CCTL0.R = 0x00FE;   // enable core 1
  MC_ME_PERIPHERAL_DOMAIN.CCTL1.R = 0x00FE;   // enable core 1
  
  MC_ME_PERIPHERAL_DOMAIN.CADDR0.R = 1; // Set Start address for core: Will reset and start
  MC_ME_PERIPHERAL_DOMAIN.CADDR1.R = 0x00000000 | 1; // Set Start address for core: Will reset and start
  
  // Enable required peripheries
  MC_ME_PERIPHERAL_DOMAIN.PCTL101.B.RUN_CFG = 1; // Set S_GST_0 to run on Peripheral Configuration RUN_PC1
  MC_ME_PERIPHERAL_DOMAIN.RUN_PC[1].B.DRUN = 1;  // Set RUN_PC1 to DRUN
  
  // RE enter the drun mode, to update the configuration 
  MC_ME_PERIPHERAL_DOMAIN.MCTL.R = 0x30005AF0;                // Mode & Key 
  MC_ME_PERIPHERAL_DOMAIN.MCTL.R = 0x3000A50F;                // Mode & Key inverted 
                                        
  while(MC_ME_PERIPHERAL_DOMAIN.GS.B.S_MTRANS == 1);          // Wait for mode entry to complete 
  while(MC_ME_PERIPHERAL_DOMAIN.GS.B.S_CURRENT_MODE != 0x3);  // Check DRUN mode has been entered 
}

//------------
void DOMAIN_0_RunCore_1(void)
{
  unsigned long (*ptr_C1)(unsigned long) = 0x2C400400; // Start address of core 1
  
  MC_ME_DOMAIN_0.CCTL1.R = 0x00FE;   // enable core 1
  MC_ME_DOMAIN_0.CADDR0.R &= ~1;
  MC_ME_DOMAIN_0.CADDR1.R = (unsigned long) ptr_C1 | 1; // Set Start address for core: Will reset and start
   
  // RE enter the drun mode, to update the configuration 
  MC_ME_DOMAIN_0.MCTL.R = 0x30005AF0;                // Mode & Key 
  MC_ME_DOMAIN_0.MCTL.R = 0x3000A50F;                // Mode & Key inverted 
                                        
  while(MC_ME_DOMAIN_0.GS.B.S_MTRANS == 1);          // Wait for mode entry to complete 
  while(MC_ME_DOMAIN_0.GS.B.S_CURRENT_MODE != 0x3);  // Check DRUN mode has been entered 
}

void DOMAIN_1_RunCore_0_1(void)
{
  unsigned long (*ptr_C0)(unsigned long) = 0x2C800400; // Start address of core 0
  unsigned long (*ptr_C1)(unsigned long) = 0x2CA00400; // Start address of core 1
  
  MC_ME_DOMAIN_1.CCTL0.R = 0x00FE;   // enable core 0
  MC_ME_DOMAIN_1.CCTL1.R = 0x00FE;   // enable core 1
  
  MC_ME_DOMAIN_1.CADDR0.R = (unsigned long) ptr_C0 | 1; // Set Start address for core 0: Will reset and start
  MC_ME_DOMAIN_1.CADDR1.R = (unsigned long) ptr_C1 | 1; // Set Start address for core 1: Will reset and start
   
  // RE enter the drun mode, to update the configuration 
  MC_ME_DOMAIN_1.MCTL.R = 0x30005AF0;                // Mode & Key 
  MC_ME_DOMAIN_1.MCTL.R = 0x3000A50F;                // Mode & Key inverted 
                                        
  while(MC_ME_DOMAIN_1.GS.B.S_MTRANS == 1);          // Wait for mode entry to complete 
  while(MC_ME_DOMAIN_1.GS.B.S_CURRENT_MODE != 0x3);  // Check DRUN mode has been entered 
}

void DOMAIN_2_RunCore_0_1(void)
{
  unsigned long (*ptr_C0)(unsigned long) = 0x2CC00400; // Start address of core 0
  unsigned long (*ptr_C1)(unsigned long) = 0x2CE00400; // Start address of core 1
  
  MC_ME_DOMAIN_2.CCTL0.R = 0x00FE;   // enable core 0
  MC_ME_DOMAIN_2.CCTL1.R = 0x00FE;   // enable core 1
  
  MC_ME_DOMAIN_2.CADDR0.R = (unsigned long) ptr_C0 | 1; // Set Start address for core: Will reset and start
  MC_ME_DOMAIN_2.CADDR1.R = (unsigned long) ptr_C1 | 1; // Set Start address for core: Will reset and start
   
  // RE enter the drun mode, to update the configuration 
  MC_ME_DOMAIN_2.MCTL.R = 0x30005AF0;                // Mode & Key 
  MC_ME_DOMAIN_2.MCTL.R = 0x3000A50F;                // Mode & Key inverted 
                                        
  while(MC_ME_DOMAIN_2.GS.B.S_MTRANS == 1);          // Wait for mode entry to complete 
  while(MC_ME_DOMAIN_2.GS.B.S_CURRENT_MODE != 0x3);  // Check DRUN mode has been entered 
}


void startCores()
{
  DOMAIN_0_RunCore_1();
  DOMAIN_1_RunCore_0_1();
  DOMAIN_2_RunCore_0_1();
  DOMAIN_P_RunCores();
}
