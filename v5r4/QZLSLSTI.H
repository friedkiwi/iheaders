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
 /* Header File Name: H/QZLSLSTI                                   */
 /*                                                                */
 /* Descriptive Name: List NetServer Information                   */
 /*                                                                */
 /* Description: Include header file for the QZLSLSTI and QZLSOLST */
 /*              APIs.                                             */
 /*                                                                */
 /* Header Files Included: H/QZLS                                  */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: None.                                          */
 /*                                                                */
 /* Function Prototype List: QZLSLSTI                              */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= D9469503     4D20  970431 ROCH      New Include           */
 /* $A1= D95445       4D30  970807 ROCH      Added new structures: */
 /* $A2= D97125       4D40  980708 ROCH      Add small share info  */
 /*                                          structure. Changes to */
 /*                                          0100 format. Add      */
 /*                                          ellipsis for optional */
 /*                                          parameters. Add       */
 /*                                          formats 0101 and 0201.*/
 /*                                          Add comma after the   */
 /*                                          ErrorCode parameter.  */
 /* $A3= P9903913     4D50  990818 ROCH      Fix the 0101 format.  */
 /* $A4= D97812.2     5D10  991031 ROCH      V5R1 API support. Add */
 /*                                          900 format and session*/
 /*                                          ID to input parms.    */
 /* $A5= P9909561     5D10  000107 ROCH      Comment the optional  */
 /*                                          parameters.           */
 /* $A6= D98212.2     5D10  000107 ROCH      Additional pragma code*/
 /* $A7= D97314.1     5D10  000604 ROCH      Add publish print     */
 /*                                          share to format       */
 /*                                          ZLSL0101.             */
 /* $A8= P9928040     5D10  000723 ROCH      Change ZLSL0900 format*/
 /*                                          to work with SOA.     */
 /* $A9= D98710.6     5D20  010522 ROCH      Add authMethod parms  */
 /* $B1= D99884.1     5D40  040205 ROCH      Add messageAuth parms */
 /* $B2= D99884.3     5D40  040521 ROCH      Add message severity  */
 /*                                          and LANMAN auth parms */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

#ifndef QZLSLSTI_h
#define QZLSLSTI_h

#include <QZLS.H>

/********************************************************************/
/*                     Definitions                                  */
/********************************************************************/
#define SERVER_NAME_LENGTH 15
#define DOMAIN_NAME_LENGTH 15
#define TEXT_DESC_LENGTH 50
#define USER_PROFILE_LENGTH 10
#define WINS_ADDRESS_LENGTH 15
#define SCOPE_LENGTH 224
#define MAX_PATH_NAME  1024
#define NNLEN 12
#define WORKSTATION_LENGTH 15
#define OBJECT_LENGTH 10
#define PRINT_DRIVER_TYPE_LENGTH 50
#define FORMAT_LENGTH 8
#define QUALIFIER_LENGTH 15

/********************************************************************/
/*                     API External Structures                      */
/********************************************************************/

typedef _Packed struct Qzls_Input_Parameter {
  char userSpaceName[OBJECT_LENGTH];
  char userSpaceLibrary[OBJECT_LENGTH];
  char format[FORMAT_LENGTH];
  char informationQualifier[QUALIFIER_LENGTH];
} Qzls_Input_Parameter_t;

typedef _Packed struct Qzls_Format_ZLSL0100 {
  int sizeOfThisEntry;
  char shareName[NNLEN];
  int deviceType;
  int permissions;
  int maxUsers;
  int currentUsers;
  int spoolFileType;
  int pathNameOffset;
  int pathNameLength;
  char qualifiedOutputQueue[2*OBJECT_LENGTH];
  char printerDriverType[PRINT_DRIVER_TYPE_LENGTH];
  char textDescription[TEXT_DESC_LENGTH];
  /*char path[MAX_PATH_NAME]; */
} Qzls_Format_ZLSL0100_t;

typedef _Packed struct Qzls_Format_ZLSL0101 {
  int sizeOfThisEntry;
  char shareName[NNLEN];
  int deviceType;
  int permissions;
  int maxUsers;
  int currentUsers;
  int spoolFileType;
  int pathNameOffset;
  int pathNameLength;
  char qualifiedOutputQueue[2*OBJECT_LENGTH];
  char printerDriverType[PRINT_DRIVER_TYPE_LENGTH];
  char textDescription[TEXT_DESC_LENGTH];
  char qualifiedPrinterFile[2*OBJECT_LENGTH];
  int textConversionCCSID;
  int extensionOffset;
  int numberOfExtensions;
  char textConvertingFlag;
  char publishPrintShare;
  /*char path[MAX_PATH_NAME]; */
  /*Qzls_Extension_Table_Entry_t extEntries[numberOfExtensions]; */
} Qzls_Format_ZLSL0101_t;

typedef _Packed struct Qzls_Format_ZLSL0200 {
  int codePage;
  int pendingCodePage;
  int idleTimeOut;
  int pendingIdleTimeOut;
  int oplockTimeOut;
  int pendingOplockTimeOut;
  int browsingInterval;
  int pendingBrowseInterval;
  int WINSProxyEnablement;
  int pendingWINSProxyEnablement;
  int guestLogonSupport;
  int pendingGuestLogonSupport;
  char guestLogonUserProfile[USER_PROFILE_LENGTH];
  char pendingGuestLogonUserProfile[USER_PROFILE_LENGTH];
  char serverName[SERVER_NAME_LENGTH];
  char pendingServerName[SERVER_NAME_LENGTH];
  char domainName[DOMAIN_NAME_LENGTH];
  char pendingDomainName[DOMAIN_NAME_LENGTH];
  char textDescription[TEXT_DESC_LENGTH];
  char pendingTextDescription[TEXT_DESC_LENGTH];
  char WINSPrimaryServer[WINS_ADDRESS_LENGTH];
  char pendingWINSPrimaryServer[WINS_ADDRESS_LENGTH];
  char WINSSecondaryServer[WINS_ADDRESS_LENGTH];
  char pendingWINSSecondaryServer[WINS_ADDRESS_LENGTH];
  char scopeId[SCOPE_LENGTH];
  char pendingScopeId[SCOPE_LENGTH];
} Qzls_Format_ZLSL0200_t;

typedef _Packed struct Qzls_Format_ZLSL0201 {
  int codePage;
  int pendingCodePage;
  int idleTimeOut;
  int pendingIdleTimeOut;
  int oplockTimeOut;
  int pendingOplockTimeOut;
  int browsingInterval;
  int pendingBrowseInterval;
  int WINSProxyEnablement;
  int pendingWINSProxyEnablement;
  int guestLogonSupport;
  int pendingGuestLogonSupport;
  char guestLogonUserProfile[USER_PROFILE_LENGTH];
  char pendingGuestLogonUserProfile[USER_PROFILE_LENGTH];
  char serverName[SERVER_NAME_LENGTH];
  char pendingServerName[SERVER_NAME_LENGTH];
  char domainName[DOMAIN_NAME_LENGTH];
  char pendingDomainName[DOMAIN_NAME_LENGTH];
  char textDescription[TEXT_DESC_LENGTH];
  char pendingTextDescription[TEXT_DESC_LENGTH];
  char WINSPrimaryServer[WINS_ADDRESS_LENGTH];
  char pendingWINSPrimaryServer[WINS_ADDRESS_LENGTH];
  char WINSSecondaryServer[WINS_ADDRESS_LENGTH];
  char pendingWINSSecondaryServer[WINS_ADDRESS_LENGTH];
  char scopeId[SCOPE_LENGTH];
  char pendingScopeId[SCOPE_LENGTH];
  char systemNameAccess;
  char pendingSystemNameAccess;
  char authMethod;
  char pendingAuthMethod;
  int serverRole;
  int pendingServerRole;
  int messageAuthMode;
  int pendingMessageAuthMode;
  int minMessageSeverity;
  int pendingMinMessageSeverity;
  int LanmanAuth;
  int pendingLanmanAuth;
} Qzls_Format_ZLSL0201_t;

typedef _Packed struct Qzls_Format_ZLSL0300 {
  char workstationName[WORKSTATION_LENGTH];
  char userName[USER_PROFILE_LENGTH];
  char reserved1[3];
  int numberOfConnections;
  int numberOfOpens;
  int numberOfSessions;
  int sessionTime;
  int sessionIdleTime;
  char logonType;
  char encryptedPasswordUsed;
  char reserved2[6];
  long long sessionIdentifier;
} Qzls_Format_ZLSL0300_t;

typedef _Packed struct Qzls_Format_ZLSL0400 {
  int numberOfOpens;
  int printJobsQueued;
  int sessionStarts;
  int sessionAutoDisconnects;
  int sessionRegDisconnects;
  int duplicateSessions;
  int sessionErrors;
  int passwordViolations;
  int guestLogonSupport;
  int unknownUserConnected;
  int serverBytesSentLow;
  int serverBytesSentHigh;
  int serverBytesReceivedLow;
  int serverBytesReceivedHigh;
  int averageResponseTime;
  char serverStartTime[13];
  char serverResetTime[13];
  char reserved[10];
} Qzls_Format_ZLSL0400_t;

typedef _Packed struct Qzls_Format_ZLSL0600 {
  int connectionid;
  int connectionType;
  int filesOpen;
  int numberConnectionUsers;
  int connectionTime;
  char userName[USER_PROFILE_LENGTH];
  char shareName[NNLEN];
  char reserved[6];
  long long sessionIdentifier;
  char reserved2[8];
}Qzls_Format_ZLSL0600_t;

typedef _Packed struct Qzls_Format_ZLSL0700 {
  int connectionid;
  int connectionType;
  int filesOpen;
  int numberConnectionUsers;
  int connectionTime;
  char userName[USER_PROFILE_LENGTH];
  char workstationName[SERVER_NAME_LENGTH];
  char reserved[3];
  long long sessionIdentifier;
  char reserved2[8];
 }Qzls_Format_ZLSL0700_t;

typedef _Packed struct Qzls_Format_ZLSL0800 {
  char shareName[NNLEN];
  int deviceType;
} Qzls_Format_ZLSL0800_t;

typedef _Packed struct Qzls_Format_ZLSL0900 {
  char userProfileName[10];               /* Variable number of entries */
} Qzls_Format_ZLSL0900_t;


/*******************************************************************/
/* Prototype for calling QZLSLSTI API.                             */
/*******************************************************************/
 #if (__OS400_TGTVRM__>=510)
   #pragma datamodel(P128)
 #endif
 #ifdef __ILEC400__
      #pragma linkage (QZLSLSTI,OS,nowiden)
 #else
      extern "OS"
 #endif
 void QZLSLSTI(char *QualifiedUserSpace,
               char *Format,
               char *InformationQualifier,
               char *ErrorCode,
               ...);
               /* char  *SessionUser                                */
               /* long long *SessionIdentifier                      */

#if (__OS400_TGTVRM__>=510)
  #pragma datamodel(pop)
#endif
#endif
