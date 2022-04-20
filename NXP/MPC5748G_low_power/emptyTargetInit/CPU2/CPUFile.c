#include "MPC5748G_2112.h"


extern const vuint32_t intc_sw_mode_isr_vector_table_2 [];
extern void            IVPR_init_core_2(void);


#define PIT2_LDVAL         40000    
                               /* timeout = 40.000 PITclks x 4 sysclks/1 PITclk x 1 sec/160Msysclk */
                               /* 40000 x 4 / 160M = 160k/160M = 0.001 sec. */

void PIT2_init(void) {
  PIT.TIMER[2].LDVAL.R      = PIT2_LDVAL;   /* load PIT counter */
  PIT.TIMER[2].TCTRL.B.TIE  = 0;       /* enable interrupt */
  INTC.PSR[228].B.PRC_SELN  = 0x8;     /* IRQ sent to Core 1 */
  INTC.PSR[228].B.PRIN      = 0xa;     /* IRQ priority = 9 (15 = highest) */
  PIT.TIMER[2].TCTRL.B.TEN  = 0;       /* enable channel */
}

void init_INTC_core_2 (void) {
  INTC.BCR.B.HVEN2      = 0;           /* Software vector mode used for Core 1 */
  INTC.CPR[2].B.PRI     = 0;           /* Lower core 1's INTC current priority to 0 */
  INTC.IACKR[2].R       = (uint32_t) &intc_sw_mode_isr_vector_table_2[0];
                                      /* Load address of first ISR vector in table */
  IVPR_init_core_2();                 /* Initialize core's spr IVPR register */
  asm("wrteei 0");                    /* Enable ext IRQ to core (after IVPR loaded)*/
}  

void targetInit()
{
  #ifndef EMPTY_TARGET_INIT

  PIT2_init();
  init_INTC_core_2();


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
