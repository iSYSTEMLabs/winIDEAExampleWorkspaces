




    /* Saves and disables the interrupts */
    .global Cy_SaveIRQ
    .func   Cy_SaveIRQ, Cy_SaveIRQ
    .type   Cy_SaveIRQ, %function
Cy_SaveIRQ:
    mrs r0, PRIMASK
    cpsid i
    bx lr
    .size   Cy_SaveIRQ, . - Cy_SaveIRQ
    .endfunc

    /* Restores the interrupts */
    .global Cy_RestoreIRQ
    .func   Cy_RestoreIRQ, Cy_RestoreIRQ
    .type   Cy_RestoreIRQ, %function
Cy_RestoreIRQ:
    msr PRIMASK, r0
    bx lr
    .size   Cy_RestoreIRQ, . - Cy_RestoreIRQ
    .endfunc
    