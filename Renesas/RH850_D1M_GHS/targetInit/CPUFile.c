//#include "dr7f701432.dvf.h"
#include "device.h"


void targetEnableInterrupts(void)
{
  OSTM0TS  = 0x01;        // start trigger
  __EI();
}


void InitOSTM()
{
  OSTM0CMP = 0x00007530;  // load compare value, 1ms @ 160MHz 

  // OSTM0CTL writing to it is only possible when OSTMnTE.OSTMnTE = 0;
  // that is, the register becomes read-only when OSTMnTE.OSTMnTE = 1.
  OSTM0TT  = 0x01;        // stop the timer
  OSTM0CTL = 0x01;        // MD0: 1 = select interrupt mode
                          // MD1: 0 = Interval timer mode, down-counter
                          // MD1: 1 = Free-running comparison mode, up-counter
  INTC2EIC125 = 0x0047;   // EIP = 7: priority 7, vector to table entry 125
}


__interrupt void TimerInterruptHandler()
{
  InterruptRoutine();
}

void InitClocks()
{
  // prepare MainOSC
  SYSMOSCC=0x06u;                       // set MainOSC gain (8 MHz)
  SYSMOSCST=0x8000u;                    // set MainOSC stabilization time to 4 ms
  protected_write(SYSPROTCMD0,SYSPROTS0,SYSMOSCE,0x01u); // trigger enable (protected write)
  while (0x4u != (SYSMOSCS&0x04u)){}    // wait for active MainOSC
  
  // set PLL0 to 480MHz
  SYSPLL0C=0x6000003B;   /* PLL0 configuration:
                            fixed frequency mode(dithering disabled)
                            Nr = 60
                            Pr = 1
                            Mr = 1
                            fPLL = MainOsc * Nr /(Mr * Pr)
                            fPLL = 8Mhz * 60 / (1 *  1) = 480 MHz */
  protected_write(SYSPROTCMD1,SYSPROTS1,SYSPLL0E,0x01u); // trigger PLL0 enable (protected write)
  while((SYSPLL0S&(1<<2))!=(1<<2)){}   // wait until PLL0 stable bit is set
  
  // Set PLL1 to 960MHz (PLL1CLK = 480 MHz)
  SYSPLL1C=0x0000003B;   /* PLL1 configuration:
                            fixed frequency mode (dithering disabled)
                            Nr = 80
                            Pr = 1
                            Mr = 1
                            fPLL = MainOsc * Nr /(Mr * Pr)
                            fPLL = 8Mhz *  120 /(1 *  1) = 960 MHz */
  protected_write(SYSPROTCMD1,SYSPROTS1,SYSPLL1E,0x01u);   // trigger PLL1 enable (protected write)
  while((SYSPLL0S&(1<<2))!=(1<<2)){}  // wait until PLL0 stable bit is set
  
  // Set PLL2 to 480MHz
  SYSPLL2C=0x0000003B;   /* PLL2 configuration:
                            fixed frequency mode (dithering disabled)
                            Nr = 120
                            Pr = 2
                            Mr = 1
                            fPLL = MainOsc * Nr /(Mr * Pr)
                            fPLL = 8Mhz *  120 /(1 *  2) = 480 MHz */
  protected_write(SYSPROTCMDD1,SYSPROTSD1,SYSPLL2E,0x01u);   // trigger PLL1 enable (protected write)  
  while((SYSPLL2S&(1<<2))!=(1<<2)){} // wait until PLL2 stable bit is set  

  // set CPU clock divider to 3
  protected_write(SYSPROTCMD1,SYSPROTS1,SYSCKSC_ICPUCLKD_CTL,0x03u); // divider 3
  while(0x03u != SYSCKSC_ICPUCLKD_ACT){}

  // set CPU clock to PLL1CLK / 2 (240MHz)
  protected_write(SYSPROTCMD1,SYSPROTS1,SYSCKSC_ICPUCLKS_CTL ,0x04u); // PLL1CLK
  while(0x04u != SYSCKSC_ICPUCLKS_ACT){}
  
  // set PLLFIXCLK to PLL1CLK (480MHz)
  protected_write(SYSPROTCMDD1,SYSPROTSD1,SYSCKSC_IPLLFIXS_CTL ,0x01u); // PLL1CLK
  while(0x01u != SYSCKSC_IPLLFIXS_ACT){}
  
  // set clock divider for CLKFIX to 12 (480MHz / 6 = 80 MHz)*/
  protected_write(SYSPROTCMDD1,SYSPROTSD1,SYSCKDV_ICLKFIXD_CTL ,0x06u); // PLLFIXCLK / 6
  while(0x03u != SYSCKDV_ICLKFIXD_STAT ){}
  
  // set CLKFIX to PLLFIXCLK / 6 (80 MHz)
  protected_write(SYSPROTCMDD1,SYSPROTSD1,SYSCKSC_ICLKFIXS_CTL ,0x01u); // PLLFIXCLK / 6
  while(0x01u != SYSCKSC_ICLKFIXS_ACT){}
  
  // set CLKJIT divider to PLL0 / 6 (80 MHz)
  protected_write(SYSPROTCMDD1,SYSPROTSD1,SYSCKDV_ICLKJITD_CTL ,0x06u); // divider 6 selection
  while(0x03u != SYSCKDV_ICLKJITD_STAT  ){}
  
  // set CLKJIT to CKDV_ICLKJITD_CTL (80 MHz)
  protected_write(SYSPROTCMDD1,SYSPROTSD1,SYSCKSC_ICLKJITS_CTL,0x01u); // CKDV_ICLKJITD_CTL selection
  while(0x01u != SYSCKSC_ICLKJITS_ACT){}
    
  // set TAUB0 clock -> CLKFIX (80 MHz)
  protected_write(SYSPROTCMDD1,SYSPROTSD1,SYSCKSC_ITAUB01S_CTL,0x01u); // CLKFIX
  while(0x01u !=  SYSCKSC_ITAUB01S_ACT){}
}

void PBUS_Guard_Disable()
{
  enum EPBUS { PBUS_NoProtection = 0x07FFFFFF };

  PBGFSGD0BPROT0 = PBUS_NoProtection;
}

void targetInit(void)
{
  #ifndef EMPTY_TARGET_INIT

  InitClocks(); //160MHz
  PBUS_Guard_Disable(); 
  InitOSTM();
  targetEnableInterrupts();
  targetEnableInterrupts();

  #endif /* EMPTY_TARGET_INIT */
}

void disableWatchdog()
{
}
