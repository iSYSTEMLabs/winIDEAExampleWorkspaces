#ifndef __VECT_M_H__
#define __VECT_M_H__

//*****************************************************************************
//
// Forward declaration of the default fault handlers.
//
//*****************************************************************************
void ResetISR(void);
void NmiSR(void);
void FaultISR(void);
void IntDefaultHandler(void);

//*****************************************************************************
//
// External declaration for the stack top.
//
//*****************************************************************************
extern unsigned long _stack_top;


#endif  //  __VECT_M_H__
