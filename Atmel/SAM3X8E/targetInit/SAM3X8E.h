#define ITM_BASE_ADDRESS *(unsigned volatile int*) 0xE0000000 

void targetInit();
void targetEnableInterrupts();
void targetShutdown();
void disableWatchdog();

#define SYSTICK_CTRL *(unsigned volatile int*) 0xE000E010
#define SYSTICK_LOAD *(unsigned volatile int*) 0xE000E014



#define WDT_MR *(unsigned volatile int*) 0x400E1A54

#define SYSTICK_CTRL_ENABLE_BIT 0
#define SYSTICK_CTRL_ENABLE_EXCEPTION_BIT 1
#define PIOB_TOGGLE_PA27_BIT 27
#define WDT_MR_WDDIS_BIT 15

#define  PIOB_WPMR *(unsigned volatile int*) 0x400E10E4    // PIOA protection reg  key =  0x50494F + 00

#define  PIOB_PER *(unsigned volatile int*) 0x400E1000    // enable register  0x400E0E00
#define  PIOB_OER *(unsigned volatile int*) 0x400E1010    // enable output     0x400E0E10
#define  PIOB_SODR *(unsigned volatile int*) 0x400E1030   // set output data register 0x400E0E30
#define  PIOB_PUDR *(unsigned volatile int*) 0x400E1060   // disconnect pullup   0x400E0E60
#define  PIOB_SODR *(unsigned volatile int*) 0x400E1030
#define  PIOB_CODR *(unsigned volatile int*) 0x400E1034


#define  PMC_WPMR *(unsigned volatile int*) 0x400E06E4 //write protection reg

#define  CKGR_MOR *(unsigned volatile int*) 0x400E0620 //main osc reg

#define  CKGR_PLLAR *(unsigned volatile int*) 0x400E0628 //pll conf reg

#define  PMC_SR *(unsigned volatile int*) 0x400E0668 //write protection

#define  PMC_MCKR *(unsigned volatile int*) 0x400E0630 //master clock contr. reg

#define  EFC0_FMR *(unsigned volatile int*) 0x400E0A00 //flash mode register
#define  EFC1_FMR *(unsigned volatile int*) 0x400E0C00 //flash mode register

