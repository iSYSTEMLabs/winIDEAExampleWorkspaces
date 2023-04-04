.syntax unified
.cpu cortex-m4
.thumb

.global _estack
.global reset

reset: 
       MRS R0, CONTROL
       MSR CONTROL, R0
       ldr R0, =_estack
       mov sp, R0
       bl ResetHandler
       
.long _estack
       