/*** START HEADER FILE SPECIFICATIONS ********************************/
/*                                                                   */
/* Header File Name: H/QSYCHKTU                                      */
/*                                                                   */
/* Descriptive Name: Check Profile Token User.                       */
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
/* Description: The Check Profile Token User API verifies that the   */
/*              user profile associated with the token is the same as*/
/*              the current profile in the thread.                   */
/*                                                                   */
/* Header Files Included: None.                                      */
/*                                                                   */
/* Macros List: None.                                                */
/*                                                                   */
/* Structure List: None.                                             */
/*                                                                   */
/* Function Prototype List: QSYCHKTU.                                */
/*                                                                   */
/* Change Activity:                                                  */
/*                                                                   */
/* CFD List:                                                         */
/*                                                                   */
/* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION       */
/* ---- ------------ ----- ------ --------- ------------------------ */
/* $A0= D9817000     5D10  991204 ROCH:     New Include              */
/*                                                                   */
/* End CFD List.                                                     */
/*                                                                   */
/*  Additional notes about the Change Activity                       */
/* End Change Activity.                                              */
/*** END HEADER FILE SPECIFICATIONS **********************************/

#ifndef QSYCHKTU_h
 #define QSYCHKTU_h
#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(P128)      /* @B1A*/
#endif                       /* @B1A*/

 /********************************************************************/
 /* Includes for structures.                                         */
 /********************************************************************/

 /********************************************************************/
 /*  Prototype for QSYCHKTU API                                      */
 /********************************************************************/
 #ifdef __ILEC400__
    #pragma linkage (QSYCHKTU,OS,nowiden)
 #else
    extern "OS"
 #endif
 void QSYCHKTU (int  *,             /* Result from the check         */
               char *,              /* Profile token                 */
               void *);             /* Error Code                    */

#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(pop)       /* @B1A*/
#endif                       /* @B1A*/
#endif
