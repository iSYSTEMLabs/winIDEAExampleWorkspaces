#include "MPC5748G_2112.h"


extern const vuint32_t intc_sw_mode_isr_vector_table_1 [];
extern void            IVPR_init_core_1(void);


#define PIT1_LDVAL         40000    
                               /* timeout = 40.000 PITclks x 4 sysclks/1 PITclk x 1 sec/160Msysclk */
                               /* 40000 x 4 / 160M = 160k/160M = 0.001 sec. */

void PIT1_init(void) {
  PIT.TIMER[1].LDVAL.R      = PIT1_LDVAL;   /* load PIT counter */
  PIT.TIMER[1].TCTRL.B.TIE  = 0;       /* enable interrupt */
  INTC.PSR[227].B.PRC_SELN  = 0x4;     /* IRQ sent to Core 1 */
  INTC.PSR[227].B.PRIN      = 0x9;     /* IRQ priority = 9 (15 = highest) */
  PIT.TIMER[1].TCTRL.B.TEN  = 0;       /* enable channel */
}

void init_INTC_core_1 (void) {
  INTC.BCR.B.HVEN1      = 0;           /* Software vector mode used for Core 1 */
  INTC.CPR[1].B.PRI     = 0;           /* Lower core 1's INTC current priority to 0 */
  INTC.IACKR[1].R       = (uint32_t) &intc_sw_mode_isr_vector_table_1[0];
                                      /* Load address of first ISR vector in table */
  IVPR_init_core_1();                 /* Initialize core's spr IVPR register */
  asm("wrteei 0");                    /* Enable ext IRQ to core (after IVPR loaded)*/
}  

void targetInit()
{
  #ifndef EMPTY_TARGET_INIT

  PIT1_init();
  init_INTC_core_1();


  #endif /* EMPTY_TARGET_INIT */
}

void targetEnableInterrupts(void)
{
  PIT.TIMER[1].TCTRL.B.TIE  = 1;       /* enable interrupt */
  PIT.TIMER[1].TCTRL.B.TEN  = 1;  
  asm("wrteei 1");  
}  


void disableWatchdog()
{
}
