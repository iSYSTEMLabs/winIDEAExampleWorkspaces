.section .init
.global _start
_start:
    ldr x30, =_stack	// setup stack
    mov sp, x30
    mrs    x1, cpacr_el1
    mov    x0, #(3 << 20)
    orr    x0, x1, x0
    msr    cpacr_el1, x0
    bl _reset
    b .
    