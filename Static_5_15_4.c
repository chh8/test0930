#include "c_standards.h"

typedef UINT_32 DUPLICATE;
/*******************************************************
 * Standard 129 S : Parameter has same name as type or tag.
 ********************************************************/
void static_129(UINT_32 DUPLICATE)
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

