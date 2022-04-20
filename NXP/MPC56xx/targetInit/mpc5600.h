#include "typedefs.h"


void initCPU(void);
void initWatchdog(void);
asm void initIrqVectors(void);
void initINTC(void);
void initPIT(void);
void enableInterrupts(void);
void enterAndExitStandbyMode(void);
void enterAndExitStopMode(void);
void enterAndExitHaltMode(void);
void catchResetFromStandby(void);

extern uint32_t __IVPR_VALUE;

extern int iCounter;
extern int isInterruptsEnabled;
extern int isDebugTest;
extern int isITest;
extern int isProfilerTest;
extern int isCoverageTest;
extern int g_ProfilerLoopCount;
extern int isProfilerWhileCPUisRunningTest;
extern int CPUrunningTestStart;

#define GPDO96_99 *(volatile unsigned int *)0xC3F90660
#define PCR99     *(volatile unsigned int *)0xC3F90106

