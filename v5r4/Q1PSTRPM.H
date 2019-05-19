/*** START HEADER FILE SPECIFICATIONS ********************************/
/*                                                                   */
/* Header File Name: H/Q1PSTRPM                                      */
/*                                                                   */
/* Descriptive Name: Start PM/400 API                                */
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
/* Description: The Start PM/400 (Q1PSTRPM) API sets up and          */
/*              configures Performance Management/400 to start       */	
/*              sending performance data to IBM.                     */
/*                                                                   */
/* Header Files Included: None                                       */
/*                                                                   */
/*                                                                   */
/* Macros List: None.                                                */
/*                                                                   */
/* Structure List: None.                                             */
/*                                                                   */
/* Function Prototype List: Q1PSTRPM.                                */
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

#ifndef Q1PSTRPM_h
#define Q1PSTRPM_h

#if (__OS400_TGTVRM__>=510)
#pragma datamodel(P128)
#endif

/******************************************************************/
 /*  Prototype for Q1PSTRPM API                                    */
 /******************************************************************/

 #ifdef __ILEC400__
    #pragma linkage (Q1PSTRPM,OS,nowiden)
 #else
    extern "OS"
 #endif
 void Q1PSTRPM (void *);  /* Error Code                 */

#if (__OS400_TGTVRM__>=510)
#pragma datamodel(pop)
#endif
#endif

