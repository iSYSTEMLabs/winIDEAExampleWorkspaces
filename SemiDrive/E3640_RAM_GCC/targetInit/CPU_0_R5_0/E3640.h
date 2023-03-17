// Function prototypes
void targetInit(void); 
void disableWatchdog(void); 

#define MSS_RCM_R5SS0_CORE1_LRST_CTRL   (*(volatile unsigned int*)(0x53208520))
#define MSS_RCM_R5SS1_CORE0_LRST_CTRL   (*(volatile unsigned int*)(0x5320851C))
#define MSS_RCM_R5SS1_CORE1_LRST_CTRL   (*(volatile unsigned int*)(0x53208524))


