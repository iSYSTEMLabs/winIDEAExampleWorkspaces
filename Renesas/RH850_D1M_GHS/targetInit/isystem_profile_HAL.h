#define P1         *(volatile unsigned long *)0xFFC10004
#define PM1        *(volatile unsigned long *)0xFFC10304

#define isystem_profile_initialize() { PM1 = 0x0000; } // port initialization
#define isystem_profile_write(ID, VAL) { P1 = 0; P1 = 0x8000 | ((VAL) << 2) | ID; P1 = 0; }

void isystem_sft_dbpush_r28(int value);
