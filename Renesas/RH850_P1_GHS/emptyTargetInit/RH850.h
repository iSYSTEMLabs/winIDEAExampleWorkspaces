#ifndef __v850_fx4_h__
#define __v850_fx4_h__

extern void watchdogUpdate();

void InitClocks();
void InitOSTM();

int iInterruptCounter;

#define OSTM0CMP    *(volatile unsigned long *)0xFFDD8000
#define OSTM0CTL    *(volatile unsigned char *)0xFFDD8020
#define OSTM0TS     *(volatile unsigned char *)0xFFDD8014
#define EIC74       *(volatile unsigned char *)0xFFFFB094

#define PM0         *(volatile unsigned char *)0xFFC10010
#define P0          *(volatile unsigned char *)0xFFC10000

#endif

