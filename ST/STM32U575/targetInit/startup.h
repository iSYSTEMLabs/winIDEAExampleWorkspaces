#ifndef STARTUP_H
#define STARTUP_H

#include "STM32U5x5.h"

extern int main();
void enableFPU(void);
void IntDefaultHandler(void);
void InterruptRoutine(void);

extern unsigned volatile long _estack;

extern unsigned volatile long _sidata;
extern unsigned volatile long _sdata;
extern unsigned volatile long _edata;
extern unsigned volatile long _sbss;
extern unsigned volatile long _ebss;

#define VTOR (*(unsigned long volatile *)0xE000ED08)

#endif // STARTUP_H