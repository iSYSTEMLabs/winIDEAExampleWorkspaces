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
void nmi_ISR() {}
void fault_ISR() {}
void default_ISR() {}

__attribute__((section(".vectors")))
const unsigned long g_adwVectors[] = {
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

__attribute__((naked)) void reset_ISR() {
  __asm volatile ("cpsid i");
  register unsigned long sreg __asm("sp");
  sreg = (unsigned long)&_estack;
  
  unsigned long* s = &_sbss;
  while(s < &_ebss) {
    *s = 0;
    s++;
  }
  
  SCB_VTOR = (unsigned long)g_adwVectors;
  
  main();
  while(1);
}
