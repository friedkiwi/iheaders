/*********************************************************************/
/*                                                                   */
/*  EKICPROC.H :     Group Function Declarations                     */
/*                                                                   */
/*  This file contains function declarations for EKICPROC.C          */
/*                                                                   */
/* 5763-SS1, 5716-SS1, 5769-SS1                                      */
/* (C) Copyright IBM Corp. 1993, 1998                                */
/* All rights reserved.                                              */
/* US Government Users Restricted Rights -                           */
/* Use, duplication or disclosure restricted                         */
/* by GSA ADP Schedule Contract with IBM Corp.                       */
/*                                                                   */
/* Licensed Materials-Property of IBM                                */
/*                                                                   */
/*                                                                   */
/* STATUS = RELEASE 1         LEVEL 1.0                              */
/*                                                                   */
/*                                                                   */
/* NOTES:   None                                                     */
/*                                                                   */
/*                                                                   */
/* CHANGE ACTIVITY:                                                  */
/*                                                                   */
/* FLAG REASON       LEVEL DATE   PGMR       CHANGE DESCRIPTION      */
/* ---- ------------ ----- ------ ---------- ------------------------*/
/* $A1= P3667814     4D30  980316 RKF        Add support for C++     */
/* $A2=D98212.1  v5r1m0 991107 gchaney: Teraspace stage 2            */
/*                                                                   */
/*********************************************************************/

#if (__OS400_TGTVRM__>=510)                                    /*@A2A*/
    #pragma datamodel(P128)                                    /*@A2A*/
#endif                                                         /*@A2A*/

#if !defined (CPROC) && !defined (OS2)
#define  CPROC

#define  STATIC_SIZE  20

/* Define constant for extern to support ILEC400 or C++ on AS400     */

#ifndef __QBFC_EXTERN
    #ifdef __cplusplus
        #define QBFC_EXTERN extern "C"
    #else
        #define QBFC_EXTERN extern
    #endif

    #define __QBFC_EXTERN
#endif

#if defined (AS400)

/* Use constant for extern to support either ILEC400 or C++ on AS400 */

QBFC_EXTERN   HAB    APIENTRY   PrtMgrInitialize(USHORT fsOptions);
QBFC_EXTERN   BOOL   APIENTRY   PrtMgrTerminate(HAB  hab);

#elif defined (VM) || defined (MVS)

#define   Init370    EKI370IN
#define   Term370    EKI370TM

QBFC_EXTERN void * Init370 (USHORT fsOptions, HAB hab);
QBFC_EXTERN BOOL   Term370 (HAB hab);

#endif


#endif

#if (__OS400_TGTVRM__>=510)                               /*@A2A*/
    #pragma datamodel(pop)                                /*@A2A*/
#endif                                                    /*@A2A*/
