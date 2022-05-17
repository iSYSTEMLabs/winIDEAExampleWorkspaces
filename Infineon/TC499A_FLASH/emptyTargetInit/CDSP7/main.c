#include "main.h"
#include "test.h"    

unsigned char byTestByte;
unsigned short wTestWord;
int iCounter=0;
int iInterruptCounter=0;
  
int main(void)
{       
  iCounter=0;
  byTestByte=0;
  wTestWord=0;
  disableWatchdog();
  targetInit();
	while(1)
  {
    Type_Simple();
    Type_Arrays();
    Type_Pointers();
    Type_Bitfields();
    Type_Enum();
    Type_FunctionPointer();
    Address_GlobalVariables();
    iCounter++;
  } 
  return 0;
}
