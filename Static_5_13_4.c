#include "c_standards.h"


/********************************************************
 * Standard 105 S : Struct field initialisation brace fault. 
 ********************************************************/
void static_106(void)
{
   unsigned int x,y;
   y=x;
   
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

