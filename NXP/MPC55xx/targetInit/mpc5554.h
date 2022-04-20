
extern int iCounter;
extern int isInterruptsEnabled;
extern int isDebugTest;
extern int isITest;
extern int isProfilerTest;
extern int isCoverageTest;
extern int g_ProfilerLoopCount;

typedef struct etpu_config_t{
};
struct etpu_config_t my_etpu_config = 
{
};
  
/* PLL register address */ 
#define FMPLL_SYNCR_R 0xC3F80000

#define SIU_PCR203  0xC3F901D6
#define SIU_PCR204  0xC3F901D8

#define SIU_PCR205  0xC3F901DA
#define SIU_PCR206  0xC3F901DC

#define SIU_PCR114  0xC3F90124

#define GPDO_203_ADDR 0xC3F906CB
#define GPDO_205_ADDR 0xC3F906CD

#define GPDI_204_ADDR 0xC3F908CC
#define GPDI_206_ADDR 0xC3F908CE

#define ETPU_C0CR_A	0xC3FC0400
#define ETPU_C0SCR_A 0xC3FC0404
#define ETPU_C0HSRR_A 0xC3FC0408

#define mem8(addr) (*(volatile unsigned char*)(addr))
#define mem16(addr) (*(volatile unsigned short*)(addr))
#define mem32(addr) (*(volatile unsigned int*)(addr))

void initClock(void);
void initTimer(void);
void initIRQ(void);
void initCPU(void);
void toggleGPIO(void);


