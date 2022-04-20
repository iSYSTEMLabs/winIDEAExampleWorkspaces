;-----------------------------------------------------------------------------
;       This file contains the startup code used by the RH850 C/C++ compiler.
;
;       Copyright (c) 2012 IAR Systems AB.
;
;-----------------------------------------------------------------------------

;
; Naming covention of labels in this file:
;
;  ?xxx   - External labels only accessed from assembler.
;  __xxx  - External labels accessed from or defined in C.
;  xxx    - Labels local to one module (note: this file contains
;           several modules).
;  main   - The starting point of the user program.
;

#include "lxx.h"
#include "cfi.h"

            CASEON

#define A0  R6
#define A1  R7
#define A2  R8
#define A3  R9

;---------------------------------------------------------------;
; Call Frame Informatio                                         ;
;---------------------------------------------------------------;

            CFNAMES
            CFCOMMON

            MODULE      CSTARTUP


;---------------------------------------------------------------;
; Module start.                                                 ;
;---------------------------------------------------------------;


            EXTERN      _exception_vector_table
            EXTERN      __iar_static_base$$GP
            EXTERN      __iar_static_base$$TP
            EXTERN      __iar_static_base$$EP
            PUBLIC      __iar_program_start
            PUBLIC      ?BTT_cstart_begin
            PUBLIC      ?INIT_REG

;---------------------------------------------------------------;
; Forward declarations of segments used in this module.         ;
;---------------------------------------------------------------;

            SECTION        CSTACK:DATA(2)
            SECTION        .sbss:DATA
            SECTION        .sconst:CONST

;---------------------------------------------------------------;
; The startup code.                                             ;
;---------------------------------------------------------------;

            SECTION        .text:CODE:NOROOT(2)

            ;;
            ;; The startup sequence contained in the final linked
            ;; application will consist of a mosaic containing
            ;; modules and segment parts defined in this file.
            ;;
            ;; The only part which is required is the call to
            ;; the function "main".
            ;;


?BTT_cstart_begin:

__iar_program_start:
            REQUIRE     _exception_vector_table
            REQUIRE     ?cstart_call_main

;---------------------------------------------------------------;
; Set up the stack and the global pointer.                      ;
;---------------------------------------------------------------;

            MOVE_M      SFE CSTACK, SP

            MOVE_M      __iar_static_base$$GP, GP

            MOVE_M      __iar_static_base$$TP, TP

;---------------------------------------------------------------;
; Setup constant registers.                                     ;
;---------------------------------------------------------------;

            SECTION        .text:CODE:NOROOT(1)

?INIT_REG:  MOV         255, R18
            ORI         65535, r0, R19

            PUBLIC      ?INIT_SADDR_BASE

;---------------------------------------------------------------;
; Initialize the saddr base pointers.                           ; 
;---------------------------------------------------------------;



            SECTION      .text:CODE:NOROOT(1)
            PUBLIC       ?INIT_SADDR_BASE

?INIT_SADDR_BASE:
            ;RTMODEL     "__reg_ep", "saddr"
; Commented out, because there was no __iar_static_base$$EP generated, probably a compiler bug due to empty section
;            MOVE_M      __iar_static_base$$EP, EP
             MOVE_M      0xDEADDEED, EP



;---------------------------------------------------------------;
; If hardware must be initialized from C or if watch dog timer  ;
; must be handled or if the segment init should not be          ;
; performed it can now be done in `__low_level_init'.           ;
;---------------------------------------------------------------;
; Call the user function __low_level_init, if defined.          ;
; It is the responsibility of __low_level_init to require       ;
; __cstart_low_level_init in order to be called by cstartup.    ;
;---------------------------------------------------------------;

            SECTION        .text:CODE:NOROOT(1)

            PUBLIC      __cstart_low_level_init
            EXTERN      ___low_level_init

__cstart_low_level_init:
            CALL_FUNC   ___low_level_init, LP, R1
            ANDI        0xFF, R10, R10
;            BZ          ?no_seg_init

;---------------------------------------------------------------;
; Segment initialization code. Copy initialized ROMmed code to  ;
; RAM and ?seg_clear uninitialized variables.                   ;
;---------------------------------------------------------------;

            SECTION        .text:CODE:NOROOT(1)

            PUBLIC         __cstart_data_init
            EXTERN      ___iar_data_init2
__cstart_data_init:
            CALL_FUNC   ___iar_data_init2, LP, R1

;---------------------------------------------------------------;
; Destination label when skipping data initialization.          ;
;---------------------------------------------------------------;

?no_seg_init:


;---------------------------------------------------------------;
; Module start.                                                 ;
;---------------------------------------------------------------;


#if 0

            EXTERN      _vector_table
            EXTERN      __cstart_low_level_init
            PUBLIC      ?INIT_PIC

;---------------------------------------------------------------;
; Forward declarations of segments used in this module.         ;
;---------------------------------------------------------------;

;---------------------------------------------------------------;
; Calculate code distance (PIC only).                           ;
;---------------------------------------------------------------;


            SECTION        .text:CODE:NOROOT(1)

?INIT_PIC:
            RTMODEL     "__code_model", "pic"
            JARL        ref_point, A1
ref_point:  MOVE_M      ref_point, A2
            SUB         A2, A1
            ;; Expands to correct store instruction/sequence.
            STORE_M     A1, ?CODE_DISTANCE, A2
            ;; Note: A1 (the value of ?CODE_DISTANCE) is used below!





;---------------------------------------------------------------;
; The distance the code has been moved when using position      ;
; independent code.                                             ;
;---------------------------------------------------------------;

            SECTION        LIBRARY_N:DATA:NOROOT(2)

?CODE_DISTANCE:
            REQUIRE     ?INIT_PIC
            RTMODEL     "__code_model", "pic"
            DS          4


#endif
            EXTERN      ?CODE_DISTANCE
            PUBLIC      ?cstart_call_main
            PUBLIC      ___iar_init_callt
            PUBLIC      ___iar_init_syscall
            PUBLIC      ___iar_init_interrupt
            PUBLIC      ___iar_init_hvcall
            PUBLIC      ?cstart_call_ctors
            PUBLIC      __iar_cstart_call_ctors
            PUBLIC      ?BTT_cstart_end
            PUBLIC      __exit
            PUBLIC      ?BTT_exit_begin
            PUBLIC      ___cstart_call_dtors
            PUBLIC      ___cstart_closeall
            PUBLIC      ?BTT_exit_end

;---------------------------------------------------------------;
; Forward declarations of segments used in this module.         ;
;---------------------------------------------------------------;

            SECTION     CSTACK:DATA(2)


;---------------------------------------------------------------;
; Initialize the CALLT base pointers.                           ;
;---------------------------------------------------------------;


            SECTION     .table.callt:CONST
            SECTION     .text:CODE:NOROOT(1)


            ;; The Call table base pointer
___iar_init_callt:
            EXTERN      _callt_vector_table
            REQUIRE     _callt_vector_table
            MOVE_M      SFB .table.callt, A2
#if __CODE_MODEL__ == __CODE_MODEL_PIC__
            REQUIRE     ?CODE_DISTANCE

            ;; Add the value of ?CODE_DISTANCE calculated above
            ADD         A1, A2
#endif
            LDSR        A2, 20          ; CTBP



;---------------------------------------------------------------;
; Initialize the SYSCALL base pointers.                         ;
;---------------------------------------------------------------;

            SECTION     `.table.syscall`:CONST

            SECTION     .text:CODE:NOROOT(1)


            ;; The syscall table base pointer
___iar_init_syscall:
            EXTERN      _syscall_vector_table
            REQUIRE     _syscall_vector_table
            MOVE_M      SFB .table.syscall, A2
#if __CODE_MODEL__ == __CODE_MODEL_PIC__
            REQUIRE     ?CODE_DISTANCE

            ;; Add the value of ?CODE_DISTANCE calculated above
            ADD         A1, A2
#endif
            LDSR        A2,12,1          ; SCBP

            MOVE_M      (SIZEOF .table.syscall) - 4, A2
            SHR         2, A2
            LDSR        A2,11,1          ; SCCFG



;---------------------------------------------------------------;
; Initialize the HVCALL base pointers.                          ;
;---------------------------------------------------------------;

            SECTION     `.table.hvcall`:CONST

            SECTION     .text:CODE:NOROOT(1)


            ;; The syscall table base pointer
___iar_init_hvcall:
            EXTERN      _hvcall_vector_table
            REQUIRE     _hvcall_vector_table
            MOVE_M      SFB .table.hvcall, A2
#if __CODE_MODEL__ == __CODE_MODEL_PIC__
            REQUIRE     ?CODE_DISTANCE

            ;; Add the value of ?CODE_DISTANCE calculated above
            ADD         A1, A2
#endif
            LDSR        A2,14,1          ; HVCBP

            MOVE_M      (SIZEOF .table.hvcall) - 4, A2
            SHR         2, A2
            LDSR        A2,13,1          ; HVCCFG.SIZE



;---------------------------------------------------------------;
; Initialize the INTBP base pointer.                            ;
;---------------------------------------------------------------;

            SECTION     `.table.interrupt`:CONST

            SECTION     .text:CODE:NOROOT(1)


            ;; The syscall table base pointer
___iar_init_interrupt:
            EXTERN      _interrupt_vector_table
            REQUIRE     _interrupt_vector_table
            MOVE_M      SFB .table.interrupt, A2
#if __CODE_MODEL__ == __CODE_MODEL_PIC__
            REQUIRE     ?CODE_DISTANCE

            ;; Add the value of ?CODE_DISTANCE calculated above
            ADD         A1, A2
#endif
            LDSR        A2,4,1            ; INTBP

;---------------------------------------------------------------;
; This segment part is required by the compiler when it is      ;
; necessary to call constructors of global objects.             ;
;---------------------------------------------------------------;

            SECTION        SHT$$PREINIT_ARRAY:CONST:NOROOT(2)
            SECTION        SHT$$INIT_ARRAY:CONST:NOROOT(2)
            SECTION        .text:CODE:NOROOT(1)

            EXTERN      ___call_ctors

?cstart_call_ctors:
__iar_cstart_call_ctors:
            MOVE_M      SFB SHT$$PREINIT_ARRAY, R6
            MOVE_M      SFE SHT$$INIT_ARRAY, R7

            CALL_FUNC   ___call_ctors, LP, R8


;---------------------------------------------------------------;
; Call C main() with no parameters.                             ;
;---------------------------------------------------------------;

            SECTION        .text:CODE:NOROOT(1)

            EXTERN      _main
            EXTERN      _exit
            REQUIRE     __cstart_data_init

?cstart_call_main:
            CALL_FUNC   _main, LP, R6

;---------------------------------------------------------------;
; If we come here we have returned from main with a 'return'    ;
; statement, not with a call to exit() or abort().              ;
; In this case we must call exit() here for a nice ending.      ;
; Note: The return value of main() is the argument to exit().   ;
;---------------------------------------------------------------;
            MOV         R10,R6
            CALL_FUNC   _exit, LP, R7

;---------------------------------------------------------------;
; We should never come here, but just in case.                  ;
;---------------------------------------------------------------;

            MOV         ___exit, LP
            JMP         [LP]

?BTT_cstart_end:



;---------------------------------------------------------------;
; _exit code                                                    ;
;                                                               ;
; Call destructors (if required), then fall through to __exit.  ;
;---------------------------------------------------------------;

            SECTION        .text:CODE:NOROOT(1)

?BTT_exit_begin:
__exit:
            REQUIRE     ?exit_restore2
            ;; If any of the two pieces of code "__cstart_call_dtors"
            ;; or "__cstart_closeall" is called we need to save the
            ;; argument to "_exit".  However, since we never will
            ;; from this function we can use a permanent register
            ;; rather than storing the value on the stack.

            SECTION        .text:CODE:NOROOT(1)
?exit_save:
            REQUIRE     ?exit_restore

            MOV         R10, R29

            SECTION        .text:CODE:NOROOT(1)
            EXTERN      ___call_dtors
            REQUIRE     ?exit_save

            ;; This label is required by "__record_needed_destruction".

___cstart_call_dtors:
            CALL_FUNC   ___call_dtors, LP, R1


            ;; A new module is needed so that a non-terminal-IO program
            ;; doesn't include this, which requires __putchar.

            SECTION        .text:CODE:NOROOT(1)

            ;; When stdio is used, the following piece of code is
            ;; required by the _Closreg macro.

            REQUIRE     ?exit_save

            ;; This label is required by _Closreg

___cstart_closeall:
            EXTERN      __Close_all
            CALL_FUNC   __Close_all, LP, R1


            SECTION        .text:CODE:NOROOT(1)
            PUBLIC  ___cstart_clearlocks
            EXTERN  ___iar_clearlocks

            REQUIRE ?exit_save

___cstart_clearlocks:
            CALL_FUNC    ___iar_clearlocks, LP, R1

            ;; Restore the argument previously stored by the "save" section
            ;; above.

            SECTION        .text:CODE:NOROOT(1)


?exit_restore:
            REQUIRE     ?exit_restore2
            MOV         R29, R10

            SECTION        .text:CODE:NOROOT(1)

            EXTERN      ___exit
?exit_restore2:
            MOV         R10,R6
            MOV         ___exit, LP
            JMP         [LP]

?BTT_exit_end:


            END
