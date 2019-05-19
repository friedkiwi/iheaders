/*** START HEADER FILE SPECIFICATIONS ********************************/
/*                                                                   */
/* Header File Name: H/QUSADDEP                                      */
/*                                                                   */
/* Descriptive Name: Add Exit Program API.                           */
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
/* Description: The Add Exit Program API adds an exit program entry  */
/*              to a specific exit point or replaces an existing     */
/*              exit program.                                        */
/*                                                                   */
/* Header Files Included: h/qus                                      */
/*                        h/qusreg                                   */
/*                                                                   */
/* Macros List: None.                                                */
/*                                                                   */
/* Structure List: None. (Structures included in QUS and QUSREG)     */
/*                                                                   */
/* Function Prototype List: QUSADDEP.                                */
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

#ifndef QUSADDEP_h
 #define QUSADDEP_h

 /******************************************************************/
 /*  Header Included.                                              */
 /******************************************************************/
 #include <qus.h>
 #include <qusreg.h>
#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(P128)      /* @B1A*/
#endif                       /* @B1A*/

 /******************************************************************/
 /*  Prototype for QUSADDEP API                                    */
 /******************************************************************/
 #ifdef __ILEC400__
    #pragma linkage (QUSADDEP,OS,nowiden)
 #else
    extern "OS"
 #endif
 void QUSADDEP (void *,        /* Exit Point Name                  */
                char *,        /* Exit Point Format Name           */
                int   ,        /* Exit Program Number              */
                void *,        /* Qualified Exit Prog Name         */
                void *,        /* Exit Program Data                */
                int   ,        /* Length Exit Program Data         */
                void *,        /* Exit Program Attributes          */
                void *);       /* Error Code                       */

#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(pop)       /* @B1A*/
#endif                       /* @B1A*/
#endif
