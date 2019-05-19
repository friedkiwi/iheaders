/*** START HEADER FILE SPECIFICATIONS ********************************/
/*                                                                   */
/* Header File Name: H/Q1PENDPM                                      */
/*                                                                   */
/* Descriptive Name: End PM/400 API                                */
/*                                                                   */
/* 5722-SS1  (C) Copyright IBM Corp. 2000                            */
/* All rights reserved.                                              */
/* US Government Users Restricted Rights -                           */
/* Use, duplication or disclosure restricted                         */
/* by GSA ADP Schedule Contract with IBM Corp.                       */
/*                                                                   */
/* Licensed Materials-Property of IBM                                */
/*                                                                   */
/*                                                                   */
/* Description: The End PM/400 (Q1PENDPM) API ends                   */
/*              Performance Management/400 jobs.                     */	
/*                                                                   */
/*                                                                   */
/* Header Files Included: None                                       */
/*                                                                   */
/*                                                                   */
/* Macros List: None.                                                */
/*                                                                   */
/* Structure List: None.                                             */
/*                                                                   */
/* Function Prototype List: Q1PENDPM.                                */
/*                                                                   */
/* Change Activity:                                                  */
/*                                                                   */
/* CFD List:                                                         */
/*                                                                   */
/* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION       */
/* ---- ------------ ----- ------ --------- ------------------------ */
/* $A0= D9829200     5D10  000831 RHB :     New Include              */
/*                                                                   */
/* End CFD List.                                                     */
/*                                                                   */
/*  Additional notes about the Change Activity                       */
/* End Change Activity.                                              */
/*** END HEADER FILE SPECIFICATIONS **********************************/

#ifndef Q1PENDPM_h
#define Q1PENDPM_h

#if (__OS400_TGTVRM__>=510)
#pragma datamodel(P128)
#endif

 /******************************************************************/
 /*  Prototype for Q1PENDPM API                                    */
 /******************************************************************/

 #ifdef __ILEC400__
    #pragma linkage (Q1PENDPM,OS,nowiden)
 #else
    extern "OS"
 #endif
 void Q1PENDPM (char *,   /* End Type                   */
                int  *,   /* Delay time                 */
                void *);  /* Error Code                 */

#if (__OS400_TGTVRM__>=510)
#pragma datamodel(pop)
#endif
#endif

