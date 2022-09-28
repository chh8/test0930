#include "c_standards.h"

/*-- Global Declarations --*/
UINT_32 global_int = 0;

/********************************************************
 * Standard 128 S : Parameter has same name as global variable.
 ********************************************************/
void static_128(UINT_32* global_int)
{
   /* ... */
}

/*
 * Copyright (c) 2001 Liverpool Data Research Associates
 *
 * This penalty is reported as follows:
 *
 * Report                      Active    Location 
 *
 * Annotated Source Code       Yes       Procedure Header 
 * Source Code & Violations    Yes       Procedure Header 
 * Reformatted Code            Yes       Procedure Header 
 * Individual Quality Report   Yes       
 *
 */

