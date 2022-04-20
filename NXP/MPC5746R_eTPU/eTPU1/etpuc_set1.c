/**************************************************************************/
/* ETPU function set                                                      */
/*                                                                        */
/* FILE NAME: etpuc_set1.c                                                */
/**************************************************************************/

/**********************/
/* Define memory size */
/**********************/
/* Use a 6k memory starting at 0 */
#pragma memory ROM[(4 * (1024))] @ 0x400;

/*******************************/
/* Define entry table location */
/*******************************/
/* Put entry table at the beginning of memory so that it is not
   dependent on memory size. */
#pragma entryaddr 0x0000;

int24 Global_Error = 0xFF;

void Global_Error_Func();
void Global_Error_Func1();
int24 f(int24 i);

/*************************/
/* Include the functions */
/*************************/

// test function
#define H0_FUNCTION_NUMBER 0
#include "m_0.c"

// PWM (Pulse Width Modulation) function
#define PWM_FUNCTION_NUMBER 1
#include "etpuc_pwm.c"

// IC Input Capture function
#define IC_FUNCTION_NUMBER 2
//#include "etpuc_ic.c"

// OC Output Compare function
#define OC_FUNCTION_NUMBER 3
//#include "etpuc_oc.c"

// PFM (Period and Frequency Measurement) function
#define PFM_FUNCTION_NUMBER 4
//#include "etpuc_pfm.c"

// PPA (Period / Period Accumulation) function
#define PPA_FUNCTION_NUMBER 5
//#include "etpuc_ppa.c"

// UART (Universal Asynchronous Recieve / Transmitter) function
#define UART_FUNCTION_NUMBER 6
//#include "etpuc_uart.c"

// QOM (Queued Output Match) function
#define QOM_FUNCTION_NUMBER 7
//#include "etpuc_qom.c"

// SM (Stepper Motor) function
#define SM_FUNCTION_NUMBER 8
//#include "etpuc_sm.c"

// SPI (Synchronous Peripheral Interface) function
#define SPI_FUNCTION_NUMBER 9
//#include "etpuc_spi.c"

// POC (Protected Output Compare) function
#define POC_FUNCTION_NUMBER 0xA
//#include "etpuc_poc.c"

// Production test function
#define PRODUCTION_FUNCTION_NUMBER 0xB
#include "production.c"

// test function
#define TEST_FUNCTION_NUMBER 15
//#include "etpuc_test.c"

void Global_Error_Func()
{
	int24 error_temp;

	if (LinkServiceRequest == 1) error_temp=1;
	else
		error_temp = 0;

	if (MatchALatch == 1) error_temp++;
	error_temp <<= 1;

	if (MatchBLatch == 1) error_temp++;
	error_temp <<= 1;

	if (TransitionALatch == 1) error_temp++;
	error_temp <<= 1;

	if (TransitionBLatch == 1) error_temp++;
	error_temp <<= 8;

	Global_Error = error_temp + chan;

	ClearAllLatches();

}

void Global_Error_Func1()
{
}

int24 f(int24 i)
{
  if (0==i)
  {
    return 0;
  }
  else
  {
    return 0x1;
  }
}

/* output eTPU code image and information for CPU */
#pragma write h, (::ETPUfilename (etpuc_set1.h));
#pragma write h, (/* Auto-generated file DO NOT EDIT */);
#pragma write h, ( );
#pragma write h, (/* eTPU standard function set1 */ );

#pragma write h, (#define FS_ETPU_ENTRY_TABLE 0x0000);
#pragma write h, ( );

#pragma write h, (#define FS_ETPU_MISC ::ETPUmisc);
#pragma write h, ( );

#pragma write h, (const uint32_t etpu_globals[] = { ::ETPUglobalimage32 }; );
#pragma write h, ();

#pragma write h, (const uint32_t etpu_code[] = { ::ETPUcode32 }; );

#pragma write h, (/* List of functions: );
#pragma write h, (::ETPUnames);
#pragma write h, (*/);

#pragma write e, (eTPU_C Debugging Information);
#pragma write e, (Environment Summary);
