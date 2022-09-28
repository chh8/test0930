#include "c_standards.h"

/******************************************************** 
 * Standard 39 S : Unsuitable type for loop variable
 ********************************************************/
void static_39( void )
{
  FLOAT_32 f = 0.0F;
  unsigned char x=1;

  for (f = 0.0F; f < 10.0F; f = f + 1.0F)
  {
     /* ... */;
  }

for (x = 'a'; x < 'z'; x = x + 1)
  {
     /* ... */;
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

