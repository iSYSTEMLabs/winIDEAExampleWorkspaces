#define memW32(address) (*(unsigned long*)(address))
#define memW16(address) (*(unsigned short*)(address))
#define memW8(address) (*(unsigned char*)(address))
#define ITM_BASE_ADDRESS (0xE0000000UL)
#define ITM_LOCK_ACCESS_REGISTER (ITM_BASE_ADDRESS + 0x0FB0UL)
#define ITM_TRACE_ENABLE_REGISTER (ITM_BASE_ADDRESS + 0x0E00UL)
#define ITM_TRACE_PRIVILEGE_REGISTER (ITM_BASE_ADDRESS + 0x0E40UL)

// PLL
#define PLL0CON                      (*(unsigned long volatile*)0x400FC080) 
#define PLL0CFG                      (*(unsigned long volatile*)0x400FC084) 
#define PLL0FEED                     (*(unsigned long volatile*)0x400FC08C) 
#define PLL0STAT                     (*(unsigned long volatile*)0x400FC088) 

// CLOCK
#define CLKSRCSEL                    (*(unsigned long volatile*)0x400FC10C) 
#define CCLKSEL                      (*(unsigned long volatile*)0x400FC104) 
#define PCLKSEL                      (*(unsigned long volatile*)0x400FC1A8) 

//SYSTICK
#define SYST_RVR                     (*(unsigned long volatile*)0xE000E014)
#define SYST_CSR                     (*(unsigned long volatile*)0xE000E010)

//GPIO
#define GPIO_DIR1                    (*(unsigned long volatile*)0x20098020)
#define GPIO_PIN1                    (*(unsigned long volatile*)0x20098034)

  

//void GPIOInit(void);
void initSysTick();