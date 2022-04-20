#include "Layerscape.h"


void targetInit()
{
  #ifndef EMPTY_TARGET_INIT

  // GPIO Enable and PLL need to be configured through RCW, and there is currently
  // no QSPI monitor for this device. Clock = 100 MHz.

  initTimer();
  initIRQ();

  #endif /* EMPTY_TARGET_INIT */
}


void initTimer()
{
  SYS_COUNTER_CNTCR |= (0x1 << 0);

  asm("LDR X1, =25000");            // Load compare value (at 25 MHz 25000 should result in an interrupt every 1ms)
  asm("MSR CNTHP_CVAL_EL2, X1");    // set CNTHP_CVAL register

  asm("LDR X1, =1");                // Load 1 for enable enable event in CNTHP_CTL  
  asm("MSR CNTHP_CTL_EL2, X1");     // Enable
}

void initIRQ()
{
  GICD_CTLR = 0x00000001;         // Enable interrupts for group 0 (  )
  GICC_CTLR = 0x00000001;         // Enable interrupts for group 0 (cpu) 
  
  GICD_IGROUPR = 0;               // All interrupts in group 0
  
  GICD_ISENABLER = 0xFFFFFFFF;    // Enable interrupt for specified IDs
  GICD_IPRIORITYR = 0;            // Set interrupt priority to 0 (highest)
  
  GICD_ITARGETSR = 0x01010101;     // Interrupt Processor Targets Registers
  
  GICC_PMR = 0x000000FF;           // Set CPU priority to lowest
}


void targetEnableInterrupts()
{
  asm("MSR DAIFCLR, #0x2"); // Enable interrupt
}


void disableWatchdog()
{
}
	
// Current workaround for ARMv8-A samples which do not use MMU. If MMU is not used,
// core cannot do unaligned accesses and library memcpy version does them,
// so we need to make our own memcpy. GCC insists on using memcpy for some cases
// (e.g. in extended iTests), even though we specifically request build with no libraries
void *memcpy(char *pDest, const char *pSrc, unsigned long int nBytes)
{
  unsigned long int i;
  
  void *pOrigDest = pDest;
  
  for (i=0; i<nBytes;i++)
  {
    *pDest++ = *pSrc++;
  }
  
  return pOrigDest;
}