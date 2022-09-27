#include "SR6P6.h"

extern void Reset();

void disableWatchdog()
{
  
}


void intDefaultHandler()
{
  while (1)
  {
	  
  }
}

void ClearRAM(unsigned int dwStart, unsigned int dwEnd)
{
  unsigned int dwAddr = dwStart;
  while(dwAddr < dwEnd)
  {
    memll(dwAddr) = 0;
    dwAddr += 8;
  }
}

void CopyDMECode()
{
  unsigned long dwStart = 0x2C400000;
  unsigned long dwEnd = dwStart + 0x00010000;
  unsigned long dwDest = 0x20200000;
  while(dwStart < dwEnd)
  {
    memll(dwDest) = memll(dwStart);
    dwStart += 8;
    dwDest += 8;
  }
}

void CopyDSPHCode()
{
  unsigned long dwStart = 0x2C410000;
  unsigned long dwEnd = dwStart + 0x00010000;
  unsigned long dwDest = 0x20500000;
  while(dwStart < dwEnd)
  {
    memll(dwDest) = memll(dwStart);
    dwStart += 8;
    dwDest += 8;
  }
}

void initRAM()
{
  CopyDMECode();
  ClearRAM(DME_RAM_START_ADDR, DME_RAM_END_ADDR);   //DME RAM
  
  CopyDSPHCode();
  ClearRAM(DSPH_RAM_START_ADDR, DSPH_RAM_END_ADDR); //DSPH RAM

}

void startC0_CPU1()
{
  volatile unsigned long g_dwResetHandler = C0_CPU1_FLASH_ADDR;
  
  // Set C0 CPU1 to run after Mode Change
  MC_ME_DOMAIN_0_CCTL1 = 0x00FE;
  
  // Do not reset C0 CPU0 on Mode Change
  MC_ME_DOMAIN_0_CADDR0 &= ~1;
  
  // Set start address for C0 CPU1 and set it to reset
  MC_ME_DOMAIN_0_CADDR1 = g_dwResetHandler | 1;
  
  // Write key and inverted key
  MC_ME_DOMAIN_0_MCTL = 0x30005AF0;
  MC_ME_DOMAIN_0_MCTL = 0x3000A50F;
  
  // Wait for transition to finish
  while(MC_ME_DOMAIN_0_GS & (1 << MC_ME_GS_S_MTRANS) == 0);
}

void startC1()
{
  volatile unsigned long g_dwResetHandler0 = C1_CPU0_FLASH_ADDR;
  volatile unsigned long g_dwResetHandler1 = C1_CPU1_FLASH_ADDR;
  
  // Set C1 to run after Mode Change
  MC_ME_DOMAIN_1_CCTL0 = 0x00FE;
  MC_ME_DOMAIN_1_CCTL1 = 0x00FE;
  
  // Set start address for C1
  MC_ME_DOMAIN_1_CADDR0 = g_dwResetHandler0 | 1;
  MC_ME_DOMAIN_1_CADDR1 = g_dwResetHandler1 | 1;
  
  // Write key and inverted key
  MC_ME_DOMAIN_1_MCTL = 0x30005AF0;
  MC_ME_DOMAIN_1_MCTL = 0x3000A50F;
  
  // Wait for transition to finish
  while(MC_ME_DOMAIN_1_GS & (1 << MC_ME_GS_S_MTRANS) == 0);
}

void startC2()
{
  volatile unsigned long g_dwResetHandler0 = C2_CPU0_FLASH_ADDR;
  volatile unsigned long g_dwResetHandler1 = C2_CPU1_FLASH_ADDR;
  
  // Set C2 CPU0 to run after Mode Change
  MC_ME_DOMAIN_2_CCTL0 = 0x00FE;
  
  // Set start address for C2
  MC_ME_DOMAIN_2_CADDR0 = g_dwResetHandler0 | 1;
  MC_ME_DOMAIN_2_CADDR1 = g_dwResetHandler1 | 1;
  
  // Write key and inverted key
  MC_ME_DOMAIN_2_MCTL = 0x30005AF0;
  MC_ME_DOMAIN_2_MCTL = 0x3000A50F;
  
  // Wait for transition to finish
  while(MC_ME_DOMAIN_2_GS & (1 << MC_ME_GS_S_MTRANS) == 0);
}

void startM4()
{  
  // Set DSPH and DME to run after Mode Change
  MC_ME_PERIPHERAL_DOMAIN_CCTL0 = 0x00FE;
  MC_ME_PERIPHERAL_DOMAIN_CCTL1 = 0x00FE;
  
  // Set DSPH and DME to reset on Mode Change
  MC_ME_PERIPHERAL_DOMAIN_CADDR0 = 1;
  MC_ME_PERIPHERAL_DOMAIN_CADDR1 = 1;
  
  // Write key and inverted key
  MC_ME_PERIPHERAL_DOMAIN_MCTL = 0x30005AF0;
  MC_ME_PERIPHERAL_DOMAIN_MCTL = 0x3000A50F;
  
  // Wait for transition to finish
  while(MC_ME_PERIPHERAL_DOMAIN_GS & (1 << MC_ME_GS_S_MTRANS) == 0);
}

void targetInit()
{
  #ifndef EMPTY_TARGET_INIT

  asm_Initialization();
  initRAM();

  // Start R52 cores  
  startC0_CPU1();
  startC1();
  startC2();

  // Start M4 cores
  startM4();

  #endif /* EMPTY_TARGET_INIT */
}