extern int main(void);

extern unsigned int __ghsend_stack;
extern unsigned int __ghsbegin_sbss;
extern unsigned int __ghsend_bss;
extern unsigned int __ghsbegin_sdata;
extern unsigned int __ghsend_data;

extern unsigned int __flashEnd;
extern unsigned int __ramBegin;
extern unsigned int __ramEnd;

#pragma ghs section text=".__cResetFunct"
void cReset()
{
  // Initialize RAM
  volatile unsigned int *pulRAMStart = &__ramBegin;
  while ( pulRAMStart < &__ramEnd )
    *pulRAMStart++ = 0;
  
  volatile unsigned int *pulSrc = &__flashEnd;
  volatile unsigned int *pulDest = &__ghsbegin_sdata;
  
  // Initialize data
  while( pulDest < &__ghsend_data )
    *pulDest++ = *pulSrc++;
  
  // Initialize bss
  pulDest = &__ghsbegin_sbss;
  while ( pulDest < &__ghsend_bss )
    *pulDest++ = 0;
  
  main();
  while(1);
}

extern void asmReset();

typedef void (*resetfuncptr)(void);

#pragma ghs section data=".__bam_bootarea"
unsigned long RCHW             = 0x00A50001;    //0x00
resetfuncptr  CPU2_Vector      = asmReset;      //0x04
unsigned long CFG_bits0        = 0xFFFFFFFF;    //0x08 
unsigned long CFG_bits1        = 0xFFFFFFFF;    //0x0C 
unsigned long CPU0_Vector      = 0xFFFFFFFF;    //0x10
unsigned long CPUC_Vector      = 0xFFFFFFFF;    //0x14
unsigned long CPU1_Vector      = 0xFFFFFFFF;    //0x18

#pragma ghs section data=".__hsm_bootheader"
unsigned long ID_0           = 0xFFFF0000;  // 0x00
unsigned long ID_1           = 0xFFFF0000;  // 0x04
unsigned long Reserved       = 0xFFFFFFFF;  // 0x08
unsigned long Start_Address  = 0x00622001;  // 0x0C
