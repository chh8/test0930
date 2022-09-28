#include "c_standards.h"
/********************************************************
 * Standard 121 S : Use of boolean expression in switch.
 ********************************************************/
void static_121(void)
{
   BOOL flag = FALSE;
   int a=1,b=0;

   switch (a>b)
   {
      case TRUE:
          break;
      case FALSE:
          break;
      default:
          break;
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

