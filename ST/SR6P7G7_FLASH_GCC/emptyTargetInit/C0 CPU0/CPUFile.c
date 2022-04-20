#include "SR6P7G7.h"


extern void asm_Initialization();


void disableWatchdog()
{
  
}


void ClearRAM(unsigned int Start,unsigned int End)
{
  unsigned int A=Start;
  while(A<End)
  {
    memll(A)=0;
    A+=8;
  }
}

void CopyDSPHCode()
{
  unsigned long S=0x2C410000;
  unsigned long E=S+0x00010000;
  unsigned long D=0x20500000;
  while(S<E)
  {
    memll(D)=memll(S);
    S+=8;
    D+=8;
  }
}

void CopyDMECode()
{
  unsigned long S=0x2C400000;
  unsigned long E=S+0x00010000;
  unsigned long D=0x20200000;
  while(S<E)
  {
    memll(D)=memll(S);
    S+=8;
    D+=8;
  }
}

void enable_DSPH_DME(void)
{
  CopyDMECode();
  ClearRAM(0x20100000,0x20110000); //DME RAM
  CopyDSPHCode();
  ClearRAM(0x20400000,0x20410000);//DSPH RAM

  
  MC_ME_PERIPHERAL_DOMAIN.CCTL0.R = 0x00FE;   // enable core 1
  MC_ME_PERIPHERAL_DOMAIN.CCTL1.R = 0x00FE;   // enable core 1
  
  MC_ME_PERIPHERAL_DOMAIN.CADDR0.R = 1; // Set Start address for core: Will reset and start
  MC_ME_PERIPHERAL_DOMAIN.CADDR1.R = 0x00000000 | 1; // Set Start address for core: Will reset and start
   
  // RE enter the drun mode, to update the configuration 
  MC_ME_PERIPHERAL_DOMAIN.MCTL.R = 0x30005AF0;                // Mode & Key 
  MC_ME_PERIPHERAL_DOMAIN.MCTL.R = 0x3000A50F;                // Mode & Key inverted 
                                        
  while(MC_ME_PERIPHERAL_DOMAIN.GS.B.S_MTRANS == 1);          // Wait for mode entry to complete 
  while(MC_ME_PERIPHERAL_DOMAIN.GS.B.S_CURRENT_MODE != 0x3);  // Check DRUN mode has been entered 
}


void enableC0_CPU1()
{
  unsigned long (*ptr_C)(unsigned long) = 0x28040400; //C0_CPU1 start address
  
  MC_ME_DOMAIN_0.CCTL1.R = 0x00FE;   // enable core 1
  MC_ME_DOMAIN_0.CADDR0.R &= ~1;
  MC_ME_DOMAIN_0.CADDR1.R = (unsigned long) ptr_C | 1; // Set Start address for core1: Will reset and start
   
  // RE enter the drun mode, to update the configuration 
  MC_ME_DOMAIN_0.MCTL.R = 0x30005AF0;                // Mode & Key 
  MC_ME_DOMAIN_0.MCTL.R = 0x3000A50F;                // Mode & Key inverted 
                                        
  while(MC_ME_DOMAIN_0.GS.B.S_MTRANS == 1);          // Wait for mode entry to complete 
  while(MC_ME_DOMAIN_0.GS.B.S_CURRENT_MODE != 0x3);  // Check DRUN mode has been entered 
}

void enableC1_Cores()
{
  /*Enables CPU0 and CPU1 of cluster C1*/
  unsigned long (*ptr_C0)(unsigned long) = 0x28080400; //C1 CPU0 start address
  unsigned long (*ptr_C1)(unsigned long) = 0x280C0400; //C1 CPU1 start address
  
  MC_ME_DOMAIN_1.CCTL0.R = 0x00FE;   // enable core 0
  MC_ME_DOMAIN_1.CCTL1.R = 0x00FE;   // enable core 1
  
  MC_ME_DOMAIN_1.CADDR0.R = (unsigned long) ptr_C0 | 1; // Set Start address for core0: Will reset and start
  MC_ME_DOMAIN_1.CADDR1.R = (unsigned long) ptr_C1 | 1; // Set Start address for core1: Will reset and start
   
  // RE enter the drun mode, to update the configuration 
  MC_ME_DOMAIN_1.MCTL.R = 0x30005AF0;                // Mode & Key 
  MC_ME_DOMAIN_1.MCTL.R = 0x3000A50F;                // Mode & Key inverted 
                                        
  while(MC_ME_DOMAIN_1.GS.B.S_MTRANS == 1);          // Wait for mode entry to complete 
  while(MC_ME_DOMAIN_1.GS.B.S_CURRENT_MODE != 0x3);  // Check DRUN mode has been entered 
}

void enableC2_Cores()
{
  unsigned long (*ptr_C0)(unsigned long) = 0x28100400; //C2 CPU0 start address
  unsigned long (*ptr_C1)(unsigned long) = 0x28140400; //C2 CPU1 start address
  
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

void enableSecondaryCores()
{
  ClearRAM(0x64008000, 0x64030000); //Clear R52 RAM
  enableC0_CPU1(); 
  enableC1_Cores();
  enableC2_Cores();
  enable_DSPH_DME();
}

void targetInit()
{
  #ifndef EMPTY_TARGET_INIT

  asm_Initialization();
  enableSecondaryCores();
  ClearRAM(0x64400000, 0x64440000); //Clear RAM for ETR buffer

  #endif /* EMPTY_TARGET_INIT */
}