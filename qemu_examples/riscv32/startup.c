/**
 * RISC-V bootup test
 * Author: Daniele Lacamera <root@danielinux.net>
 *
 * MIT License
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 * 
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 * 
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */

#include <stdint.h>

extern void trap_entry(void);
extern void trap_exit(void);
//extern void _enable_fpu(void);

extern uint32_t  _start_vector;
extern uint32_t  _stored_data;
extern uint32_t  _start_data;
extern uint32_t  _end_data;
extern uint32_t  _start_bss;
extern uint32_t  _end_bss;
extern uint32_t  _end_stack;
extern uint32_t  _start_heap;
extern uint32_t  _global_pointer;
extern uint32_t  __global_pointer$;
extern void (* const IV[])(void);

static int zeroed_variable_in_bss;
static int initialized_variable_in_data = 42;

extern void main(void);
void __attribute__((section(".init"),naked)) _reset(void) {
    register uint32_t *src, *dst;
    asm volatile(".option push");
    asm volatile(".option norelax");
    asm volatile("la gp, __global_pointer$");
    asm volatile(".option pop");
    asm volatile("la sp, _end_stack");

    /* Set up vectored interrupt, with IV starting at offset 0x100 */
    asm volatile("csrw mtvec, %0":: "r"((uint8_t *)(&_start_vector) + 1));

//    _enable_fpu();

    src = (uint32_t *) &_stored_data;
    dst = (uint32_t *) &_start_data;
    /* Copy the .data section from flash to RAM. */
    while (dst < (uint32_t *)&_end_data) {
        *dst = *src;
        dst++;
        src++;
    }

    /* Initialize the BSS section to 0 */
    dst = &_start_bss;
    while (dst < (uint32_t *)&_end_bss) {
        *dst = 0U;
        dst++;
    }

    /* Run the program! */
    main();
}

static uint32_t synctrap_cause = 0;
void isr_synctrap(void)
{
    asm volatile("csrr %0,mcause" : "=r"(synctrap_cause));
    asm volatile("ebreak");
}

void isr_empty(void)
{

}

void __attribute__((weak)) isr_vmsi(void)
{
    /* panic */
    while(1);
}

void __attribute__((weak)) isr_vmti(void)
{
    /* panic */
    while(1);
}

void __attribute__((weak)) isr_vmei(void)
{
    /* panic */
    while(1);
}

void __attribute__((weak)) isr_irq0(void)
{
    /* panic */
    while(1);
}

void __attribute__((weak)) isr_irq1(void)
{
    /* panic */
    while(1);
}
void __attribute__((weak)) isr_irq2(void)
{
    /* panic */
    while(1);
}
void __attribute__((weak)) isr_irq3(void)
{
    /* panic */
    while(1);
}
void __attribute__((weak)) isr_irq4(void)
{
    /* panic */
    while(1);
}
void __attribute__((weak)) isr_irq5(void)
{
    /* panic */
    while(1);
}
void __attribute__((weak)) isr_irq6(void)
{
    /* panic */
    while(1);
}
void __attribute__((weak)) isr_irq7(void)
{
    /* panic */
    while(1);
}
void __attribute__((weak)) isr_irq8(void)
{
    /* panic */
    while(1);
}
void __attribute__((weak)) isr_irq9(void)
{
    /* panic */
    while(1);
}
void __attribute__((weak)) isr_irq10(void)
{
    /* panic */
    while(1);
}
void __attribute__((weak)) isr_irq11(void)
{
    /* panic */
    while(1);
}
void __attribute__((weak)) isr_irq12(void)
{
    /* panic */
    while(1);
}
void __attribute__((weak)) isr_irq13(void)
{
    /* panic */
    while(1);
}
void __attribute__((weak)) isr_irq14(void)
{
    /* panic */
    while(1);
}
void __attribute__((weak)) isr_irq15(void)
{
    /* panic */
    while(1);
}

