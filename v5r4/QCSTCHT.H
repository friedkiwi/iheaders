/*** START HEADER FILE SPECIFICATIONS *****************************/
/*                                                                */
/* Header File Name: H/qcstcht                                    */
/*                                                                */
/* Descriptive Name: Cluster Hash Table APIs.                     */
/*                                                                */
/* 5722-SS1                                                       */
/* (C) Copyright IBM Corp. 2002                                   */
/* All rights reserved.                                           */
/* US Government Users Restricted Rights -                        */
/* Use, duplication or disclosure restricted                      */
/* by GSA ADP Schedule Contract with IBM Corp.                    */
/*                                                                */
/* Licensed Materials-Property of IBM                             */
/*                                                                */
/*                                                                */
/* Description: APIs that are in the QCSTCHT service program      */
/*                                                                */
/* Header Files Included: None                                    */
/*                                                                */
/* Typedefs:                                                      */
/*          QcstChtServerName_t                                   */
/*          QcstChtConnectionHandle_t                             */
/*                                                                */
/* Macros List: None.                                             */
/*                                                                */
/* Structure List:                                                */
/*          Qcst_CHTS0100_t                                       */
/*          Qcst_CHTR0100_t                                       */
/*          Qcst_CHTL0100_t		           	          */
/*          Qcst_CHTL0100_Header_t                                */
/*          Qcst_CHTL0100_Input_t                                 */
/*          Qcst_CHTI0100_t		           	          */
/*                                                                */
/* Function Prototype List:                                       */
/*          QcstConnectCHT                                        */
/*          QcstDisconnectCHT                                     */
/*          QcstGenerateCHTKey                                    */
/*          QcstListCHTKeys                                       */
/*          QcstRetrieveCHTEntry                                  */
/*          QcstStoreCHTEntry                                     */
/*                                                                */
/* Change Activity:                                               */
/*                                                                */
/* CFD List:                                                      */
/*                                                                */
/* FLAG REASON       LEVEL  DATE   PGMR      CHANGE DESCRIPTION   */
/* ---- ------------ -----  ------ --------- ---------------------*/
/* $A0= 98854.1      V5R2M0 010319 LAURIE    New Include          */
/*                                                                */
/* End CFD List.                                                  */
/*                                                                */
/*  Additional notes about the Change Activity                    */
/* End Change Activity.                                           */
/*** END HEADER FILE SPECIFICATIONS *******************************/


#ifndef _QCSTCHT_h
#define _QCSTCHT_h

#if (__OS400_TGTVRM__>=510)
#pragma datamodel(P128)
#endif

/******************************************************************/
/* Defines for special values                                     */
/******************************************************************/
#define QcstChtServer "*SERVER   "
#define QcstChtAll	"*ALL        "
#define QcstChtMaxDataLength 61000
#define QcstChtMaxTimeToLive 525600
#define QcstChtLiveForever -1

/******************************************************************/
/* Type definitions                                               */
/******************************************************************/
typedef char QcstChtServerName_t[10];
typedef char QcstChtConnectionHandle_t[16];
typedef char QcstChtAutl_t[10];

/******************************************************************/
/* Authority access level values                                  */
/******************************************************************/
enum QcstChtAuthorityAccessLevel {
     QcstChtStoreUser  = 0,
     QcstChtAnyUser
 };

/******************************************************************/
/* Update option                                                  */
/******************************************************************/
enum QcstChtUpdateOption {
     QcstChtDoNotAllowUpdate  = 0,
     QcstChtAllowUpdate
 };

/******************************************************************/
/* Entry status                                                   */
/******************************************************************/
enum QcstChtEntryStatus {
     QcstChtAllEntries = -1,
     QcstChtNoEntryConflict = 0,
     QcstChtEntryConflict = 1
 };



/******************************************************************/
/* Prototype for calling Connect Cluster Hash Table               */
/******************************************************************/
#ifdef __ILEC400__
#pragma argument (QcstConnectCHT,OS,nowiden)
#else
extern "C"
#endif
void QcstConnectCHT (
  char    *,   /* Connection Handle */
  char    *,   /* Server name       */
  void    *);  /* Error Code        */


/******************************************************************/
/* Prototype for calling Disconnect Cluster Hash Table            */
/******************************************************************/
#ifdef __ILEC400__
#pragma argument (QcstDisconnectCHT,OS,nowiden)
#else
extern "C"
#endif
void QcstDisconnectCHT (
  char  *,  /* Connection Handle */
  void  *); /* Error Code        */

/******************************************************************/
/* Prototype for calling Store Cluster Hash Table Entry           */
/******************************************************************/
#ifdef __ILEC400__
#pragma argument (QcstStoreCHTEntry,OS,nowiden)
#else
extern "C"
#endif
void QcstStoreCHTEntry (
   char *,  /* Connection Handle */
   void *,  /* Store description */
   char *,  /* Format Name       */
   void *); /* Error Code        */

/******************************************************************/
/* Cluster Hash Table Store CHT Entry Description -- CHTS0100     */
/******************************************************************/
typedef _Packed struct Qcst_CHTS0100 {
     int  Offset_To_Key;
     int  Length_Of_Key;
     int  Offset_To_Data;
     int  Length_Of_Data;
     int  Offset_To_Additional_Fields;
     int  Length_Of_Additional_Fields;
     int  Update_Option;
     int  Authority_Access_Level;
     int  Time_To_Live;
     /* Key  */
     /* Data */
} Qcst_CHTS0100_t;


/******************************************************************/
/* Prototype for calling  Retrieve Cluster Hash Table Entry       */
/******************************************************************/
#ifdef __ILEC400__
#pragma argument (QcstRetrieveCHTEntry,OS,nowiden)
#else
extern "C"
#endif
void QcstRetrieveCHTEntry (
   void *,   /* Receiver variable           */
   int  *,   /* Length of receiver variable */
   char *,   /* Connection Handle           */
   char *,   /* Format Name                 */
   int  *,   /* Length of key               */
   char *,   /* Key                         */
   void *);  /* Error Code                  */

/******************************************************************/
/* Cluster Hash Table Retrieve CHT Entry Description -- CHTR0100  */
/******************************************************************/
typedef _Packed struct Qcst_CHTR0100 {
     int  Bytes_Returned;
     int  Bytes_Available;
     int  Offset_To_Data;
     int  Length_Of_Data;
     int  Entry_Status;
     int  Authority_Access_Level;
     char Owning_User_Profile[10];
     char Storing_User_Profile[10];
     /* Data */
} Qcst_CHTR0100_t;

/******************************************************************/
/* Prototype for calling Generate CHT Key                         */
/******************************************************************/
#ifdef __ILEC400__
#pragma argument (QcstGenerateCHTKey,OS,nowiden)
#else
extern "C"
#endif
void QcstGenerateCHTKey (
   char *,   /* Key                        */
   int  *,   /* Length of key to generate  */
   char *,   /* Connection Handle          */
   void *);  /* Error Code                 */


/******************************************************************/
/* Prototype for calling List CHT Keys                            */
/******************************************************************/
#ifdef __ILEC400__
#pragma argument (QcstListCHTKeys,OS,nowiden)
#else
extern "C"
#endif
void QcstListCHTKeys (
   char *,   /* Qualifed user space name                 */
   char *,   /* Format name                              */
   char *,   /* Connection Handle                        */
   void *,   /* Key selection information                */
   int  *,   /* Key selection information size           */
   char *,   /* Key selection information format         */
   void *);  /* Error Code                               */

 /******************************************************************/
 /* Input Parameter Section                                        */
 /******************************************************************/

 typedef _Packed struct Qcst_CHTL0100_Input{
     char User_Space_Name[10];
     char User_Space_Library_Name[10];
     char Format_Name[8];
     char Connection_Handle[16];
     char Key_Selection_Info_Format[8];
     int  Key_Selection_Info_Size;
     int  Entry_Status_Requested;
     char Storing_User_Profile_Requested[10];
     char Owning_User_Profile_Requested[10];
} Qcst_CHTL0100_Input_t;

 /******************************************************************/
 /* Header Parameter Section                                       */
 /******************************************************************/

 typedef _Packed struct Qcst_CHTL0100_Header{
     char Authorization_List_Name[10];
     char Reserved[2];
} Qcst_CHTL0100_Header_t;

/******************************************************************/
/* Cluster Hash Table List CHT Key-- CHTL0100                     */
/******************************************************************/
typedef _Packed struct Qcst_CHTL0100 {
     int  Length_of_Entry_Info_Returned;
     int  Offset_To_Key;
     int  Length_Of_Key;
     int  Entry_Status;
     int  Authority_Access_Level;
     char Storing_User_Profile[10];
     char Owning_User_Profile[10];
     /* Key */
} Qcst_CHTL0100_t;

/******************************************************************/
/* List CHT Key selection information -- CHTI0100                 */
/******************************************************************/
typedef _Packed struct Qcst_CHTI0100 {
     int  Entry_Status_Requested;
     char Storing_User_Profile_Requested[10];
     char Owning_User_Profile_Requested[10];
} Qcst_CHTI0100_t;


#if (__OS400_TGTVRM__>=510)
    #pragma datamodel(pop)
#endif
#endif /* _QCSTCHT_H_ */
