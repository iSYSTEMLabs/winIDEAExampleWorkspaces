#include "system.h"

extern int main(void);

extern unsigned long _estack;

extern unsigned long _etext;
extern unsigned long _sdata;
extern unsigned long _edata;
extern unsigned long _sbss;
extern unsigned long _ebss;

extern void _coreEnableIrqVicOffset_(void);
extern void _esmCcmErrorsClear_(void);
extern void _coreInitRegisters_(void);
extern void _coreInitStackPointer_(void);



void Reset(void) __attribute__((noreturn));

__attribute__ ((naked))

void Reset(void)
{
  _coreInitRegisters_();
  
  _coreInitStackPointer_();
  
  _coreEnableIrqVicOffset_();
  
 
  /* Work Around for Errata DEVICE#140: ( Only on Rev A silicon) 
   *
   * Errata Description:
   *            The Core Compare Module(CCM-R4) may cause nERROR to be asserted after a cold power-on
   * Workaround:
   *            Clear ESM Group2 Channel 2 error in ESMSR2 and Compare error in CCMSR register */
  if (DEVICE_ID_REV == 0x802AAD05U)
  {
    _esmCcmErrorsClear_();
  }
  
  main();
}

void IntDefaultHandler()
{
  asm(" BKPT");
  while(1)
  {
  }
}

void phantomInterrupt(void)
{
  asm(" BKPT");
  while(1)
  {
  }
}


