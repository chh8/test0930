#include "c_standards.h"

UINT_32 duplicate = 0;

/********************************************************
 * Standard 92 S : Duplicate use of a name in an enumeration. 
 ********************************************************/
void static_92 (void)
{
   enum Name_type { e1, duplicate } EnumVar;

   EnumVar = e1;
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

