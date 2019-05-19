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
 /* Header File Name: H/QQQCSDBM                                   */
 /*                                                                */
 /* Descriptive Name: Include for Clear SQL Database Monitor       */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /* Description: The Clear SQL Database Monitor API clears and     */
 /*              frees the associated memory area of the           */
 /*              database monitor statistics                       */
 /*                                                                */
 /* Header Files Included: None.                                   */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: None.                                          */
 /*                                                                */
 /* Function Prototype List: QQQCSDBM                              */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON    LEVEL  DATE   PGMR     CHANGE DESCRIPTION       */
 /* ---- --------- -----  ------ -------- -------------------------*/
 /* $A0=           v5r4m0 050601 ktrisko: New include              */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

 #ifndef QQQCSDBM_h
 #define QQQCSDBM_h
 #if (__OS400_TGTVRM__>=510)
      #pragma datamodel(P128)
 #endif

 /*******************************************************************/
 /*  Prototype for calling Clear SQL Database Monitor   (QQQCSDBM)  */
 /*******************************************************************/
 #ifdef __ILEC400__
     #pragma linkage (QQQCSDBM,OS,nowiden)
 #else
     extern "OS"
 #endif

 void QQQCSDBM(char *,            /* Memory handle to clear         */
               void *,            /* Job or memory handle name      */
               void *);           /* Error code                     */

 #if (__OS400_TGTVRM__>=510)
      #pragma datamodel(pop)
 #endif

 #endif
