#include "S32Z27_sfr.h"
#include "S32Z27.h"


void enablePartitions()
{
  // Enable MC_ME partition 1 clock
  MC_ME.PRTN1_PCONF.R |= 1; 
  MC_ME.PRTN1_PUPD.R |= 1;

  MC_ME.CTL_KEY.R = 0x00005AF0;
  MC_ME.CTL_KEY.R = 0x0000A50F;
  
  while(MC_ME.PRTN1_STAT.B.PCS != 1);
  
  // Releasing partition reset from MC_RGM for RTU0
  MC_RGM.PRST1_0.B.PERIPH_64_RST = 0;
  
  // Disable Output safe stating via OSSE bit
  MC_ME.PRTN1_PCONF.R &= ~(1 << 2);
  MC_ME.PRTN1_PUPD.R |= 1 << 2;
  
  MC_ME.CTL_KEY.R = 0x00005AF0;
  MC_ME.CTL_KEY.R = 0x0000A50F;
  
  // Wait for partition to get ungated
  while(MC_RGM.PSTAT1_0.B.PERIPH_64_STAT != 0);
  // Wait for safe stating to get disabled
  while(MC_ME.PRTN1_STAT.B.OSSS != 0);
  
  // Deactivate RTU0 fencing logic and enable SRAM interface
  GPR3.RTU0FDC.R = 0;
  RDC_0.RD1_CTRL_REG.B.RD1_CTRL_UNLOCK = 1;
  RDC_0.RD1_CTRL_REG.B.RD1_INTERCONNECT_INTERFACE_DISABLE = 0;
  while(RDC_0.RD1_STAT_REG.B.RD1_INTERCONNECT_INTERFACE_DISABLE_STAT != 0);
  
  // Enable MC_ME partition 2 clock
  MC_ME.PRTN2_PCONF.R |= 1; 
  MC_ME.PRTN2_PUPD.R |= 1;

  MC_ME.CTL_KEY.R = 0x00005AF0;
  MC_ME.CTL_KEY.R = 0x0000A50F;
  
  while(MC_ME.PRTN2_STAT.B.PCS != 1);
  
  // Releasing partition reset from MC_RGM for RTU1
  MC_RGM.PRST2_0.B.PERIPH_128_RST = 0;
  
  // Disable Output safe stating via OSSE bit
  MC_ME.PRTN2_PCONF.R &= ~(1 << 2);
  MC_ME.PRTN2_PUPD.R |= 1 << 2;
  
  MC_ME.CTL_KEY.R = 0x00005AF0;
  MC_ME.CTL_KEY.R = 0x0000A50F;
  
  // Wait for partition to get ungated
  while(MC_RGM.PSTAT2_0.B.PERIPH_128_STAT != 0);
  // Wait for safe stating to get disabled
  while(MC_ME.PRTN2_STAT.B.OSSS != 0);
  
  GPR3.RTU1FDC.R = 0;
  // Deactivate RTU1 fencing logic and enable SRAM interface
  RDC_1.RD1_CTRL_REG.B.RD1_CTRL_UNLOCK = 1;
  RDC_1.RD1_CTRL_REG.B.RD1_INTERCONNECT_INTERFACE_DISABLE = 0;
  while(RDC_1.RD1_STAT_REG.B.RD1_INTERCONNECT_INTERFACE_DISABLE_STAT != 0);
  
  /* Configure REMAP for NICs */
  RTU1__RTUM_NIC_D.remap.B.remap = 0x02U;
  RTU1__RTUF_NIC_D.remap.B.remap = 0x02U;
  RTU1__RTUP_NIC_B.remap.B.remap = 0x02U;
  RTU1__RTUE_NIC_D.remap.B.remap = 0x02U;
}

void start_CE_M33_0()
{
  // Entry point
  MC_ME.PRTN0_CORE1_ADDR.R = (uint32_t)CE_M33_0_START_ADDRESS;
  
  // Enable clock to core from MC_ME
  MC_ME.PRTN0_CORE1_PCONF.R |= 1;
  MC_ME.PRTN0_CORE1_PUPD.R |= 1;
  
  MC_ME.CTL_KEY.R = 0x00005AF0;
  MC_ME.CTL_KEY.R = 0x0000A50F;
  
  // Wait for core clock to get enabled
  while(MC_ME.PRTN0_CORE1_STAT.B.CCS != 1);
}

void start_CE_M33_1()
{
  // Entry point
  MC_ME.PRTN0_CORE2_ADDR.R = (uint32_t)CE_M33_1_START_ADDRESS;
  
  // Enable clock to core from MC_ME
  MC_ME.PRTN0_CORE2_PCONF.R |= 1;
  MC_ME.PRTN0_CORE2_PUPD.R |= 1;
  
  MC_ME.CTL_KEY.R = 0x00005AF0;
  MC_ME.CTL_KEY.R = 0x0000A50F;
  
  // Wait for core clock to get enabled
  while(MC_ME.PRTN0_CORE2_STAT.B.CCS != 1);
}

void start_RTU0_R52_0()
{
  // Entry point
  MC_ME.PRTN1_CORE0_ADDR.R = (uint32_t)RTU0_R52_0_START_ADDRESS;
  
  // Release the reset of core from MC_RGM
  MC_RGM.PRST1_0.B.PERIPH_65_RST = 0;
  
  if(MC_ME.PRTN1_CORE0_STAT.B.CCS != 1)
  {
    // Enable clock to core from MC_ME
    MC_ME.PRTN1_CORE0_PCONF.R |= 1;
    MC_ME.PRTN1_CORE0_PUPD.R |= 1;
    
    MC_ME.CTL_KEY.R = 0x00005AF0;
    MC_ME.CTL_KEY.R = 0x0000A50F;
    
    // Wait for core clock to get enabled
    while(MC_ME.PRTN1_CORE0_STAT.B.CCS != 1);
  }
  
  // Wait for MC_RGM to release reset for core
  while(MC_RGM.PSTAT1_0.B.PERIPH_65_STAT != 0);
}

void start_RTU0_R52_1()
{
  // Entry point
  MC_ME.PRTN1_CORE1_ADDR.R = (uint32_t)RTU0_R52_1_START_ADDRESS;
  
  // Release the reset of core from MC_RGM
  MC_RGM.PRST1_0.B.PERIPH_66_RST = 0;
  
  if(MC_ME.PRTN1_CORE1_STAT.B.CCS != 1)
  {
    // Enable clock to core from MC_ME
    MC_ME.PRTN1_CORE1_PCONF.R |= 1;
    MC_ME.PRTN1_CORE1_PUPD.R |= 1;
    
    MC_ME.CTL_KEY.R = 0x00005AF0;
    MC_ME.CTL_KEY.R = 0x0000A50F;
    
    // Wait for core clock to get enabled
    while(MC_ME.PRTN1_CORE1_STAT.B.CCS != 1);
  }
  
  // Wait for MC_RGM to release reset for core
  while(MC_RGM.PSTAT1_0.B.PERIPH_66_STAT != 0);
}

void start_RTU1_R52_0()
{
  // Entry point
  MC_ME.PRTN2_CORE0_ADDR.R = (uint32_t)RTU1_R52_0_START_ADDRESS;
  
  // Release the reset of core from MC_RGM
  MC_RGM.PRST2_0.B.PERIPH_129_RST = 0;
  
  if(MC_ME.PRTN2_CORE0_STAT.B.CCS != 1)
  {
    // Enable clock to core from MC_ME
    MC_ME.PRTN2_CORE0_PCONF.R |= 1;
    MC_ME.PRTN2_CORE0_PUPD.R |= 1;
    
    MC_ME.CTL_KEY.R = 0x00005AF0;
    MC_ME.CTL_KEY.R = 0x0000A50F;;
    
    // Wait for core clock to get enabled
    while(MC_ME.PRTN2_CORE0_STAT.B.CCS != 1);
  }
  
  // Wait for MC_RGM to release reset for core
  while(MC_RGM.PSTAT2_0.B.PERIPH_129_STAT != 0);
}

void start_RTU1_R52_1()
{
  // Entry point
  MC_ME.PRTN2_CORE1_ADDR.R = (uint32_t)RTU1_R52_1_START_ADDRESS;
  
  // Release the reset of core from MC_RGM
  MC_RGM.PRST2_0.B.PERIPH_130_RST = 0;
  
  if(MC_ME.PRTN2_CORE1_STAT.B.CCS != 1)
  {
    // Enable clock to core from MC_ME
    MC_ME.PRTN2_CORE1_PCONF.R |= 1;
    MC_ME.PRTN2_CORE1_PUPD.R |= 1;
    
    MC_ME.CTL_KEY.R = 0x00005AF0;
    MC_ME.CTL_KEY.R = 0x0000A50F;
    
    // Wait for core clock to get enabled
    while(MC_ME.PRTN2_CORE1_STAT.B.CCS != 1);
  }
  
  // Wait for MC_RGM to release reset for core
  while(MC_RGM.PSTAT2_0.B.PERIPH_130_STAT != 0);
}


void R52LockStepConfiguration()
{
  RTU0__GPR.CFG_CORE.R |= 0;
  RTU1__GPR.CFG_CORE.R |= 0;
}

void enableSecondaryCores()
{
  enablePartitions();
  
  R52LockStepConfiguration();
  
  start_CE_M33_0();
  start_CE_M33_1();
  
  start_RTU0_R52_0();
  start_RTU0_R52_1();
  start_RTU1_R52_0();
  start_RTU1_R52_1();

}

void targetInit()
{
  #ifndef EMPTY_TARGET_INIT

  enableSecondaryCores();

  #endif /* EMPTY_TARGET_INIT */
}

void disableWatchdog()
{
  
}

void ITMInit(void)
{
  memW32(ITM_LOCK_ACCESS_REGISTER) = 0xC5ACCE55; //unlock write access to ITM
  memW32(ITM_TRACE_ENABLE_REGISTER) = 0xFFFFFFFF; //enable stimulus port 0-31 
  memW32(ITM_TRACE_PRIVILEGE_REGISTER) = 0x1; //set privilege
}
