#include "c_standards.h"

/********************************************************
 * Standard 85 S : Incomplete initialisation of enumerator.
 ********************************************************/
void static_85(void)
{
   enum E_type { num1, num2 = 2, num3};

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

