#include "c_standards.h"
/********************************************************
 * Standard 56 S : Equality comparison of floating point.
 ********************************************************/
void static_56 ( void)
{
   FLOAT_32 fl, f2;

   fl=1.01f;

   f2=2.01f;

   if (fl == f2) 
   {
      /* ... */
   }
   if (fl == 0.0f) 
   {
      fl = fl + 0.01f;
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

