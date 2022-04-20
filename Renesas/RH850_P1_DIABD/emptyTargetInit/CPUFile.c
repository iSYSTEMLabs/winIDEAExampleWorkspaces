#include "RH850.h"


void targetEnableInterrupts(void)
{
  OSTM0TS=0x1;            // start trigger
  asm("EI");
}


void CPU_Init(void)
{
 /* MOSCC=0x05;           // Set MainOSC gain (8MHz < MOSC frequency =< 16MHz)
  MOSCST=0xFFFF;        // Set MainOSC stabilization time to max (8,19 ms)
  PROTCMD0=0xA5;        // Trigger Enable (protected write)
  MOSCE=0x01;                                                                    
  MOSCE=(~0x01);
  MOSCE=0x01;                                                                    
  while (MOSCS != 0x7); // Wait for stable MainOSC
  
  // Prepare PLL                                                               
  PLLC=0x00000a27;      // 16 MHz MainOSC -> 80MHz PLL
  PROTCMD1=0xA5;        // Enable PLL (protected write)
  PLLE=0x01;
  PLLE=(~0x01);
  PLLE=0x01;
  while(PLLS!=0x07);    // Wait for stable PLL
                                                                                   
  // CPU Clock divider = 1                                                     
  PROTCMD1=0xA5;
  CKSC_CPUCLKD_CTL=0x01;
  CKSC_CPUCLKD_CTL=(~0x01);
  CKSC_CPUCLKD_CTL=0x01;
  while(CKSC_CPUCLKD_ACT!=0x01);
  
  // PLL -> CPU Clock                                                         
  PROTCMD1=0xA5; 
  CKSC_CPUCLKS_CTL=0x03;
  CKSC_CPUCLKS_CTL=(~0x03);
  CKSC_CPUCLKS_CTL=0x03;
  while(CKSC_CPUCLKS_ACT!=0x03);
          */
  //IO Setup
  PM0 = 0x0;
  P0 = 0xFFFF;
  
  targetEnableInterrupts();
}

void InitOSTM()
{
  /* Start OS Timer */
  OSTM0CMP=0x00009C00;  // load compare value
  OSTM0CTL=0x1;           // select interrupt mode
  ICOSTM0=0x0;     // disable interrupt masking   
}

#pragma interrupt TimerInterruptHandler 0x100 1 
void TimerInterruptHandler(void)
{
  asm("DI");
  InterruptRoutine();
  asm("EI");
}      


void targetInit(void)
{
  #ifndef EMPTY_TARGET_INIT

  CPU_Init();
  InitOSTM();
  targetEnableInterrupts();

  #endif /* EMPTY_TARGET_INIT */
}


void disableWatchdog()
{
}
