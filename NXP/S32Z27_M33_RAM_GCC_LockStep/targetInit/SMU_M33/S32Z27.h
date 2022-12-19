#define CE_M33_0_START_ADDRESS      0x25010000
#define CE_M33_1_START_ADDRESS      0x25020000
#define RTU0_R52_0_START_ADDRESS    0x25030000
#define RTU0_R52_1_START_ADDRESS    0x25040000
#define RTU0_R52_2_START_ADDRESS    0x25050000
#define RTU0_R52_3_START_ADDRESS    0x25060000
#define RTU1_R52_0_START_ADDRESS    0x25070000
#define RTU1_R52_1_START_ADDRESS    0x25080000
#define RTU1_R52_2_START_ADDRESS    0x25090000
#define RTU1_R52_3_START_ADDRESS    0x250A0000

#define memW32(address) (*(unsigned long*)(address))
#define memW16(address) (*(unsigned short*)(address))
#define memW8(address) (*(unsigned char*)(address))

#define ITM_BASE_ADDRESS (0xE0000000UL)
#define ITM_LOCK_ACCESS_REGISTER (ITM_BASE_ADDRESS + 0x0FB0UL)
#define ITM_TRACE_ENABLE_REGISTER (ITM_BASE_ADDRESS + 0x0E00UL)
#define ITM_TRACE_PRIVILEGE_REGISTER (ITM_BASE_ADDRESS + 0x0E40UL)


// #define IP_RTU1__RTUM_NIC_D *(unsigned volatile int*) 0x75400000
// #define IP_RTU1__RTUF_NIC_D *(unsigned volatile int*) 0x75500000
// #define IP_RTU1__RTUP_NIC_B *(unsigned volatile int*) 0x75600000
// #define IP_RTU1__RTUE_NIC_D *(unsigned volatile int*) 0x75700000