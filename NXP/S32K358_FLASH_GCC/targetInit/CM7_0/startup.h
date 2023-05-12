#ifndef STARTUP_H
#define STARTUP_H

#include "S32K358.h"

extern int main();
void setVTOR(void);
void enableFPU(void);
void IntDefaultHandler(void);

extern unsigned long __stack;

extern unsigned volatile long __etext;
extern unsigned volatile long __data_start__;
extern unsigned volatile long __data_end__;
extern unsigned volatile long __bss_start__;
extern unsigned volatile long __bss_end__;
extern unsigned volatile long __VTOR;

#endif // STARTUP_H