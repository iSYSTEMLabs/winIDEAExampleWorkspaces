#include "rcar_v4h.h"
#include "stm.h"

void disableWatchdog()
{
}


void enable_R52_core(unsigned int nCore,
                            unsigned int boot_address,
                            unsigned int code_address)
{
 
  /*Due to R52 MPU restricting code execution over 0x8000'0000
    the memory has to be to 0x0000'0000 for R52_1 and R52_2.*/
    
  /*Set R52 boot address.*/
  CR52RVBARx(nCore) = boot_address;
  
  /*Set address that gets mapped to 0x0000'0000 of the R52 core.*/
  CR52BARx(nCore) = code_address;
  CR52BARxP(nCore) = code_address;

  /*Enable BAR.*/
  CR52BARx(nCore) |= (0x01 << BAREN);
  CR52BARxP(nCore) |= (0x01 << BAREN);
  
  // Cortex-R52 reset
  CR52RSTCTRLx(nCore) &= ~CR52RSTCTRLx__CR52RST_mask;
  while(CR52RSTCTRLx(nCore) == CR52RSTCTRLx__CR52RST_mask);

  // Deassert CPUHALTx to start the processor fetching.
  CR52CRx(nCore) |= CR52CRx__NCPUHALT_mask;
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
  APSREG_CCI500_AUX    = 0x1;
  APSREG_P_CCI500_AUX  = 0x102;
}

void enable_R52_cores()
{
  enable_R52_core(1, BOOT_ADDR_R52_1, CODE_ADDR_R52_1);
  enable_R52_core(2, BOOT_ADDR_R52_2, CODE_ADDR_R52_2);
}

void enableSecondaryCores()
{
  before_A76_boot();
  resetA76Cores();
  powerCA76Cores();
  enable_R52_cores();
}

void initSTM()
{                               
  stmInit(&gSTM, (struct stmAPB *) PLATFORM_STM_APB_ADDRESS, (struct stmAXI *) PLATFORM_STM_AXI_ADDRESS);
}

void targetInit(void)
{     
  #ifndef EMPTY_TARGET_INIT

  enableSecondaryCores();

  initSTM();

  #endif /* EMPTY_TARGET_INIT */
}

struct STM gSTM = { 0 };
