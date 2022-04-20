#ifndef __rh850_f1km_h__
#define __rh850_f1km_h__
#include "dr7f701653.dvf.h"
#include "dr7f701653_irq.h"

extern void watchdogUpdate();

void CPU_Init();   
void targetInit();
void targetEnableInterrupts();
void targetDebug();
void targetShutdown();

void InitClocks();
void InitOSTM();

int iInterruptCounter;

#endif
