//============================================================================
//                           C O P Y R I G H T                                    
//============================================================================
// Copyright (c) 2013 by Renesas Electronics (Europe) GmbH.
//============================================================================
//
// Warranty Disclaimer :
// Because the Product(s) is licensed free of charge, there is no warranty of
// any kind whatsoever and expressly disclaimed and excluded by NEC, either
// expressed or implied, including but not limited to those for non-
// infringement of intellectual property, merchantability and/or fitness for
// the particular purpose. NEC shall not have any obligation to maintain,
// service or provide bug fixes for the supplied Product(s) and/or the
// Application.
//
// Each User is solely responsible for determining the appropriateness of
// using the Product(s) and assumes all risks associated with its exercise
// of rights under this Agreement, including, but not limited to the risks
// and costs of program errors, compliance with applicable laws, damage to
// or loss of data, programs or equipment, and unavailability or
// interruption of operations.
//
// Limitation of Liability :
// In no event shall NEC be liable to the User for any incidental,
// consequential, indirect, or punitive damage (including but not limited to
// lost profits) regardless of whether such liability is based on breach of
// contract, tort, strict liability, breach of warranties, failure of
// essential purpose or otherwise and even if advised of the possibility of
// such damages. NEC shall not be liable for any services or products provided
// by third party vendors, developers or consultants identified or referred
// to the User by NEC in connection with the Product(s) and/or the
// Application.
//
//============================================================================
// Enviroment : Devices    : R7F7010352AFP
//              Compiler   : Wind River Diab Compiler Version : 5.9.3.0
//============================================================================
//
// Dhrystone Demo Project for use with RH850F1X/L Boards.
//============================================================================



//============================================================================
// Includes                                                                  
//============================================================================
#include <device.h>
#include "ostm.h"


//============================================================================
// Defines                                                     
//============================================================================
#define TRUE  1
#define FALSE 0

//============================================================================
// Prototypes                                                             
//============================================================================


//============================================================================
// Constants                                                             
//============================================================================


//============================================================================
// Init Functions                                                             
//============================================================================

void swreset( void)
{
	protected_write(PROTCMD0, SWRESA,0x01);	// make the CPU reset
	__asm("nop");
	__asm("nop");
	__asm("nop");
	__asm("nop");
	__asm("nop");
	//__asm("br	0x1b");
	__asm("nop");
}

void sleep( int ms)
{

	do
	{
		__asm( "halt");
		__asm( "nop");
		__asm( "nop");
		__asm( "nop");
		__asm( "nop");
		__asm( "nop");
	} while( ms-- > 0);
}

void hw_init(void)
{

	init_my_clock();

}

/*
 * Very early clock tree initialization, directly after 
 * _RESET executed.
 */
void __lowinit(void)
{
	PMSR8  = 0xF0000;		// P8_0 to P8_3 are output
	PMCSR8 = 0xF0000;		// P8_0 to P8_3 have port function
}

/*
 * Overrule library function exit ...
 */
int MyExit(int p)
{
	stop_ostm0();
	sleep(2000);	/* sleep for 2s */
	swreset();
	return 1;
}
