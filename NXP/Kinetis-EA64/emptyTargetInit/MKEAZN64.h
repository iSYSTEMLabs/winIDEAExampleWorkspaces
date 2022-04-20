#define PIT_TFLG0 *(volatile unsigned long*) 0x4003710C
#define PIT_TCTRL0 *(volatile unsigned long*) 0x40037108
#define PIT_LDVAL0 *(volatile unsigned long*) 0x40037100
#define PIT_MCR *(volatile unsigned long*) 0x40037000
#define SIM_SCGC *(volatile unsigned long*) 0x4004800C
#define SIM_SCGC_BIT 1
#define GPIOA_PTC3_BIT 19
#define GPIOA_PDDR *(volatile unsigned long*) 0x400FF014
#define GPIOA_PDOR *(volatile unsigned long*) 0x400FF000
#define GPIOA_PTOR *(volatile unsigned long*) 0x400FF00C
#define GPIOA_PSOR *(volatile unsigned long*) 0x400FF004
#define GPIOA_PCOR *(volatile unsigned long*) 0x400FF008
#define PIT_TCTRL_TEN_MASK 0x1u
#define PIT_TCTRL_TIE_MASK 0x2u
#define NVIC_IP_PRI22_MASK 0xFF0000u
#define PIT_TFLG_TIF_MASK 0x1u
#define INT_0_31_CLR_PEND *(volatile unsigned int*) 0xE000E280     
#define INT_0_31_SET_ENA  *(volatile unsigned int*) 0xE000E100
#define NVIC_IP_PRI22 *(volatile unsigned int*) 0xE000E414 

void InterruptRoutine();
void TimerInterruptHandler();
