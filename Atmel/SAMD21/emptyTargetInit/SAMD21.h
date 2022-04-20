#define ITM_BASE_ADDRESS *(unsigned volatile int*)  0xE0000000 

/**/
#define PORT_BASE        *(unsigned volatile int*)  0x41004400
#define PORT_DIR_SET     *(unsigned volatile int*)  0x41004408
#define PORT_OUT_TGL     *(unsigned volatile int*)  0x4100441C
#define PORT_OUT_SET     *(unsigned volatile int*)  0x41004418
#define PORT_WRCONFIG    *(unsigned volatile int*)  0x41004428
#define PORT_A_17         1 << 17
#define PORT_A_14         1 << 14   


void targetInit();
void targetEnableInterrupts();
void targetShutdown();
void disableWatchdog();

// Added as part of first task
void GPIOPortOn(void);
void TC4_Handler(void);