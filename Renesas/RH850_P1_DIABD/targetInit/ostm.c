// OSTM0 timer handling
//

#include <Compiler.h>
#include <device.h>
#include "ostm.h"

volatile u32_T OSTM0Tick1ms;
volatile u32_T OSTMStart, OSTMStop;

unsigned long start_ostm0(void)
{
	// If OSTMnTS.OSTMnTS or OSTMnTSST is set to restart counting,
	// the counter starts counting from 0
	OSTM0TS  = 1;			// start timer
	while( OSTM0TE != 1)
		;			// Synchronize start

	SETLED(2);
	OSTMStart= OSTM0CNT;
	return OSTMStart;
}

unsigned long stop_ostm0(void)
{
	// If OSTMnTS.OSTMnTS or OSTMnTSST is set to restart counting,
	// the counter starts counting from 0
	OSTMStop= OSTM0CNT;

	CLRLED(2);
	OSTM0TT  = 1;		// stop timer
	while( OSTM0TE != 0)
		;		// Synchronize start

	return  OSTMStop;	// return current Tick count
}

void init_my_clock(void)
{
	ASM_DI();
	ICOSTM0 = 0;		// disable OSTM0 interrupt
	/*
	 * Runs with PCLK, PCLK programmed at 40 MHz
	 * Clock tick every 1 ms
	 * Interval time pclk is 25 ns
	 * Divider is Ttick/ Tpclk = 40000
	 */

	stop_ostm0();		// stop timer

	OSTM0CTL = 1;		// interval mode, no int at start
	OSTM0CMP = 40000;	// 1 ms/25 ns
	ICOSTM0  = 0x47;	// enable OSTM0 interrupt, lower priority

	ASM_EI();
	start_ostm0();
}                       

// Exception handler for OSTM0 interrupt

__interrupt__
void INTOSTM0(void)
{
	OSTM0Tick1ms++;
	NOTLED(1);	/* Toggle LED 1 */
}


u32_T
my_clock(void)
{
	return OSTM0Tick1ms;
}
