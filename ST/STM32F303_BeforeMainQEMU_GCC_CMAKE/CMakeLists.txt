# set project name
set(PROJ_NAME BeforeMain)

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

# set compiler and linker flags
set(CMAKE_C_FLAGS   "-g3 -mthumb -mcpu=cortex-m3")

SET(CMAKE_EXE_LINKER_FLAGS  "-Wl,-Map=${PROJ_NAME}.map,--script=${CMAKE_CURRENT_LIST_DIR}/STM32F303K8.ind,-n -nostartfiles -nostdlib -nodefaultlibs")

# set compiler toolchain
if(NOT DEFINED TOOLPATH)
	message(FATAL_ERROR "ERROR: Missing compiler toolset path variable TOOLPATH in command line.\n"
						"Example: -DTOOLPATH=C:/GCC/gcc-arm-none-eabi/bin")
endif()
set(CMAKE_C_COMPILER ${TOOLPATH}/arm-none-eabi-gcc.exe CACHE FILEPATH "")
set(CMAKE_ASM_COMPILER ${TOOLPATH}/arm-none-eabi-gcc.exe CACHE FILEPATH "")
cmake_policy(SET CMP0065 NEW)

# configure project
cmake_minimum_required(VERSION 3.16.5)
 
project(${PROJ_NAME} C)

set(SOURCES main.c mySomeImpl.c)
add_executable(${PROJ_NAME}.out ${SOURCES})
