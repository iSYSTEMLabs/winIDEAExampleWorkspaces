#include "TDA4VM.h" 


extern unsigned long long _bootAddrMCU_1_R5;
extern unsigned long long _bootAddrMAIN_0_R5_0;
extern unsigned long long _bootAddrMAIN_0_R5_1;
extern unsigned long long _bootAddrMAIN_1_R5_0;
extern unsigned long long _bootAddrMAIN_1_R5_1;
extern unsigned long long _bootAddrCL0_A72_0;
extern unsigned long long _bootAddrCL0_A72_1;


void disableWatchdog(void)
{
}


void execute_PD_change(unsigned int pd_go){
  PSC0_PTCMD |= (1 << pd_go);         // Set the GO register             
  while(PSC0_PTSTAT & (1 << pd_go));  // Wait for completion
}

void enable_MCU_1_R5_Core(void){
  // By debug initialization this core is already up and currently in the debug halted state
  // This function resets the core, applies new bootaddress and re-asserts the reset
  
  unsigned long long bootAddr = (unsigned int) &_bootAddrMCU_1_R5;
  CTRLMMR_MCUSEC_CLSTR0_CORE1_BOOTVECT_HI = bootAddr >> 32;
  CTRLMMR_MCUSEC_CLSTR0_CORE1_BOOTVECT_LO = bootAddr;
  
  // Disable module and assert reset to start from the above mentioned boot addresses
  WKUP_PSC0_MDCTL_LPSC_1_R5_1 = MODULE_NEXT_DISABLE; 
  execute_PD_change(PD_MCU_R5_CORE1_GO);
  
  // Enable modules and bring cores out of reset from the correct boot addresses
  WKUP_PSC0_MDCTL_LPSC_1_R5_1 |= (MODULE_NEXT_ENABLE | MODULE_LRSTZ);  
  execute_PD_change(PD_MCU_R5_CORE1_GO);
  
  // Core is running now
}

void enable_Main_0_R5_Cores(void){
  // By debug initialization these cores are already up and currently in the debug halted state
  // This function resets the cores, applies new bootaddresses and re-asserts the reset
  
  unsigned long long bootAddr = (unsigned int) &_bootAddrMAIN_0_R5_0;
  CTRLMMR_SEC_CLSTR0_CORE0_BOOTVECT_HI = bootAddr >> 32;
  CTRLMMR_SEC_CLSTR0_CORE0_BOOTVECT_LO = bootAddr; 
  
  bootAddr = (unsigned int) &_bootAddrMAIN_0_R5_1;
  CTRLMMR_SEC_CLSTR0_CORE1_BOOTVECT_HI = bootAddr >> 32;
  CTRLMMR_SEC_CLSTR0_CORE1_BOOTVECT_LO = bootAddr; 

  // Disable module and assert reset to start from the above mentioned boot addresses
  PSC0_MDCTL_LPSC_PULSAR_0_R5_0 = MODULE_NEXT_DISABLE;
  PSC0_MDCTL_LPSC_PULSAR_0_R5_1 = MODULE_NEXT_DISABLE;
  execute_PD_change(PD_MAIN_R5_CORE0_GO); 
  
  // Enable modules and bring cores out of reset from the correct boot addresses
  PSC0_MDCTL_LPSC_PULSAR_0_R5_0 |= (MODULE_NEXT_ENABLE | MODULE_LRSTZ);
  PSC0_MDCTL_LPSC_PULSAR_0_R5_1 |= (MODULE_NEXT_ENABLE | MODULE_LRSTZ);
  execute_PD_change(PD_MAIN_R5_CORE0_GO);
  
  // Cores are running now
}


void enable_Main_1_R5_Cores(void){  
  // By debug initialization these cores are already up and currently in the debug halted state
  // This function resets the cores, applies new bootaddresses and re-asserts the reset
  
  unsigned long long bootAddr = (unsigned int) &_bootAddrMAIN_1_R5_0;
  CTRLMMR_SEC_CLSTR1_CORE0_BOOTVECT_HI = bootAddr >> 32;
  CTRLMMR_SEC_CLSTR1_CORE0_BOOTVECT_LO = bootAddr;
  
  bootAddr = (unsigned int) &_bootAddrMAIN_1_R5_1;
  CTRLMMR_SEC_CLSTR1_CORE1_BOOTVECT_HI = bootAddr >> 32;
  CTRLMMR_SEC_CLSTR1_CORE1_BOOTVECT_LO = bootAddr;
  
  // Disable module and assert reset to start from the above mentioned boot addresses
  PSC0_MDCTL_LPSC_PULSAR_1_R5_0 = MODULE_NEXT_DISABLE;
  PSC0_MDCTL_LPSC_PULSAR_1_R5_1 = MODULE_NEXT_DISABLE;  
  execute_PD_change(PD_MAIN_R5_CORE1_GO);
  
  // Enable modules and bring cores out of reset from the correct boot addresses
  PSC0_MDCTL_LPSC_PULSAR_1_R5_0 |= (MODULE_NEXT_ENABLE | MODULE_LRSTZ); 
  PSC0_MDCTL_LPSC_PULSAR_1_R5_1 |= (MODULE_NEXT_ENABLE | MODULE_LRSTZ);
  execute_PD_change(PD_MAIN_R5_CORE1_GO);
  
  // Cores are running now
}

void enable_A72_Cores(void){ 
  // By debug initialization these cores are already up and currently in the debug halted state
  // This function resets the cores, applies new bootaddresses and re-asserts the reset
  unsigned long long bootAddr = (unsigned int) &_bootAddrCL0_A72_0;
  CC_RST_VEC_LO_CP0 = bootAddr >> 2;
  CC_RST_VEC_HI_CP0 = 0x0000;
  
  bootAddr = (unsigned int) &_bootAddrCL0_A72_1;
  CC_RST_VEC_LO_CP1 = bootAddr >> 2;
  CC_RST_VEC_HI_CP1 = 0x0000;
  
  // Cluster enable cycle required to fetch new bootaddresses
  PSC0_MDCTL_LPSC_A72_CLUSTER |= MODULE_NEXT_DISABLE;
  execute_PD_change(PD_A72_CLUSTER_GO);
  
  // Release cluster out of reset
  PSC0_MDCTL_LPSC_A72_CLUSTER |= (MODULE_NEXT_ENABLE | MODULE_LRSTZ); 
  execute_PD_change(PD_A72_CLUSTER_GO);

  // Disable A72_0 module and assert reset to start from the new boot address
  PSC0_MDCTL_LPSC_A72_CORE_0 = MODULE_NEXT_DISABLE;
  execute_PD_change(PD_A72_CORE0_GO);

  // Enable module and bring core out of reset
  PSC0_MDCTL_LPSC_A72_CORE_0 |= (MODULE_NEXT_ENABLE | MODULE_LRSTZ); 
  execute_PD_change(PD_A72_CORE0_GO);

  // Disable A72_1 module and assert reset to start from the new boot address
  PSC0_MDCTL_LPSC_A72_CORE_1 = MODULE_NEXT_DISABLE;
  execute_PD_change(PD_A72_CORE1_GO);
  
  // Enable module and bring core out of reset
  PSC0_MDCTL_LPSC_A72_CORE_1 |= (MODULE_NEXT_ENABLE | MODULE_LRSTZ); 
  execute_PD_change(PD_A72_CORE1_GO);
 
  // Both cores are running now
}

void enableAllCores(void)
{ 
  enable_MCU_1_R5_Core();
  enable_Main_0_R5_Cores();
  enable_Main_1_R5_Cores();
  enable_A72_Cores();
}

void targetInit(void)
{
  #ifndef EMPTY_TARGET_INIT

  enableAllCores();

  #endif /* EMPTY_TARGET_INIT */
}
