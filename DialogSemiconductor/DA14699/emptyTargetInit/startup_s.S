.syntax unified
.cpu cortex-m4
.thumb

.global __stack_top
.global reset

.thumb_func
reset: 
       ldr R0, =__stack_top
       mov sp, R0
       bl Reset_Handler
       
.long __stack_top        
                