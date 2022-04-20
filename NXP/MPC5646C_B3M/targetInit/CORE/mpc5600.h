#include "typedefs.h"
extern uint32_t __IVPR_VALUE;

extern int iCounter;
extern int isInterruptsEnabled;
extern int isDebugTest;
extern int isProfilerTest;
extern int isCoverageTest;
extern int g_ProfilerLoopCount;

#define GPDO96_99 *(volatile unsigned int *)0xC3F90660
#define PCR99     *(volatile unsigned int *)0xC3F90106
