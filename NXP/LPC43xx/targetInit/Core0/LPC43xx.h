#ifndef __CortexM3_LPC18xx_h__
#define __CortexM3_LPC18xx_h__

// ITM
#define ITM_BASE_ADDRESS             (*(unsigned long volatile*)0xE0000000) 
#define ITM_LOCK_ACCESS_REGISTER     (*(unsigned long volatile*)0xE0000FB0) 
#define ITM_TRACE_ENABLE_REGISTER    (*(unsigned long volatile*)0xE0000E00) 
#define ITM_TRACE_PRIVILEGE_REGISTER (*(unsigned long volatile*)0xE0000E40) 


//CO-PROCESSOR
#define RESET_CTRL1 (*(volatile unsigned long*)0x40053104) 
#define M0APPMEMMAP (*(volatile unsigned long*)0x40043404)
  
void sysTickInit(void);


#endif



