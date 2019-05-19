/*** START HEADER FILE SPECIFICATIONS ********************************/
/*                                                                   */
/* Header File Name: H/QNMSNDRQ                                      */
/*                                                                   */
/* Descriptive Name: Send Request                                    */
/*                                                                   */
/* 5763-SS1  (C) Copyright IBM Corp. 1994,1994                       */
/* All rights reserved.                                              */
/* US Government Users Restricted Rights -                           */
/* Use, duplication or disclosure restricted                         */
/* by GSA ADP Schedule Contract with IBM Corp.                       */
/*                                                                   */
/* Licensed Materials-Property of IBM                                */
/*                                                                   */
/* Description: The Send Request API, an SNA management services     */
/*              transport API, sends a request to a remote           */
/*              application.                                         */
/*                                                                   */
/* Header Files Included: None.                                      */
/*                                                                   */
/* Macros List: None.                                                */
/*                                                                   */
/* Structure List: None.                                             */
/*                                                                   */
/* Function Prototype List: QNMSNDRQ.                                */
/*                                                                   */
/* Change Activity:                                                  */
/*                                                                   */
/* CFD List:                                                         */
/*                                                                   */
/* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION       */
/* ---- ------------ ----- ------ --------- ------------------------ */
/* $A0= D2862000     3D10  940410 ROCH:     New Include              */
/*                                                                   */
/* End CFD List.                                                     */
/*                                                                   */
/*  Additional notes about the Change Activity                       */
/* End Change Activity.                                              */
/*** END HEADER FILE SPECIFICATIONS **********************************/

#ifndef QNMSNDRQ_h
 #define QNMSNDRQ_h
#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(P128)      /* @B1A*/
#endif                       /* @B1A*/

 /********************************************************************/
 /*  Prototype for QNMSNDRQ API                                      */
 /********************************************************************/
 #ifdef __ILEC400__
    #pragma linkage (QNMSNDRQ,OS,nowiden)
 #else
    extern "OS"
 #endif
 void QNMSNDRQ (int   ,           /* Handle                          */
                void *,           /* Remote Application Name         */
                void *,           /* Request Identifier              */
                void *,           /* Send Buffer                     */
                int   ,           /* Send Buffer Length              */
                char *,           /* Request Type                    */
                char *,           /* Post Reply                      */
                int   ,           /* Wait Time                       */
                void *);          /* Error Code                      */

#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(pop)       /* @B1A*/
#endif                       /* @B1A*/
#endif
