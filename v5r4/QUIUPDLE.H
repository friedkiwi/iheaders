/*** START HEADER FILE SPECIFICATIONS ********************************/
/*                                                                   */
/* Header File Name: H/QUIUPDLE                                      */
/*                                                                   */
/* Descriptive Name: Update List Entry                               */
/*                                                                   */
/* 5763-SS1  (C) Copyright IBM Corp. 1994,1994                       */
/* All rights reserved.                                              */
/* US Government Users Restricted Rights -                           */
/* Use, duplication or disclosure restricted                         */
/* by GSA ADP Schedule Contract with IBM Corp.                       */
/*                                                                   */
/* Licensed Materials-Property of IBM                                */
/*                                                                   */
/* Description: The Update List Entry API updates the list entry     */
/*              identified by the current entry pointer for the list */
/*              or the extended action entry.                        */
/*                                                                   */
/* Header Files Included: None.                                      */
/*                                                                   */
/* Macros List: None.                                                */
/*                                                                   */
/* Structure List: None.                                             */
/*                                                                   */
/* Function Prototype List: QUIUPDLE                                 */
/*                                                                   */
/* Change Activity:                                                  */
/*                                                                   */
/* CFD List:                                                         */
/*                                                                   */
/* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION       */
/* ---- ------------ ----- ------ --------- ------------------------ */
/* $A0= D2862000     3D10  940126 ROCH:     New Include              */
/*                                                                   */
/* End CFD List.                                                     */
/*                                                                   */
/*  Additional notes about the Change Activity                       */
/* End Change Activity.                                              */
/*** END HEADER FILE SPECIFICATIONS **********************************/

#ifndef QUIUPDLE_h
 #define QUIUPDLE_h
#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(P128)      /* @B1A*/
#endif                       /* @B1A*/

 /********************************************************************/
 /*  Prototype for calling User Interface Manager API QUIUPDLE       */
 /********************************************************************/
 #ifdef __ILEC400__
    #pragma linkage (QUIUPDLE,OS,nowiden)
 #else
    extern "OS"
 #endif
 void QUIUPDLE (char *,           /* Application handle              */
                void *,           /* Variable buffer                 */
                int,              /* Variable buffer length          */
                char *,           /* Variable record name            */
                char *,           /* List name                       */
                char *,           /* Option                          */
                char *,           /* List entry handle               */
                void *);          /* Error code                      */

#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(pop)       /* @B1A*/
#endif                       /* @B1A*/
#endif
