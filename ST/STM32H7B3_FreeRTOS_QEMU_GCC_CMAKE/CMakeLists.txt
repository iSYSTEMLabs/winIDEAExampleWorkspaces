# set project name
set(OUT_NAME output)

# set generator path
if(NOT DEFINED GENEXE)
	message(FATAL_ERROR "ERROR: Missing generator executable variable GENEXE in command line.\n"
						"Example: -DGENEXE=C:/ninja/bin/ninja.exe")
endif()
set (CMAKE_MAKE_PROGRAM ${GENEXE} CACHE INTERNAL "" FORCE)

# set system properties
set(CMAKE_SYSTEM_NAME Generic)
set(CMAKE_SYSTEM_PROCESSOR arm)
set(CMAKE_CROSSCOMPILING 1)

# set assembler, compiler and linker flags
# set(CMAKE_ASM_FLAGS "-g3 -gdwarf-2 -mthumb -march=armv7-m -mfloat-abi=soft")

# set(CMAKE_C_FLAGS   "-g3 -march=armv7-m -mthumb -mfloat-abi=soft -mfpu=vfp -ffunction-sections")

set(CMAKE_ASM_FLAGS "-g3 -mthumb -mcpu=cortex-m3")

set(CMAKE_C_FLAGS   "-g3 -mthumb -mcpu=cortex-m3")

SET(CMAKE_EXE_LINKER_FLAGS  "-Wl,-Map=${OUT_NAME}.map,--script=${CMAKE_CURRENT_LIST_DIR}/sample.ind -g3 -O0 -fno-exceptions -march=armv7-m -mthumb -mfpu=vfp -mfloat-abi=soft --specs=nosys.specs -w")

# set compiler toolchain
if(NOT DEFINED TOOLPATH)
	message(FATAL_ERROR "ERROR: Missing compiler toolset path variable TOOLPATH in command line.\n"
						"Example: -DTOOLPATH=C:/GCC/gcc-arm-none-eabi/bin")
endif()
set(CMAKE_C_COMPILER ${TOOLPATH}/arm-none-eabi-gcc.exe CACHE FILEPATH "")
set(CMAKE_ASM_COMPILER ${TOOLPATH}/arm-none-eabi-gcc.exe CACHE FILEPATH "")
cmake_policy(SET CMP0065 NEW)

#set(CMAKE_C_COMPILER_FORCED TRUE)

# configure project
cmake_minimum_required(VERSION 3.16.5)
 
project(GDB_STM32H7xx_FreeRTOS C ASM)

set(SOURCES 
	startup_stm32h7b3lihxq.s
	stm32.c
	Source/main.c
	Source/runnables.c
	Source/syscalls.c
	Source/sysmem.c
	CMSIS/cmsis_os2.c
	CMSIS/event_groups.c
	CMSIS/heap_4.c
	CMSIS/list.c
	CMSIS/port.c
	CMSIS/queue.c
	CMSIS/tasks.c
	CMSIS/timers.c
)

add_executable(${OUT_NAME}.elf ${SOURCES})

target_include_directories(${OUT_NAME}.elf
	PRIVATE CMSIS Source CMSIS/Include ${CMAKE_SOURCE_DIR}
)

# add compiler definitions
add_definitions("-DGCC -DARMCM7 -DCORE_CM7 -DSTM32H7B3xx -DSYSTICK_INT")