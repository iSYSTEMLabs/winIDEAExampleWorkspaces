#include "TVII_4M_CYT3DL.h"


extern unsigned volatile int _cm7_vect;

void enableAllCores()
{
  CPUSS.CM7_0_PWR_CTL.R = 0x05FA0000 & ~0x3;
  // Enable HF1 Clk
  //CPUSS.CM7_0_VECTOR_TABLE_BASE.R = 0x10080000;
  CPUSS.CM7_0_VECTOR_TABLE_BASE.R = (unsigned long)&_cm7_vect;
  
  SRSS.CLK_ROOT_SELECT_1.R = 0x80000000;
  // Set Vector tabel
  // Power up secondary cores
  CPUSS.CM7_0_PWR_CTL.R = 0x05FA0000 | 0x3;
  CPUSS.CM7_0_CTL.B.CPU_WAIT = 0;
}


void targetInit(void)
{
  #ifndef EMPTY_TARGET_INIT

  enableAllCores();

  #endif /* EMPTY_TARGET_INIT */
}

void disableWatchdog()
{
}