#ifndef CALYPSO_TARGET__H
#define CALYPSO_TARGET__H

#include "MPC5748G_2112.h"

void initWatchdog();
void initPIT();
void initIrqVectors();
void initINTC();
void InterruptRoutine();
void InterruptHandler();
void initLPM();
void enterAndExitHaltMode();
void enterAndExitStopMode();
void targetEnterAndExitLowPowerMode();
void targetDisableWakeupInterrupts();
void initClockGating(void);
void timerPit0Isr(void);

#endif  /* #ifndef CALYPSO_TARGET__H */