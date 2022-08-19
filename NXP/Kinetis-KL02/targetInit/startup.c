extern unsigned long _estack;
extern unsigned long _etext;
extern unsigned long _sdata;
extern unsigned long _edata;
extern unsigned long _sbss;
extern unsigned long _ebss;
extern int main(void);

extern void InterruptRoutine();
extern void clearTimerFlag();

void reset()
{
  unsigned long *pdwSource = &_etext;
  unsigned long *pdwDest = &_sdata;
  unsigned long *pdwEnd = &_edata;
  unsigned long *pdwBssStart = &_sbss;
  unsigned long *pdwBssEnd = &_ebss;
 
  while (pdwDest < pdwEnd)
  {
    *pdwDest = *pdwSource;
    pdwDest++;
    pdwSource++;
  }
 
  while (pdwBssStart < pdwBssEnd)
  {
    *pdwBssStart = 0;
    pdwBssStart++;
  }
 
  main();
  while (1);
}


void TimerInterruptHandler()
{
  clearTimerFlag();
  InterruptRoutine();
}

void IntDefaultHandler()
{
  while(1);
}

__attribute__((section(".isr_vector")))
const unsigned long adwVectors[] =
{
  (unsigned long)&_estack,
  (unsigned long)reset,
  (unsigned long)IntDefaultHandler,
  (unsigned long)IntDefaultHandler,
  (unsigned long)0,
  (unsigned long)0,
  (unsigned long)0,
  (unsigned long)0,
  (unsigned long)0,
  (unsigned long)0,
  (unsigned long)0,
  (unsigned long)IntDefaultHandler,
  (unsigned long)0,
  (unsigned long)0,
  (unsigned long)IntDefaultHandler,
  (unsigned long)IntDefaultHandler,
  (unsigned long)0,
  (unsigned long)0,
  (unsigned long)0,
  (unsigned long)0,
  (unsigned long)0,
  (unsigned long)IntDefaultHandler,
  (unsigned long)IntDefaultHandler,
  (unsigned long)0,
  (unsigned long)IntDefaultHandler,
  (unsigned long)IntDefaultHandler,
  (unsigned long)IntDefaultHandler,
  (unsigned long)0, 
  (unsigned long)IntDefaultHandler,
  (unsigned long)0,
  (unsigned long)0,
  (unsigned long)IntDefaultHandler,
  (unsigned long)IntDefaultHandler,
  (unsigned long)TimerInterruptHandler,  
  (unsigned long)IntDefaultHandler,
  (unsigned long)0,
  (unsigned long)0,
  (unsigned long)0,
  (unsigned long)0,
  (unsigned long)0,
  (unsigned long)0,
  (unsigned long)0,
  (unsigned long)0,
  (unsigned long)IntDefaultHandler,
  (unsigned long)IntDefaultHandler,
  (unsigned long)0,
  (unsigned long)IntDefaultHandler,
  (unsigned long)IntDefaultHandler,  
};

