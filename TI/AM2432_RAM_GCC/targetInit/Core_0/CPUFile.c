#include "AM2432.h" 

extern unsigned long long _bootAddr_A53_0;
extern unsigned long long _bootAddr_A53_1;


void disableWatchdog(void)
{
  // The DMSC activates a 180 seconds WDT timeout upon POR.
  // To disable the WDT, use script AM243x_DisableWatchdogs.cpp during initialization or the following code:

  // Set RAT to get access to the DMSC registers
  setRatRegion(0x40000000);
  
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

void targetInit(void)
{
  #ifndef EMPTY_TARGET_INIT

  enable_M4FFS0_Core();
  enable_R5FSS0_Cores();
  enable_R5FSS1_Cores();


  #endif /* EMPTY_TARGET_INIT */
}

void enable_M4FFS0_Core(void){
  // By debug initialization this core are already up and currently in the debug halted state
  // This function resets the core
  
  // Remap RAT to access power domain registers
  setRatRegion(0x00000000);
  
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
  setRatRegion(0x40000000);
  
  CTRLMMR_SEC_CLSTR0_CORE1_BOOTVECT_LO = 0x0000;
  CTRLMMR_SEC_CLSTR0_CORE1_BOOTVECT_HI = 0x0000;
  
  // Remap RAT to access power domain registers
  setRatRegion(0x00000000);
  
  // Assert R5FSS0_1 core reset
  PSC0_MDCTL_LPSC_25 &= ~MODULE_LRSTZ; 
  execute_PD_change(PD_R5FSS0_GO); 
  
  // Bring R5FSS0_1 out of reset from the correct boot addresses
  PSC0_MDCTL_LPSC_25 |= (MODULE_NEXT_ENABLE | MODULE_LRSTZ);
  execute_PD_change(PD_R5FSS0_GO);
  
  // Both cores are running now
}


void enable_R5FSS1_Cores(void){  
  // By debug initialization these cores are already up and currently in the debug halted state
  // This function resets the cores, applies new bootaddresses and re-asserts the reset
  
  // RAT remap to access the bootvector registers of the R5FSS1_core0
  setRatRegion(0x40000000);
  CTRLMMR_SEC_CLSTR1_CORE0_BOOTVECT_LO = 0x0000;
  CTRLMMR_SEC_CLSTR1_CORE0_BOOTVECT_HI = 0x0000;
  // Remap RAT to access power domain registers
  setRatRegion(0x00000000);
  // Assert core reset
  PSC0_MDCTL_LPSC_27 &= ~MODULE_LRSTZ;
  execute_PD_change(PD_R5FSS1_GO);
  
  // RAT remap to access the bootvector registers of the R5FSS1_core1
  setRatRegion(0x40000000);
  CTRLMMR_SEC_CLSTR1_CORE1_BOOTVECT_LO = 0x0000;
  CTRLMMR_SEC_CLSTR1_CORE1_BOOTVECT_HI = 0x0000;
  // Remap RAT to access power domain registers
  setRatRegion(0x00000000);
  // Assert core reset
  PSC0_MDCTL_LPSC_28 &= ~MODULE_LRSTZ; 
  execute_PD_change(PD_R5FSS1_GO);
  
  // Enable modules and bring cores out of reset from the correct boot addresses
  PSC0_MDCTL_LPSC_27 |= (MODULE_NEXT_ENABLE | MODULE_LRSTZ);
  PSC0_MDCTL_LPSC_28 |= (MODULE_NEXT_ENABLE | MODULE_LRSTZ);
  execute_PD_change(PD_R5FSS1_GO);
  
  // Both cores are running now
}

void setRatRegion(unsigned long region_adr){
  RAT_BASE_3 = RAT_BASE;        // Base address of the RAT region
  
  RAT_TRANS_H_3 = 0x00000000;
  RAT_TRANS_L_3 = region_adr;   // Region translated address
  
  // Region size appears to be a maximum of 0x1D address bits
  // which allows a remap of 0x2000'0000 addresses
  while(RAT_CTRL_3 != RAT_ENABLE_MAX_REGION_SIZE)
    RAT_CTRL_3 = RAT_ENABLE_MAX_REGION_SIZE;   
}
