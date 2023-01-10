#ifndef __S32R45_h__
#define __S32R45_h__

#define M7_1_START_ADDRESS     0x34050000
#define M7_2_START_ADDRESS     0x340A0000
#define C0_A53_0_START_ADDRESS 0x34100000
#define C0_A53_1_START_ADDRESS 0x34120000
#define C1_A53_0_START_ADDRESS 0x34140000
#define C1_A53_1_START_ADDRESS 0x34160000

#define memW32(address) (*(unsigned long*)(address))
#define memW16(address) (*(unsigned short*)(address))
#define memW8(address) (*(unsigned char*)(address))
#define ITM_BASE_ADDRESS (0xE0000000UL)
#define ITM_LOCK_ACCESS_REGISTER (ITM_BASE_ADDRESS + 0x0FB0UL)
#define ITM_TRACE_ENABLE_REGISTER (ITM_BASE_ADDRESS + 0x0E00UL)
#define ITM_TRACE_PRIVILEGE_REGISTER (ITM_BASE_ADDRESS + 0x0E40UL)


#endif