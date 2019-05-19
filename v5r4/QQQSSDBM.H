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
 /* Header File Name: H/QQQSSDBM                                   */
 /*                                                                */
 /* Descriptive Name: Include for Start SQL Database Monitor       */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /* Description: The Start SQL Database Monitor API starts the     */
 /*              memory-based SQL database monitor.                */
 /*                                                                */
 /* Header Files Included: None.                                   */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: None.                                          */
 /*                                                                */
 /* Function Prototype List: QQQSSDBM                              */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON    LEVEL  DATE   PGMR     CHANGE DESCRIPTION       */
 /* ---- --------- -----  ------ -------- -------------------------*/
 /* $A0=           v5r4m0 050531 ktrisko: New include              */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

 #ifndef QQQSSDBM_h
 #define QQQSSDBM_h
 #if (__OS400_TGTVRM__>=510)
      #pragma datamodel(P128)
 #endif

 /*******************************************************************/
 /*  Prototype for calling Start SQL Database Monitor   (QQQSSDBM)  */
 /*******************************************************************/
 #ifdef __ILEC400__
     #pragma linkage (QQQSSDBM,OS,nowiden)
 #else
     extern "OS"
 #endif

 void QQQSSDBM(void *,            /* Qualified job name             */
               char *,            /* Memory handle                  */
               int,               /* Storage size                   */
               char *,            /* Free storage method            */
               int,               /* Number of types to monitor     */
               void *,            /* Subtype to monitor             */
               void *);           /* Error code                     */

 #if (__OS400_TGTVRM__>=510)
      #pragma datamodel(pop)
 #endif

 #endif
