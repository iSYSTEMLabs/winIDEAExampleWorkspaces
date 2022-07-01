extern unsigned long _stext, _etext;
extern unsigned long _sdata, _edata;
extern unsigned long _sbss, _ebss;
extern unsigned long _estack;

extern void main();
extern void InterruptRoutine();

#define SCB_VTOR (*(volatile unsigned long*)0xE000ED08)

void TimerInterruptHandler() {
  InterruptRoutine();
}

void reset_ISR();
void nmi_ISR() 	   { while(1); }
void fault_ISR()   { while(1); }
void default_ISR() { while(1); }

__attribute__((section(".vectors")))
unsigned long g_adwVectors[] = {
  (unsigned long)&_estack,
  (unsigned long)reset_ISR,
  (unsigned long)nmi_ISR,
  (unsigned long)fault_ISR,
  (unsigned long)default_ISR,
  (unsigned long)default_ISR,
  (unsigned long)default_ISR,
  0,
  0,
  0,
  0,
  (unsigned long)default_ISR,
  (unsigned long)default_ISR,
  0,
  (unsigned long)default_ISR,
  (unsigned long)TimerInterruptHandler,
};

__attribute__((naked))
void reset_ISR() {
  __asm volatile ("cpsid i");
  register unsigned long sreg __asm("sp");
  sreg = (unsigned long)&_estack;
  SCB_VTOR = (unsigned long)g_adwVectors;
  
  unsigned long* d = &_sbss;
  while(d < &_ebss)
     *d++ = 0;
  
  main();
  while(1);
}
