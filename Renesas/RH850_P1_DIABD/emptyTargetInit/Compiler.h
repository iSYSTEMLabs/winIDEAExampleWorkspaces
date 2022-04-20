#ifndef COMPILER_H_
#define COMPILER_H_

#ifdef __GHS__
    
    //ASM
    #define ASM_NOP()      __asm("nop")
    #define ASM_HALT()     __asm("halt") 
    #define INC()          __asm("add 1, r10")
    #define ASM_JUMP_LP( ) __asm("jmp    [lp]")
    #define ASM_FETRAP()   __asm("fetrap 5")
    #define ASM_SET(var value)  .set var, value
    #define ASM_DI()       _DI()
    #define ASM_EI();      _EI()
    //PRAGMA
    #define PRAGMA(x) _Pragma(#x)
    #define NO_WARNING_START(x) PRAGMA(ghs nowarning x) 
    #define NO_WARNING_END(x)   PRAGMA(endnowarning)   //not supported by 
    #define NO_PROLOGUE         PRAGMA(ghs noprologue)
    #define ASM_PRAGMA_START PRAGMA(asm)
    #define ASM_PRAGMA_END   PRAGMA(endasm)
    #define PRAGMA_INTERRUPT(x) PRAGMA( ghs interrupt(nonreentrant))

#endif

#ifdef __DCC__
    //global define to set the PLL (for 8MHz MainOSC)
    //can be 48,64,80,120
    //#define  FCL 80  


    //ASM code requires a leading blank because ASM must not begin in the first column
    //volatile is proposed here as a valid optimizer blocker according to DIAB manual
    #define ASM_NOP()      asm volatile (" nop")
    #define ASM_HALT()     asm volatile (" halt")
    
    #define INC()          asm volatile (" add 1, r10")
    #define ASM_JUMP_LP( ) asm volatile (" jmp    [lp]")
    #define ASM_FETRAP()   asm volatile (" fetrap 5")
    #define ASM_SET(var, value)  asm volatile( "var: .set value")
    #define ASM_DI()       asm volatile (" di")
    #define ASM_EI();      asm volatile ("ei")

    //PRAGMA
    #define PRAGMA(x) _Pragma(#x)
    //x reflects the warning number
    #define NO_WARNING_START(x) //PRAGMA(nowarning x)   //not supported by DIAB
    #define NO_WARNING_END(x)   //PRAGMA(nowarning x)   //not supported by DIAB
    #define NO_PROLOGUE         //PRAGMA(ghs noprologue)  //not supported by DIAB
    #define ASM_PRAGMA_START //PRAGMA(asm)
    #define ASM_PRAGMA_END   //PRAGMA(endasm)


    #define PRAGMA_INTERRUPT(x) PRAGMA( interrupt x)
#endif



#endif /* COMPILER_H_ */
