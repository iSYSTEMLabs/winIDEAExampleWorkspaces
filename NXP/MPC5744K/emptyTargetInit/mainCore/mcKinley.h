#include "mpc5746m.h"
int dummyRead;

void initWatchdog();
void initPIT();
void initIrqVectors();
void initINTC();
void InterruptRoutine();
void initLPM();
void enterAndExitHaltMode();
void enterAndExitStopMode();
void targetEnterAndExitLowPowerMode();
void targetDisableWakeupInterrupts(); 

extern const uint32_t IntcIsrVectorTable[];
extern void e200zX_Interrupt_Setup(void);
extern void InterruptRoutine();
void enableSecondCore();
void TimerInterruptHandler();