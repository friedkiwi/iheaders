/* begin_generated_IBM_copyright_prolog                              */
/* This is an automatically generated copyright prolog.              */
/* After initializing,  DO NOT MODIFY OR MOVE                        */
/* ----------------------------------------------------------------- */
/*                                                                   */
/* Product(s):                                                       */
/*     5722-SS1                                                      */
/*                                                                   */
/* (C)Copyright IBM Corp.  2003, 2003                                */
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
 /* Header File Name: H/QJOCHRVC                                   */
 /*                                                                */
 /* Descriptive Name: Change Journal Recovery Count                */
 /*                                                                */
 /* 5722-SS1  (C) Copyright IBM Corp. 2004,2004                    */
 /* All rights reserved.                                           */
 /* US Government Users Restricted Rights -                        */
 /* Use, duplication or disclosure restricted                      */
 /* by GSA ADP Schedule Contract with IBM Corp.                    */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /* WARNING:    This macro/include is a CUE.                       */
 /*             This macro/include provides an interface           */
 /*             that is externally documented to customers,        */
 /*             or is function that any user could create.         */
 /*             Any changes to this part MUST be upwardly          */
 /*             compatible at compile and run-time.                */
 /*             This interface may be generated as in-line         */
 /*             code in customer programs.                         */
 /*                                                                */
 /*             CUESTATUS: OT                                      */
 /*                                                                */
 /******************************************************************/
 /*                                                                */
 /* Description: Change the journal recovery count for all journals*/
 /*              on the system. This will improve run time         */
 /*              performance at the expense of a longer IPL if it  */
 /*              is an abnormal IPL.                               */
 /*                                                                */
 /* Header Files Included: None.                                   */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: None.                                          */
 /*                                                                */
 /* Function Prototype List: QJOCHRVC                              */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= P9A14766     5D30  030615 ROCHPGMR: New Include           */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /******************************************************************/

 /*** END HEADER FILE SPECIFICATIONS *******************************/

 #ifndef QJOCHRVC_h
 #define QJOCHRVC_h

 #if (__OS400_TGTVRM__>=530)
     #pragma datamodel(P128)
 #endif


 #ifdef __ILEC400__
      #pragma linkage (QJOCHRVC,OS,nowiden)
 #else
      extern "OS"
 #endif
 /******************************************************************/
 /* Prototype for calling the QJOCHRVC API.                        */
 /******************************************************************/
 void QJOCHRVC (int *,          /* Recovery count                 */
	        void *);         /* Error Code                     */

 #if (__OS400_TGTVRM__>=530)
 #pragma datamodel(pop)
 #endif

 #endif
