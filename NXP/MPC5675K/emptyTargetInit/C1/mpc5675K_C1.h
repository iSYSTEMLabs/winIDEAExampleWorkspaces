
/*
extern int iCounter;
extern int isInterruptsEnabled;
extern int isDebugTest;
extern int isITest;
extern int isProfilerTest;
extern int isCoverageTest;
extern int g_ProfilerLoopCount;
*/
  
#define SIU_GPDO99 0xC3F90663
#define SIU_PCR99  0xC3F90106

/* PIT register addresses */
#define LDVAL0 0xC3FF0100
#define TCTRL0 0xC3FF0108
#define TFLG0  0xC3FF010C

/* INTC register addresses */
#define INTC_MCR    0xFFF48000
#define INTC_CPR    0xFFF48008
#define INTC_PSR301 0xFFF4816D
#define INTC_IACKR  0xFFF48010

/* PLL register address */ 
#define FMPLL_SYNSR 0xC3F80004
#define ESYNCR1     0xC3F80008
#define ESYNCR2     0xC3F8000C

#define ETPU_C0CR_A	0xC3FC0400
#define ETPU_C0SCR_A 0xC3FC0404
#define ETPU_C0HSRR_A 0xC3FC0408

#define mem8(addr) (*(volatile unsigned char*)(addr))
#define mem16(addr) (*(volatile unsigned short*)(addr))
#define mem32(addr) (*(volatile unsigned int*)(addr))
     
#define SSCM_DPM_BOOT 0xC3FD8018
#define SSCM_DPM_KEY  0xC3FD801C

#define meml(addr) (*(unsigned long volatile *)(addr))
#define SWT_SR 0x8ff38010
#define SWT_CR 0x8ff38000

unsigned volatile char releaseCore;
void initClock(void);
void initTimer(void);
void initIRQ(void);
void initCPU(void);
void toggleGPIO(void);


