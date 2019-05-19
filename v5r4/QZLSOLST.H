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
 /* Header File Name: H/QZLSOLST                                   */
 /*                                                                */
 /* Descriptive Name: List NetServer Information Wrapper           */
 /*                                                                */
 /* Description: Include header file for the QZLSOLST API.         */
 /*                                                                */
 /* Header Files Included: H/QZLS                                  */
 /*                        H/QZLSLSTI                              */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: None.                                          */
 /*                                                                */
 /* Function Prototype List: QZLSOLST                              */
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
 /* $A5= D99884.3     5D40  040624 ROCH      Include qzlslsti.h    */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

#ifndef QZLSOLST_h
#define QZLSOLST_h

#include <QZLS.H>
#include <qzlslsti.h>

/********************************************************************/
/*                     Definitions                                  */
/********************************************************************/
#define START_TIME_LENGTH 13

/********************************************************************/
/*                     API External Structures                      */
/********************************************************************/
typedef _Packed struct Qzls_List_Info {
  int totalRecords;
  int recordsReturned;
  int recordLength;
  int lengthOfInfoReturned;
  char informationComplete;
  char creationDateTime[START_TIME_LENGTH];
  char reserved[34];
} Qzls_List_Info_t;

/*******************************************************************/
/* Prototype for calling QZLSOLST API.                             */
/*******************************************************************/
 #if (__OS400_TGTVRM__>=510)
   #pragma datamodel(P128)
 #endif
 #ifdef __ILEC400__
      #pragma linkage (QZLSOLST,OS,nowiden)
 #else
      extern "OS"
 #endif
 void QZLSOLST(char *ReceiverVar,
               int  *ReceiverVarLength,
               char *ListInformation,
               char *Format,
               char *Qualifier,
               char *ErrorCode,
               ...);
               /* char  *SessionUser                                */
               /* long long *SessionIdentifier                      */

#if (__OS400_TGTVRM__>=510)
  #pragma datamodel(pop)
#endif
#endif
