#ifndef __CONF_H__
#define __CONF_H__

#include "CommonDefs.h"
#include "BBTypeDefs.h"

#include "stm32f4xx.h"

#include "HAL.h"

#if defined (USE_STM322xG_EVAL)
  #define PLL_M 25
#elif defined(USE_STM324xG_EVAL)
  #define PLL_M 25
#elif defined (USE_STM3210C_EVAL)
  #define PLL_M 25
#else
 #error "Missing define: Evaluation board (ie. USE_STM322xG_EVAL)"
#endif

#define COMM_BUFFER_SIZE_IN_BYTES     0x3C00      // 15kB
#define MAX_TRAILER       0x40
#define MAX_READOVERSHOT  0x40
#define MAX_PACKET        (COMM_BUFFER_SIZE_IN_BYTES - MAX_HEADER - MAX_TRAILER - MAX_READOVERSHOT - 0x40)

#if defined ( __TMS470__ )
  #define VERSION_SECTION_BEFORE_TYPE_AND_NAME(typ, name) const typ name // #pragma DATA_SECTION(name, ".bbversion"); typ name
  #define VERSION_SECTION_AFTER_TYPE_AND_NAME
  #define VERSION_SECTION_END ;

  #define FUN_SECTION(sec, retTyp, fName, ...) retTyp fName __VA_ARGS__; // #pragma CODE_SECTION(fName, #sec);

#elif defined( __GNUC__ )

  #define VERSION_SECTION_BEFORE_TYPE_AND_NAME(typ, name) const typ name
  #define VERSION_SECTION_AFTER_TYPE_AND_NAME __attribute__ ((section (".bbversion")))
  #define VERSION_SECTION_END ;

  #define FUN_SECTION(sec, retTyp, fName, ...) retTyp fName __VA_ARGS__  __attribute__ ((section (#sec)));

#endif

#define COMM_PLATFORM           COMM_PLATFORM_STM32
#define COMM_PROTOCOL_VERSION   0x11

#define ST_LIB_VOLTAGE_RANGE_FOR_FLASH_PROGRAMMING VoltageRange_3


#ifdef _DEBUG
  extern volatile char BACK_DOOR;
  #define BACK_DOOR_OPEN_VAL 0xBD
  #define BACK_DOOR_OPEN() (BACK_DOOR == BACK_DOOR_OPEN_VAL)
  #define BBINLINE
#else
  #define BBINLINE inline
#endif

#define STM_PROTECTION_LEVEL1 0xFF
#define STM_PROTECTION_LEVEL2 0xCC

#ifdef _DEBUG
  #define STM_PROTECTION_LEVEL STM_PROTECTION_LEVEL1
#else
  #define STM_PROTECTION_LEVEL STM_PROTECTION_LEVEL1  // We dont use LEVEL2
#endif
#endif  //  __CONF_H__

