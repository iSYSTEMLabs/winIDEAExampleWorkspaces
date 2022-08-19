#include "VA41630.h"


void initITM() {
  ITM_LOCK_ACCESS_REGISTER     = 0xC5ACCE55;  // Unlock write access to ITM
  ITM_TRACE_ENABLE_REGISTER    = 0xFFFFFFFF;  // Enable stimulus port 0-31
  ITM_TRACE_PRIVILEGE_REGISTER = 0x1;         // Set privilege
}

void targetInit() {
  #ifndef EMPTY_TARGET_INIT

  initITM();

  #endif /* EMPTY_TARGET_INIT */
}


void disableWatchdog() {
  
}
