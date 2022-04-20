/*****************************************************************
* PROJECT : 	LEOPARD Getting Started Validation
* FILE : 	utility.h
*
* DESCRIPTION : ...
*
* COPYRIGHT :(c) year, Freescale & STMicroelectronics
*
* VERSION : 1.0
* DATE :    10.07.2009
* AUTHOR :  Giovanni D'Aquino
* HISTORY :
******************************************************************/
/********* CVS REVISION ********/
/*
 *  $RCSfile: typedefs.h,v $
 *  $Date: 2011/05/06 09:11:16 $
 *  $Revision: 1.1 $
 *  $Name:  $
 */
#ifndef _TYPEDEFS_H_
#define _TYPEDEFS_H_
#ifdef __cplusplus
extern "C" {
#endif

/******************************************************************
| defines and macros (scope: module-local)
|-----------------------------------------------------------------*/
/******************************************************************
| typedefs and structures (scope: module-local)
|-----------------------------------------------------------------*/
/******************************************************************
| exported variables
|-----------------------------------------------------------------*/
/******************************************************************
| exported function prototypes
|-----------------------------------------------------------------*/

#ifdef __MWERKS__    //Metrowerk CodeWarrior
    #include <stdint.h>

    // Standard typedefs used by header files, based on ISO C standard
    typedef volatile int8_t vint8_t;
    typedef volatile uint8_t vuint8_t;

    typedef volatile int16_t vint16_t;
    typedef volatile uint16_t vuint16_t;

    typedef volatile int32_t vint32_t;
    typedef volatile uint32_t vuint32_t;

#else
#ifdef __GHS__    //GreenHills
    #include <stdint.h>

    // Standard typedefs used by header files, based on ISO C standard
    typedef volatile int8_t vint8_t;
    typedef volatile uint8_t vuint8_t;

    typedef volatile int16_t vint16_t;
    typedef volatile uint16_t vuint16_t;

    typedef volatile int32_t vint32_t;
    typedef volatile uint32_t vuint32_t;

#else

    // This is needed for compilers that don't have a stdint.h file

    typedef signed char int8_t;
    typedef unsigned char uint8_t;
    typedef volatile signed char vint8_t;
    typedef volatile unsigned char vuint8_t;

    typedef signed short int16_t;
    typedef unsigned short uint16_t;
    typedef volatile signed short vint16_t;
    typedef volatile unsigned short vuint16_t;

    typedef signed int int32_t;
    typedef unsigned int uint32_t;
    typedef volatile signed int vint32_t;
    typedef volatile unsigned int vuint32_t;

#endif
#endif
	
	#define STATIC static

	typedef uint32_t 	tU32;
	typedef uint16_t 	tU16;
	typedef uint8_t 	tU8;
	typedef unsigned long long tU64;

	typedef int32_t 	tS32;
	typedef int16_t 	tS16;
	typedef int8_t 	tS8;
	
	typedef volatile tU32  tVU32;

#ifndef true
#ifndef false	
	typedef	enum { 
		false = (1==0), 
		true  = (1==1)
	} boolean;
#endif
#endif	

#ifdef __cplusplus
}
#endif
#endif /* _TYPEDEFS_H_ */
/* End of file */


	


