#include "mpc5600.h"
#include "MPC564xBC_Alpha_V0.3.h"

void initPIT(void) {
  /* Enable PIT and configure to stop in debug mode */
  PIT.PITMCR.R = 0x00000001;       
  /* eg. 1ms timer interrupt; fcpu=120MHz;  LDVAL = Tint / Tcpu = Tint / (1/fcpu) = 1msec / (1/120MHz) = 120000 */
  PIT.CH[1].LDVAL.R = 120000;
  /* PIT 1 interrupt vector with priority 1 */
  INTC.PSR[60].R = 0x01;           
}

