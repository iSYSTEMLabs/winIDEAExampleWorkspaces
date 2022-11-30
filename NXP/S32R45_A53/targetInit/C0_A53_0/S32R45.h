#ifndef __S32R45_h__
#define __S32R45_h__

#define M7_0_START_ADDRESS     0x34000000
#define M7_1_START_ADDRESS     0x34050000
#define M7_2_START_ADDRESS     0x340A0000
#define C0_A53_1_START_ADDRESS 0x34120000
#define C1_A53_0_START_ADDRESS 0x34140000
#define C1_A53_1_START_ADDRESS 0x34160000

#define memW32(address) (*(unsigned long*)(address))
#define memW16(address) (*(unsigned short*)(address))
#define memW8(address) (*(unsigned char*)(address))

#define ITM_BASE_ADDRESS (0xE0000000UL)

//#define  PLATFORM_STM_APB_ADDRESS    0x5110B000
//#define  PLATFORM_STM_APB_ADDRESS    0x5110C000
//#define  PLATFORM_STM_APB_ADDRESS    0x0010B000
#define  PLATFORM_STM_APB_ADDRESS    0x5110C000
#define  PLATFORM_STM_AXI_ADDRESS    0x5110C000

#endif