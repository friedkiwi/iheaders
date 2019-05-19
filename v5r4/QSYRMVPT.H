/*** START HEADER FILE SPECIFICATIONS ********************************/
/*                                                                   */
/* Header File Name: H/QSYRMVPT                                      */
/*                                                                   */
/* Descriptive Name: Remove Profile Token API.                       */
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
/* Description: The Remove Profile Token API removes all profile     */
/*              tokens that have been generated, or removes all      */
/*              profile tokens that been generated for a user        */
/*              or removes a specific profile token.                 */
/*                                                                   */
/* Header Files Included: None.                                      */
/*                                                                   */
/* Macros List: None.                                                */
/*                                                                   */
/* Structure List: None.                                             */
/*                                                                   */
/* Function Prototype List: QSYRMVPT.                                */
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

#ifndef QSYRMVPT_h
 #define QSYRMVPT_h

 /********************************************************************/
 /* Includes for structures.                                         */
 /********************************************************************/
#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(P128)      /* @B1A*/
#endif                       /* @B1A*/

 /********************************************************************/
 /*  Prototype for QSYRMVPT API                                      */
 /********************************************************************/
 #ifdef __ILEC400__
    #pragma linkage (QSYRMVPT,OS,nowiden)
 #else
    extern "OS"
 #endif
 void QSYRMVPT (char *,             /* Remove option                 */
               void *,              /* Error Code                    */
               ...);                /* Optional parameter:
                                       profile token.                */
#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(pop)       /* @B1A*/
#endif                       /* @B1A*/
#endif
