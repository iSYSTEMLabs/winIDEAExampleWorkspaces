extern __asm void __start();

#pragma section code_type ".init"

__asm void usr_init()
{
  /*
  nofralloc
  se_mflr     r31  // save off return address in NV reg
*/  
}

__asm void __init_hardware()
{
}

__asm void __flush_cache()
{
}

__asm void __init_user()
{
}

__asm void exit()
{
}
