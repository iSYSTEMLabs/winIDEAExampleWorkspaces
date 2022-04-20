#pragma language=extended

#include <intrinsics.h>
#include <iorh850.h>
extern void watchdogUpdate();

void InitClocks();
void InitOSTM();
__interrupt void TimerInterruptHandler();






