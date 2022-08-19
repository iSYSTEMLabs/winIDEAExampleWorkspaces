#ifndef __VA41630_h__
#define __VA41630_h__

// ITM
#define ITM_BASE_ADDRESS             (*(unsigned long volatile*)0xE0000000)
#define ITM_LOCK_ACCESS_REGISTER     (*(unsigned long volatile*)0xE0000FB0)
#define ITM_TRACE_ENABLE_REGISTER    (*(unsigned long volatile*)0xE0000E00)
#define ITM_TRACE_PRIVILEGE_REGISTER (*(unsigned long volatile*)0xE0000E40)

#endif