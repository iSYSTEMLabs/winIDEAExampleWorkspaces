extern unsigned long _estack, _etext, _sdata, _edata, _sbss, _ebss;
extern int main();

#define VTOR (*(volatile unsigned int*)0xE000ED08)

void reset() {
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
  
  VTOR = 0x00400000;
  
  main();
  while(1);
}

void IntDefaultHandler()
{
  while(1);
}



__attribute__ ((section(".vector")))
void (* const g_pfnVectors[])(void) =
{
  (void (*)(void))(&_estack),               // The initial stack pointer
  reset,                                  // The reset handler
  IntDefaultHandler,
  IntDefaultHandler,
  IntDefaultHandler,
  IntDefaultHandler,
  IntDefaultHandler,
  IntDefaultHandler,
  0,
  0,
  0,
  0,
  IntDefaultHandler,
  IntDefaultHandler,
  0,
  IntDefaultHandler,
  IntDefaultHandler,
};