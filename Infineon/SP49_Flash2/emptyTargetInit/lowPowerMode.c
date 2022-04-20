#include "lowPowerMode.h"

void lowPowerModeTestMain(void)
{
  volatile char g_isLowPowerModeTest = 0;
  while (TRUE)
  {
    if (g_isLowPowerModeTest) 
    {
      onExitLowPowerModeTestBreakpoint(RESUMED);
    }
    else
    {
    }
  }
}

void onExitLowPowerModeTestBreakpoint(int callSource)
{
  char loopFlag = 1;
  while (loopFlag)
  {
    loopFlag++; 
    loopFlag--;
  }
  loopFlag = 0;
  loopFlag++;   
  callSource++; 
}
