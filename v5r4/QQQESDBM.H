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
 /* Header File Name: H/QQQESDBM                                   */
 /*                                                                */
 /* Descriptive Name: Include for End SQL Database Monitor         */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /* Description: The End SQL Database Monitor API ends the         */
 /*              memory-based SQL database monitor.                */
 /*                                                                */
 /* Header Files Included: None.                                   */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: None.                                          */
 /*                                                                */
 /* Function Prototype List: QQQESDBM                              */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON    LEVEL  DATE   PGMR     CHANGE DESCRIPTION       */
 /* ---- --------- -----  ------ -------- -------------------------*/
 /* $A0=           v5r4m0 050601 ktrisko: New include              */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

 #ifndef QQQESDBM_h
 #define QQQESDBM_h
 #if (__OS400_TGTVRM__>=510)
      #pragma datamodel(P128)
 #endif

 /*******************************************************************/
 /*  Prototype for calling End SQL Database Monitor     (QQQESDBM)  */
 /*******************************************************************/
 #ifdef __ILEC400__
     #pragma linkage (QQQESDBM,OS,nowiden)
 #else
     extern "OS"
 #endif

 void QQQESDBM(void *,            /* Qualified job name             */
               void *);           /* Error code                     */

 #if (__OS400_TGTVRM__>=510)
      #pragma datamodel(pop)
 #endif

 #endif
