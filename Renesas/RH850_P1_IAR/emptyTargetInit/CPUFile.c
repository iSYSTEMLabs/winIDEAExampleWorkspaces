#include "RH850.h"


extern void ProfilerC_Interrupt();


void CPU_Init()
{
  __DI(); //disable interrupts
  InitOSTM();
}


void InitOSTM()
{
  OSTM0CMP=0x00000E00;  // load compare value
  OSTM0CTL=0x1;           // select interrupt mode
  ICOSTM0=0x0;     // disable interrupt masking
}

#pragma vector=0x100
__interrupt void TimerInterruptHandler(void)
{
  __DI();
  InterruptRoutine();
  __EI();
}


void targetEnableInterrupts()
{
  OSTM0TS=0x1;   // start trigger
  __EI();        // unmask interrupts
}

void targetDisableInterrupts()
{
  __DI();
}

void targetInit()
{
  #ifndef EMPTY_TARGET_INIT

  targetDisableInterrupts();
  CPU_Init();
  targetEnableInterrupts();

  #endif /* EMPTY_TARGET_INIT */
}


//missing function definitions
void __iar_system_Mtxdst(){while(1);}
void __iar_system_Mtxinit(){while(1);}
void __iar_system_Mtxlock(){while(1);}
void __iar_system_Mtxunlock(){while(1);}
void __iar_file_Mtxinit(){while(1);}
void __iar_file_Mtxdst(){while(1);}
void __iar_file_Mtxlock(){while(1);}
void __iar_file_Mtxunlock(){while(1);}
__cc_version1 unsigned char __low_level_init()
{
  return 0;
}


void disableWatchdog()
{
}
