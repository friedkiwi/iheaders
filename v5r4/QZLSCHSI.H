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
 /* Header File Name: H/QZLSCHSI                                   */
 /*                                                                */
 /* Descriptive Name: Change NetServer Information                 */
 /*                                                                */
 /* Description: Include header file for the QZLSCHSI API.         */
 /*                                                                */
 /* Header Files Included: H/QZLS                                  */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: None.                                          */
 /*                                                                */
 /* Function Prototype List: QZLSCHSI                              */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= D9469503     4D20  970431 ROCH      New Include           */
 /* $B0= D95445       4D30  970807 ROCH      New Structure Member  */
 /* $B1= P3698643     4D50  990620 ROCH      WINSproxy support     */
 /* $B2= D97812.2     5D10  991031 ROCH      V5R1 API support. Add */
 /*                                          primary logon server  */
 /*                                          and enable users.     */
 /* $A4= D98212.2     5D10  000107 ROCH      Additional pragma code*/
 /* $A5= P9928040     5D10  000723 ROCH      Change ZLSL0900 format*/
 /*                                          to work with SOA.     */
 /* $A6= D98710.6     5D20  010522 ROCH      Authentication method */
 /*                                          support               */
 /* $A7= D99884.1     5D40  040130 ROCH      SMB signing support   */
 /* $A8= D99884.3     5D40  040521 ROCH      Message authentication*/
 /*                                          admin alerts, and     */
 /*                                          additional pwd option */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

#ifndef QZLSCHSI_h
#define QZLSCHSI_h

#include <QZLS.H>

/********************************************************************/
/*                     Definitions                                  */
/********************************************************************/
#define WINS_ADDRESS_LENGTH 15
#define SCOPE_LENGTH 224

/********************************************************************/
/*                     API External Structures                      */
/********************************************************************/
typedef _Packed struct Qzls_Format_ZLSS0100 {
  int codePage;
  int idleTimeOut;
  int oplockTimeOut;
  int browseInterval;
  char WINSPrimary[WINS_ADDRESS_LENGTH];
  char WINSSecondary[WINS_ADDRESS_LENGTH];
  char scope[SCOPE_LENGTH];
  char WINSproxy;
  char reserved;
  int domainLogonSupport;
  int serverRole;
  char authMethod;
  char reserved2[3];
  int messageAuthMode;
  int minMessageSeverity;
  int LanmanAuth;
} Qzls_Format_ZLSS0100_t;

typedef _Packed struct Qzls_Format_ZLSS0200 {
  int numberOfUserProfileNames;
  char userProfileName[10];               /* Variable number of entries */
} Qzls_Format_ZLSS0200_t;

/*******************************************************************/
/* Prototype for calling QZLSCHSI API.                             */
/*******************************************************************/
 #if (__OS400_TGTVRM__>=510)
   #pragma datamodel(P128)
 #endif
 #ifdef __ILEC400__
      #pragma linkage (QZLSCHSI,OS,nowiden)
 #else
      extern "OS"
 #endif
 void QZLSCHSI(char *RequestVar,
               int  *RequestVarLen,
               char *Format,
               char *ErrorCode);

#if (__OS400_TGTVRM__>=510)
  #pragma datamodel(pop)
#endif
#endif
