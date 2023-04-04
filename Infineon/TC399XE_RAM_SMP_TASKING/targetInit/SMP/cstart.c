/**************************************************************************
**                                                                        *
**  FILE        :  cstart.c                                               *
**                                                                        *
**  DESCRIPTION :                                                         *
**      The system startup code initializes the processor's registers     *
**      and the application C variables.                                  *
**                                                                        *
**  Copyright 1996-2007 Altium BV                                         *
**                                                                        *
**************************************************************************/

#include "cstart.h"                             /* include configuration */
#include "TriCore.h"
#include <stdlib.h>
#include <stdbool.h>

// #pragma weak   exit
// #pragma extern _Exit
// #pragma profiling off                           /* prevent profiling information on cstart */
// #pragma tradeoff 4                              /* preset tradeoff level (for size) */
// #pragma runtime BCM                             /* disable runtime error checking for cstart */

#define PSW  0xFE04
#define PCXI 0XFE00
#define BTV  0XFE24  
#define BIV  0XFE20
#define ISP  0XFE28
#define LCX  0XFE3C
#define FCX  0XFE38
#define STACK_ALIGN    0xfffffff8

/* linker definitions for user stack and interrupt stack areas */
extern __far int _lc_ue_ustack_tc0[];
extern __far int _lc_ue_istack_tc0[];

extern __far int _lc_ue_ustack_tc1[];
extern __far int _lc_ue_istack_tc1[];

extern __far int _lc_ue_ustack_tc2[];
extern __far int _lc_ue_istack_tc2[];

extern __far int _lc_ue_ustack_tc3[];
extern __far int _lc_ue_istack_tc3[];

extern __far int _lc_ue_ustack_tc4[];
extern __far int _lc_ue_istack_tc4[];

extern __far int _lc_ue_ustack_tc5[];
extern __far int _lc_ue_istack_tc5[];


extern __far int _lc_u_int_tab[];      /* interrupt table */
extern __far int _lc_u_trap_tab;       /* trap table */
extern __far int _SMALL_DATA_[];       /* centre of A0 addressable area */
extern __far int _LITERAL_DATA_[];     /* centre of A1 addressable area */
extern __far int _A8_DATA_[];          /* centre of A8 addressable area */
extern __far int _A9_DATA_[];          /* centre of A9 addressable area */
extern __far volatile unsigned long _eCommonData;

extern unsigned long __USTACK;

/* external functions */
extern void _c_init(void);              /* C initialization function */
extern void _call_init(void);           /* call a user function before main() */
extern void _endinit(void);             /* call a user function with protection switched off */

/* library references */
extern int main(void);
extern int main_1(void);
extern int main_2(void);
extern int main_3(void);
extern int main_4(void);
extern int main_5(void);


/*********************************************************************************
 * _reset() - reset vector
 *********************************************************************************/
#pragma section code libc.reset

void _START0( void )
{  
   __asm("nop");
   unsigned int sp;
   // Each core will initialize it's own stack pointer to the location defined
   // by the linker file
   switch(__mfcr(COREID_REG))
     {
       case 0: sp = (unsigned int)(_lc_ue_ustack_tc0) & STACK_ALIGN; break;
       case 1: sp = (unsigned int)(_lc_ue_ustack_tc1) & STACK_ALIGN; break;
       case 2: sp = (unsigned int)(_lc_ue_ustack_tc2) & STACK_ALIGN; break;
       case 3: sp = (unsigned int)(_lc_ue_ustack_tc3) & STACK_ALIGN; break;
       case 4: sp = (unsigned int)(_lc_ue_ustack_tc4) & STACK_ALIGN; break;
       case 6: sp = (unsigned int)(_lc_ue_ustack_tc5) & STACK_ALIGN; break;
     }
   __asm("mov.a\tsp,%0"::"d"(sp));
   __asm("j\t_start");

}

/*********************************************************************************
 * _cstart() - initialize stackpointer
 *********************************************************************************/
#pragma section code libc

/*********************************************************************************
 * _cstart() - startup code
 *********************************************************************************/

void _start( void )
{
  /* Do a dsync before changing any of the csfr values, thus any previous
   * background state gets flushed first. Required for applications that jump
   * to the reset address.
   */
  __dsync();
  
  __mtcr(PSW, 0x00000980);        /* clear PSW.IS */
  /* Set the PCXI to its reset value in case of a warm start */
  unsigned int pcxi = __mfcr(PCXI);
  pcxi &= 0xfff0;
  __mtcr(PCXI, pcxi);

  // Common trap table and interrupt vector table
  // Load Base Address of Trap Vector Table.
  __mtcr(BTV,  (unsigned int)_lc_u_trap_tab);
  // Load Base Address of Interrupt Vector Table.
  __mtcr(BIV, (unsigned int)(_lc_u_int_tab));

  // Load interupt stack pointer.
  // Each core will initialize it's own CSA
  unsigned int isp;
  switch(__mfcr(COREID_REG))
     {
       case 0: isp = (unsigned int)(_lc_ue_istack_tc0) & STACK_ALIGN; break;
       case 1: isp = (unsigned int)(_lc_ue_istack_tc1) & STACK_ALIGN; break;
       case 2: isp = (unsigned int)(_lc_ue_istack_tc2) & STACK_ALIGN; break;
       case 3: isp = (unsigned int)(_lc_ue_istack_tc3) & STACK_ALIGN; break;
       case 4: isp = (unsigned int)(_lc_ue_istack_tc4) & STACK_ALIGN; break;
       case 6: isp = (unsigned int)(_lc_ue_istack_tc5) & STACK_ALIGN; break;
     }
  
  __mtcr(ISP, isp);
                                                    
  /* Setup the context save area linked list. */
  #  define MAX_NR_OF_CSA_AREAS     6
  extern int _lc_ub_csa_tc0[];    /* context save area 1 begin */
  extern int _lc_ue_csa_tc0[];    /* context save area 1 end   */

  extern int _lc_ub_csa_tc1[];    /* context save area 1 begin */
  extern int _lc_ue_csa_tc1[];    /* context save area 1 end   */

  extern int _lc_ub_csa_tc2[];    /* context save area 1 begin */
  extern int _lc_ue_csa_tc2[];    /* context save area 1 end   */

  extern int _lc_ub_csa_tc3[];    /* context save area 1 begin */
  extern int _lc_ue_csa_tc3[];    /* context save area 1 end   */

  extern int _lc_ub_csa_tc4[];    /* context save area 1 begin */
  extern int _lc_ue_csa_tc4[];    /* context save area 1 end   */

  extern int _lc_ub_csa_tc5[];    /* context save area 1 begin */
  extern int _lc_ue_csa_tc5[];    /* context save area 1 end   */

  
  int * csa_area_begin[] = { _lc_ub_csa_tc0, _lc_ub_csa_tc1, _lc_ub_csa_tc2, _lc_ub_csa_tc3, _lc_ub_csa_tc4, _lc_ub_csa_tc5 };        
  int * csa_area_end[]   = { _lc_ue_csa_tc0, _lc_ue_csa_tc1, _lc_ue_csa_tc2, _lc_ue_csa_tc3, _lc_ue_csa_tc4, _lc_ue_csa_tc5 };

  int  i, k;
  int  no_of_csas;
  int * csa;
  unsigned int  seg_nr, seg_idx, pcxi_val=0;
  _Bool first=true;
  
  // Each core will initialize it's own CSA
  for (i=0; i < MAX_NR_OF_CSA_AREAS; i++)
  {
    int index = __mfcr(COREID_REG)==6?5:__mfcr(COREID_REG);
    // first calculate nr of CSAs in this area 
    no_of_csas = (csa_area_end[index] - csa_area_begin[index]) >> 4;
    
    for (k=0; k < no_of_csas; k++)
    {                        
      csa = csa_area_begin[index] + k*16;
      // Store null pointer in last CSA (= very first time!) 
      *csa = pcxi_val;                        

      seg_nr  = __extru( (int) csa, 28, 4) << 16;
      seg_idx = __extru( (int) csa, 6, 16);
      pcxi_val = seg_nr | seg_idx;
      if (first)
      {
        first = false;                                
        __mtcr(LCX, pcxi_val);
      }                        
    }
    __mtcr(FCX, pcxi_val);
  }
  
  
  // Inititialize global address registers a0/a1 to support
  // __a0/__a1 storage qualifiers of the C compiler.
  void * a0 = _SMALL_DATA_;        
  __asm( "mov.aa\ta0,%0"::"a"(a0) );

  void * a1 = _LITERAL_DATA_;        
  __asm( "mov.aa\ta1,%0"::"a"(a1) );

  // Inititialize global address registers a8/a9 to support
  //__a8/__a9 storage qualifiers of the C compiler. A8 and A9
  // are reserved for OS use, or for application use in cases 
  // where the application ans OS are tightly coupled.
  void * a8 = _A8_DATA_;        
  __asm( "mov.aa\ta8,%0"::"a"(a8) );

  void * a9 = _A9_DATA_;        
  __asm( "mov.aa\ta9,%0"::"a"(a9) );
         

  if(__mfcr(COREID_REG)==0)
  {
    // Initialize and clear C variables.
    _c_init();      // initialize data 
    
    volatile unsigned long *pulDest = (volatile unsigned long *)&nHaltRequestTable;
    while(pulDest != &_eCommonData)
      *pulDest++ = 0;
        
    exit( main() ); // argc is 0
  }
  else if(__mfcr(COREID_REG)==1)
  {
    exit( main() ); // argc is 0 
  }
  else if(__mfcr(COREID_REG)==2)
  {
    exit( main() ); // argc is 0 
  }
  else if(__mfcr(COREID_REG)==3)
  {
    exit( main() ); // argc is 0 
  }
  else if(__mfcr(COREID_REG)==4)
  {
    exit( main() ); // argc is 0 
  }
  else if(__mfcr(COREID_REG)==6)
  {
    exit( main() ); // argc is 0 
  }
}

