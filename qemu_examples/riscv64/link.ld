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
 OUTPUT_ARCH( "riscv" )

ENTRY( _reset )

MEMORY
{

  FLASH(rxai!w) : ORIGIN = 0x20400000, LENGTH = 512M
  RAM(wxa!ri) : ORIGIN = 0x80000000, LENGTH = 16K
}

SECTIONS
{
    .init :
    {
        _start_text = .;
        KEEP(*(.init))
        . = ORIGIN(FLASH) + 0x100;
        _start_vector = .;
        KEEP(*(.isr_vector))
    } > FLASH

    .text :
    {
        . = ALIGN(4);
        *(.text*)
        *(.rodata*)
        . = ALIGN(4);
        _end_text = .;
    } > FLASH

    _stored_data = .;

    .data : AT (_stored_data)
    {
        _start_data = .;
        *(.data*)
        __global_pointer$ = . + 0x800;
        *(.sdata*)
        . = ALIGN(4);
        _end_data = .;
        _edata = .;
    } > RAM

    .bss :
    {
        _start_bss = .;
        *(.sbss*)
        *(.bss*)
        *(COMMON)
        . = ALIGN(4);
        _end_bss = .;
        _end = .;
    } > RAM

}

PROVIDE(_start_heap = _end);
PROVIDE(_end_stack  = ORIGIN(RAM) + (LENGTH(RAM) - 1K) );
