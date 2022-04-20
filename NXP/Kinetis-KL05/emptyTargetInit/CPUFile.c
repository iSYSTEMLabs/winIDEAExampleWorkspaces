#include "MKL05Z32.h"

void initClock()
{
  MCG_C1 = 0x6; // Configure slow internal osc.
  while(!(MCG_S & IREFST));  // Wait for FLL source update
  MCG_C4 = 0xA0; // Multiply clk by 1464 => 48 MHz
  for(int i = 0; i < 10000; i++); // Clock synchronization - wait at least 1 ms (aprox. 1.25ms)
}

void initTimer()
{
  SIM_SCGC6 |= (1 << 23);  // Enable clock for PIT
  PIT_MCR |= (1 << 1);     // Disable timer clock
  PIT_MCR |= (1 << 0);     // Stop in debug mode
  PIT_TCTRL0 &= ~(1 << 1); // Disable interrupts
  PIT_TCTRL0 &= ~(1 << 0); // Disable timer
  PIT_LDVAL0 = 0x5DC0;     // Load counter value - 24MHz bus clock / 24000 => 1kHz
  PIT_TCTRL0 |= (1 << 1);  // Enable interrupts
  PIT_TCTRL0 |= (1 << 0);  // Enable timer
}


void targetEnableInterrupts()
{
  asm("cpsie i");
  ISER0 = (1 << 22);
  PIT_MCR &= ~(1 << 1); // Enable timer clock
}


void disableWatchdog()
{
  SIM_COPC &= ~COPT;
}


void targetInit()
{
  #ifndef EMPTY_TARGET_INIT

  initClock();
  initTimer();
  targetEnableInterrupts();

  #endif /* EMPTY_TARGET_INIT */
}

void initITM(void)
{
  ITM_LOCK_ACCESS_REGISTER = 0xC5ACCE55; // Unlock write access to ITM
  ITM_TRACE_ENABLE_REGISTER = 0xFFFFFFFF; // Enable stimulus port 0-31
  ITM_TRACE_PRIVILEGE_REGISTER = 0x1; // Set privilege
}
