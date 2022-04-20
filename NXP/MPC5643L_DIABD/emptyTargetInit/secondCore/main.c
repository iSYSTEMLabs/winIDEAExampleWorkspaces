
int main(void)
{
  int endlessFlag = 1;
  
  while (endlessFlag)
  {
  }
  endlessFlag = 1234; //rt BreakPoint: id=testSecondCoreBreakpoint
  //rt TestPoint: id=testSecondCoreBreakpoint, symbol=endlessFlag, value=1234
}
