#include "rh850.h"


void InterruptRoutine();


/*
  Clock is running on 8 MHz internal; max is 24 Mhz  
*/
void CPU_Init(void)
{
  /* CKDIVMD -> 1 After reset */
  
  /* (1) --- Main Oscillator init , will be used as source for PLL0 */
  while( (CLKCTLMOSCS & (0x1 << 2))  == 4  ) ;   /* !! NOT EXPECTED !!*/
  CLKCTLMOSCC = 2;       /* 16 MHz Xtal gain */
  
  /* MOSCST  How many  EMCL cycles will stabilization last */
  /* The emergency clock EMCLK is supplied by the HS IntOSC, if it is active , LS IntOSC, if HS IntOSC is inactive  */
   if (CLKCTLROSCS & 0x4) /*  8MHh */
   {
     CLKCTLMOSCST = 8000 * 2 * 2;   /* 1ms X safety_factor X 2 ms */
   }
   else  /*240 kHz*/
   {
     CLKCTLMOSCST = 240 * 2 * 2;
   }
   
  while( (CLKCTLMOSCE & 0x3) != 0) ;   /* Wait if action/change in progress to finsih */
  
  /* Check if MOSC is active or not , Main oscillator is OFF after reset  */
  if( (CLKCTLMOSCS & (0x1 << 2))  == 0  )
  {
    //CLKCTLMOSCE |= 0x1 ;     /* PROTECTED WRITE */                 /* Enable Main oscillator */
    WPROTRPROTCMD0=0xa5;
    CLKCTLMOSCE=0x1;
    CLKCTLMOSCE=~0x1;
    CLKCTLMOSCE=0x1;
    if(WPROTRPROTS0 == 1 )
    {
      while(1){/*TRAP*/}
    }
    
    while((CLKCTLMOSCE & 0x1 ) != 0);         /* Wait for enable bit to return to 0 */ 
  }
  
  
  /* Before starting PLL0 using PLL0ENTRG, confirm that the PLL0 input clock (MainOSC or HS IntOSC, selected by the CKSC_PLL0IS_CTL) is operating. */
  /* Stable and active X clock is indicated by MOSCS.MOSCCLKACT = 1. */
  while((CLKCTLMOSCS & (0x1 << 2)) == 0 ); 
  
  /***************************/
  /* -----  PLL0 SETUP ----- */   
  /***************************/
  /****************************************************************************/
  /* PLL0 must be used for 240Mhz main CPU clock , PLL1 is limited to 120 MHz */
  /****************************************************************************/
  
  if( CLKCTLPLL0S & 0x4 ) { while(1){ /*TRAP: We do not expect PLL0 to be ACTIVe at this point */ }  } 
  
  /* Set M = 2  and N = 60 factor */
  /* PLL0 register hold above values - 1 */
  unsigned long temp ;
  temp = CLKCTLPLL0C ; 
  temp &= ~ (  
              0x3  << 11 | 
              0x7F << 0
            );
  temp |= 0x1 << 11 | 0x3B ; 
  
  CLKCTLPLL0C = temp ;  
  
  /* Verfiy writen values */
  if( ( CLKCTLPLL0C & (  0x3 << 11 ) )  !=  (0x1 << 11 )) {while(1){};}
  if( ( CLKCTLPLL0C & ( 0x3F <<  0 ) )  != 0x3B ) {while(1){};}


  WPROTRPROTCMD1=0xa5;
  CLKCTLCKSC_PLL0IS_CTL=0x1;   /* Select Main oscillator as source of PLL0 */
  CLKCTLCKSC_PLL0IS_CTL=~0x1;
  CLKCTLCKSC_PLL0IS_CTL=0x1;
  if(WPROTRPROTS1 == 1 ){ while(1){/*TRAP*/}}
  
  /* Verify  PPL0 source is MainOscillator */ 
  if ((CLKCTLCKSC_PLL0IS_ACT & 0x3)  != 0x1 ) { while(1){ /* We did not switch to Main Oscillator */ }  }
  
  
  /*
  Follow the procedure given below for starting the PLL0 by using PLL0ENTRG.
  1. Confirm that the PLL0 is neither waiting for being enabled nor stopped (both PLL0E.PLL0DISTRG = 0 and PLL0E.PLL0ENTRG = 0).
  2. Confirm that the PLL0 is inactive (PLL0S.PLL0CLKACT = 0).
  3. Start the PLL0 (PLL0E.PLL0ENTRG = 1).
  4. Confirm that the PLL0 has been started (PLL0S.PLL0CLKACT = 1)
  */
  
  while((CLKCTLPLL0E & 0x3) > 0 );
  while((CLKCTLPLL0S & 0x4) == 0x4 ){ /* Trap */ } ;
  
  WPROTRPROTCMD1=0xa5;
  CLKCTLPLL0E=0x1;   /* Enable PLL0 */
  CLKCTLPLL0E=~0x1;
  CLKCTLPLL0E=0x1;
  if(WPROTRPROTS1 == 1 ){ while(1){/*TRAP*/}}
  
  /*The stable and active state of the PLL0OUT and CPLL0OUT clocks is indicated by PLLS.PLL0CLKACT = 1.*/
  while((CLKCTLPLL0S & 0x4) == 0){ /* Wait for oscillator to be activated */};
  /* AT THIS point PLLO should be up and running */
  
  /*******************************/ 
  /* -- Clock domain settings -- */ 
  /*******************************/ 
  /* Setup a source clock -->  Switch over core clock to CPP0OUT source */
  WPROTRPROTCMD1=0xa5;
  CLKCTLCKSC_CPUCLKS_CTL= 0x0;
  CLKCTLCKSC_CPUCLKS_CTL=~0x0;
  CLKCTLCKSC_CPUCLKS_CTL= 0x0;
  
  while (CLKCTLCKSC_CPUCLKS_ACT   != 0x0 );  /* Check  if we switched to new source succesfully*/

  /*Setup clock divider for MAX core frequency  */
  //if (CLKCTLCKSC_CPUCLKD_CTL != 0x29) 
  //{
  //  CLKCTLCKSC_CPUCLKD_CTL = 0x29 ;
  //}  
  /* Confirm completion of  diver selections */
  // while(CLKCTLCKSC_CPUCLKD_ACT != 0x29 ); 
  
  /* Due to flash test failing we will drive cpu clock to half max value */
   if (CLKCTLCKSC_CPUCLKD_CTL != 0x2A) 
  {
    WPROTRPROTCMD1=0xa5; 
    CLKCTLCKSC_CPUCLKD_CTL =  0x2A ;
    CLKCTLCKSC_CPUCLKD_CTL = ~0x2A ;
    CLKCTLCKSC_CPUCLKD_CTL =  0x2A ;
    if(WPROTRPROTS1 == 1 ){ while(1){/*TRAP*/}}
  }  
  /* Confirm completion of  diver selections */
   while(CLKCTLCKSC_CPUCLKD_ACT != 0x2A ); 
  
  
  /* DCIB EEPRDCYCL*/
  /* DCIB Data flash wait cycle control register EEPRDCYCL FFC59810H */
  /* By defult it has max wait states 10 */
    
}
  

void InitOSTM(void)
{
  /* F1KM-S4 has five 32 bit OS-timer(s),  OSTM0 will be used */
  /* Timer uses CPUCLK_L */

  OSTM0CMP = 30 * 2000;    /* OSTMTINT generation period = count clock period × (OSTMnCMP + 1) */ 
  
  /* Cotrol register can be writen */
  if( OSTM0.TE == 0 ) 
  {
    OSTM0CTL =  0 << 0  |    /* Will use only under-flow iterrupts , start/stop events will not trigger iterrrupts */
                0 << 1  ;    /* Interval timer mode */
  } 
  
  /* Start  counting */
  OSTM0.TS = 0x1 ;
  /* Wait till counter is started */
  while(OSTM0TE == 0);
  
  /* OSTM0 Iterrupt channel settings */
  short currentValue =  INTC2ICOSTM0 ;
  currentValue  &= ~(0x1 << 7)  ;      /* Enable iterrupt processing for this channel */
  currentValue  &= ~(0xF << 0)  ;      /* Priorty is 0 (highest) */
  currentValue  &= ~(0x1 << 6)  ;      /* Direct Vector Method   */ 
  INTC2ICOSTM0 = currentValue ;
  
  
  /*  PLL Stabilization ---> Page 1072 */
  /* Start OS Timer */
  //OSTM0CMP=0x0000EA00;  // load compare value
  //OSTM0CTL=0x1;           // select interrupt mode
  //PFSSICOSTM0=0x0;     // disable interrupt masking
}

__interrupt void TimerInterruptHandler(void)
{
  #pragma ghs interrupt
  __DI();
  InterruptRoutine();
  __EI();
}

void targetEnableInterrupts(void)
{
  OSTM0TS=0x1;            // start trigger
  __EI();
}


void targetInit(void)
{
  #ifndef EMPTY_TARGET_INIT


  CPU_Init();
  InitOSTM();

  targetEnableInterrupts();

  #endif /* EMPTY_TARGET_INIT */
}

void disableWatchdog()
{
}
