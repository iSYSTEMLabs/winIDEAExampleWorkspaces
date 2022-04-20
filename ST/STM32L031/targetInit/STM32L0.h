void targetInit();
void targetEnableInterrupts();


#define RCC_CFGR_SW         0
#define RCC_CFGR_SWS        2
#define RCC_CR_PLLON        24
#define RCC_CR_PLLRDY       25
#define FLASH_ACR_LATENCY   0
#define RCC_CFGR_PLLDIV     22
#define RCC_CFGR_PLLMUL     18
#define RCC_CR_HSI16ON      0

#define RCC_CR         (*(volatile unsigned int*) 0x40021000)
#define RCC_CFGR       (*(volatile unsigned int*) 0x4002100C)
#define FLASH_ACR      (*(volatile unsigned int*) 0x40022000)


#define RCC_IOPENR     (*(volatile unsigned int*) 0x4002102C)
#define GPIOB_MODER    (*(volatile unsigned int*) 0x50000400)
#define GPIOB_BSSR     (*(volatile unsigned int*) 0x50000418)
#define SYST_CSR       (*(volatile unsigned int*) 0xE000E010)
#define SYST_RVR       (*(volatile unsigned int*) 0xE000E014)
#define SYST_CVR       (*(volatile unsigned int*) 0xE000E018)

#define RCC_IOPENR_ENABLE_PORTC_BIT 1
#define GPIOB_MODER_SET_OUTPUT_MODE_BIT 6
#define GPIOB_BSSR_SET_PB3_BIT 3
#define GPIOB_BSSR_RESET_PB3_BIT 19