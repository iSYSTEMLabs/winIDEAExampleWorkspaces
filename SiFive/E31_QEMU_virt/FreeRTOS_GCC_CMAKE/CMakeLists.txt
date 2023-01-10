# set project name
set(PROJ_NAME FreeRTOS)

# set generator path
if(NOT DEFINED GENEXE)
	message(FATAL_ERROR "ERROR: Missing generator executable variable GENEXE in command line.\n"
						"Example: -DGENEXE=C:/ninja/bin/ninja.exe")
endif()
set (CMAKE_MAKE_PROGRAM ${GENEXE} CACHE INTERNAL "" FORCE)

# set system properties
set(CMAKE_SYSTEM_NAME Generic)
set(CMAKE_CROSSCOMPILING 1)

set(RTOS_SOURCE_DIR "${CMAKE_CURRENT_LIST_DIR}/FreeRTOS/Source")
set(DEMO_SOURCE_DIR "${CMAKE_CURRENT_LIST_DIR}/FreeRTOS/Demo/RISC-V-Qemu-virt_GCC")

# set assembler, compiler and linker flags
set(CMAKE_ASM_FLAGS "
-march=rv32imac \
-I${RTOS_SOURCE_DIR}/portable/GCC/RISC-V/chip_specific_extensions/RV32I_CLINT_no_extensions \
-DportasmHANDLE_INTERRUPT=handle_trap")

set(CMAKE_C_FLAGS "
-I${DEMO_SOURCE_DIR} \
-I${RTOS_SOURCE_DIR}/include \
-I${RTOS_SOURCE_DIR}/portable/GCC/RISC-V \
-D__riscv_float_abi_soft \
-march=rv32imac \
-Wall \
-O0 -g3")

SET(CMAKE_EXE_LINKER_FLAGS "\
-Xlinker --defsym=__stack_size=300 \
-Wl,-Map=${PROJ_NAME}.map,--script=${CMAKE_CURRENT_LIST_DIR}/FreeRTOS/Demo/RISC-V-Qemu-virt_GCC/fake_rom.lds,-n -nostartfiles")

# set compiler toolchain
if(NOT DEFINED TOOLPATH)
	message(FATAL_ERROR "ERROR: Missing compiler toolset path variable TOOLPATH in command line.\n"
						"Example: -DTOOLPATH=C:/gcc/riscv32-unknown-elf-gcc/bin")
endif()
set(CMAKE_C_COMPILER ${TOOLPATH}/riscv32-unknown-elf-gcc.exe CACHE FILEPATH "")
set(CMAKE_ASM_COMPILER ${TOOLPATH}/riscv32-unknown-elf-gcc.exe CACHE FILEPATH "")
cmake_policy(SET CMP0065 NEW)

# configure project
cmake_minimum_required(VERSION 3.16.5)

project(${PROJ_NAME} C ASM)

set(SOURCES
${DEMO_SOURCE_DIR}/main.c
${DEMO_SOURCE_DIR}/main_blinky.c
${DEMO_SOURCE_DIR}/ns16550.c
${DEMO_SOURCE_DIR}/printf-stdarg.c
${DEMO_SOURCE_DIR}/riscv-virt.c
${DEMO_SOURCE_DIR}/start.S
${RTOS_SOURCE_DIR}/event_groups.c
${RTOS_SOURCE_DIR}/list.c
${RTOS_SOURCE_DIR}/queue.c
${RTOS_SOURCE_DIR}/stream_buffer.c
${RTOS_SOURCE_DIR}/tasks.c
${RTOS_SOURCE_DIR}/timers.c
${RTOS_SOURCE_DIR}/portable/MemMang/heap_4.c
${RTOS_SOURCE_DIR}/portable/GCC/RISC-V/port.c
${RTOS_SOURCE_DIR}/portable/GCC/RISC-V/portASM.S
)

add_executable(${PROJ_NAME}.out ${SOURCES})