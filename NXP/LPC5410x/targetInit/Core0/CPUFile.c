#include "LPC54100.h"


extern unsigned long _cm0Boot;
extern unsigned long _cm0Stack;
int zeroInit;
int intInit = 10;

// The following four functions are part of the pll setup and can be found in the reference manual (Rev 2.0) on pages 45-48
int pllEncodeN(int N)
{
  int x, i;
  int N_max = 0x100;
  
  switch (N) {
  case 0:
    x = 0xFFF;
    break;
  case 1:
    x = 0x302;
    break;
  case 2:
    x = 0x202;
    break;
  default:
    x = 0x080;
    for (i = N; i <= N_max; i++)
      x = (((x ^ (x >> 2) ^ (x >> 3) ^ (x >> 4)) & 1) << 7) | ((x >> 1) & 0x7F);
    break;
  }
  
  return x;
}

int pllEncodeP(int P)
{
  int x, i;
  int P_max = 0x20;
  
  switch (P) {
  case 0:
    x = 0xFF;
    break;
  case 1:
    x = 0x62;
    break;
  case 2:
    x = 0x42;
    break;
  default:
    x = 0x10;
    for (i = P; i <= P_max; i++)
      x = (((x ^ (x >> 2)) & 1) << 4) | ((x >> 1) & 0xF);
  break;
  }

  return x;
}

int pllEncodeM(int M)
{
  int i, x;
  int M_max = 0x8000;
  
  switch (M) {
  case 0:
    x = 0xFFFFF;
    break;
  case 1:
    x = 0x18003;
    break;
  case 2:
    x = 0x10003;
    break;
  default:
    x = 0x04000;
    for (i = M; i <= M_max; i++)
      x = (((x ^ (x >> 1)) & 1) << 14) | ((x >> 1) & 0x3FFF);
    break;
  }

  return x;
}

void pllFindSel(int M, int *pSelP, int *pSelI, int *pSelR)
{
  int P_max = 0x20;
  
  if (M < 60) *pSelP = (M >> 1) + 1;
  else *pSelP = P_max - 1;
	
  if (M > 16384) *pSelI = 1;
  else if (M > 8192) *pSelI = 2;
  else if (M > 2048) *pSelI = 4;
  else if (M >= 501) *pSelI = 8;     
  else if (M >= 60) *pSelI = 4 * (1024 / (M + 9));
  else *pSelI = (M & 0x3C) + 4;
	
  *pSelR = 0;
}

// Timer0 on ASYNC bus initialization
void initTimer()
{   
  ASYNCAPBCTRL |= (0x1 << ASYNCAPBCTRL_ENABLE);       // Enable ASYNC bridge
  ASYNCAPBCLKSELB &= ~(0x3 << ASYNCAPBCLKSELB_SEL);   // Set main clock as ASYNC clock source
  ASYNCAPBCLKCTRL |= (0x1 << ASYNCAPBCLKCTRL_CT32B0); // Enable CT32B0 clock
  CT32B0_MCR |= (0x1 << CT32B0_MCR_MROI);             // Generate interrupt when MR0=TC
  CT32B0_MCR |= (0x1 << CT32B0_MCR_MROR);             // Reset timer when MR0=TC
  CT32B0_MR0 = 60000;                                 // Number of timer ticks equivalent to 1ms
}

/* 
 * Clock initialization (PLL with IRC as source) 
 * CPU max frequency listed as 100 MHz, however the main AHB bus is unreliable and often gets lost at frequencies above 60 MHz.  
 */
void initClock()
{  
  // IRC bare divider values for approx. 60 MHz output clock
  int m = 60;
  int n = 12;
  int p = 1;
  
  int selP, selI, selR;
  pllFindSel(m, &selP, &selI, &selR);
  
  int menc = pllEncodeM(m);
  int nenc = pllEncodeN(n);
  int penc = pllEncodeP(p);
  
  // Set flash clocks access time
  FLASHCFG |= (0x4 << FLASHCFG_FLASHTIM);
  
  // Select PLL source
  SYSPLLCLKSEL &= ~(0x3 << SYSPLLCLKSEL_SEL);
  
  // PLL filter and control options setup
  int val = 0x0;
  val |= (selI << SYSPLLCTRL_SELI);            
  val |= (selP << SYSPLLCTRL_SELP);            
  val |= (selR << SYSPLLCTRL_SELR);
  SYSPLLCTRL = val;
  SYSPLLCTRL &= ~(0x1 << SYSPLLCTRL_BYPASS);        // Disable direct input-to-output bypass route
  SYSPLLCTRL |= (0x1 << SYSPLLCTRL_BYPASS_CCODIV2); // Bypass feedback clock divide by 2 (during multiply stage)
  SYSPLLCTRL |= (0x1 << SYSPLLCTRL_BANDSEL);        // Enable MDEC control
  SYSPLLCTRL |= (0x1 << SYSPLLCTRL_DIRECTO);        // Enable direct output of PLL CCO (bypass division of clock by 2*p)
  
  // Loading n/p/m values into registers
  SYSPLLNDEC = nenc;
  SYSPLLNDEC = (nenc | (0x1 << SYSPLLNDEC_NREQ));
  SYSPLLPDEC = penc;
  SYSPLLPDEC = (penc | (0x1 << SYSPLLPDEC_PREQ));
  SYSPLLSSCTRL0 = (menc | (0x1 << SYSPLLSSCTRL0_SEL_EXT));
  SYSPLLSSCTRL0 = (menc | (0x1 << SYSPLLSSCTRL0_MREQ) | (0x1 << SYSPLLSSCTRL0_SEL_EXT));

  // Power up PLL
  PDRUNCFGCLR |= (0x1 << PDRUNCFG_PLL);
  
  // Wait for lock
  while (!(SYSPLLSTAT & (0x1 << SYSPLLSTAT_LOCK)));
  
  // Connect PLL to main clock
  MAINCLKSELB |= (0x2 << MAINCLKSELB_SEL);
}


void initITM(void)
{
  ITM_LOCK_ACCESS_REGISTER     = 0xC5ACCE55;  //unlock write access to ITM
  ITM_TRACE_ENABLE_REGISTER    = 0xFFFFFFFF;  //enable stimulus port 0-31 
  ITM_TRACE_PRIVILEGE_REGISTER = 0x1;         //set privilege
}

void enableSecondCore()
{
  // Restart Cortex-M0 and it will run to application
  DWORD dwCPUCTRL = SYSCON_CPUCTRL_REG;
  dwCPUCTRL &= ~CPUCTRL_KEY_MASK;
  dwCPUCTRL |= CPUCTRL_KEY | CPUCTRL_RESERVED | CPUCTRL_CM0CLKEN;
  SYSCON_CPUCTRL_REG = dwCPUCTRL | CPUCTRL_CM0RSTEN;   // Reset Cortex-M0+
  SYSCON_CPBOOT_REG = _cm0Boot;                        // Set COPROCESOR BOOT
  SYSCON_CPSTACK_REG = _cm0Stack;                      // Set COPROCESOR STACK
  SYSCON_CPUCTRL_REG = dwCPUCTRL;                      // Release from reset Cortex-M0+
}

void targetEnableInterrupts()
{  
  NVIC_ISER0 |= (0x1 << NVIC_ISER0_CT32B0);
  CT32B0_TCR |= (0x1 << CT32B0_TCR_CEN);
}


void targetInit(void)
{
  #ifndef EMPTY_TARGET_INIT

  initClock();
  initTimer();
  enableSecondCore();
  targetEnableInterrupts();

  #endif /* EMPTY_TARGET_INIT */
}


void disableWatchdog()
{
  
}