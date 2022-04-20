extern int main(void);

extern unsigned long _estack;

extern unsigned long _etext;
extern unsigned long _sdata;
extern unsigned long _edata;
extern unsigned long _sbss;
extern unsigned long _ebss;
extern void IntDefaultHandler();
extern void TimerInterruptHandler();

typedef void (*t_isrFuncPTR)(void);

typedef volatile struct vimRam
{
    t_isrFuncPTR ISR[129];
} vimRAM_t;
#define VIM_CHANNELS 129U

#define vimRAM ((vimRAM_t *)0xFFF82000U)

static const t_isrFuncPTR s_vim_init[129U] =
{
    &IntDefaultHandler,
    &IntDefaultHandler,            /* Channel 0 */
    &IntDefaultHandler,            /* Channel 1 */
    &TimerInterruptHandler,        /* Channel 2 */
    &IntDefaultHandler,            /* Channel 3 */
    &IntDefaultHandler,            /* Channel 4 */
    &IntDefaultHandler,            /* Channel 5 */
    &IntDefaultHandler,            /* Channel 6 */
    &IntDefaultHandler,            /* Channel 7 */
    &IntDefaultHandler,            /* Channel 8 */
    &IntDefaultHandler,            /* Channel 9 */
    &IntDefaultHandler,            /* Channel 10 */
    &IntDefaultHandler,            /* Channel 11 */
    &IntDefaultHandler,            /* Channel 12 */
    &IntDefaultHandler,            /* Channel 13 */
    &IntDefaultHandler,            /* Channel 14 */
    &IntDefaultHandler,            /* Channel 15 */
    &IntDefaultHandler,            /* Channel 16 */
    &IntDefaultHandler,            /* Channel 17 */
    &IntDefaultHandler,            /* Channel 18 */
    &IntDefaultHandler,            /* Channel 19 */
    &IntDefaultHandler,            /* Channel 20 */
    &IntDefaultHandler,            /* Channel 21 */
    &IntDefaultHandler,            /* Channel 22 */
    &IntDefaultHandler,            /* Channel 23 */
    &IntDefaultHandler,            /* Channel 24 */
    &IntDefaultHandler,            /* Channel 25 */
    &IntDefaultHandler,            /* Channel 26 */
    &IntDefaultHandler,            /* Channel 27 */
    &IntDefaultHandler,            /* Channel 28 */
    &IntDefaultHandler,            /* Channel 29 */
    &IntDefaultHandler,            /* Channel 30 */
    &IntDefaultHandler,            /* Channel 31 */
    &IntDefaultHandler,            /* Channel 32 */
    &IntDefaultHandler,            /* Channel 33 */
    &IntDefaultHandler,            /* Channel 34 */
    &IntDefaultHandler,            /* Channel 35 */
    &IntDefaultHandler,            /* Channel 36 */
    &IntDefaultHandler,            /* Channel 37 */
    &IntDefaultHandler,            /* Channel 38 */
    &IntDefaultHandler,            /* Channel 39 */
    &IntDefaultHandler,            /* Channel 40 */
    &IntDefaultHandler,            /* Channel 41 */
    &IntDefaultHandler,            /* Channel 42 */
    &IntDefaultHandler,            /* Channel 43 */
    &IntDefaultHandler,            /* Channel 44 */
    &IntDefaultHandler,            /* Channel 45 */
    &IntDefaultHandler,            /* Channel 46 */
    &IntDefaultHandler,            /* Channel 47 */
    &IntDefaultHandler,            /* Channel 48 */
    &IntDefaultHandler,            /* Channel 49 */
    &IntDefaultHandler,            /* Channel 50 */
    &IntDefaultHandler,            /* Channel 51 */
    &IntDefaultHandler,            /* Channel 52 */
    &IntDefaultHandler,            /* Channel 53 */
    &IntDefaultHandler,            /* Channel 54 */
    &IntDefaultHandler,            /* Channel 55 */
    &IntDefaultHandler,            /* Channel 56 */
    &IntDefaultHandler,            /* Channel 57 */
    &IntDefaultHandler,            /* Channel 58 */
    &IntDefaultHandler,            /* Channel 59 */
    &IntDefaultHandler,            /* Channel 60 */
    &IntDefaultHandler,            /* Channel 61 */
    &IntDefaultHandler,            /* Channel 62 */
    &IntDefaultHandler,            /* Channel 63 */
    &IntDefaultHandler,            /* Channel 64 */
    &IntDefaultHandler,            /* Channel 65 */
    &IntDefaultHandler,            /* Channel 66 */
    &IntDefaultHandler,            /* Channel 67 */
    &IntDefaultHandler,            /* Channel 68 */
    &IntDefaultHandler,            /* Channel 69 */
    &IntDefaultHandler,            /* Channel 70 */
    &IntDefaultHandler,            /* Channel 71 */
    &IntDefaultHandler,            /* Channel 72 */
    &IntDefaultHandler,            /* Channel 73 */
    &IntDefaultHandler,            /* Channel 74 */
    &IntDefaultHandler,            /* Channel 75 */
    &IntDefaultHandler,            /* Channel 76 */
    &IntDefaultHandler,            /* Channel 77 */
    &IntDefaultHandler,            /* Channel 78 */
    &IntDefaultHandler,            /* Channel 79 */
    &IntDefaultHandler,            /* Channel 80 */
    &IntDefaultHandler,            /* Channel 81 */
    &IntDefaultHandler,            /* Channel 82 */
    &IntDefaultHandler,            /* Channel 83 */
    &IntDefaultHandler,            /* Channel 84 */
    &IntDefaultHandler,            /* Channel 85 */
    &IntDefaultHandler,            /* Channel 86 */
    &IntDefaultHandler,            /* Channel 87 */
    &IntDefaultHandler,            /* Channel 88 */
    &IntDefaultHandler,            /* Channel 89 */
    &IntDefaultHandler,            /* Channel 90 */
    &IntDefaultHandler,            /* Channel 91 */
    &IntDefaultHandler,            /* Channel 92 */
    &IntDefaultHandler,            /* Channel 93 */
    &IntDefaultHandler,            /* Channel 94 */
    &IntDefaultHandler,            /* Channel 95 */
    &IntDefaultHandler,            /* Channel 96 */
    &IntDefaultHandler,            /* Channel 97 */
    &IntDefaultHandler,            /* Channel 98 */
    &IntDefaultHandler,            /* Channel 99 */
    &IntDefaultHandler,            /* Channel 100 */
    &IntDefaultHandler,            /* Channel 101 */
    &IntDefaultHandler,            /* Channel 102 */
    &IntDefaultHandler,            /* Channel 103 */
    &IntDefaultHandler,            /* Channel 104 */
    &IntDefaultHandler,            /* Channel 105 */
    &IntDefaultHandler,            /* Channel 106 */
    &IntDefaultHandler,            /* Channel 107 */
    &IntDefaultHandler,            /* Channel 108 */
    &IntDefaultHandler,            /* Channel 109 */
    &IntDefaultHandler,            /* Channel 110 */
    &IntDefaultHandler,            /* Channel 111 */
    &IntDefaultHandler,            /* Channel 112 */
    &IntDefaultHandler,            /* Channel 113 */
    &IntDefaultHandler,            /* Channel 114 */
    &IntDefaultHandler,            /* Channel 115 */
    &IntDefaultHandler,            /* Channel 116 */
    &IntDefaultHandler,            /* Channel 117 */
    &IntDefaultHandler,            /* Channel 118 */
    &IntDefaultHandler,            /* Channel 119 */
    &IntDefaultHandler,            /* Channel 120 */
    &IntDefaultHandler,            /* Channel 121 */
    &IntDefaultHandler,            /* Channel 122 */
    &IntDefaultHandler,            /* Channel 123 */
    &IntDefaultHandler,            /* Channel 124 */
    &IntDefaultHandler,            /* Channel 125 */
    &IntDefaultHandler,            /* Channel 126 */
    &IntDefaultHandler,            /* Channel 127 */
};

void vimInit(void)
{
	/* Initialize VIM table */
    {
        unsigned int i;

        for (i = 0U; i < VIM_CHANNELS; i++)
        {
            vimRAM->ISR[i] = s_vim_init[i];
        }
    }
}

void Reset()
{

  volatile unsigned long *pulSrc = &_etext;
  volatile unsigned long *pulDest = &_sdata;
  
  while( pulDest < &_edata )
    *pulDest++ = *pulSrc++;
  
  pulDest = &_sbss;
  while ( pulDest < &_ebss )
    *pulDest++ = 0;       
  vimInit();
  main();
}

void IntDefaultHandler()
{
  while(1)
  {
  }
}


