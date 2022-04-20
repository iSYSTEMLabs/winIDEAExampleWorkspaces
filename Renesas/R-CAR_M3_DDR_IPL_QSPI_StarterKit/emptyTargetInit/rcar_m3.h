#define PFC_GSPR5 (*(unsigned volatile int*)0xE6060114)
#define PFC_GSPR5_P03 3
#define GPIO_IOINTSEL5 (*(unsigned volatile int*)0xE6055000)
#define GPIO_IOINTSEL5_P03 3
#define GPIO_INOUTSEL5 (*(unsigned volatile int*)0xE6055004)
#define GPIO_INOUTSEL5_P03 3
#define GPIO_OUTDT5 (*(unsigned volatile int*)0xE6055008)
#define GPIO_OUTDT5_P03 3

#define R7_PTMR_LOAD (*(unsigned volatile int*)0xF0000600)
#define R7_PTMR_COUNTER (*(unsigned volatile int*)0xF0000604)
#define R7_PTMR_CTR (*(unsigned volatile int*)0xF0000608)
#define R7_PTMR_CTR_IE 2
#define R7_PTMR_CTR_AR 1
#define R7_PTMR_CTR_TE 0
#define R7_PTMR_IST (*(unsigned volatile int*)0xF000060C)

#define ICDDCR (*(unsigned volatile int*)0xF0001000)
#define ICDDCR_EN 0  
#define ICDISER0 (*(unsigned volatile int*)0xF0001100)
#define ICDISER0_ID29 29
#define ICDICPR0 (*(unsigned volatile int*)0xF0001280)
#define ICDICPR0_ID29 29
#define ICDIPR7 (*(unsigned volatile int*)0xF000141C)
#define ICDIPR7_ID29 8
#define ICCICR (*(unsigned volatile int*)0xF0000100)
#define ICCICR_EN 0
#define ICCPMR (*(unsigned volatile int*)0xF0000104)
#define ICCPMR_PRIO 0

void defaultHandler(void);
void TimerInterruptHandler(void);
void initVector(void);
static void unlockIntCtrl(void);
static void lockIntCtrl(void);
void initTPU(void);
void initCPU(void);
void enableInterrupts(void);
void InterruptRoutine(void);