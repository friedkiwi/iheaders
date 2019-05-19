/*** START HEADER FILE SPECIFICATIONS ********************************/
/*                                                                   */
/* Header File Name: H/QSYGETPT                                      */
/*                                                                   */
/* Descriptive Name: Get Token Time Out API.                         */
/*                                                                   */
/* 5769-SS1  (C) Copyright IBM Corp. 1999                            */
/* All rights reserved.                                              */
/* US Government Users Restricted Rights -                           */
/* Use, duplication or disclosure restricted                         */
/* by GSA ADP Schedule Contract with IBM Corp.                       */
/*                                                                   */
/* Licensed Materials-Property of IBM                                */
/*                                                                   */
/*                                                                   */
/* Description: The Get Token Time Out API gets the number of seconds*/
/*              until a profile token is timed out.                  */
/*                                                                   */
/* Header Files Included: None.                                      */
/*                                                                   */
/* Macros List: None.                                                */
/*                                                                   */
/* Structure List: None.                                             */
/*                                                                   */
/* Function Prototype List: QSYGETPT.                                */
/*                                                                   */
/* Change Activity:                                                  */
/*                                                                   */
/* CFD List:                                                         */
/*                                                                   */
/* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION       */
/* ---- ------------ ----- ------ --------- ------------------------ */
/* $A0= D9759800     4D50  990310 ROCH:     New Include              */
/*                                                                   */
/* End CFD List.                                                     */
/*                                                                   */
/*  Additional notes about the Change Activity                       */
/* End Change Activity.                                              */
/*** END HEADER FILE SPECIFICATIONS **********************************/

#ifndef QSYGETPT_h
 #define QSYGETPT_h
#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(P128)      /* @B1A*/
#endif                       /* @B1A*/

 /********************************************************************/
 /* Includes for structures.                                         */
 /********************************************************************/

 /********************************************************************/
 /*  Prototype for QSYGETPT API                                      */
 /********************************************************************/
 #ifdef __ILEC400__
    #pragma linkage (QSYGETPT,OS,nowiden)
 #else
    extern "OS"
 #endif
 void QSYGETPT (int  *,             /* Profile token time out        */
               char *,              /* Profile token                 */
               void *);             /* Error Code                    */

#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(pop)       /* @B1A*/
#endif                       /* @B1A*/
#endif
