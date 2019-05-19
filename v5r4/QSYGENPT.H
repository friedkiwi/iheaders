/*** START HEADER FILE SPECIFICATIONS ********************************/
/*                                                                   */
/* Header File Name: H/QSYGENPT                                      */
/*                                                                   */
/* Descriptive Name: Generate Profile Token API.                     */
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
/* Description: The Generate Profile Token API generates a single or */
/*              multiple-use profile token.                          */
/*                                                                   */
/* Header Files Included: None.                                      */
/*                                                                   */
/* Macros List: None.                                                */
/*                                                                   */
/* Structure List: None.                                             */
/*                                                                   */
/* Function Prototype List: QSYGENPT.                                */
/*                                                                   */
/* Change Activity:                                                  */
/*                                                                   */
/* CFD List:                                                         */
/*                                                                   */
/* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION       */
/* ---- ------------ ----- ------ --------- ------------------------ */
/* $A0= D9759800     4D50  990310 ROCH :    New Include              */
/*                                                                   */
/* End CFD List.                                                     */
/*                                                                   */
/*  Additional notes about the Change Activity                       */
/* End Change Activity.                                              */
/*** END HEADER FILE SPECIFICATIONS **********************************/

#ifndef QSYGENPT_h
 #define QSYGENPT_h
#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(P128)      /* @B1A*/
#endif                       /* @B1A*/

 /********************************************************************/
 /* Includes for structures.                                         */
 /********************************************************************/

 /********************************************************************/
 /*  Prototype for QSYGENPT API                                      */
 /********************************************************************/
 #ifdef __ILEC400__
    #pragma linkage (QSYGENPT,OS,nowiden)
 #else
    extern "OS"
 #endif
 void QSYGENPT (char *,       /* Profile token                    */
               char *,          /* User profile                     */
               char *,          /* User password                    */
               int  *,          /* Time out interval                */
               char *,          /* Profile token type               */
               void *,          /* Error Code                       */
                  ...);         /* Optional parameters:             */
                                /*     Length of password           */
                                /*     CCSID of password            */

#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(pop)       /* @B1A*/
#endif                       /* @B1A*/
#endif
