  .text
  .code 16
  .global	_start

.thumb_func
_start:
    /* Stack pointer is normally loaded from vector 0 in boot area. */
    /* That is not always most convenient, so we setup stack specificly at startup */  
  
  ldr   r0, _L_stack_top
  mov   sp, r0  
  bl    ResetISR

_Lforever:
  b     _Lforever

  /* constants */

  .align 4            /* Force 32-bit alignment */ 

_L_stack_top:
  .long _stack_top 

.end


