#define ITM_BASE_ADDRESS *(unsigned volatile int*) 0xE0000000 

void targetInit();
void targetEnableInterrupts();
void profilerAddTestMessages();
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


//register defs
#define PMC_CKGR_PLLAR *(volatile unsigned int*) 0x400E0428
#define PMC_MCKR *(volatile unsigned int*) 0x400E0430
#define PMC_SR *(volatile unsigned int*) 0x400E0468
#define PMC_WPMR *(volatile unsigned int*) 0x400E04E4
#define EEFC_FMR *(volatile unsigned int*) 0x400E0A00
#define SUPC_CR *(volatile unsigned int*) 0x400E1410

//defines
#define PMC_WPMR_UNPROTECT  0x504D4300

#define SUPC_CR_PSWD_XTALSEL    0xA5000008
#define CKGR_PLLAR_DISABLE      0x00000000
#define CKGR_PLLAR_CONFIG       0x05B83F01
#define PMC_SR_LOCKA_MASK       0x00000002
#define PMC_MCKR_CONFIG         0x00000002
#define EEFC_FMR_CONFIG			0x04000300    // add wait states to FLASH access
