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
 /* Header File Name: H/QZLSCHFS                                   */
 /*                                                                */
 /* Descriptive Name: Change NetServer File Share                  */
 /*                                                                */
 /* Description: Include header file for the QZLSCHFS API.         */
 /*                                                                */
 /* Header Files Included: H/QZLS                                  */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: None.                                          */
 /*                                                                */
 /* Function Prototype List: QZLSCHFS                              */
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

 #ifndef QZLSCHFS_h
 #define QZLSCHFS_h

 #include <QZLS.H>

 #if (__OS400_TGTVRM__>=510)
   #pragma datamodel(P128)
 #endif
 #ifdef __ILEC400__
      #pragma linkage (QZLSCHFS,OS,nowiden)
 #else
      extern "OS"
 #endif
 /******************************************************************/
 /* Prototype for calling QZLSCHFS API.                            */
 /******************************************************************/
 void QZLSCHFS(char *ShareName,
               char *PathName,
               int  *PathNameLen,
               int  *CCSIDEncoding,
               char *TextDescription,
               int  *Permissions,
               int  *MaxUsers,
               char *ErrorCode,
               ...);
               /* int   *TextCCSID                        */
               /* char  *TextConversion                   */
               /* char  *FileExtensions                   */
               /* int   *NumberOfExtensions               */

 #if (__OS400_TGTVRM__>=510)
   #pragma datamodel(pop)
 #endif
 #endif
