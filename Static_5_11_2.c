#include "c_standards.h"

UINT_32 global_f = 0;

/******************************************************** 
 * Standard 40 S : Loop index not declared locally
 ********************************************************/
SINT_32 loop_standards (SINT_32 p_1)
{
  SINT_32 j = 10;

  for (global_f = 0; global_f < 10; global_f = global_f + 1)
  {
     j--;
  }
  return j;
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

