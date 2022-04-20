#include "LPC1769.h"

extern void Reset();
extern unsigned long _isrVectAddr;

// Set PLL0 output to 480 MHz and divide it by 8 for 60 MHz CCLK (max for SWO trace)
void initClock(void) 
{  
  // Set flash wait
  FLASHCFG &= ~(0xF << 12);
  FLASHCFG |= (4 << 12);
  
  USBCLKCFG = 9; // Divide PLL0 output by 10 - 48Mhz for USB  
  

  // Disconnect and disable PLL
  PLL0CON &= ~(1 << 1); // Disconnect
  PLL0FEED = 0xAA;
  PLL0FEED = 0x55;
  
  PLL0CON &= ~(1 << 0); // Disable
  PLL0FEED = 0xAA;
  PLL0FEED = 0x55;
  
  // Wait for PLL to unlock
  while ((PLL0STAT & PLOCK0) != 0); 
  
  // Enable ext. osc.
  SCS |= (1 << 5);  
  
  // Set ext. osc. as PLL0 clock source
  CLKSRCSEL |= (1 << 0);
  
  // Set clk. multiplier and divider
  PLL0CFG &= ~(0xFFFF);
  PLL0CFG &= ~(0xFF << 16);
  PLL0CFG |= ((39 << 0) | (1 << 16));   // M - 1 (M = 40), N - 1 (N = 2)
  
  PLL0FEED = 0xAA;
  PLL0FEED = 0x55;
  
  // Enable PLL
  PLL0CON |= (1 << 0);  
  
  PLL0FEED = 0xAA;
  PLL0FEED = 0x55;
  
  // Wait for PLLE0 enable
  while((PLL0STAT & PLLE0_STAT) != PLLE0_STAT);
  
  // Divide PLL0 output: 480 MHz / 8 = 60 MHz 
  CCLKCFG = 7; //60 MHz
  //CCLKCFG = 3;  // 120 MHz
  
  // Wait for PLL to lock
  while((PLL0STAT & PLOCK0) != PLOCK0);
  
  // Connect PLL 
  PLL0CON |= (1 << 1);  

  PLL0FEED = 0xAA;
  PLL0FEED = 0x55;
  
  // Wait for PLL to connect
  while((PLL0STAT & PLLC0_STAT) != PLLC0_STAT);
}


void initTIM(void) 
{
  STRELOAD = 0xEA5F;   // 60 MHz
  //STRELOAD = 0x1D4BF;  // 120 MHz
  STCTRL |= (1 << 2);  // Select timer source (CCLK)
}

void initITM(void)
{
  ITM_LOCK_ACCESS_REGISTER = 0xC5ACCE55; // Unlock write access to ITM
  ITM_TRACE_ENABLE_REGISTER = 0xFFFFFFFF; // Enable stimulus port 0-31
  ITM_TRACE_PRIVILEGE_REGISTER = 0x1; // Set privilege
}


void targetEnableInterrupts(void)
{
  STCTRL |= (1 << 0);  // Enable timer
  STCTRL |= (1 << 1);  // Enable interrupts
  asm volatile("cpsie i");
}


void targetInit(void)
{ 
  #ifndef EMPTY_TARGET_INIT

  initClock();
  initTIM();
  initITM();
  targetEnableInterrupts();

  #endif /* EMPTY_TARGET_INIT */
}

void disableWatchdog()
{
}
