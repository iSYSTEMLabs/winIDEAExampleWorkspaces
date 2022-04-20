#define ITM_BASE_ADDRESS *(unsigned volatile int*) 0xE0000000 

void targetInit();
void targetEnableInterrupts();
void targetShutdown();
void disableWatchdog();

#define SYST_CSR *(volatile unsigned int*) 0xE000E010
#define SYST_RVR *(volatile unsigned int*) 0xE000E014 
// all registers belong to PIOA, not PIOB
#define PIO_PER *(volatile unsigned int*) 0x400E0E00
#define PIO_OER *(volatile unsigned int*) 0x400E0E10
#define PIO_SODR *(volatile unsigned int*) 0x400E0E30
#define PIO_CODR *(volatile unsigned int*) 0x400E0E34
#define PIO_PUDR *(volatile unsigned int*) 0x400E0E60
#define PIO_PER_PA15_BIT 15
#define PIO_OER_PA15_BIT 15
#define PIO_SODR_PA15_BIT 15
#define PIO_CODR_PA15_BIT 15
#define PIO_PUDR_PA15_BIT 15



//registers
#define PMC_CKGR_MOR *(volatile unsigned int*)       0x400E0420  //main osc reg.
#define PMC_CKGR_PLLAR  *(volatile unsigned int*)    0x400E0428  //main plla reg
#define PMC_MCKR *(volatile unsigned int*)           0x400E0430  //main clock register
#define PMC_SR *(volatile unsigned int*)             0x400E0468  //status reg flag
#define PMC_WPMR *(volatile unsigned int*)	     0x400E04E4  //write protection reg.
#define EEFC_FMR *(volatile unsigned int*)	     0x400E0A00  //flash wait states 


///
#define PMC_SCER_PCK1_ENABLE    0x00000200
#define PMC_PCER0_ENABLE_PIOA   0x00008000
#define PMC_WPMR_UNPROTECT      0x504D4300

#define EEFC_FMR_CONFIG					0x04000500    // add wait states to FLASH access
#define SUPC_CR_PSWD_XTALSEL    0xA5000008
#define CKGR_MOR_CONFIG         0x00373E09
#define CKGR_MOR_CONFIG_2       0x01373E09
#define CKGR_PLLAR_DISABLE      0x20000000
#define CKGR_PLLAR_CONFIG       0x20133F01
#define PMC_SR_MOSCXTS_MASK     0x00000001
#define PMC_SR_LOCKA_MASK       0x00000002
#define PMC_SR_MCKRDY_MASK      0x00000008
#define PMC_SR_MOSCSEL_MASK     0x00010000
#define PMC_MCKR_CONFIG_0       0x00000011
#define PMC_MCKR_CONFIG_1       0x00000011
#define PMC_MCKR_CONFIG_2       0x00000012

