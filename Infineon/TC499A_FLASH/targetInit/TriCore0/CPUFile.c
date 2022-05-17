#include "TriCore.h"


void disableENDINIT()
{
  // disable ENDINIT
  CBS_OCNTRL = 0x000000C0;
}

/* This function disables watchdog timers that are enabled by default */
void disableWatchdog()
{
}


void enableTriCoreCores()
{
  /*Set CPU1-5 boot addresses*/
  CPU1_HRHV_PC = 0xA0000800;
  CPU2_HRHV_PC = 0xA0001000;
  CPU3_HRHV_PC = 0xA0001800;
  CPU4_HRHV_PC = 0xA0002000;
  CPU5_HRHV_PC = 0xA0002800;
  
  /*Enable CPU1-5*/
  CPU1_HRA_CORECON = 0;
  CPU2_HRA_CORECON = 0;
  CPU3_HRA_CORECON = 0;
  CPU4_HRA_CORECON = 0;
  CPU5_HRA_CORECON = 0;
   
  CPU1_HRA_BOOTCON = 0;
  CPU2_HRA_BOOTCON = 0;
  CPU3_HRA_BOOTCON = 0;
  CPU4_HRA_BOOTCON = 0;
  CPU5_HRA_BOOTCON = 0;
}

void enableSCR()
{
  // Disable SCR
  PMS_SCR_CON0 = 0x00000002;
  
  // SCR is reset on PORST, 100MHz clock active, OCDS SoC DAP mode
  PMS_SCR_CON0 = 0x0001001C;
  
  //Enable SCR
  PMS_SCR_CON0 |= 0x03;
}

void clearRAM(unsigned int Start,unsigned int End)
{
  unsigned int A=Start;
  while(A<End)
  {
    memll(A)=0;
    A+=8;
  }
}

void copyPPU()
{
  unsigned long S=0xA0A00000;
  unsigned long E=S+0x40000;
  unsigned long D=0x92080000;
  while(S<E)
  {
    memll(D)=memll(S);
    S+=8;
    D+=8;
  }  
}

void copyCDSP(unsigned long S, unsigned long D)
{
  unsigned long E=S+0x1000;
  while(S<E)
  {
    memll(D)=memll(S);
    S+=8;
    D+=8;
  }  
}

void enablePPU()
{
  clearRAM(0x92080000, 0x920C0000);
  copyPPU();
  /*Disable PPU safety mode*/
  PPUC_SMCTRL = 0x00000000; 

  /* Write into CLC to Enable PPUC */
  PPUC_CLC =  0x0;

  /* Trigger a Kernel reset once you configure the ivt base address */
  PPUC_RST_CTRLA =  0x1;
  PPUC_RST_CTRLB =  0x1;

  /* Write into CLC to Enable PPUC */
  PPUC_CLC =  0x0;
  
  PPUC_CTRL = 0x1f09; 
}

void enableCDSP()
{
  ADC_CLC &= ~0x01;
  while(ADC_CLC);
  ADC_CLKEN_CDSP |= 0x01;
  ADC_CLKEN_CDSP |= 0x3FFFF << 4;
  copyCDSP(0xA0A40000, 0xF50C1000); //Copy CDSP0
  copyCDSP(0xA0A41000, 0xF50C3000); //Copy CDSP1
  copyCDSP(0xA0A42000, 0xF50C5000); //Copy CDSP2
  copyCDSP(0xA0A43000, 0xF50C7000); //Copy CDSP3
  copyCDSP(0xA0A44000, 0xF50C9000); //Copy CDSP4
  copyCDSP(0xA0A45000, 0xF50CB000); //Copy CDSP5
  copyCDSP(0xA0A46000, 0xF50CD000); //Copy CDSP6
  copyCDSP(0xA0A47000, 0xF50CF000); //Copy CDSP7
  copyCDSP(0xA0A48000, 0xF50D1000); //Copy CDSP8
  copyCDSP(0xA0A49000, 0xF50D3000); //Copy CDSP9
  copyCDSP(0xA0A4A000, 0xF50D5000); //Copy CDSP10
  copyCDSP(0xA0A4B000, 0xF50D7000); //Copy CDSP11
  copyCDSP(0xA0A4C000, 0xF50D9000); //Copy CDSP12
  copyCDSP(0xA0A4D000, 0xF50DB000); //Copy CDSP13
  copyCDSP(0xA0A4E000, 0xF50DD000); //Copy CDSP14
  copyCDSP(0xA0A4F000, 0xF50DF000); //Copy CDSP15
  copyCDSP(0xA0A50000, 0xF50E1000); //Copy CDSP16
  copyCDSP(0xA0A51000, 0xF50E3000); //Copy CDSP17
  ADC_CDSP_GLOBRCD |= 0x3FFFF;
  //clearRAM(0xF50C1000, 0xF50C2000);
}

void enableSecondaryCores()
{
  enableTriCoreCores();
  enableSCR();
  enablePPU();
  enableCDSP();
}


#define STM_INT0 0x5

void targetInit(void)
{
  #ifndef EMPTY_TARGET_INIT

  enableSecondaryCores();

  #endif /* EMPTY_TARGET_INIT */
}

void targetEnableInterrupts(void)
{
  __enable();  
}
