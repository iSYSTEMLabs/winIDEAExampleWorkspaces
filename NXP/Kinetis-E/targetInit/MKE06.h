#define PIT_TFLG0 *(volatile unsigned long*) 0x4003710C
#define PIT_TCTRL0 *(volatile unsigned long*) 0x40037108
#define PIT_LDVAL0 *(volatile unsigned long*) 0x40037100
#define PIT_MCR *(volatile unsigned long*) 0x40037000
#define SIM_SCGC *(volatile unsigned long*) 0x40048014
#define SIM_SCGC_BIT 1
#define PTG7_BLUE 23
#define GPIOB_PDDR *(volatile unsigned long*) 0x400FF054
#define GPIOB_PTOR *(volatile unsigned long*) 0x400FF04C
#define GPIOB_PSOR *(volatile unsigned long*) 0x400FF044
#define GPIOB_PCOR *(volatile unsigned long*) 0x400FF048
#define PIT_TCTRL_TEN_MASK 0x1u
#define PIT_TCTRL_TIE_MASK 0x2u
#define NVIC_IP_PRI22_MASK 0xFF0000u
#define PIT_TFLG_TIF_MASK 0x1u
#define INT_0_31_CLR_PEND *(volatile unsigned int*) 0xE000E280     
#define INT_0_31_SET_ENA  *(volatile unsigned int*) 0xE000E100
#define NVIC_IP_PRI22 *(volatile unsigned int*) 0xE000E414 

void InterruptRoutine();