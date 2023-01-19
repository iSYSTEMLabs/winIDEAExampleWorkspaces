
set(CMAKE_TASKING_TOOLSET TriCore)
set(CMAKE_SYSTEM_NAME Generic)
set(CMAKE_SYSTEM_PROCESSOR TriCore)
set(CMAKE_CROSSCOMPILING 1)
set(CMAKE_C_COMPILER_FORCED TRUE)

set(tools X:/TASKING/TriCore_v6.2rb1/ctc/bin)
set(CMAKE_FIND_ROOT_PATH ${tools})
set(CMAKE_C_COMPILER	${tools}/cctc.exe CACHE FILEPATH "")
set(CMAKE_ASM_COMPILER	${tools}/astc.exe CACHE FILEPATH "")
set(CMAKE_LINKER		${tools}/ltc.exe  CACHE FILEPATH "")
set(CMAKE_AR			${tools}/artc.exe CACHE FILEPATH "")

set(CMAKE_C_FLAGS	"-O0 --core=tc1.6.2 -v -g --include-file=sfr/regtc27x.sfr -co" )
set(CMAKE_ASM_FLAGS	"-ga -ig --emit-locals --mmu-present -OGS -tc --core=tc1.6.2" )
set(CMAKE_EXE_LINKER_FLAGS "-O0 -D__CPU__=TC27xc-M -lcs_fpu -lfp_fpu -lrt -d${CMAKE_CURRENT_SOURCE_DIR}/sample.lsl" )

set(CMAKE_C_COMPILE_OBJECT        "<CMAKE_C_COMPILER> <DEFINES> <INCLUDES> ${CMAKE_C_FLAGS} -o <OBJECT> <SOURCE>")
set(CMAKE_C_CREATE_STATIC_LIBRARY "<CMAKE_AR> -rvn <TARGET> <LINK_FLAGS> -f <OBJECTS>")
set(CMAKE_C_LINK_EXECUTABLE       "<CMAKE_LINKER> <LINK_FLAGS> <LINK_LIBRARIES> <OBJECTS> -o <TARGET>")