#include "mpc5777m.h"
int dummyRead;

void initWatchdog();
void initPIT();
void initIrqVectors();
void initINTC();
void InterruptRoutine();
extern void e200zX_Interrupt_Setup(); 
