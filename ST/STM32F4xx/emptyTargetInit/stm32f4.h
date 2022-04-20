
void enterAndExitStopMode(void);
#define memW32(address) (*(unsigned long*)(address))
#define memW16(address) (*(unsigned short*)(address))
#define memW8(address) (*(unsigned char*)(address))
#define ITM_BASE_ADDRESS (0xE0000000UL)
#define ITM_LOCK_ACCESS_REGISTER (ITM_BASE_ADDRESS + 0x0FB0UL)
#define ITM_TRACE_ENABLE_REGISTER (ITM_BASE_ADDRESS + 0x0E00UL)
#define ITM_TRACE_PRIVILEGE_REGISTER (ITM_BASE_ADDRESS + 0x0E40UL)


#define PLLON      24
#define PLLRDY     25
#define HSEON      16
#define HSERDY     17
#define HSEBYP     18
#define PLLP0      16
#define PLLP1      17
#define MCO10      21
#define MCO11      22
#define GPIOBEN    1
#define SW1        1
#define SW0        0
#define PLLSRC     22
#define MODER91    19
#define MODER90    18

#define RCC_CR       (*(volatile unsigned int*)0x40023800)
#define RCC_PLLCFGR  (*(volatile unsigned int*)0x40023804)
#define RCC_CFGR     (*(volatile unsigned int*)0x40023808)
#define RCC_AHB1ENR  (*(volatile unsigned int*)0x40023830)
#define GPIOB_MODER  (*(volatile unsigned int*)0x40020400)
#define GPIOB_ODR    (*(volatile unsigned int*)0x40020414)
#define FLASH_ACR    (*(volatile unsigned int*)0x40023C00)
