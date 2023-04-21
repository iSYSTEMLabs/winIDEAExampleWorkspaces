#include "SR6G7.h"

extern void enableGroup0Ints();
extern void enableGroup1Ints();
extern void setPriorityMask();
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
  unsigned long S=0x28410000;
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
  unsigned long S=0x28400000;
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
  ClearRAM(0x20100000,0x20110000);  //DME RAM
  CopyDSPHCode();
  ClearRAM(0x20400000,0x20410000);  //DSPH RAM
  
  ME_PER_CCTL01 = 0x00FE00FE;       // enable core 0 & 1
  
  ME_PER_CADDR0 = 1;                // Set Start address for core: Will reset and start
  ME_PER_CADDR1 = 0x00000000 | 1;   // Set Start address for core: Will reset and start
  
  // RE enter the drun mode, to update the configuration 
  ME_PER_MCTL = 0x30005AF0;          // Mode & Key 
  ME_PER_MCTL = 0x3000A50F;          // Mode & Key inverted 
  
  while(ME_PER_GS & (1 << 27));          // Wait for mode entry to complete 
  while(ME_PER_GS & (0b1111 << 28) != (0b0011 << 28));  // Check DRUN mode has been entered 
}


void enableC0_CPU1()
{
  unsigned long (*ptr_C)(unsigned long) = (long unsigned int (*)(long unsigned int)) 0x28040400; //C0_CPU1 start address
  
  ME_CORE0_CCTL01 = 0x00FE00FE;   // enable core 0 & 1
  ME_CORE0_CADDR0 &= ~1;
  ME_CORE0_CADDR1 = (unsigned long) ptr_C | 1; // Set Start address for core1: Will reset and start
   
  // RE enter the drun mode, to update the configuration 
  ME_CORE0_MCTL = 0x30005AF0;                // Mode & Key 
  ME_CORE0_MCTL = 0x3000A50F;                // Mode & Key inverted 
  
  while(ME_CORE0_GS & (1 << 27));          // Wait for mode entry to complete 
  while(ME_CORE0_GS & (0b1111 << 28) != (0b0011 << 28));  // Check DRUN mode has been entered 
}

void enableC1_Cores()
{
  /*Enables CPU0 and CPU1 of cluster C1*/
  unsigned long (*ptr_C0)(unsigned long) = (long unsigned int (*)(long unsigned int)) 0x28080400; //C1 CPU0 start address
  unsigned long (*ptr_C1)(unsigned long) = (long unsigned int (*)(long unsigned int)) 0x280C0400; //C1 CPU1 start address
  
  ME_CORE1_CCTL01 = 0x00FE00FE;   // enable core 1
  
  ME_CORE1_CADDR0 = (unsigned long) ptr_C0 | 1; // Set Start address for core0: Will reset and start
  ME_CORE1_CADDR1 = (unsigned long) ptr_C1 | 1; // Set Start address for core1: Will reset and start
   
  // RE enter the drun mode, to update the configuration 
  ME_CORE1_MCTL = 0x30005AF0;                // Mode & Key 
  ME_CORE1_MCTL = 0x3000A50F;                // Mode & Key inverted 
  
  while(ME_CORE1_GS & (1 << 27));          // Wait for mode entry to complete 
  while(ME_CORE1_GS & (0b1111 << 28) != (0b0011 << 28));  // Check DRUN mode has been entered
}

void enableC2_Cores()
{
  unsigned long (*ptr_C0)(unsigned long) = (long unsigned int (*)(long unsigned int)) 0x28100400; //C2 CPU0 start address
  unsigned long (*ptr_C1)(unsigned long) = (long unsigned int (*)(long unsigned int)) 0x28140400; //C2 CPU1 start address
  
  ME_CORE2_CCTL01 = 0x00FE00FE;   // enable core 0 & 1
  
  ME_CORE2_CADDR0 = (unsigned long) ptr_C0 | 1; // Set Start address for core: Will reset and start
  ME_CORE2_CADDR1 = (unsigned long) ptr_C1 | 1; // Set Start address for core: Will reset and start
   
  // RE enter the drun mode, to update the configuration 
  ME_CORE2_MCTL = 0x30005AF0;                // Mode & Key 
  ME_CORE2_MCTL = 0x3000A50F;                // Mode & Key inverted 
                                        
  while(ME_CORE2_GS & (1 << 27));          // Wait for mode entry to complete 
  while(ME_CORE2_GS & (0b1111 << 28) != (0b0011 << 28));  // Check DRUN mode has been entered
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

  /* Safety delay loop - remove when done */
  for (unsigned int i = 0; i < 10000; i++);

  asm_Initialization();
  enableSecondaryCores();
  ClearRAM(0x64400000, 0x64440000); //Clear RAM for ETR buffer

  #endif /* EMPTY_TARGET_INIT */
}
