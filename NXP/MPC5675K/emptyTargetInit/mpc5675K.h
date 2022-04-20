
extern int iCounter;
extern int isInterruptsEnabled;
extern int isDebugTest;
extern int isITest;
extern int isProfilerTest;
extern int isCoverageTest;
extern int g_ProfilerLoopCount;


typedef unsigned int uint32_t;
extern const uint32_t ISRVectorTable[];


/* MC_ME registers */
#define MC_ME_MCTL      (*(volatile unsigned int*)0xC3FDC004)
#define MC_ME_GS        (*(volatile unsigned int*)0xC3FDC000)
#define MC_ME_RUN_PC0   (*(volatile unsigned int*)0xC3FDC080)
#define MC_ME_DRUN_MC   (*(volatile unsigned int*)0xC3FDC02C)

/* MS_CGM registers */
#define SELCTL      24
#define EN          0

#define MC_CGM_AC3_SC   (*(volatile unsigned int*)0xC3FE0398)
#define MC_CGM_SC_DC1   (*(volatile unsigned int*)0xC3FE037C)
#define MC_CGM_OCDS_SC  (*(volatile unsigned int*)0xC3FE0374)
#define MC_CGM_OC_EN    (*(volatile unsigned int*)0xC3FE0370)

/* PLL registers*/
#define EN_PLL_SW   8
#define FMPLL_CR        (*(volatile unsigned int*)0xC3FE00A0)

/* GPIO registers */
#define GPIO151     0

#define SIUL_GPDO148_151 (*(volatile unsigned int*)0xC3F90694)
#define SIUL_PCR151      (*(volatile unsigned int*)0xC3F9016C)

/* PIT registers */
#define TEN         0
#define TIE         1
#define TIF         0

#define PITMCR           (*(volatile unsigned int*)0xC3FF0000)
#define PIT_LDVAL1       (*(volatile unsigned int*)0xC3FF0110)
#define PIT_TCTRL1       (*(volatile unsigned int*)0xC3FF0118)
#define PIT_TFLG1        (*(volatile unsigned int*)0xC3FF011C)
#define PIT_LDVAL0       (*(volatile unsigned int*)0xC3FF0100)
#define PIT_TCTRL0       (*(volatile unsigned int*)0xC3FF0108)
#define PIT_TFLG0        (*(volatile unsigned int*)0xC3FF010C)

/* INTC registers */
#define INTC_IACKR       (*(volatile unsigned int*)0xFFF48010)
#define INTC_BCR         (*(volatile unsigned int*)0xFFF48000)  
#define INTC_PSR56_59    (*(volatile unsigned int*)0xFFF48078)
#define INTC_PSR60_63    (*(volatile unsigned int*)0xFFF4807C)
#define INTC_CPR_PRC0    (*(volatile unsigned int*)0xFFF48008)


#define SWT_SR           (*(volatile unsigned long*)0xFFF38010)
#define SWT_CR           (*(volatile unsigned long*)0xFFF38000)
#define SSCM_DPM_BOOT    (*(volatile unsigned long*)0xC3FD8018)
#define SSCM_DPM_KEY     (*(volatile unsigned long*)0xC3FD801C)


void initClock(void);
void initTimer(void);
void InitializeINTC(void);
void initCPU(void);
void toggleGPIO(void);


