;------------------------------------------------------------------------------
;       CSTARTUP source for RL78
;
;       This module contains the code executed before the C/C++ "main"
;       function is called.
;
;       The code usually must be tailored to suit a specific hardware
;       configuration.
;
;       Assembler options:
;
;       -D__NEAR_MODEL__        To assemble for use with compiler near
;                               code model.
;
;       -D__FAR_MODEL__         To assemble for use with compiler far
;                               code model.
;
;------------------------------------------------------------------------------
;       Copyright 2011-2019 IAR Systems AB.
;------------------------------------------------------------------------------

#if !defined(__NEAR_MODEL__) && !defined(__FAR_MODEL__)
  #error One of the macros __NEAR_MODEL__ or __FAR_MODEL__ must be defined !
#endif

#include "cfi.m"

;------------------------------------------------------------------------------
;       The stack segment.
;       The stack size is defined in the linker command file
;------------------------------------------------------------------------------

        MODULE  ?CSTARTUP

        SECTION    CSTACK:DATA(1)


;------------------------------------------------------------------------------
;       The actual startup code
;
;       Entry:  __program_start
;------------------------------------------------------------------------------

        SECTION    .text:CODE:ROOT(0)

        PUBLIC  `@cstart`             ; Renesas debugger specific
        PUBLIC  __iar_program_start
        PUBLIC  ___interrupt_0x00
        
        EXTERN  ___low_level_init
        EXTERN  ___interrupt_tab_0x00
        EXTERN  _NEAR_CONST_LOCATION
PMC     DEFINE  0xFFFFE

        REQUIRE __MAIN_CALL
        REQUIRE ___interrupt_tab_0x00
        REQUIRE __cstart_tls_init

          CFI Block cfiBlock0 Using cfiCommon2
          CFI ?RET Undefined
          CFI Function __iar_program_start
          CALL_GRAPH_ROOT __iar_program_start, "Reset"
;------------------------------------------------------------------------------
;       Perform the run-time initialization.
;------------------------------------------------------------------------------

__iar_program_start:
___interrupt_0x00:
`@cstart`:
        CODE
        DI

        MOV     A, #(_NEAR_CONST_LOCATION & 1)  ; Near/Far, set mirror area
        MOV1    CY, A.0
        MOV1    PMC.0, CY
        
        MOVW    SP, #LWRD(sfe(CSTACK))


        ; Init stack segment for as the generated code may sometimes
        ; access the 4th byte of a return address before it is initialized
        MOVW    HL, #LWRD(sfb(CSTACK))
        MOVW    BC, #LWRD(sizeof(CSTACK))
        CMP0    C
        SKZ
        INC     B
        MOV     A, #0xCD        ; 0xCD to fool C-SPY's stack limit check
loop_s:
        MOV     [HL], A
        INCW    HL
        DEC     C
        BNZ     loop_s
        DEC     B
        BNZ     loop_s

        MOV     CS, #0

;------------------------------------------------------------------------------
;       Here is the place to put user initializations.
;------------------------------------------------------------------------------

;       User initialization code

;------------------------------------------------------------------------------
;       Call __low_level_init to perform initialization before initializing
;       segments and calling main.
;       If the function returns 0, no segment initialization should take place.
;
;       Link with your own version of __low_level_init to override the
;       default action: to do nothing but return 1.
;------------------------------------------------------------------------------

        CFI FunCall ___low_level_init
__iar_init$$needed:
#if defined(__USE_FAR_RT_CALLS__) || defined(__FAR_MODEL__)
        CALL    F:___low_level_init
#else
        CALL    ___low_level_init
#endif
        OR      A, X
        CFI TailCall __MAIN_CALL
        BZ      __MAIN_CALL



;------------------------------------------------------------------------------
;       Segment initialization
;
;------------------------------------------------------------------------------

        extern  ___iar_data_init2
        CFI FunCall ___iar_data_init2
        CALL	F:___iar_data_init2
        CFI EndBlock cfiBlock0

;------------------------------------------------------------------------------
;       Initialize TLS main thread
;
;------------------------------------------------------------------------------

        SECTION .text:CODE:NOROOT(0)
        EXTWEAK ___iar_cstart_tls_init
        CFI Block cfiBlocktls Using cfiCommon2
        CFI Function __iar_program_start
__cstart_tls_init:
        CFI FunCall ___iar_cstart_tls_init
        CALL    F:___iar_cstart_tls_init   ; Weak call
        CFI EndBlock cfiBlocktls

;------------------------------------------------------------------------------
;       Segment initialization
;
;       WRKSEG short address work area is filled with zero
;------------------------------------------------------------------------------


        SECTION    .wrkseg:DATA(0)
        SECTION    .text:CODE:NOROOT(0)

        CFI Block cfiBlockW Using cfiCommon2
        CFI Function __iar_program_start
        PUBLIC  __INIT_WRKSEG

__INIT_WRKSEG:

        MOVW    HL, #LWRD(sfb(.wrkseg))
        MOV     B, #sizeof(.wrkseg)
        CLRB    A
loop_w:
        MOV     [HL], A
        INCW    HL
        DEC     B
        BNZ     loop_w
        CFI EndBlock cfiBlockW


;------------------------------------------------------------------------------
;       Initialize constructors
;
;       This segment part is required by the compiler when it is
;       necessary to call constructors of global objects.
;------------------------------------------------------------------------------

        SECTION .text:CODE:NOROOT(0)
        PUBLIC  __iar_cstart_call_ctors2
        EXTWEAK ___iar_dynamic_initialization
        CFI Block cfiBlock1b Using cfiCommon2
        CFI Function __iar_program_start
__iar_cstart_call_ctors2:
        CFI FunCall __iar_dynamic_initialization
        CALL    F:___iar_dynamic_initialization   ; Weak call
        CFI EndBlock cfiBlock1b

;------------------------------------------------------------------------------
;       Enter main
;
;       Call the actual "main" function
;------------------------------------------------------------------------------


        SECTION    .text:CODE:NOROOT(0)

        PUBLIC  `@cend`             ; Renesas debugger specific
        PUBLIC  __program_end
        EXTERN  _main
        EXTERN  _exit
        CFI Block cfiBlock2 Using cfiCommon2
        CFI ?RET Undefined
        CFI CFA SP
        CFI Function __iar_program_start

__MAIN_CALL:
__iar_init$$done2:
        CFI FunCall _main
#if defined(__FAR_MODEL__)
        CALL    F:_main
        CFI FunCall _exit
        CALL    F:_exit
#else
        CALL    _main
        CFI FunCall _exit
        CALL    _exit
#endif
__program_end:
`@cend`:
        CFI EndBlock cfiBlock2

;       STOP                            ; Should not return


        END
