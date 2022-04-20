#ifndef LOW_POWER_MODE_H
#define LOW_POWER_MODE_H

#define TRUE 1
#define FALSE 0
#define FROM_RESET 0
#define RESUMED 1
#define FROM_INTERRUPT 2

void lowPowerModeTestMain(void);
void onExitLowPowerModeTestBreakpoint(int callSource);
void targetEnterAndExitLowPowerMode(void);

#endif //LOW_POWER_MODE_H
