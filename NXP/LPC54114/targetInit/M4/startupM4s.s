.syntax unified
.cpu cortex-m4
.thumb

.global _estackA
.global reset

.type reset, %function
.thumb_func
reset: 
       ldr R0, =_estackA
       mov sp, R0
       bl ResetM4
       
.long _estackA

