
/*void disableWDOG(void);
void InitClocks(void);
void ImmInit(void);
void ITMInit(void);
void profilerAddTestMessages(void);
void gpioInterruptTest(void);
void initPITInterrupt(void);
void InterruptRoutine(void);
void initNVIC(void);
void targetEnableInterrupts(void);
void targetDisableInterrupts(void);
void targetShutdown(void); */


/*
	ITM registers and setup
*/
#define ITM_BASE_ADDRESS_32 (*(volatile unsigned int*)0xE0000000)
#define ITM_BASE_ADDRESS_16 (*(volatile unsigned short*)0xE0000000)
#define ITM_BASE_ADDRESS_8 (*(volatile unsigned char*)0xE0000000)
#define ITM_LAR (*(volatile unsigned int*)0xE0000FB0)
#define ITM_TER (*(volatile unsigned int*)0xE0000E00)
#define ITM_TPR (*(volatile unsigned int*)0xE0000E40) 

/*
   Watchdog registers
*/
#define WDOG_CNT (*(unsigned volatile int*)0x40052004)
#define WDOG_CS (*(unsigned volatile int*)0x40052000)
#define WDOG_CS_UPDATE 5
#define WDOG_CS_EN 7
#define WDOG_CS_RCS 10
#define WDOG_CS_ULK 11
#define WDOG_TOVAL (*(unsigned volatile int*)0x40052008)

/*
   GPIO registers
*/
#define PCC_PORTD (*(unsigned volatile int*)0x40065130)
#define PCC_PORTD_CGC 30
#define PORTD_PCR16 (*(unsigned volatile int*)0x4004C040)
#define PORTD_PCR16_MUX 8
#define GPIOD_PDDR (*(unsigned volatile int*)0x400FF0D4)
#define GPIOD_PTOR (*(unsigned volatile int*)0x400FF0CC)
#define GPIOD_PIN 16

/*
   Timer registers
*/
#define PCC_LPIT (*(unsigned volatile int*)0x400650DC)
#define PCC_LPIT_PCS 24
#define PCC_LPIT_CGC 30
#define LPIT0_MCR (*(unsigned volatile int*)0x40037008)
#define LPIT0_MCR_M_CEN 0
#define LPIT0_MSR (*(unsigned volatile int*)0x4003700C)
#define LPIT0_MSR_TIF0 0
#define LPIT0_TCTRL0 (*(unsigned volatile int*)0x40037028)
#define LPIT0_TCTRL0_T_EN 0
#define LPIT0_TVAL (*(unsigned volatile int*)0x40037020)
#define LPIT0_MIER (*(unsigned volatile int*)0x40037010)
#define LPIT0_MIER_TIE0 0

/*
	Clock registers
*/
#define SCG_SOSCCSR (*(unsigned volatile int*)0x40064100)
#define SCG_SOSCCSR_SOSCEN 0
#define SCG_SOSCCSR_SOSCVLD 24
#define SCG_SOSCCFG (*(unsigned volatile int*)0x40064108)
#define SCG_SOSCCFG_RANGE 4
#define SCG_SOSCCFG_EREFS 2
#define SCG_SOSCCFG_HGO 3

#define SCG_FIRCFG (*(unsigned volatile int*)0x40064308)
#define SCG_FIRCDIV (*(unsigned volatile int*)0x40064304)
#define SCG_FIRCDIV_FIRCDIV1 0 
#define SCG_FIRCDIV_FIRCDIV2 8
#define SCG_FIRCCSR (*(unsigned volatile int*)0x40064300)
#define SCG_FIRCCSR_FIRCEN 0
#define SCG_FIRCCSR_FIRCVLD 24

#define SCG_RCCR (*(unsigned volatile int*)0x40064014)
#define SCG_RCCR_DIVCORE 16
#define SCG_RCCR_DIVBUS 4
#define SCG_RCCR_DIVSLOW 0
#define SCG_RCCR_SCS 24
#define SCG_CSR (*(unsigned volatile int*)0x40064010)

/*
	Interrupt registers
*/
#define INT_0_31_SET_EN (*(unsigned volatile int*)0xE000E100)
#define INT_0_31_SET_EN_LPIT0 20