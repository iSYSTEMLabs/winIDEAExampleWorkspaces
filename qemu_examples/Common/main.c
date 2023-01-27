#include "test.h"

unsigned char byTestByte;
unsigned short wTestWord;
int iCounter=0;
int iInterruptCounter=0;
long longEnforcer=0;
float floatEnforcer=0;
  
int main(void)
{       
  iCounter=0;
  byTestByte=0;
  wTestWord=0;
	while(1)
  {
    Type_Simple();
    Type_Float();
    Type_Arrays();
    Type_Pointers();
    Type_Struct();
    Type_Bitfields();
    Type_Enum();
    Type_FunctionPointer();
    Type_Mixed();
    Address_GlobalVariables();
    Address_TestScopes();
    Address_DifferentFunctionParameters();
    CPU_Pointers();		
    CPU_Recursion();
    iCounter++;
  } 
  return 0;
}
