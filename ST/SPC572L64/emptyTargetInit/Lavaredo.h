#ifndef __LAVAREDO_C__
#define __LAVAREDO_C__

#define CPU_TEST	 // we will test special CPU function
//#define USE_FLOAT  // in our test we will use float and double
//#define USE_LONGDOUBLE  // in our test we will use long double

// extern unsigned long iCounter;
// extern unsigned int iLED;
// extern unsigned int iInterruptCounter;
// extern unsigned int daqInterruptCounter;

//extern const uint32_t intc_sw_mode_isr_vector_table[];
extern const unsigned int intc_sw_mode_isr_vector_table[];
int targetInit(void);

#define mem(addr) (*(unsigned char volatile *)(addr))
#define memw(addr) (*(unsigned short volatile *)(addr))
#define meml(addr) (*(unsigned long volatile *)(addr))

#endif    /* __LAVAREDO_C__ */
