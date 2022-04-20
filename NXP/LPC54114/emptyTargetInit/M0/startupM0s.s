.syntax unified
.cpu cortex-m0
.thumb

.global _estackB
.global reset    

.type reset, %function
.thumb_func
reset: 
       ldr R0, =_estackB
       mov sp, R0
       bl ResetM0
       
.long _estackB

