/*** START HEADER FILE SPECIFICATIONS ********************************/
/*                                                                   */
/* Header File Name: H/QSYRGFN                                       */
/*                                                                   */
/* Descriptive Name: Register Function API.                          */
/*                                                                   */
/* 5769-SS1  (C) Copyright IBM Corp. 1998                            */
/* All rights reserved.                                              */
/* US Government Users Restricted Rights -                           */
/* Use, duplication or disclosure restricted                         */
/* by GSA ADP Schedule Contract with IBM Corp.                       */
/*                                                                   */
/* Licensed Materials-Property of IBM                                */
/*                                                                   */
/*                                                                   */
/* Description: The Register Function API registers a function with  */
/*              the registration facility.                           */
/*                                                                   */
/* Header Files Included: h/qsyreg                                   */
/*                                                                   */
/* Macros List: None.                                                */
/*                                                                   */
/* Structure List: None.  (Formats included in QSYREG)               */
/*                                                                   */
/* Function Prototype List: QSYRGFN.                                 */
/*                                                                   */
/* Change Activity:                                                  */
/*                                                                   */
/* CFD List:                                                         */
/*                                                                   */
/* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION       */
/* ---- ------------ ----- ------ --------- ------------------------ */
/* $A0= D9567200     4D30  971119 ROCH:     New Include              */
/*                                                                   */
/* End CFD List.                                                     */
/*                                                                   */
/*  Additional notes about the Change Activity                       */
/* End Change Activity.                                              */
/*** END HEADER FILE SPECIFICATIONS **********************************/

#ifndef QSYRGFN_h
 #define QSYRGFN_h

 /********************************************************************/
 /* Includes for structures.                                         */
 /********************************************************************/
 #include <qsyreg.h>
#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(P128)      /* @B1A*/
#endif                       /* @B1A*/

 /********************************************************************/
 /*  Prototype for QSYRGFN  API                                      */
 /********************************************************************/
 #ifdef __ILEC400__
    #pragma linkage (QSYRGFN,OS,nowiden)
 #else
    extern "OS"
 #endif
 void QSYRGFN (char[30],            /* Function ID                   */
               void *,              /* Function Controls - ptr to    */
                                    /*   Qsy_Func_Controls_T         */
               void *);             /* Error Code                    */

#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(pop)       /* @B1A*/
#endif                       /* @B1A*/
#endif
