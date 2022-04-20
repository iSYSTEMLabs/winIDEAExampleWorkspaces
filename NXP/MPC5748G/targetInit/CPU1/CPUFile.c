

unsigned volatile char releaseCore; // release slave core

void targetInit(){
  #ifndef EMPTY_TARGET_INIT

  // wait for core to be released with python flag


  #endif /* EMPTY_TARGET_INIT */
}


void disableWatchdog()
{
}
