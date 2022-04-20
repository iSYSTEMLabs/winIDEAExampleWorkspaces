#define ITM_BASE_ADDRESS *(unsigned volatile int*) 0xE0000000 

void targetInit();
void targetEnableInterrupts();
void targetShutdown();
void disableWatchdog();

#define SYSTICK_CTRL *(unsigned volatile int*) 0xE000E010
#define SYSTICK_LOAD *(unsigned volatile int*) 0xE000E014

#define PIOA_OER *(unsigned volatile int*) 0x400E0E10
#define PIOA_SODR *(unsigned volatile int*) 0x400E0E30
#define PIOA_CODR *(unsigned volatile int*) 0x400E0E34

#define WDT_MR *(unsigned volatile int*) 0x400E1454

#define SYSTICK_CTRL_ENABLE_BIT 0
#define SYSTICK_CTRL_ENABLE_EXCEPTION_BIT 1
#define PIOA_TOGGLE_PA6_BIT 6
#define WDT_MR_WDDIS_BIT 15



#define EEFC_FMR *(unsigned volatile int*) 0x400E0A00   //flash mode reg

#define PMC_WPMR *(unsigned volatile int*) 0x400E04E4  //write protection

#define PMC_MCKR *(unsigned volatile int*) 0x400E0430  //master clock register

#define CKGR_PLLAR *(unsigned volatile int*) 0x400E0428 //plla reg

#define PMC_SR *(unsigned volatile int*) 0x400E0468
