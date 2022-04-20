#ifndef __CortexM3_LPC18xx_h__
#define __CortexM3_LPC18xx_h__

// ITM
#define ITM_BASE_ADDRESS             (*(unsigned long volatile*)0xE0000000) 
#define ITM_LOCK_ACCESS_REGISTER     (*(unsigned long volatile*)0xE0000FB0) 
#define ITM_TRACE_ENABLE_REGISTER    (*(unsigned long volatile*)0xE0000E00) 
#define ITM_TRACE_PRIVILEGE_REGISTER (*(unsigned long volatile*)0xE0000E40)

// SYSTICK

#define SYSTICK_CSR                  (*(unsigned long volatile*)0xE000E010)
#define SYSTICK_RVR                  (*(unsigned long volatile*)0xE000E014)
#define SYSTICK_CVR                  (*(unsigned long volatile*)0xE000E018)
#define SYSTICK_CLB                  (*(unsigned long volatile*)0xE000E01C)

#endif
