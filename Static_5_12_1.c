#include "c_standards.h"
/********************************************************
 * Standard 95 S : Casting operation to a pointer. 
 ********************************************************/
void static_95(void)
{
   UINT_16 s;
   UINT_32 * p1_ptr;

   p1_ptr = (UINT_32*) s;

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

