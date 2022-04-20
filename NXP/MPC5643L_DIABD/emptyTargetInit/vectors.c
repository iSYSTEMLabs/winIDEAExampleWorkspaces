/* IntcIsrVectors.c - table of ISRs for INTC in SW vector Mode */
/* Description:  Contains addresses for 310 ISR vectors */
/*			     Table address gets loaded to INTC_IACKR */
/*               Alignment: MPC551x: 2 KB after a 4KB boundary; MPC555x: 64 KB*/
/* April 22, 2004 S. Mihalik */ 
/* March 16, 2006 S. Mihalik - Modified for compile with Diab 5.3 */
/* Jun 29 2006 SM - Used pragma align instead of hard coding address */
/* Jul  5 2007 SM - alignment now done in link file; changes for MPC551x */
/* Aug 30 2007 SM - Added pragma for CodeWarrior */
/* Oct 22 2008 SM - Changed to use PIT1 ISR instead of eMIOS Ch 0 ISR */

#include "typedefs.h"

extern void TimerInterruptHandler( void );
extern void SWIRQ_ISR4( void );

void dummy (void);

#if TOOLS == CW
  #pragma section data_type ".ivor4_vector_table" ".ivor4_vector_table"  
#endif

uint32_t ISRVectorTable[] = { 	 	 
 (uint32_t)&dummy, (uint32_t)&dummy, (uint32_t)&dummy, (uint32_t)&dummy, (uint32_t)&SWIRQ_ISR4, /* ISRs 00 - 04 */ 
 (uint32_t)&dummy, (uint32_t)&dummy, (uint32_t)&dummy, (uint32_t)&dummy, (uint32_t)&dummy, /* ISRs 05 - 09 */
 (uint32_t)&dummy, (uint32_t)&dummy, (uint32_t)&dummy, (uint32_t)&dummy, (uint32_t)&dummy, /* ISRs 10 - 14 */ 
 (uint32_t)&dummy, (uint32_t)&dummy, (uint32_t)&dummy, (uint32_t)&dummy, (uint32_t)&dummy, /* ISRs 15 - 19 */
 (uint32_t)&dummy, (uint32_t)&dummy, (uint32_t)&dummy, (uint32_t)&dummy, (uint32_t)&dummy, /* ISRs 20 - 24 */ 
 (uint32_t)&dummy, (uint32_t)&dummy, (uint32_t)&dummy, (uint32_t)&dummy, (uint32_t)&dummy, /* ISRs 25 - 29 */
 (uint32_t)&dummy, (uint32_t)&dummy, (uint32_t)&dummy, (uint32_t)&dummy, (uint32_t)&dummy, /* ISRs 30 - 34 */ 
 (uint32_t)&dummy, (uint32_t)&dummy, (uint32_t)&dummy, (uint32_t)&dummy, (uint32_t)&dummy, /* ISRs 35 - 39 */
 (uint32_t)&dummy, (uint32_t)&dummy, (uint32_t)&dummy, (uint32_t)&dummy, (uint32_t)&dummy, /* ISRs 40 - 44 */ 
 (uint32_t)&dummy, (uint32_t)&dummy, (uint32_t)&dummy, (uint32_t)&dummy, (uint32_t)&dummy, /* ISRs 45 - 49 */
 (uint32_t)&dummy, (uint32_t)&dummy, (uint32_t)&dummy, (uint32_t)&dummy, (uint32_t)&dummy, /* ISRs 50 - 54 */ 
 (uint32_t)&dummy, (uint32_t)&dummy, (uint32_t)&dummy, (uint32_t)&dummy, (uint32_t)&dummy, /* ISRs 55 - 59 */
 /* Use the next line for MPC551x or MPC563x: */
 /* (uint32_t)&dummy, (uint32_t)&dummy, (uint32_t)&dummy, (uint32_t)&dummy, (uint32_t)&dummy,*/ /* ISRs 60 - 64 */ 
 /* Use the next line for MPC56xB, MPC56xxP, MPC56xS, where PIT1 vector number is 60: */
 (uint32_t)&TimerInterruptHandler, (uint32_t)&dummy, (uint32_t)&dummy, (uint32_t)&dummy, (uint32_t)&dummy, /* ISRs 60 - 64 */ 
 (uint32_t)&dummy, (uint32_t)&dummy, (uint32_t)&dummy, (uint32_t)&dummy, (uint32_t)&dummy, /* ISRs 65 - 69 */
 (uint32_t)&dummy, (uint32_t)&dummy, (uint32_t)&dummy, (uint32_t)&dummy, (uint32_t)&dummy, /* ISRs 70 - 74 */ 
 (uint32_t)&dummy, (uint32_t)&dummy, (uint32_t)&dummy, (uint32_t)&dummy, (uint32_t)&dummy, /* ISRs 75 - 79 */
 (uint32_t)&dummy, (uint32_t)&dummy, (uint32_t)&dummy, (uint32_t)&dummy, (uint32_t)&dummy, /* ISRs 80 - 84 */ 
 (uint32_t)&dummy, (uint32_t)&dummy, (uint32_t)&dummy, (uint32_t)&dummy, (uint32_t)&dummy, /* ISRs 85 - 89 */
 (uint32_t)&dummy, (uint32_t)&dummy, (uint32_t)&dummy, (uint32_t)&dummy, (uint32_t)&dummy, /* ISRs 90 - 94 */ 
 (uint32_t)&dummy, (uint32_t)&dummy, (uint32_t)&dummy, (uint32_t)&dummy, (uint32_t)&dummy, /* ISRs 95 - 99 */
 (uint32_t)&dummy, (uint32_t)&dummy, (uint32_t)&dummy, (uint32_t)&dummy, (uint32_t)&dummy, /* ISRs 100 - 104 */ 
 (uint32_t)&dummy, (uint32_t)&dummy, (uint32_t)&dummy, (uint32_t)&dummy, (uint32_t)&dummy, /* ISRs 105 - 109 */
 (uint32_t)&dummy, (uint32_t)&dummy, (uint32_t)&dummy, (uint32_t)&dummy, (uint32_t)&dummy, /* ISRs 110 - 114 */ 
 (uint32_t)&dummy, (uint32_t)&dummy, (uint32_t)&dummy, (uint32_t)&dummy, (uint32_t)&dummy, /* ISRs 115 - 119 */
 (uint32_t)&dummy, (uint32_t)&dummy, (uint32_t)&dummy, (uint32_t)&dummy, (uint32_t)&dummy, /* ISRs 120 - 124 */ 
 (uint32_t)&dummy, (uint32_t)&dummy, (uint32_t)&dummy, (uint32_t)&dummy, (uint32_t)&dummy, /* ISRs 125 - 129 */
 (uint32_t)&dummy, (uint32_t)&dummy, (uint32_t)&dummy, (uint32_t)&dummy, (uint32_t)&dummy, /* ISRs 130 - 134 */ 
 (uint32_t)&dummy, (uint32_t)&dummy, (uint32_t)&dummy, (uint32_t)&dummy, (uint32_t)&dummy, /* ISRs 135 - 139 */
 (uint32_t)&dummy, (uint32_t)&dummy, (uint32_t)&dummy, (uint32_t)&dummy, (uint32_t)&dummy, /* ISRs 140 - 144 */ 
 /* Use the next line for MPC563x or MPC56xxB, MPC56xxP, MPC56xxS: */
 /* (uint32_t)&dummy, (uint32_t)&dummy, (uint32_t)&dummy, (uint32_t)&dummy, (uint32_t)&Pit1ISR,*/ /* ISRs 145 - 149 */
 /* Use the next line for MPC551x, where PIT1 vector number is 149: */
 (uint32_t)&dummy, (uint32_t)&dummy, (uint32_t)&dummy, (uint32_t)&dummy, (uint32_t)&dummy, /* ISRs 145 - 149 */
 (uint32_t)&dummy, (uint32_t)&dummy, (uint32_t)&dummy, (uint32_t)&dummy, (uint32_t)&dummy, /* ISRs 150 - 154 */ 
 (uint32_t)&dummy, (uint32_t)&dummy, (uint32_t)&dummy, (uint32_t)&dummy, (uint32_t)&dummy, /* ISRs 155 - 159 */
 (uint32_t)&dummy, (uint32_t)&dummy, (uint32_t)&dummy, (uint32_t)&dummy, (uint32_t)&dummy, /* ISRs 160 - 164 */ 
 (uint32_t)&dummy, (uint32_t)&dummy, (uint32_t)&dummy, (uint32_t)&dummy, (uint32_t)&dummy, /* ISRs 155 - 169 */
 (uint32_t)&dummy, (uint32_t)&dummy, (uint32_t)&dummy, (uint32_t)&dummy, (uint32_t)&dummy, /* ISRs 170 - 174 */ 
 (uint32_t)&dummy, (uint32_t)&dummy, (uint32_t)&dummy, (uint32_t)&dummy, (uint32_t)&dummy, /* ISRs 175 - 179 */
 (uint32_t)&dummy, (uint32_t)&dummy, (uint32_t)&dummy, (uint32_t)&dummy, (uint32_t)&dummy, /* ISRs 180 - 184 */ 
 (uint32_t)&dummy, (uint32_t)&dummy, (uint32_t)&dummy, (uint32_t)&dummy, (uint32_t)&dummy, /* ISRs 185 - 189 */
 (uint32_t)&dummy, (uint32_t)&dummy, (uint32_t)&dummy, (uint32_t)&dummy, (uint32_t)&dummy, /* ISRs 190 - 194 */ 
 (uint32_t)&dummy, (uint32_t)&dummy, (uint32_t)&dummy, (uint32_t)&dummy, (uint32_t)&dummy, /* ISRs 195 - 199 */
 (uint32_t)&dummy, (uint32_t)&dummy, (uint32_t)&dummy, (uint32_t)&dummy, (uint32_t)&dummy, /* ISRs 200 - 204 */ 
 (uint32_t)&dummy, (uint32_t)&dummy, (uint32_t)&dummy, (uint32_t)&dummy, (uint32_t)&dummy, /* ISRs 205 - 209 */
 (uint32_t)&dummy, (uint32_t)&dummy, (uint32_t)&dummy, (uint32_t)&dummy, (uint32_t)&dummy, /* ISRs 210 - 214 */ 
 (uint32_t)&dummy, (uint32_t)&dummy, (uint32_t)&dummy, (uint32_t)&dummy, (uint32_t)&dummy, /* ISRs 215 - 219 */
 (uint32_t)&dummy, (uint32_t)&dummy, (uint32_t)&dummy, (uint32_t)&dummy, (uint32_t)&dummy, /* ISRs 220 - 224 */ 
 (uint32_t)&dummy, (uint32_t)&dummy, (uint32_t)&dummy, (uint32_t)&dummy, (uint32_t)&dummy, /* ISRs 225 - 229 */
 (uint32_t)&dummy, (uint32_t)&dummy, (uint32_t)&dummy, (uint32_t)&dummy, (uint32_t)&dummy, /* ISRs 230 - 234 */ 
 (uint32_t)&dummy, (uint32_t)&dummy, (uint32_t)&dummy, (uint32_t)&dummy, (uint32_t)&dummy, /* ISRs 235 - 239 */
 (uint32_t)&dummy, (uint32_t)&dummy, (uint32_t)&dummy, (uint32_t)&dummy, (uint32_t)&dummy /* ISRs 240 - 244 */ 

/* For MPC563x, continue vectors and add Pit1ISR address for INTC vector number 302 */
 };

void dummy (void) 
{
  while (1) {};                                  /* Wait forever or for watchdog timeout */
}

