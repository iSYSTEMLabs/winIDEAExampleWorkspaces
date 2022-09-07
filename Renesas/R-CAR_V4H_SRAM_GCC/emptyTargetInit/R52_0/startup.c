
extern int main();



extern unsigned long __text_end;
extern unsigned long __data_start;
extern unsigned long __data_end;
extern unsigned long __bss_start__;
extern unsigned long __bss_end__;
extern unsigned long __rodata_start;
extern unsigned long __rodata_end;
extern unsigned long __eh_end;

__attribute__ ((naked))
void startup()
{
  volatile unsigned long *pulSrc = &__rodata_end;
  volatile unsigned long *pulDest = &__data_start;

  while( pulDest < &__data_end )
    *pulDest++ = *pulSrc++;

  pulDest = &__bss_start__;
  while ( pulDest < &__bss_end__)
    *pulDest++ = 0;       

  main();
}

