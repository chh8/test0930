#include "c_standards.h"

struct s_type_a { SINT_32 xs; FLOAT_32 fs;};

/********************************************************
 * Standard 104 S : Struct field initialisation incorrect.
 ********************************************************/
void static_104(void)
{

   struct s_type_a sta = {3.14f, 0.0f};
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

