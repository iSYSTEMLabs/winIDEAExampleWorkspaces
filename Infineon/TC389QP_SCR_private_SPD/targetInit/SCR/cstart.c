/**************************************************************************
**                                                                        *
**  FILE        :  cstart.c                                               *
**                                                                        *
**  DESCRIPTION : 							  *
**                                                                        *
**	The system startup code initializes the Program Status Word (PSW),*
**	the system Stack Pointer (SP), the vitual stack pointer (_SP) and *
**	the application C variables.                                      *
**                                                                        *
**      When linking your C modules with the library, you automatically   *
**	link the object module, containing the C startup code. This       *
**	module is called cstart.obj and is present in every C library     *
**	(once for every compiler model).                                  *
**                                                                        *
**  Copyright 1996-2017 TASKING BV                                        *
**                                                                        *
**************************************************************************/

#define ACC (*(volatile unsigned char *)0xE0)
#define B   (*(volatile unsigned char *)0xDD)
#define SP  (*(__data volatile unsigned char *)0xD4)
#define DPL (*(volatile unsigned char *)0xD5)
#define DPH (*(volatile unsigned char *)0xD6)
#define VSTACK_LABEL _lc_ue_vstack_pdata

#pragma	extern	main 
extern int   main();


extern char * __data _SP;		/* virtual stack pointer */
extern char VSTACK_LABEL[];		/* virtual stack end label */
extern char __idata _lc_bs[];           /* system stack begin label */
extern char _lc_ub_stack[];
extern char __xdata _lc_base_pdata[];

#ifndef         P2
# define        P2	(*(__bsfr volatile unsigned char *)0xA0)
#endif

extern char * __data _SP;		/* virtual stack pointer */


void __interrupt(0) _start(void)
{  
  /* Initialize stack pointer */
	P2  = ((unsigned int)_lc_base_pdata) >> 8;      /* needed for when using __pdata */
  SP  = (unsigned char)_lc_bs;                    /* initialize stack pointer */
	_SP = VSTACK_LABEL-1;          
  _init();
  
  main();
}
