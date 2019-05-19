/*** START HEADER FILE SPECIFICATIONS ********************************/
/*                                                                   */
/* Header File Name: H/QSYRTFUI                                      */
/*                                                                   */
/* Descriptive Name: Retrieve Function Usage Information API.        */
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
/* Description: The Retrieve Function Usage Information API          */
/*              retrieves the usage information for a function.      */
/*                                                                   */
/* Header Files Included: h/qsyreg                                   */
/*                                                                   */
/* Macros List: None.                                                */
/*                                                                   */
/* Structure List: None.  (Formats included in QSYREG)               */
/*                                                                   */
/* Function Prototype List: QSYRTFUI.                                */
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

#ifndef QSYRTFUI_h
 #define QSYRTFUI_h

 /********************************************************************/
 /* Includes for structures.                                         */
 /********************************************************************/
 #include <qsyreg.h>
#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(P128)      /* @B1A*/
#endif                       /* @B1A*/

 /********************************************************************/
 /*  Prototype for QSYRTFUI  API                                     */
 /********************************************************************/
 #ifdef __ILEC400__
    #pragma linkage (QSYRTFUI,OS,nowiden)
 #else
    extern "OS"
 #endif
 void QSYRTFUI (void *,             /* Receiver Variable - ptr to    */
                                    /*   Qsy_FNUI0100_T              */
                int,                /* Receiver Variable Length      */
                char[8],            /* Format Name                   */
                char[30],           /* Function ID                   */
                void *);            /* Error Code                    */

#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(pop)       /* @B1A*/
#endif                       /* @B1A*/
#endif
