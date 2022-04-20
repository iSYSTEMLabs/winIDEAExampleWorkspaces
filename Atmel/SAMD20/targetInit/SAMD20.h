#define ITM_BASE_ADDRESS *(unsigned volatile int*) 0xE0000000 

void targetInit();
void targetShutdown();
void disableWatchdog();