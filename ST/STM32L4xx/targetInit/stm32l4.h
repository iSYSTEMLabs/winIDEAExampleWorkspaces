
void enterAndExitStopMode(void);
#define memW32(address) (*(unsigned long*)(address))
#define memW16(address) (*(unsigned short*)(address))
#define memW8(address) (*(unsigned char*)(address))
#define ITM_BASE_ADDRESS (0xE0000000UL)
#define ITM_LOCK_ACCESS_REGISTER (ITM_BASE_ADDRESS + 0x0FB0UL)
#define ITM_TRACE_ENABLE_REGISTER (ITM_BASE_ADDRESS + 0x0E00UL)
#define ITM_TRACE_PRIVILEGE_REGISTER (ITM_BASE_ADDRESS + 0x0E40UL)

/*
  GPIO registers
*/
#define RCC_AHB2ENR (*(unsigned volatile int*)(0x4002104C))
#define RCC_AHB2ENR_GPIOAEN 0
#define GPIOA_MODER (*(unsigned volatile int*)(0x48000000))
#define GPIOA_MODER_MODE0 0
#define GPIOA_ODR (*(unsigned volatile int*)(0x48000014))
#define GPIOA_ODR_OD0 0

/*
   TIM15 registers
*/
#define RCC_APB2ENR (*(unsigned volatile int*)(0x40021060))
#define RCC_APB2ENR_TIM15EN 16
#define TIM15_CR1 (*(unsigned volatile int*)(0x40014000))
#define TIM15_CR1_CEN 0
#define TIM15_ARR (*(unsigned volatile short*)(0x4001402C))
#define TIM15_DIER (*(unsigned volatile short*)(0x4001400C))
#define TIM15_DIER_UIE 0
#define TIM15_SR (*(unsigned volatile short*)(0x40014010))
#define TIM15_SR_UIF 0
#define TIM15_PSC (*(unsigned volatile short*)(0x40014028)) 
#define INT_0_31_SET_EN (*(unsigned volatile int*)(0xE000E100))
#define INT_0_31_SET_EN_TIM15 24 
#define INT_0_31_CLR_EN (*(unsigned volatile int*)(0xE000E180))
#define INT_0_31_CLR_EN_TIM15 24 

/*
   Clock control registers
*/
#define RCC_CR (*(unsigned volatile int*)(0x40021000))
#define RCC_CR_HSEON 16
#define RCC_CR_HSERDY 17
#define RCC_CR_PLLON 24
#define RCC_CR_PLLRDY 25
#define RCC_PLLCFGR (*(unsigned volatile int*)(0x4002100C))
#define RCC_PLLSRC 0
#define RCC_PLLM 4
#define RCC_PLLN 8
#define RCC_PLLREN 24
#define RCC_PLLR 25
#define RCC_CFGR (*(unsigned volatile int*)(0x40021008))
#define RCC_CFGR_SW 0
#define RCC_CFGR_SWS 2
#define FLASH_ACR (*(unsigned volatile int*)(0x40022000))
#define FLASH_ACR_LATENCY 0