#include "c_standards.h"
/******************************************************** 
 * Standard 26 S : Infinite loop used
 ********************************************************/
void static_26 (void)
{
  UINT_32 a=0;

   for (;;)              /* No Condition Expression */
  {
     /* ... */ 
  }



  while (1)
  {
     /* ... */ 
  }
  
  do 
  {
     /* ... */ 
  } while (1);

 
}

/*
 * Copyright (c) 2001 Liverpool Data Research Associates
 *
 * This penalty is reported as follows:
 *
 * Report                      Active    Location 
 *
 * Annotated Source Code       Yes       Line 
 * Source Code & Violations    Yes       Line 
 * Reformatted Code            Yes       Line 
 * Individual Quality Report   Yes       
 *
 */

