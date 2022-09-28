#include "c_standards.h"

/********************************************************
 * Standard 131 S : Name reused in inner scope.
 ********************************************************/
void STATIC_131(UINT_32 p_1)
{
   UINT_32 static_131;
   BOOL c_1 = FALSE;

   if (c_1)
   {
      UINT_32 static_131 = 1u; 
      static_131 = static_131 + 1u;
   }

   static_131 = p_1;
   /* ... */
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

