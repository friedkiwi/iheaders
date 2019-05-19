/* begin_generated_IBM_copyright_prolog                              */
/* This is an automatically generated copyright prolog.              */
/* After initializing,  DO NOT MODIFY OR MOVE                        */
/* ----------------------------------------------------------------- */
/*                                                                   */
/* Product(s):                                                       */
/*     5769-SS1                                                      */
/*     5722-SS1                                                      */
/*                                                                   */
/* (C)Copyright IBM Corp.  1998, 2005                                */
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
 /* Header File Name: H/QZLSENSS                                   */
 /*                                                                */
 /* Descriptive Name: End NetServer Session                        */
 /*                                                                */
 /* Description: Include header file for the QZLSENSS API.         */
 /*                                                                */
 /* Header Files Included: None                                    */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: None.                                          */
 /*                                                                */
 /* Function Prototype List: QZLSENSS                              */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= D9469503     4D20  970431 ROCH      New Include           */
 /* $A1= D97812.2     5D10  991031 ROCH      Add session ID parm   */
 /* $A2= P9909561     5D10  000107 ROCH      Comment the optional  */
 /*                                          parameters.           */
 /* $A3= D98212.2     5D10  000107 ROCH      Additional pragma code*/
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

 #ifndef QZLSENSS_h
 #define QZLSENSS_h

 #if (__OS400_TGTVRM__>=510)
   #pragma datamodel(P128)
 #endif
 #ifdef __ILEC400__
      #pragma linkage (QZLSENSS,OS,nowiden)
 #else
      extern "OS"
 #endif
 /******************************************************************/
 /* Prototype for calling QZLSENSS API.                            */
 /******************************************************************/
 void QZLSENSS(char *WorkstationName,
               char *ErrorCode,
               ...);
               /* long long *SessionIdentifier                     */

 #if (__OS400_TGTVRM__>=510)
   #pragma datamodel(pop)
 #endif
 #endif
