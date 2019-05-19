/*** START HEADER FILE SPECIFICATIONS ********************************/
/*                                                                   */
/* Header File Name: H/QUSRGPT                                       */
/*                                                                   */
/* Descriptive Name: Register Exit Point API.                        */
/*                                                                   */
/* 5763-SS1  (C) Copyright IBM Corp. 1994,1994                       */
/* All rights reserved.                                              */
/* US Government Users Restricted Rights -                           */
/* Use, duplication or disclosure restricted                         */
/* by GSA ADP Schedule Contract with IBM Corp.                       */
/*                                                                   */
/* Licensed Materials-Property of IBM                                */
/*                                                                   */
/*                                                                   */
/* Description: The Register Exit Point API registers an exit point  */
/*              with the registration facility.                      */
/*                                                                   */
/* Header Files Included: h/qus                                      */
/*                        h/qusreg                                   */
/*                                                                   */
/* Macros List: None.                                                */
/*                                                                   */
/* Structure List: None.  (Formats included in QUS and QUSREG)       */
/*                                                                   */
/* Function Prototype List: QUSRGPT.                                 */
/*                                                                   */
/* Change Activity:                                                  */
/*                                                                   */
/* CFD List:                                                         */
/*                                                                   */
/* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION       */
/* ---- ------------ ----- ------ --------- ------------------------ */
/* $A0= D2862000     3D10  940327 LUPA:     New Include              */
/*                                                                   */
/* End CFD List.                                                     */
/*                                                                   */
/*  Additional notes about the Change Activity                       */
/* End Change Activity.                                              */
/*** END HEADER FILE SPECIFICATIONS **********************************/

#ifndef QUSRGPT_h
 #define QUSRGPT_h

 /********************************************************************/
 /* Includes for structures.                                         */
 /********************************************************************/
 #include <qus.h>
 #include <qusreg.h>
#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(P128)      /* @B1A*/
#endif                       /* @B1A*/

 /********************************************************************/
 /*  Prototype for QUSRGPT  API                                      */
 /********************************************************************/
 #ifdef __ILEC400__
    #pragma linkage (QUSRGPT,OS,nowiden)
 #else
    extern "OS"
 #endif
 void QUSRGPT (void *,              /* Exit Point Name               */
               char *,              /* Exit Point Format Name        */
               void *,              /* Exit Point Controls           */
               void *);             /* Error Code                    */

#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(pop)       /* @B1A*/
#endif                       /* @B1A*/
#endif
