# TriCore QEMU example project

cmake_minimum_required(VERSION 3.25.1)

set(CMAKE_TOOLCHAIN_FILE ${CMAKE_CURRENT_SOURCE_DIR}/TriCore.cmake)

project(TriCore	C)

add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/../Common ${CMAKE_CURRENT_BINARY_DIR}/Common)

add_executable(sample)

target_link_libraries(sample Common)
