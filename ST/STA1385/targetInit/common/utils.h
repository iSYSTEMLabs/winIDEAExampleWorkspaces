/**
 * @file utils.h
 * @brief This file provides useful definitions
 *
 * Copyright (C) ST-Microelectronics SA 2015
 * @author: APG-MID team
 */

#ifndef UTILS_H
#define UTILS_H

#include <stdint.h>

#define __maybe_unused		__attribute__((unused))
#define __always_unused		__attribute__((unused))

#define ODD(nr)		((nr) & 1UL)
#define BIT(nr)		(1UL << (nr))
#define set_bit(r, b)	(r |= b)
#define clr_bit(r, b)	(r &= ~b)
#define read_bit(r, b)	(r & b)

#define bit_val(r, b)	(read_bit(r, b) >> b)

#define NELEMS(x)  (sizeof(x) / sizeof((x)[0]))

/** Swap 2 bytes short int */
/*  */
static inline uint16_t swap16(uint16_t v)
{
	return ((v & 0xFF00) >> 8) | ((v & 0x00FF) << 8);
}

/** Swap 4 bytes int */
static inline uint32_t swap32(uint32_t v)
{
	return ((v & 0xFF000000) >> 24) | ((v & 0x00FF0000) >> 8) |
	       ((v & 0x0000FF00) << 8) | ((v & 0x000000FF) << 24);
}

/** counts the number of bits sets in v */
static inline uint32_t count_bits_sets(uint32_t v)
{
	uint32_t c; /* c accumulates the total bits set in v */

	for (c = 0; v; c++)
		v &= v - 1; /* clear the least significant bit set */

	return c;
}

static inline void write_byte_reg(uint8_t value, uint32_t addr)
{
	*(volatile uint8_t *)addr = value;
}

static inline uint32_t read_byte_reg(uint32_t addr)
{
	return *(volatile uint8_t *)addr;
}

static inline void write_reg(uint32_t value, uint32_t addr)
{
	*(volatile uint32_t *)addr = value;
}

static inline uint32_t read_reg(uint32_t addr)
{
	return *(volatile uint32_t *)addr;
}

static inline void update_reg(uint32_t val, uint32_t mask, uint32_t addr)
{
	uint32_t reg = read_reg(addr);

	reg &= mask;
	write_reg(reg | val, addr);
}

static inline void set_bit_reg(uint32_t b, uint32_t addr)
{
	uint32_t val = read_reg(addr);
	write_reg(val | b, addr);
}

static inline void clear_bit_reg(uint32_t b, uint32_t addr)
{
	uint32_t val = read_reg(addr);
	write_reg(val & ~b, addr);
}

static inline void wait_n_cycles(int cycles)
{
	int i;

	for(i = 0; i < cycles; i++) {
		__asm volatile ( "nop" );
	}
}

#endif /* UTILS_H */

