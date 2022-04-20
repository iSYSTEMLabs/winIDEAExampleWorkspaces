::@ECHO OFF
SET OBJCOPY=%1
SET OUTPUT_FILE=%2

CALL %OBJCOPY% --dump-section .vectors=Debug\resetVect.bin %OUTPUT_FILE% Debug\tmp
DEL Debug\tmp
CALL %OBJCOPY% -I binary -O ihex Debug\resetVect.bin Debug\resetVect.hex
DEL Debug\resetVect.bin