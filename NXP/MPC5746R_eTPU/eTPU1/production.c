#include "production.h"

/* Variables declaration */
volatile unsigned char debugVariable = 0;
volatile unsigned char debugLoopCount = 0;

volatile unsigned char traceVariable = 0;
volatile unsigned char traceLoopCount = 0;

volatile unsigned char debugLoopCountLimit = 3;
volatile unsigned char traceLoopCountLimit = 100;
void productionDebugTestMain(void)
{
  debugLoopCount = debugLoopCountLimit;
  debugVariable = 0;
  
  while(debugLoopCount--)
  {
    debugVariable++;    
  }  
}

void productionTraceTestMain(void)
{  
  traceLoopCount = traceLoopCountLimit;
  traceVariable = 0;
  
  while(traceLoopCount--)
  {
    traceVariable++;    
  }  
}
