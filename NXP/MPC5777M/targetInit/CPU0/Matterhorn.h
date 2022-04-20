#include "mpc5777m.h"
int dummyRead;

void initWatchdog();
void initPIT();
void initIrqVectors();
void initINTC();
void InterruptRoutine();
