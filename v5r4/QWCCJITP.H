/* begin_generated_IBM_copyright_prolog                              */
/* This is an automatically generated copyright prolog.              */
/* After initializing,  DO NOT MODIFY OR MOVE                        */
/* ----------------------------------------------------------------- */
/*                                                                   */
/* Product(s):                                                       */
/*     5722-SS1                                                      */
/*                                                                   */
/* (C)Copyright IBM Corp.  2005, 2005                                */
/*                                                                   */
/* All rights reserved.                                              */
/* US Government Users Restricted Rights -                           */
/* Use, duplication or disclosure restricted                         */
/* by GSA ADP Schedule Contract with IBM Corp.                       */
/*                                                                   */
/* Licensed Materials-Property of IBM                                */
/*                                                                   */
/*  ---------------------------------------------------------------  */
/*                                                                   */
/* end_generated_IBM_copyright_prolog                                */
 /*** START HEADER FILE SPECIFICATIONS *******************************/
 /*                                                                  */
 /* Header File Name: H/QWCCJITP                                     */
 /*                                                                  */
 /* Descriptive Name: Change Job Interrupt Status API.               */
 /*                                                                  */
 /* 5722-SS1 (C) Copyright IBM Corp. 2005, 2005                      */
 /* All rights reserved.                                             */
 /* US Government Users Restricted Rights -                          */
 /* Use, duplication or disclosure restricted                        */
 /* by GSA ADP Schedule Contract with IBM Corp.                      */
 /*                                                                  */
 /* Licensed Materials-Property of IBM                               */
 /*                                                                  */
 /*                                                                  */
 /* Description: The Change Job Interrupt Status (QWCCJITP) API will */
 /* optionally retrieve and modify the job interpretability status   */
 /* of the current job.                                              */
 /*                                                                  */
 /* Header Files Included:   None.                                   */
 /*                                                                  */
 /* Macros List:             None.                                   */
 /*                                                                  */
 /* Structure List:          None.                                   */
 /*                                                                  */
 /* Function Prototype List: QWCCJITP                                */
 /*                                                                  */
 /* Change Activity:                                                 */
 /*                                                                  */
 /* CFD List:                                                        */
 /*                                                                  */
 /* FLAG REASON       LEVEL  DATE   PGMR  CHANGE DESCRIPTION         */
 /* ---- ------------ -----  ------ ----- ---------------------------*/
 /* $A0= D99802       V5R4M0 040905 ROCH: New Include                */
 /*                                                                  */
 /* End CFD List.                                                    */
 /*                                                                  */
 /* Additional notes about the Change Activity                       */
 /* End Change Activity.                                             */
 /*** END HEADER FILE SPECIFICATIONS *********************************/

 #ifndef QWCCJITP_h
 #define QWCCJITP_h

 /********************************************************************/
 /*  Prototype for QWCCJITP API                                      */
 /********************************************************************/
 #ifdef  __ILEC400__
       #pragma linkage(QWCCJITP,OS,nowiden)
 #else
       extern "OS"
 #endif

 void QWCCJITP(char *,             /* Current job interrupt status   */
               char *,             /* New job interrupt status       */
               void *);            /* Error Code                     */

 /********************************************************************/
 /* End include                                                      */
 /********************************************************************/
 #endif
