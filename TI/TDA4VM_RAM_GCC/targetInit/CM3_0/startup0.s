.syntax unified
.cpu cortex-m3
.thumb

.global _estack
.global reset

reset: 
       MRS R0, CONTROL
       MSR CONTROL, R0
       ldr R0, =_estack
       mov sp, R0
       bl Reset_Handler
       
.long _estack
       
