#include "AM6442.h" 

extern unsigned long long _bootAddr_A53_0;
extern unsigned long long _bootAddr_A53_1;


void disableWatchdog(void)
{
  // The DMSC activates a 180 seconds WDT timeout upon POR.
  // Set RAT to get access to the DMSC registers
  setRatRegion1(0x44130000);
  
  // Unlock sequence to access RTI registers
  WWRTI_KICK0 = 0x4658FC21;
  WWRTI_KICK1 = 0x3AC4F102;
  
  // Magic number which silences the watchdog
  WWRTI_CLK_CTRL = 0xA;
  
  // Lock to prevent any other changes
  WWRTI_KICK0 = 0x00000000;
  WWRTI_KICK1 = 0x00000000;
}


void execute_PD_change(unsigned int pd_go){
  PSC0_PTCMD |= (1 << pd_go);             // Set the GO register             
  while(PSC0_PTSTAT & (1 << pd_go));      // Wait for completion
}

void execute_MCU_PD_change(unsigned int pd_go){
  MCU_PSC0_PTCMD |= (1 << pd_go);         // Set the GO register             
  while(MCU_PSC0_PTSTAT & (1 << pd_go));  // Wait for completion
}


void enable_M4FFS0_Core(void){
  // By debug initialization this core are already up and currently in the debug halted state
  // This function resets the core
  
  // Remap RAT to access power domain registers
  setRatRegion1(0x04000000);
  
  // Assert M4FSS0_0 core reset
  MCU_PSC0_MDCTL_LPSC_7 &= ~MODULE_LRSTZ; 
  execute_MCU_PD_change(PD_M4FSS0_GO); 
  
  // Bring M4FSS0_0 out of reset from the correct boot addresses
  MCU_PSC0_MDCTL_LPSC_7 |= (MODULE_NEXT_ENABLE | MODULE_LRSTZ);
  execute_MCU_PD_change(PD_M4FSS0_GO);
  
  // M4 core is running now
}


void enable_R5FSS0_Cores(void){
  // By debug initialization these cores are already up and currently in the debug halted state
  // This function resets the cores, applies new bootaddresses and re-asserts the reset
  
  // RAT remap to access the bootvector registers of the R5FSS0 cores
  setRatRegion1(0x45A00000);
  
  CTRLMMR_SEC_CLSTR0_CORE1_BOOTVECT_LO = 0x0000;
  CTRLMMR_SEC_CLSTR0_CORE1_BOOTVECT_HI = 0x0000;
  
  // Remap RAT to access power domain registers
  setRatRegion1(0x00400000);
  
  // Assert R5FSS0_1 core reset
  PSC0_MDCTL_LPSC_25 &= ~MODULE_LRSTZ;
  execute_PD_change(PD_R5FSS0_GO); 
  
  // Bring R5FSS0_1 core out of reset from the correct boot addresses
  PSC0_MDCTL_LPSC_25 |= (MODULE_NEXT_ENABLE | MODULE_LRSTZ);
  execute_PD_change(PD_R5FSS0_GO);
  
  // Both cores are running now
}


void enable_R5FSS1_Cores(void){  
  // By debug initialization these cores are already up and currently in the debug halted state
  // This function resets the cores, applies new bootaddresses and re-asserts the reset
  
  // Remap RAT to access power domain registers
  setRatRegion1(0x00400000);
  
  // Assert core reset
  PSC0_MDCTL_LPSC_27 &= ~MODULE_LRSTZ;
  PSC0_MDCTL_LPSC_28 &= ~MODULE_LRSTZ;
  execute_PD_change(PD_R5FSS1_GO);
  
  // RAT remap to access the bootvector registers of the R5FSS1 cores
  setRatRegion1(0x45A00000);
  
  CTRLMMR_SEC_CLSTR1_CORE0_BOOTVECT_LO = 0x0000;
  CTRLMMR_SEC_CLSTR1_CORE0_BOOTVECT_HI = 0x0000;
  
  CTRLMMR_SEC_CLSTR1_CORE1_BOOTVECT_LO = 0x0000;
  CTRLMMR_SEC_CLSTR1_CORE1_BOOTVECT_LO = 0x0000;
  
  // Remap RAT to access power domain registers
  setRatRegion1(0x00400000);
  
  // Now bring cores out of reset from the correct boot addresses
  PSC0_MDCTL_LPSC_27 |= (MODULE_NEXT_ENABLE | MODULE_LRSTZ);
  PSC0_MDCTL_LPSC_28 |= (MODULE_NEXT_ENABLE | MODULE_LRSTZ);
  execute_PD_change(PD_R5FSS1_GO);
}


void enable_A53_Cores(void){ 
  // By debug initialization these cores are already up and currently in the debug halted state
  // This function resets the cores, applies new bootaddresses and re-asserts the reset
  
  // RAT remap to access the bootvector registers of the A53 cores
  setRatRegion1(0x45A00000);
  
  unsigned long long bootAddr = (unsigned int) &_bootAddr_A53_0;
  CTRLMMR_SEC_CLSTR9_RST_VEC_LO_CORE0 = bootAddr >> 2;
  CTRLMMR_SEC_CLSTR9_RST_VEC_HI_CORE0 = 0x0000;
  
  bootAddr = (unsigned int) &_bootAddr_A53_1;
  CTRLMMR_SEC_CLSTR9_RST_VEC_LO_CORE1 = bootAddr >> 2;
  CTRLMMR_SEC_CLSTR9_RST_VEC_HI_CORE1 = 0x0000;
  
  // Remap RAT to access power domain registers
  setRatRegion1(0x00400000);
  
  // Cluster enable cycle required to fetch new bootaddresses
  PSC0_MDCTL_LPSC_A53_CLUSTER |= MODULE_NEXT_DISABLE;
  execute_PD_change(PD_A53_CLUSTER_GO);
  
  // Release cluster out of reset
  PSC0_MDCTL_LPSC_A53_CLUSTER |= (MODULE_NEXT_ENABLE | MODULE_LRSTZ); 
  execute_PD_change(PD_A53_CLUSTER_GO);

  // Disable A53_0 module and assert reset to start from the new boot address
  PSC0_MDCTL_LPSC_A53_CORE_0 = MODULE_NEXT_DISABLE;
  execute_PD_change(PD_A53_CORE0_GO);

  // Enable module and bring core out of reset
  PSC0_MDCTL_LPSC_A53_CORE_0 |= (MODULE_NEXT_ENABLE | MODULE_LRSTZ); 
  execute_PD_change(PD_A53_CORE0_GO);

  // Disable A53_1 module and assert reset to start from the new boot address
  PSC0_MDCTL_LPSC_A53_CORE_1 = MODULE_NEXT_DISABLE;
  execute_PD_change(PD_A53_CORE1_GO);
  
  // Enable module and bring core out of reset
  PSC0_MDCTL_LPSC_A53_CORE_1 |= (MODULE_NEXT_ENABLE | MODULE_LRSTZ); 
  execute_PD_change(PD_A53_CORE1_GO);
 
  // Both cores are running now
}

void targetInit(void)
{
  #ifndef EMPTY_TARGET_INIT

  enable_M4FFS0_Core();
  enable_R5FSS0_Cores();
  enable_R5FSS1_Cores();
  enable_A53_Cores();

  #endif /* EMPTY_TARGET_INIT */
}


void setRatRegion1(unsigned long region_adr){
  RAT_BASE_1 = RAT_BASE;        // Base address of the RAT1 region
  
  RAT_TRANS_H_1 = 0x00000000;
  RAT_TRANS_L_1 = region_adr;   // Region translated address
  
  // Region spans a maximum of 0x10 address bits
  // which allows a remap of 0x0001'0000 addresses
  while(RAT_CTRL_1 != RAT_ENABLE_MAX_REGION_SIZE)
    RAT_CTRL_1 = RAT_ENABLE_MAX_REGION_SIZE;   
}
