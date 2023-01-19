# RISC-V 64-bit QEMU example project

cmake_minimum_required(VERSION 3.25)

set(CMAKE_TOOLCHAIN_FILE ${CMAKE_CURRENT_SOURCE_DIR}/riscv64.cmake)

project(riscv64	C ASM)

add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/../Common ${CMAKE_CUIRRENT_BINARY_DIR}/Common)

add_executable(	sample.elf
		startup.c
		vector.s
)

target_link_libraries(sample.elf Common)