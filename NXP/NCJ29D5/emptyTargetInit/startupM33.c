
extern int main(void);
extern int reset(void);

extern unsigned long __StackTop;

extern unsigned long __etext;
extern unsigned long __data_start__;
extern unsigned long __data_end__;
extern unsigned long __bss_start__;
extern unsigned long __bss_end__;

__attribute__ ((naked))
void ResetM33()
{
  __asm__("ldr R0, =__StackTop");
  __asm__("mov sp, R0");

  volatile unsigned long *pulSrc = &__etext;
  volatile unsigned long *pulDest = &__data_start__;
  
  while( pulDest < &__data_end__ )
    *pulDest++ = *pulSrc++;
  
  pulDest = &__bss_start__;
  while ( pulDest < &__bss_end__ )
    *pulDest++ = 0;       
  
  main();
}

void defaultHandler()
{
  
  
}