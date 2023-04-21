#include "STM32C0_sfr.h"

#define FLASH_LATENCY_CYCLE_2         0x02

#define memW32(address) (*(unsigned long*)(address))
#define memW16(address) (*(unsigned short*)(address))
#define memW8(address) (*(unsigned char*)(address))
#define ITM_BASE_ADDRESS (0xE0000000UL)
#define ITM_LOCK_ACCESS_REGISTER (ITM_BASE_ADDRESS + 0x0FB0UL)
#define ITM_TRACE_ENABLE_REGISTER (ITM_BASE_ADDRESS + 0x0E00UL)
#define ITM_TRACE_PRIVILEGE_REGISTER (ITM_BASE_ADDRESS + 0x0E40UL)

// PLL
#define RCC_CFGR_PLLSRC_HSIDIV2       0
#define RCC_CFGR_PLLSRC_PREDIV1       1

// GPIO
#define GPIO_MODE_OUTPUT_10M          1
#define GPIO_CONF_OUTPUT_PP           0

// TIM2

#define TIM3_BASE                     0x40000400
#define TIM3_CR1                      *((volatile uint32_t *) (TIM3_BASE + 0x0))

#define TIM3_DIER                     *((volatile uint32_t *) (TIM3_BASE + 0x0C))
#define TIM3_SR                       *((volatile uint32_t *) (TIM3_BASE + 0x10))
#define TIM3_EGR                      *((volatile uint32_t *) (TIM3_BASE + 0x14))

#define TIM3_CNT                      *((volatile uint32_t *) (TIM3_BASE + 0x24))
#define TIM3_PSC                      *((volatile uint32_t *) (TIM3_BASE + 0x28))


#define TIM_CR1_CEN                     0
#define TIM_CR1_UDIS                    1
#define TIM_CR1_URS                     2
#define TIM_CR1_OPM                     3
#define TIM_CR1_DIR                     4
#define TIM_CR1_CMS                     5
#define TIM_CR1_ARPE                    7
#define TIM_CR1_CKD                     8

#define TIM_CR1_CKD_DIV1                0
#define TIM_CR1_CKD_DIV2                1 
#define TIM_CR1_CKD_DIV4                2

#define TIM_DIER_UIE                    0

#define TIM_SR_UIF                      0

#define NVIC_IRQ_TIM3                   0x10