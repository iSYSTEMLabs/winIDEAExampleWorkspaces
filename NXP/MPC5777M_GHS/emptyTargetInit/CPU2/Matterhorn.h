#include "mpc5777m.h"
int dummyRead;

void initWatchdog();
void initPIT();
void initIrqVectors();
void initINTC();
void InterruptRoutine();
void targetEnableInterrupts();
extern void e200zX_Interrupt_Setup(); 

#define SWT_2_CR *(volatile unsigned int *)0xFC058000
#define SWT_2_SR *(volatile unsigned int *)0xFC058010
