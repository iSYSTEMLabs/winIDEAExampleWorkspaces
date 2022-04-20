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
