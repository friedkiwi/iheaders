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
 /* Header File Name: H/QZLSCHSN                                   */
 /*                                                                */
 /* Descriptive Name: Change NetServer Name                        */
 /*                                                                */
 /* Description: Include header file for the QZLSCHSN API.         */
 /*                                                                */
 /* Header Files Included: None                                    */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: None.                                          */
 /*                                                                */
 /* Function Prototype List: QZLSCHSN                              */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= D9469503     4D20  970431 ROCH      New Include           */
 /* $A1= P3678573     4D40  981031 ROCH      Add ellipsis for      */
 /*                                          optional parameters.  */
 /* $A2= P3685025     4D40  981209 ROCH      Add comma after the   */
 /*                                          ErrorCode parameter   */
 /* $A3= P9909561     5D10  000107 ROCH      Comment the optional  */
 /*                                          parameters.           */
 /* $A4= D98212.2     5D10  000107 ROCH      Additional pragma code*/
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

 #ifndef QZLSCHSN_h
 #define QZLSCHSN_h

 #if (__OS400_TGTVRM__>=510)
   #pragma datamodel(P128)
 #endif
 #ifdef __ILEC400__
      #pragma linkage (QZLSCHSN,OS,nowiden)
 #else
      extern "OS"
 #endif
 /******************************************************************/
 /* Prototype for calling QZLSCHSN API.                            */
 /******************************************************************/
 void QZLSCHSN(char *ServerName,
               char *DomainName,
               char *TextDescription,
               char *ErrorCode,
               ...);
               /* char *AllowSystemName                            */

 #if (__OS400_TGTVRM__>=510)
   #pragma datamodel(pop)
 #endif
 #endif
