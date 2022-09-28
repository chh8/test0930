#include "c_standards.h"
/*****************************************************
 * Standard 114 S : Expression is not Boolean. 
 *****************************************************/
void static_114(void)
{
   UINT_32 x = 0;

   if (x)
   {
      /* ... */
   }
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

