#pragma language=extended
__intrinsic void __enable_interrupt(void);
__intrinsic void __disable_interrupt(void);
__interrupt void TimerInterruptHandler(void);
__root __far const char OptionByte[4+10]   @ 0x00C0 = {0x6F, 0xFD, 0xF8, 0x85,0,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF};
//option byte 2 @ 0xC2; Fhoco=64MHz, Fih=32MHz

extern void ProfilerC_Interrupt();





