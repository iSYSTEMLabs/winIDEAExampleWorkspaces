#define C2_VTOR_INIT_REG   (*(unsigned long volatile*)0x44000308)
#define C2_BOOT_CTRL_REG   (*(unsigned long volatile*)0x44000314)

#define C2_BOOT_ADDRESS 0x080F0000

#define ITM_BASE_ADDRESS (0xE0000000UL)
#define memW32(address) (*(unsigned long*)(address))
#define memW16(address) (*(unsigned short*)(address))
#define memW8(address) (*(unsigned char*)(address))
