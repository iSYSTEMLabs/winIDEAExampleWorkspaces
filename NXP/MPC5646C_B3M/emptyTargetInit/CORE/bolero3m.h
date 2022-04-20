#include "typedefs.h"

extern uint32_t __IVPR_VALUE;

#define SWT_SR 0xfff38010
#define SWT_CR 0xfff38000

#define SSCM_DPM_BOOT 0xC3FD8018
#define SSCM_DPM_KEY  0xC3FD801C

extern   IVOR0_Handler;
extern   IVOR1_Handler;
extern   IVOR2_Handler;
extern   IVOR3_Handler;
extern   IVOR4_Handler;
extern   IVOR5_Handler;
extern   IVOR6_Handler;
extern   IVOR7_Handler;
extern   IVOR8_Handler;
extern   IVOR9_Handler;
extern   IVOR10_Handler;
extern   IVOR11_Handler;
extern   IVOR12_Handler;
extern   IVOR13_Handler;
extern   IVOR14_Handler;
extern   IVOR15_Handler;


void CPU_Init(void);
void initWatchdog(void);
void initIrqVectors(void);
void initINTC(void);
void enableInterrupts(void);
void enableSecondCore(void);

void enterAndExitStopMode(void);
void enterStandbyMode(void);

#define mem(addr) (*(unsigned char volatile *)(addr))
#define memw(addr) (*(unsigned short volatile *)(addr))
#define meml(addr) (*(unsigned long volatile *)(addr))
//#define PCR45    (*((volatile unsigned int *)(0xC3F9009A))) 
#define GPDO44_47      (*((volatile unsigned int *)(0xC3F9062C))) 
 
