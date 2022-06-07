#define RCU_CTL *(unsigned volatile int*)0x40021000  
#define RCU_CFG0 *(unsigned volatile int*)0x40021004 
#define RCU_APB1EN *(unsigned volatile int*)0x4002101C
#define RCU_APB2EN *(unsigned volatile int*)0x40021018

#define TIMER1_CTL0 *(unsigned volatile int*)0x40000000 
#define TIMER1_INTF *(unsigned volatile int*)0x40000010
#define TIMER1_DMAINTEN *(unsigned volatile int*)0x4000000C
#define TIMER1_PSC *(unsigned volatile int*)0x40000028
#define TIMER1_CAR *(unsigned volatile int*)0x4000002C

//GPIO reg
#define GPIOB_CTL0 *(unsigned volatile int*)0x40010C00
#define GPIOB_OCTL *(unsigned volatile int*)0x40010C0C

//NVIC reg 
#define ISER *(unsigned volatile int*)0xE000E100
#define IPR28 *(unsigned volatile int*)0xE000E41C
#define ICER *(unsigned volatile int*)0xE000E180

//ITM
#define ITM_BASE_ADDRESS             (*(unsigned long volatile*)0xE0000000) 
#define ITM_LOCK_ACCESS_REGISTER     (*(unsigned long volatile*)0xE0000FB0) 
#define ITM_TRACE_ENABLE_REGISTER    (*(unsigned long volatile*)0xE0000E00) 
#define ITM_TRACE_PRIVILEGE_REGISTER (*(unsigned long volatile*)0xE0000E40) 

//Bits for RCU_CTL
#define PLLEN 24
#define PLLSTB 25

//Bits for RCU_CFG0
#define SCS 0
#define SCSS 2
#define APB1PSC 8
#define ADCPSC 14
#define PLLSEL 16
#define PLLMF 18
#define PLLMF4 27
#define ADCPSC2 28

//Bits for TIMER1
#define UPIE 0
#define TIMER1EN 0
#define CAM 5 
#define DIR 4
#define CEN 0

//Bits for GPIO
#define PBEN 3
#define MD 4
#define CTL 6
#define OCTL 1

void initClock();
void initTimer();

