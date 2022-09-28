#include "c_standards.h"
struct pixel{ UINT_32 colour; struct {UINT_32 x, y;} coords ;};

/********************************************************
 * Standard 105 S : Struct field initialisation brace fault. 
 ********************************************************/
void static_105(void)
{
   UINT_32 xs=0;
   UINT_32 ys=0;

   struct pixel spot = {1u, xs, ys };

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

