#define CM7_0_START_ADDRESS 0x00401000

#define ITM_BASE_ADDRESS (0xE0000000UL)
#define memW32(address) (*(unsigned long*)(address))
#define memW16(address) (*(unsigned short*)(address))
#define memW8(address) (*(unsigned char*)(address))