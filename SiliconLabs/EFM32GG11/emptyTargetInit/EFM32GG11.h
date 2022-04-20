#include "efm32gg11_sfr.h"

// HFRCO calibration values
#define HFRCOCAL_BASE     (0x0FE081B0) 
#define HFRCOCAL16_4MHZ   (*(unsigned long volatile*) (HFRCOCAL_BASE + 0x080))
#define HFRCOCAL16_72MHZ  (*(unsigned long volatile*) (HFRCOCAL_BASE + 0x0C0))

// ITM
#define ITM_BASE_ADDRESS             (*(unsigned long volatile*)0xE0000000)
#define ITM_LOCK_ACCESS_REGISTER     (*(unsigned long volatile*)0xE0000FB0)
#define ITM_TRACE_ENABLE_REGISTER    (*(unsigned long volatile*)0xE0000E00) 
#define ITM_TRACE_PRIVILEGE_REGISTER (*(unsigned long volatile*)0xE0000E40)
#define ITM_TRACE_CONTROL_REGISTER   (*(unsigned long volatile*)0xE0000E80)
