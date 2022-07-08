#include "rcar_v3u.h"

void disableWatchdog()
{
}


void a76_start(int coreIndex, unsigned int address)
{
  // 8B.4.2.1 Wake-Up Sequence of AP-System Core
  unsigned long rvbarAddress_diag = (APMU_A76_CORE(coreIndex) + 0x30);
  RVBARLC(coreIndex) = address; 
  RVBARLC_P(coreIndex) = 0; 
  PWRCTRLC(coreIndex) |= PWRCTLRCx__WUP_REQ_mask;
  
  /* After power on sequence is completed, this bit is cleared to 0 */
  while ((PWRCTRLC(coreIndex) & PWRCTLRCx__WUP_REQ_mask));
}

void powerCA76Cores()
{
  a76_start(0, BOOT_ADDR_A76_C0_0);
  a76_start(1, BOOT_ADDR_A76_C0_1);
  a76_start(2, BOOT_ADDR_A76_C1_0);
  a76_start(3, BOOT_ADDR_A76_C1_1);
  a76_start(4, BOOT_ADDR_A76_C2_0);
  a76_start(5, BOOT_ADDR_A76_C2_1);
  a76_start(6, BOOT_ADDR_A76_C3_0);
  a76_start(7, BOOT_ADDR_A76_C3_1);
}


void resetA76Cores()
{
  // Some A76 cores are booted at incorrect locations by
  // ICUM, so a A76 reset is pefromed
  FRSTCTRL_ADMIN = 0x0000000;
  FRSTR_ADMIN = 0x000F00FF;
  while(FRSTR_ADMIN);
}

void before_A76_boot(void)
{
  // see 5.4.4 Register Initialization Before Cortex-A76 Boot (disabling tests)
  APSREG_AP_CLUSTER(0) = 0x3;
  APSREG_AP_CLUSTER(1) = 0x3;
  APSREG_AP_CLUSTER(2) = 0x3;
  APSREG_AP_CLUSTER(3) = 0x3;
  APSREG_CCI500_AUX    = 0x1;
  APSREG_P_CCI500_AUX  = 0x102;
}

void enableSecondaryCores()
{
  before_A76_boot();
  resetA76Cores();
  powerCA76Cores();
}


void targetInit(void)
{     
  #ifndef EMPTY_TARGET_INIT

  enableSecondaryCores();

  #endif /* EMPTY_TARGET_INIT */
}
