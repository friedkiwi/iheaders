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

 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QSYCVTVL                                   */
 /*                                                                */
 /* Descriptive Name: Convert validation list.                     */
 /*                                                                */
 /* Description: Convert a validation list from a maximum size of  */
 /*              4GB to a maximum size of 1TB.                     */
 /*                                                                */
 /* Header Files Included: None.                                   */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: None.                                          */
 /*                                                                */
 /* Function Prototype List: QSYCVTVL                              */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON   LEVEL       DATE   PGMR     CHANGE DESCRIPTION   */
 /* ---- -------- ----------- ------ -------- -------------------  */
 /* $A0= D99858.1 v5r4m0.xpf  041110 ROCH     New Include.         */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

 #ifndef QSYCVTVL_h
 #define QSYCVTVL_h
#if (__OS400_TGTVRM__>=510)
#pragma datamodel(P128)
#endif

 /******************************************************************/
 /* Prototype for calling Security API QSYCVTVL                    */
 /******************************************************************/
  #ifdef __ILEC400__
       #pragma linkage (QSYCVTVL,OS,nowiden)
  #else
       extern "OS"
  #endif
 void QSYCVTVL (void *,         /* Qualified validation list name */
                 void *);        /* Error code                     */

#if (__OS400_TGTVRM__>=510)
#pragma datamodel(pop)
#endif
 #endif
