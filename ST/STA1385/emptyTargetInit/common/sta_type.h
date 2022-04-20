/**
 * @file sta_type.h
 * @brief This file contains all the common data types used for the
 * sta firmware library
 *
 * Copyright (C) ST-Microelectronics SA 2015
 * @author: APG-MID team
 */

#ifndef __STA_TYPE_H__
#define __STA_TYPE_H__

#include <stdint.h>

#define U8_MAX     ((uint8_t)255)
#define S8_MAX     ((int8_t)127)
#define S8_MIN     ((int8_t)-128)
#define U16_MAX    ((uint16_t)65535u)
#define S16_MAX    ((int16_t)32767)
#define S16_MIN    ((int16_t)-32768)
#define U32_MAX    ((uint32_t)4294967295uL)
#define S32_MAX    ((int32_t)2147483647)
#define S32_MIN    ((int32_t)2147483648uL)

#define true (1)
#define false (0)

#ifndef NULL
#define NULL (0)
#endif

typedef uint8_t bool;

enum flag_status {
	RESET = 0,
	SET = !RESET,
};

#endif /* __STA_TYPE_H__ */
