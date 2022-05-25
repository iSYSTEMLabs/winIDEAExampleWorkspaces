/*-------------------------------------------------------------------------
 *      This module contains the function `__low_level_init', a function
 *      that is called before the `main' function of the program.  Normally
 *      low-level initializations - such as setting the prefered interrupt
 *      level or setting the watchdog - can be performed here.
 *
 *      Note that this function is called before the data segments are
 *      initialized, this means that this function can't rely on the
 *      values of global or static variables.
 *
 *      When this function returns zero, the startup code will inhibit the
 *      initialization of the data segments.  The result is faster startup,
 *      the drawback is that neither global nor static data will be
 *      initialized.
 *
 *-------------------------------------------------------------------------
 *      Copyright 2011 IAR Systems AB.
 *      $Revision: 205 $
 *-------------------------------------------------------------------------*/

#ifdef __cplusplus
extern "C" {
#endif

__root int __low_level_init ( void )
{
  /*==================================*/
  /*  Initialize hardware.            */
  /*==================================*/

  /*==================================*/
  /* Choose if segment initialization */
  /* should be done or not.           */
  /* Return: 0 to skip segment init   */
  /*         1 to do segment init     */
  /*==================================*/
  return ( 1 );
}

#ifdef __cplusplus
}
#endif
