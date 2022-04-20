
extern int iCounter;
extern int isInterruptsEnabled;
extern int isDebugTest;
extern int isITest;
extern int isProfilerTest;
extern int isCoverageTest;
extern int g_ProfilerLoopCount;

void targetInit();
void targetEnableInterrupts();
void targetShutdown();
void clockInit();

#define memW32(address) (*(unsigned long*)(address))
#define ITM_BASE_ADDRESS (0xE0000000UL)
#define ITM_LOCK_ACCESS_REGISTER (ITM_BASE_ADDRESS + 0x0FB0UL)
#define ITM_TRACE_ENABLE_REGISTER (ITM_BASE_ADDRESS + 0x0E00UL)
#define ITM_TRACE_PRIVILEGE_REGISTER (ITM_BASE_ADDRESS + 0x0E40UL)
#define SYST_CSR *(volatile unsigned int *)0xE000E010
#define SYST_RVR *(volatile unsigned int *)0xE000E014
#define SYST_CVR *(volatile unsigned int *)0xE000E018
#define PDOR6 *(volatile unsigned int *)0x40033418
#define DDR6 *(volatile unsigned int *)0x40033218
#define PCR6 *(volatile unsigned int *)0x40033118
#define PFR6 *(volatile unsigned int *)0x40033018
#define SCM_CTL *(volatile unsigned int *)0x40010000
#define SCM_STR *(volatile unsigned int *)0x40010004
#define SWC_PSR *(volatile unsigned int *)0x40010020
#define CSW_TMR *(volatile unsigned int *)0x40010030
#define PSW_TMR *(volatile unsigned int *)0x40010034
#define PLL_CTL2 *(volatile unsigned int *)0x4001003C
#define RST_STR *(volatile unsigned int *)0x4001000C
#define WDGLDR    (*((volatile int *)  0x40011000))
#define WDGCTL    (*((volatile char *) 0x40011008))
#define WDGLCK    (*((volatile int *)  0x40011C00))

extern unsigned char byTest;


