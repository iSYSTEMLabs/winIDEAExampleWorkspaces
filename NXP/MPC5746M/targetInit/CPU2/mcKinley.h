#include "mpc5746m.h"
int dummyRead;

void initWatchdog();
void initPIT();
void initGPIO();
void toggleGPIOPort();
void initIrqVectors();
void initINTC();
void InterruptRoutine();
void initLPM();
void enterAndExitHaltMode();
void enterAndExitStopMode();
void targetEnterAndExitLowPowerMode();
void targetEnableInterrupts();
void targetDisableWakeupInterrupts();
