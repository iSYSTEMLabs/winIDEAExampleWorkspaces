#ifndef __v850_fx4_h__
#define __v850_fx4_h__

void InitClocks();
void InitOSTM();

int iInterruptCounter;

#endif

/*
  IO registers   
*/
#define P0 (*(unsigned volatile short*)0xFFC10000)          // Port 0 register
#define PM0 (*(unsigned volatile short*)0xFFC10010)         // Port 0 mode register
#define PINV0 (*(unsigned volatile short*)0xFFC10010)       // Port 0 output value inversion regiter

/*
  System timer registers (base: 0xFFDD8000)
*/
#define STM0TS (*(unsigned volatile int*)0xFFDD8010)        // STM0 timer counter start register
#define STM0TS_TS1 1
#define STM0TT (*(unsigned volatile int*)0xFFDD8014)
#define STM0TT_TT1 1
#define STM0CMPlA (*(unsigned volatile int*)0xFFDD8080)     // STM0 timer compare match register
#define STM0CMPlB (*(unsigned volatile int*)0xFFDD8084)     // STM0 timer compare match register
#define STM0CMPlC (*(unsigned volatile int*)0xFFDD8088)     // STM0 timer compare match register
#define STM0CMPlD (*(unsigned volatile int*)0xFFDD808C)     // STM0 timer compare match register
#define STM0STR (*(unsigned volatile int*)0xFFDD8020)       // STM0 timer status register
#define STM0STR_CM1A 4 
#define STM0STC (*(unsigned volatile int*)0xFFDD8024)       // STM0 timer status clear register
#define STM0CNT1 (*(unsigned volatile int*)0xFFDD8070) 
#define EIC14 (*(unsigned volatile short*)0xFFFEEA1C)         // STM interrupt 4
#define EIC14_P 0
#define EIC14_TB 6
#define EIC14_MK 7
#define EIC14_CT 15
#define FEINTFMSK (*(unsigned volatile short*)0xFFD42004)

