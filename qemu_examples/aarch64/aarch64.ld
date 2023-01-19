ENTRY(_start)
MEMORY {
	FLASH	(rx)	: ORIGIN = 0x00100000, LENGTH = 0x07f00000 /* 0x0 to 0x0010_0000 is populated with dtb by QEMU. */
	RAM		(rwx)	: ORIGIN = 0x40000000, LENGTH = 0x08000000
}

STACK_SIZE = 0x10000;
HEAP_SIZE = 0x10000;

SECTIONS
{
	.init :
	{
		*(.init)
	} > FLASH

	.text :
	{
		*(.text)
		_etext = .;
	} > FLASH

	.data :
	{
		_sdata = .;
		*(.rodata)
		*(.data)
		_edata = .;
	} > RAM AT > FLASH

	.bss (NOLOAD):
	{
		_sbss = .;
		*(.bss*)
		*(COMMON)
		_ebss = .;
	} > RAM

	.stack (NOLOAD):
	{
		. = ALIGN(16);
		. = . + STACK_SIZE;
		. = ALIGN(16);
		_stack = .;
	} > RAM
	
	.heap (NOLOAD):
	{
		. = ALIGN(16);
		_end = .;
		. = . + HEAP_SIZE;
		. = ALIGN(16);
	} > RAM
}
