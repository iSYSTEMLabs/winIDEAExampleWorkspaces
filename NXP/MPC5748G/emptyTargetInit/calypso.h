#ifndef CALYPSO_TARGET__H
#define CALYPSO_TARGET__H

#include "MPC5748G_401.h"

void initWatchdog();
void initPIT();
void initIrqVectors();
void initINTC();
void interruptHandler();
void InterruptRoutine();
void initLPM();
void enterAndExitHaltMode();
void enterAndExitStopMode();
void targetEnterAndExitLowPowerMode();
void targetDisableWakeupInterrupts();
void targetSelfReset();
void initClockGating(void);
void timerPit0Isr(void);

#endif  /* #ifndef CALYPSO_TARGET__H */