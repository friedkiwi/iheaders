/* begin_generated_IBM_copyright_prolog                              */
/* This is an automatically generated copyright prolog.              */
/* After initializing,  DO NOT MODIFY OR MOVE                        */
/* ----------------------------------------------------------------- */
/*                                                                   */
/* Product(s):                                                       */
/*     5722-SS1                                                      */
/*                                                                   */
/* (C)Copyright IBM Corp.  2001, 2005                                */
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
/* Header File Name: H/QDBST                                      */
/*                                                                */
/* Descriptive Name: Common include for statistics manager APIs   */
/*                                                                */
/* Description: Common Header File for the statistics manager     */
/*              APIs externalized via service program QDBSTMGR    */
/*              and the corresponding OPM API stub programs.      */
/*              This include contains predefined structures       */
/*              and constants for possible input and output       */
/*              formats and values of the APIs.                   */
/*                                                                */
/* Header Files Included:                                         */
/*            None.                                               */
/*                                                                */
/* Macros List:                                                   */
/*            None (see various #defines for constants though).   */
/*                                                                */
/* Structure List:                                                */
/*             Qdbst_STInnnnn_StatsDtl_t                          */
/*             Qdbst_STOnnnnn_ListEntry_t                         */
/*             Qdbst_STIR0100_Hdr_t                               */
/*             Qdbst_STIR0100_StatsHdr_t                          */
/*             Qdbst_STIR0100_StatsDtl_t                          */
/*             Qdbst_STIU0100_Hdr_t                               */
/*             Qdbst_STID0100_t                                   */
/*             Qdbst_STID0200_Hdr_t                               */
/*             Qdbst_STID0200_StatsDtl_t                          */
/*             Qdbst_STIC0100_t                                   */
/*             Qdbst_STIC0200_t                                   */
/*             Qdbst_STIL0100_Hdr_t                               */
/*             Qdbst_STOL0100_Hdr_t                               */
/*             Qdbst_STIV0100_Hdr_t                               */
/*             Qdbst_STOV0100_MFV_t                               */
/*             Qdbst_STOV0100_HistR_t                             */
/*             Qdbst_STIP0100_Hdr_t                               */
/*             Qdbst_STOP0100_Hdr_t                               */
/*                                                                */
/*             Qdbst_InputSection_LS_hdr                          */
/*             Qdbst_InputSection_LDS_hdr                         */
/*             Qdbst_InputSection_LRS_hdr                         */
/*                                                                */
/*             Qdbst_HeaderSection_LS                             */
/*             Qdbst_HeaderSection_LDS                            */
/*             Qdbst_HeaderSection_LRS                            */
/*                                                                */
/*             Qdbst_LDS_DetailValuesHeader_t                     */
/*                                                                */
/*             Qdbst_FeedbackArea_Hdr_t                           */
/*                                                                */
/*             Qdbst_ColumnDescription                            */
/*             Qdbst_ValueDescription                             */
/*                                                                */
/*             Qdbst_KeyValue_t                                   */
/*             Qdbst_KeyValue_int32_t                             */
/*             Qdbst_KeyValue_uint32_t                            */
/*             Qdbst_KeyValue_uint64_t                            */
/*             Qdbst_KeyValue_ID_t                                */
/*             Qdbst_KeyValue_char1_t                             */
/*             Qdbst_KeyValue_char7_t                             */
/*             Qdbst_KeyValue_char8_t                             */
/*             Qdbst_KeyValue_char10_t                            */
/*             Qdbst_KeyValue_char12_t                            */
/*             Qdbst_KeyValue_char26_t                            */
/*                                                                */
/*             Qdbst_KeyValue_ASPDeviceUsed_t                     */
/*             Qdbst_KeyValue_FileUsed_t                          */
/*             Qdbst_KeyValue_FileLibUsed_t                       */
/*             Qdbst_KeyValue_FileMbrUsed_t                       */
/*             Qdbst_KeyValue_ReturnCode_t                        */
/*             Qdbst_KeyValue_RequestID_t                         */
/*             Qdbst_KeyValue_StatsID_t                           */
/*             Qdbst_KeyValue_ElapsedTime_t                       */
/*             Qdbst_KeyValue_EstimatedTime_t                     */
/*             Qdbst_KeyValue_CurLastChg_t                        */
/*             Qdbst_KeyValue_CurUndelRec_t                       */
/*             Qdbst_KeyValue_CurDeletedRec_t                     */
/*             Qdbst_KeyValue_CurInsUpdDel_t                      */
/*             Qdbst_KeyValue_CreatingUser_t                      */
/*             Qdbst_KeyValue_Modified_t                          */
/*             Qdbst_KeyValue_ModifyingUser_t                     */
/*             Qdbst_KeyValue_Created_t                           */
/*             Qdbst_KeyValue_MFVCount_t                          */
/*             Qdbst_KeyValue_HistRCount_t                        */
/*             Qdbst_KeyValue_AgingMode_t                         */
/*             Qdbst_KeyValue_AgingStatus_t                       */
/*             Qdbst_KeyValue_StatsDeleted_t                      */
/*             Qdbst_KeyValue_ReqsCancelled_t                     */
/*             Qdbst_KeyValue_TransAttr_t                         */
/*             Qdbst_KeyValue_UndeletedRec_t                      */
/*             Qdbst_KeyValue_DeletedRec_t                        */
/*             Qdbst_KeyValue_InsUpdDel_t                         */
/*             Qdbst_KeyValue_Cardinality_t                       */
/*             Qdbst_KeyValue_NULLCount_t                         */
/*             Qdbst_KeyValue_ColumnCount_t                       */
/*             Qdbst_KeyValue_UserProfile                         */
/*             Qdbst_KeyValue_Requested_t                         */
/*             Qdbst_KeyValue_RequestStatus_t                     */
/*             Qdbst_KeyValue_Timestamp_t                         */
/*             Qdbst_KeyValue_JobName_t                           */
/*             Qdbst_KeyValue_ThreadID_t                          */
/*             Qdbst_KeyValue_Progress_t                          */
/*             Qdbst_KeyValue_OneTransAttr_t                      */
/*             Qdbst_KeyValue_MessageID_t                         */
/*             Qdbst_KeyValue_StatsCount_t                        */
/*             Qdbst_KeyValue_StatsIndex_t                        */
/*             Qdbst_KeyValue_StatsData_t                         */
/*             Qdbst_KeyValue_BlockOption_t                       */
/*             Qdbst_KeyValue_CurStatsSize_t                      */
/*             Qdbst_KeyValue_OneColumnName_t                     */
/*             Qdbst_KeyValue_OneTransTable_t                     */
/*             Qdbst_KeyValue_OneColDesc_t                        */
/*             Qdbst_KeyValue_MsgFileLib_t                        */
/*             Qdbst_KeyValue_MessageFile_t                       */
/*                                                                */
/*                                                                */
/* Change Activity:                                               */
/*                                                                */
/* Flag   Reason   Release  Userid    Date      Description       */
/* ----  --------  -------  --------  --------  -----------       */
/*  n/a   D98443   v5r2m0   v2kea395  10/26/01  created           */
/*  n/a   D98443   v5r2m0   v2kea395  05/16/02  changed           */
/*  UT01  9A96937  v5r4m0   thiemanu  05/09/05  Candidate option  */
/*                                                                */
/* Additional Notes About the Change Activity:                    */
/*                                                                */
/* END CHANGE ACTIVITY.                                           */
/*** END HEADER FILE SPECIFICATIONS *******************************/

#ifndef QDBST_H
#define QDBST_H

#if (__OS400_TGTVRM__>=510)
#pragma datamodel(P128)
#endif

/******************************************************************/
/* Integer data type declares.                                    */
/* Use QDBST_INTTTYPES check to adjust to your compiler.          */
/******************************************************************/
#ifndef QDBST_INTTYPES
#define QDBST_INTTYPES
  typedef          short     QDBST_int16;
  typedef unsigned short     QDBST_uint16;
  typedef signed   int       QDBST_int32;
  typedef unsigned int       QDBST_uint32;
  typedef unsigned long long QDBST_uint64;
#endif

/******************************************************************/
/* Common special value constants used across the API group       */
/******************************************************************/

#define Qdbst_ASPDeviceName_CURRENT     ("*         ")
#define Qdbst_ASPDeviceName_SYSBAS      ("*SYSBAS   ")

#define Qdbst_CollectionMode_BACKGRND   ("*BACKGROUND ")
#define Qdbst_CollectionMode_IMMEDIATE  ("*IMMEDIATE  ")
#define Qdbst_CollectionMode_ESTIMATE   ("*ESTIMATE   ")

#define Qdbst_RestartOption_IMMEDIATE   Qdbst_CollectionMode_IMMEDIATE
#define Qdbst_RestartOption_NONE        ("*NONE       ")

#define Qdbst_StatsData_BACKGROUND      Qdbst_CollectionMode_BACKGRND
#define Qdbst_StatsData_IMMEDIATE       Qdbst_CollectionMode_IMMEDIATE

#define Qdbst_LibraryName_CURLIB        ("*CURLIB   ")
#define Qdbst_LibraryName_LIBL          ("*LIBL     ")
#define Qdbst_LibraryName_USRLIBL       ("*USRLIBL  ")

#define Qdbst_MemberName_FIRST          ("*FIRST    ")
#define Qdbst_MemberName_LAST           ("*LAST     ")
#define Qdbst_MemberName_ALL            ("*ALL      ")

#define Qdbst_FileName_ALL              ("*ALL      ")

#define Qdbst_UserProfile_SYS           ("*SYS      ")

#define Qdbst_AgingMode_SYS             ("*SYS      ")
#define Qdbst_AgingMode_USER            ("*USER     ")

#define Qdbst_AgingStatus_NOREFRESH     ('0')
#define Qdbst_AgingStatus_REFRESH       ('1')

#define Qdbst_HasDefault_NO             ('0')
#define Qdbst_HasDefault_YES            ('1')

#define Qdbst_TransTable_UNKNOWN        ("*UNKNOWN  *UNKNOWN  ")

#define Qdbst_TransAttr_UNIQUE          ('0')
#define Qdbst_TransAttr_SHARED          ('1')
#define Qdbst_TransAttr_NONE            ('9')

#define Qdbst_FilterOption_PENDING      (1)
#define Qdbst_FilterOption_ACTIVE       (2)
#define Qdbst_FilterOption_ERROR        (4)
#define Qdbst_FilterOption_CANDIDATE    (8) /*@UT01A*/

#define Qdbst_RequestStatus_PENDING     ('0')
#define Qdbst_RequestStatus_ACTIVE      ('1')
#define Qdbst_RequestStatus_ERROR       ('2')
#define Qdbst_RequestStatus_CANDIDATE   ('3') /*@UT01A*/

#define Qdbst_NULLcapable_NO            ('0')
#define Qdbst_NULLcapable_YES           ('1')

#define Qdbst_ColumnOption_STATSONLY    ('0')
#define Qdbst_ColumnOption_INCLNOSTATS  ('1')

#define Qdbst_RC_FAIL                   (-1)
#define Qdbst_RC_SUCCESS                (0)
#define Qdbst_RC_SUCCESS_QUEUED         (1)

#define Qdbst_StatsName_GEN             ("*GEN")
#define Qdbst_StatsName_GEN_len         (4)

#define Qdbst_BlockOption_NOBLOCK       ('0')
#define Qdbst_BlockOption_BLOCK         ('1')

#define Qdbst_ContinuationHandle_FIRST \
  ("                                                ")

/******************************************************************/
/* Common key number constants used across the API group          */
/******************************************************************/

#define Qdbst_KeyNo_ASPDeviceUsed       (1)
#define Qdbst_KeyNo_FileUsed            (2)
#define Qdbst_KeyNo_FileLibUsed         (3)
#define Qdbst_KeyNo_FileMbrUsed         (4)
#define Qdbst_KeyNo_ReturnCode          (5)
#define Qdbst_KeyNo_RequestID           (6)
#define Qdbst_KeyNo_StatsID             (7)
#define Qdbst_KeyNo_ElapsedTime         (8)
#define Qdbst_KeyNo_EstimatedTime       Qdbst_KeyNo_ElapsedTime
#define Qdbst_KeyNo_CurLastChg          (9)
#define Qdbst_KeyNo_CurUndelRec         (10)
#define Qdbst_KeyNo_CurDeletedRec       (11)
#define Qdbst_KeyNo_CurInsUpdDel        (12)
                                      /*(13)*/
#define Qdbst_KeyNo_CreatingUser        (14)
#define Qdbst_KeyNo_Created             (15)
#define Qdbst_KeyNo_MFVCount            (16)
#define Qdbst_KeyNo_HistRCount          (17)
#define Qdbst_KeyNo_AgingMode           (18)
#define Qdbst_KeyNo_AgingStatus         (19)
#define Qdbst_KeyNo_StatisticsDeleted   (20)
#define Qdbst_KeyNo_ReqsCancelled       (21)
#define Qdbst_KeyNo_TransAttr           (22)
#define Qdbst_KeyNo_UndelRec            (23)
#define Qdbst_KeyNo_DeletedRec          (24)
#define Qdbst_KeyNo_InsUpdDel           (25)
#define Qdbst_KeyNo_Cardinality         (26)
#define Qdbst_KeyNo_NULLCount           (27)
#define Qdbst_KeyNo_ColumnCount         (28)
#define Qdbst_KeyNo_ColumnNames         (29)
#define Qdbst_KeyNo_TransTables         (30)
#define Qdbst_KeyNo_ColumnDescriptions  (31)
#define Qdbst_KeyNo_MostFrequentValues  (32)
#define Qdbst_KeyNo_HistogramRanges     (33)
#define Qdbst_KeyNo_UserProfile         (34)
#define Qdbst_KeyNo_Requested           (35)
#define Qdbst_KeyNo_RequestStatus       (36)
#define Qdbst_KeyNo_Timestamp           (37)
#define Qdbst_KeyNo_JobName             (38)
#define Qdbst_KeyNo_ThreadID            (39)
#define Qdbst_KeyNo_Progress            (40)
#define Qdbst_KeyNo_TransAttrs          (41)
#define Qdbst_KeyNo_MsgID               (42)
#define Qdbst_KeyNo_StatsCount          (43)
#define Qdbst_KeyNo_StatsIndex          (44)
#define Qdbst_KeyNo_StatsData           (45)
#define Qdbst_KeyNo_StatsName           (46)
#define Qdbst_KeyNo_BlockOption         (47)
#define Qdbst_KeyNo_CurStatsSize        (48)
#define Qdbst_KeyNo_MsgData             (49)
#define Qdbst_KeyNo_MsgFileLib          (50)
#define Qdbst_KeyNo_MsgFile             (51)
#define Qdbst_KeyNo_ModifyingUser       (52)
#define Qdbst_KeyNo_Modified            (53)

#define Qdbst_KeyNo_MAX                 (53)

/******************************************************************/
/* Common general structures used across the API group            */
/******************************************************************/

#pragma pack(1)
typedef struct Qdbst_STInnnnn_StatsDtl
{
  QDBST_uint32  iColumnDefLen;
  char ColumnName[10];
  char TransTableName[10];
  char TransTableLibName[10];
  char Reserved[2];
}
Qdbst_STInnnnn_StatsDtl_t;
#pragma pack()

#pragma pack(1)
typedef struct Qdbst_STOnnnnn_ListEntry
{
  QDBST_uint32 iEntryLen;
  QDBST_uint32 iFieldCount;
/* Qdbst_KeyValue..._t[];*/ /* varying length */
}
Qdbst_STOnnnnn_ListEntry_t;
#pragma pack()

#pragma pack(1)
typedef struct Qdbst_FeedbackArea_Hdr
{
  QDBST_uint32  iBytesReturned;
  QDBST_uint32  iBytesAvailable;
  QDBST_uint32  iKeysReturned;
  QDBST_uint32  iKeysAvailable;
/*Qdbst_KeyValue_t[];*/ /*varying length*/
}
Qdbst_FeedbackArea_Hdr_t;
#pragma pack()

/******************************************************************/
/* Common keyed input/output related structures                   */
/******************************************************************/

#pragma pack(1)
typedef struct Qdbst_KeyValue
{
  QDBST_uint32  iEntryLen;
  QDBST_uint32  iKey;
  QDBST_uint32  iDataLen;
 /*char Data[];*/      /* varying length */
 /*char Reserved[];*/  /* varying length */
}
Qdbst_KeyValue_t;
#pragma pack()

#pragma pack(1)
typedef struct Qdbst_KeyValue_char1
{
  QDBST_uint32  iEntryLen;
  QDBST_uint32  iKey;
  QDBST_uint32  iDataLen;
  char Data[1];
  char Reserved[3];
}
Qdbst_KeyValue_char1_t;
#pragma pack()

#pragma pack(1)
typedef struct Qdbst_KeyValue_char7
{
  QDBST_uint32  iEntryLen;
  QDBST_uint32  iKey;
  QDBST_uint32  iDataLen;
  char Data[7];
  char Reserved[1];
}
Qdbst_KeyValue_char7_t;
#pragma pack()

#pragma pack(1)
typedef struct Qdbst_KeyValue_char8
{
  QDBST_uint32  iEntryLen;
  QDBST_uint32  iKey;
  QDBST_uint32  iDataLen;
  char Data[8];
}
Qdbst_KeyValue_char8_t;
#pragma pack()

#pragma pack(1)
typedef struct Qdbst_KeyValue_char10
{
  QDBST_uint32  iEntryLen;
  QDBST_uint32  iKey;
  QDBST_uint32  iDataLen;
  char Data[10];
  char Reserved[2];
}
Qdbst_KeyValue_char10_t;
#pragma pack()

#pragma pack(1)
typedef struct Qdbst_KeyValue_char12
{
  QDBST_uint32  iEntryLen;
  QDBST_uint32  iKey;
  QDBST_uint32  iDataLen;
  char Data[12];
}
Qdbst_KeyValue_char12_t;
#pragma pack()

#pragma pack(1)
typedef struct Qdbst_KeyValue_char26
{
  QDBST_uint32  iEntryLen;
  QDBST_uint32  iKey;
  QDBST_uint32  iDataLen;
  char Data[26];
  char Reserved[2];
}
Qdbst_KeyValue_char26_t;
#pragma pack()

#pragma pack(1)
typedef struct Qdbst_KeyValue_uint32
{
  QDBST_uint32 iEntryLen;
  QDBST_uint32 iKey;
  QDBST_uint32 iDataLen;
  QDBST_uint32 Data;
}
Qdbst_KeyValue_uint32_t;
#pragma pack()

#pragma pack(1)
typedef struct Qdbst_KeyValue_int32
{
  QDBST_uint32 iEntryLen;
  QDBST_uint32 iKey;
  QDBST_uint32 iDataLen;
  QDBST_int32 Data;
}
Qdbst_KeyValue_int32_t;
#pragma pack()

#pragma pack(1)
typedef struct Qdbst_KeyValue_uint64
{
  QDBST_uint32 iEntryLen;
  QDBST_uint32 iKey;
  QDBST_uint32 iDataLen;
  QDBST_uint64 Data;
}
Qdbst_KeyValue_uint64_t;
#pragma pack()

#pragma pack(1)
typedef struct Qdbst_KeyValue_ID
{
  QDBST_uint32  iEntryLen;
  QDBST_uint32  iKey;
  QDBST_uint32  iDataLen;
  unsigned char Data[16];
}
Qdbst_KeyValue_ID_t;
#pragma pack()

typedef Qdbst_KeyValue_char10_t Qdbst_KeyValue_ASPDeviceUsed_t;
typedef Qdbst_KeyValue_char10_t Qdbst_KeyValue_FileUsed_t;
typedef Qdbst_KeyValue_char10_t Qdbst_KeyValue_FileLibUsed_t;
typedef Qdbst_KeyValue_char10_t Qdbst_KeyValue_FileMbrUsed_t;
typedef Qdbst_KeyValue_int32_t  Qdbst_KeyValue_ReturnCode_t;
typedef Qdbst_KeyValue_ID_t     Qdbst_KeyValue_RequestID_t;
typedef Qdbst_KeyValue_ID_t     Qdbst_KeyValue_StatsID_t;
typedef Qdbst_KeyValue_uint32_t Qdbst_KeyValue_ElapsedTime_t;
typedef Qdbst_KeyValue_uint32_t Qdbst_KeyValue_EstimatedTime_t;
typedef Qdbst_KeyValue_char26_t Qdbst_KeyValue_CurLastChg_t;
typedef Qdbst_KeyValue_uint64_t Qdbst_KeyValue_CurUndelRec_t;
typedef Qdbst_KeyValue_uint64_t Qdbst_KeyValue_CurDeletedRec_t;
typedef Qdbst_KeyValue_uint64_t Qdbst_KeyValue_CurInsUpdDel_t;
typedef Qdbst_KeyValue_char10_t Qdbst_KeyValue_CreatingUser_t;
typedef Qdbst_KeyValue_char26_t Qdbst_KeyValue_Created_t;
typedef Qdbst_KeyValue_uint32_t Qdbst_KeyValue_MFVCount_t;
typedef Qdbst_KeyValue_uint32_t Qdbst_KeyValue_HistRCount_t;
typedef Qdbst_KeyValue_char10_t Qdbst_KeyValue_AgingMode_t;
typedef Qdbst_KeyValue_char1_t  Qdbst_KeyValue_AgingStatus_t;
typedef Qdbst_KeyValue_uint32_t Qdbst_KeyValue_StatsDeleted_t;
typedef Qdbst_KeyValue_uint32_t Qdbst_KeyValue_ReqsCancelled_t;
typedef Qdbst_KeyValue_char1_t  Qdbst_KeyValue_TransAttr_t;
typedef Qdbst_KeyValue_uint64_t Qdbst_KeyValue_UndeletedRec_t;
typedef Qdbst_KeyValue_uint64_t Qdbst_KeyValue_DeletedRec_t;
typedef Qdbst_KeyValue_uint64_t Qdbst_KeyValue_InsUpdDel_t;
typedef Qdbst_KeyValue_uint64_t Qdbst_KeyValue_Cardinality_t;
typedef Qdbst_KeyValue_uint64_t Qdbst_KeyValue_NULLCount_t;
typedef Qdbst_KeyValue_uint32_t Qdbst_KeyValue_ColumnCount_t;
typedef Qdbst_KeyValue_char10_t Qdbst_KeyValue_UserProfile_t;
typedef Qdbst_KeyValue_char26_t Qdbst_KeyValue_Requested_t;
typedef Qdbst_KeyValue_char1_t  Qdbst_KeyValue_RequestStatus_t;
typedef Qdbst_KeyValue_char26_t Qdbst_KeyValue_Timestamp_t;
typedef Qdbst_KeyValue_char26_t Qdbst_KeyValue_JobName_t;
typedef Qdbst_KeyValue_char8_t  Qdbst_KeyValue_ThreadID_t;
typedef Qdbst_KeyValue_uint32_t Qdbst_KeyValue_Progress_t;
typedef Qdbst_KeyValue_char7_t  Qdbst_KeyValue_MessageID_t;
typedef Qdbst_KeyValue_uint32_t Qdbst_KeyValue_StatsCount_t;
typedef Qdbst_KeyValue_uint32_t Qdbst_KeyValue_StatsIndex_t;
typedef Qdbst_KeyValue_char12_t Qdbst_KeyValue_StatsData_t;
typedef Qdbst_KeyValue_char1_t  Qdbst_KeyValue_BlockOption_t;
typedef Qdbst_KeyValue_uint64_t Qdbst_KeyValue_CurStatsSize_t;
typedef Qdbst_KeyValue_char10_t Qdbst_KeyValue_MsgFileLib_t;
typedef Qdbst_KeyValue_char10_t Qdbst_KeyValue_MessageFile_t;
typedef Qdbst_KeyValue_char10_t Qdbst_KeyValue_ModifyingUser_t;
typedef Qdbst_KeyValue_char26_t Qdbst_KeyValue_Modified_t;

#pragma pack(1)
typedef struct Qdbst_KeyValue_OneColumnName
{
  QDBST_uint32  iEntryLen;
  QDBST_uint32  iKey;
  QDBST_uint32  iDataLen;
  char Data[1][10];
  char Reserved[2];
}
Qdbst_KeyValue_OneColumnName_t;
#pragma pack()

#pragma pack(1)
typedef struct Qdbst_KeyValue_OneTransAttr
{
  QDBST_uint32  iEntryLen;
  QDBST_uint32  iKey;
  QDBST_uint32  iDataLen;
  char Data[1][1];
  char Reserved[3];
}
Qdbst_KeyValue_OneTransAttr_t;
#pragma pack()

#pragma pack(1)
typedef struct Qdbst_KeyValue_OneTransTable
{
  QDBST_uint32  iEntryLen;
  QDBST_uint32  iKey;
  QDBST_uint32  iDataLen;
  char Data[1][20];
}
Qdbst_KeyValue_OneTransTable_t;
#pragma pack()

#pragma pack(1)
typedef struct Qdbst_ColumnDescription
{
  QDBST_uint32  iSQLType;
  QDBST_uint32  iFieldLen;
  QDBST_uint32  iByteLen;
  QDBST_uint32  iScale;
  QDBST_uint32  iPrecision;
  QDBST_uint32  iRadix;
  QDBST_uint32  iCCSID;
  char NULLcapable;
  char HasDefault;
  char ColumnText[50];
  QDBST_uint32  iOrdPos;
}
Qdbst_ColumnDescription_t;
#pragma pack()

#pragma pack(1)
typedef struct Qdbst_KeyValue_OneColDesc
{
  QDBST_uint32  iEntryLen;
  QDBST_uint32  iKey;
  QDBST_uint32  iDataLen;
  Qdbst_ColumnDescription_t Data[1];
}
Qdbst_KeyValue_OneColDesc_t;
#pragma pack()

/******************************************************************/
/* Input/Output format related structures for API                 */
/* QdbstRequestStatistics                                         */
/******************************************************************/

#pragma pack(1)
typedef struct Qdbst_STIR0100_Hdr
{
  char ASPDeviceName[10];
  char FileName[10];
  char FileLibraryName[10];
  char FileMemberName[10];
  char CollectionMode[12];
  QDBST_uint32  iStatsOffset;
  QDBST_uint32  iStatsCount;
/* Qdbst_STIR0100_StatsHdr_t[];*/ /* varying length */
}
Qdbst_STIR0100_Hdr_t;
#pragma pack()

#pragma pack(1)
typedef struct Qdbst_STIR0100_StatsHdr
{
  QDBST_uint32  iStatsLen;
  QDBST_uint32  iStatsNameLen;
  char StatsName[128];
  char AgingMode[10];
  char Reserved[2];
  QDBST_uint32  iColumnDisplacement;
  QDBST_uint32  iColumnCount;
/*Qdbst_STIR0100_StatsDtl_t[]; */ /* varying length */
}
Qdbst_STIR0100_StatsHdr_t;
#pragma pack()

typedef Qdbst_STInnnnn_StatsDtl_t Qdbst_STIR0100_StatsDtl_t;

/******************************************************************/
/* Input/Output format related structures for API                 */
/* QdbstCancelRequestedStatistics                                 */
/******************************************************************/

#pragma pack(1)
typedef struct Qdbst_STIC0100
{
  unsigned char RequestID[16];
  char RestartOption[12];
}
Qdbst_STIC0100_t;
#pragma pack()

#pragma pack(1)
typedef struct Qdbst_STIC0200
{
  char ASPDeviceName[10];
  char FileName[10];
  char FileLibraryName[10];
  char FileMemberName[10];
}
Qdbst_STIC0200_t;
#pragma pack()

/******************************************************************/
/* Input/Output format related structures for API                 */
/* QdbstDeleteStatistics                                          */
/******************************************************************/

#pragma pack(1)
typedef struct Qdbst_STID0100
{
  char ASPDeviceName[10];
  char FileName[10];
  char FileLibraryName[10];
  char FileMemberName[10];
  unsigned char StatisticsID[16];
}
Qdbst_STID0100_t;
#pragma pack()

#pragma pack(1)
typedef struct Qdbst_STID0200_Hdr
{
  char ASPDeviceName[10];
  char FileName[10];
  char FileLibraryName[10];
  char FileMemberName[10];
  QDBST_uint32  iColumnOffset;
  QDBST_uint32  iColumnCount;
/*Qdbst_STID0200_StatsDtl_t[]; */ /* varying length */
}
Qdbst_STID0200_Hdr_t;
#pragma pack()

typedef Qdbst_STInnnnn_StatsDtl_t Qdbst_STID0200_StatsDtl_t;

/******************************************************************/
/* Input/Output format related structures for API                 */
/* QdbstUpdateStatistics                                          */
/******************************************************************/

#pragma pack(1)
typedef struct Qdbst_STIU0100_Hdr
{
  char ASPDeviceName[10];
  char FileName[10];
  char FileLibraryName[10];
  char FileMemberName[10];
  unsigned char StatisticsID[16];
  QDBST_uint32  iFieldOffset;
  QDBST_uint32  iFieldCount;
/* Qdbst_KeyValue_t[];*/ /* varying length */
}
Qdbst_STIU0100_Hdr_t;
#pragma pack()


/******************************************************************/
/* Input/Output format related structures for API                 */
/* QdbstListStatistics                                            */
/******************************************************************/

#pragma pack(1)
typedef struct Qdbst_STIL0100_Hdr
{
   char ASPDeviceName[10];
   char FileName[10];
   char FileLibraryName[10];
   char FileMemberName[10];
   char ColumnOption;
   char Reserved[3];
   char ContinuationHandle[48];
   QDBST_uint32  iFieldOffset;
   QDBST_uint32  iFieldCount;
 /*QDBST_uint32  iKeys[];*/ /* varying length */
}
Qdbst_STIL0100_Hdr_t;
#pragma pack()

typedef Qdbst_STOnnnnn_ListEntry_t Qdbst_STOL0100_Hdr_t;

#pragma pack(1)
typedef struct Qdbst_InputSection_LS_hdr
{
   char UserSpaceObjName[10];
   char UserSpaceLibName[10];
   char OutputFormat[8];
   QDBST_uint32  iInputLen;
   char InputFormat[8];
   char ASPDeviceName[10];
   char FileName[10];
   char FileLibraryName[10];
   char FileMemberName[10];
   char ColumnOption;
   char Reserved[3];
   char ContinuationHandle[48];
   QDBST_uint32  iFieldOffsetSpecified;
   QDBST_uint32  iFieldCount;
   QDBST_uint32  iFieldDisplacement;
 /*QDBST_uint32  iKeys[];*/ /* varying length */
}
Qdbst_InputSection_LS_hdr_t;
#pragma pack()

#pragma pack(1)
typedef struct Qdbst_HeaderSection_LS
{
   char ContinuationHandle[48];
}
Qdbst_HeaderSection_LS_t;
#pragma pack()

/******************************************************************/
/* Input/Output format related structures for API                 */
/* QdbstListDetailStatistics                                      */
/******************************************************************/

#pragma pack(1)
typedef struct Qdbst_STIV0100_Hdr
{
   char         ASPDeviceName[10];
   char         FileName[10];
   char         FileLibraryName[10];
   char         FileMemberName[10];
   unsigned char StatisticsID[16];
   char         ContinuationHandle[48];
   QDBST_uint32 iFieldOffset;
   QDBST_uint32 iFieldCount;
 /*QDBST_uint32 iKeys[];*/ /* varying length */
}
Qdbst_STIV0100_Hdr_t;
#pragma pack()

#pragma pack(1)
typedef struct Qdbst_InputSection_LDS_hdr
{
   char         UserSpaceObjName[10];
   char         UserSpaceLibName[10];
   char         OutputFormat[8];
   QDBST_uint32 iInputLen;
   char         InputFormat[8];
   char         ASPDeviceName[10];
   char         FileName[10];
   char         FileLibraryName[10];
   char         FileMemberName[10];
   char         ContinuationHandle[48];
   QDBST_uint32 iFieldOffsetSpecified;
   QDBST_uint32 iFieldCount;
   QDBST_uint32 iFieldDisplacement;
 /*QDBST_uint32 iKeys[];*/ /* varying length */
}
Qdbst_InputSection_LDS_hdr_t;
#pragma pack()

#pragma pack(1)
typedef struct Qdbst_HeaderSection_LDS
{
   char         ASPDeviceName[10];
   char         FileLibraryName[10];
   char         FileMemberName[10];
   char         Reserved[2];
   char         ContinuationHandle[48];
   QDBST_uint32 iMFVHeaderDisplacement;
   QDBST_uint32 iHistRHeaderDisplacement;
}
Qdbst_HeaderSection_LDS_t;
#pragma pack()

#pragma pack(1)
typedef struct Qdbst_LDS_DetailValuesHeader
{
   QDBST_uint32 iEntryOffset;
   QDBST_uint32 iEntryCount;
   QDBST_uint32 iEntryLen;
   QDBST_uint32 iColumnCount;
   QDBST_uint32 iFormatDisplacement;
   QDBST_uint32 iFormatLen;
} Qdbst_LDS_DetailValuesHeader_t;
#pragma pack()


#pragma pack(1)
typedef struct Qdbst_STOV0100_MFV
{
   QDBST_uint64 iValueCount;
   QDBST_uint32 iColumnDisplacement;
   char reserved[4];
   /*unsigned char Value[];*/ /* varying length */
} Qdbst_STOV0100_MFV_t;
#pragma pack()

#pragma pack(1)
typedef struct Qdbst_STOV0100_HistR
{
   QDBST_uint64 iRangeCount;
   QDBST_uint64 iHighValueCount;
   QDBST_uint32 iColumnDisplacement;
   char reserved[4];
   /*unsigned char LowValue[];*/ /* varying length */
   /*unsigned char HighValue[];*/ /* varying length */
} Qdbst_STOV0100_HistR_t;
#pragma pack()

#pragma pack(1)
typedef struct Qdbst_ValueDescription
{
  QDBST_uint32 iSQLType;
  QDBST_uint32 iFieldLen;
  QDBST_uint32 iByteLen;
  QDBST_uint32 iScale;
  QDBST_uint32 iPrecision;
  QDBST_uint32 iRadix;
  QDBST_uint32 iCCSID;
  char         TransTableLib[10];
  char         TransTable[10];
  char         cDDSType;
  char         reserved[3];
}
Qdbst_ValueDescription_t;
#pragma pack()

/******************************************************************/
/* Input/Output format related structures for API                 */
/* QdbstListRequestedStatistics                                   */
/******************************************************************/

#pragma pack(1)
typedef struct Qdbst_STIP0100_Hdr
{
   QDBST_uint32  iFilterOption;
   char          ContinuationHandle[48];
   QDBST_uint32  iFieldOffset;
   QDBST_uint32  iFieldCount;
 /*QDBST_uint32  iKeys[];*/ /* varying length */
}
Qdbst_STIP0100_Hdr_t;
#pragma pack()

typedef Qdbst_STOnnnnn_ListEntry_t Qdbst_STOP0100_Hdr_t;

#pragma pack(1)
typedef struct Qdbst_InputSection_LRS_hdr
{
   char         UserSpaceObjName[10];
   char         UserSpaceLibName[10];
   char         OutputFormat[8];
   QDBST_uint32 iInputLen;
   char         InputFormat[8];
   QDBST_uint32 iFilterOption;
   char         ContinuationHandle[48];
   QDBST_uint32 iFieldOffsetSpecified;
   QDBST_uint32 iFieldCount;
   QDBST_uint32 iFieldDisplacement;
 /*QDBST_uint32 iKeys[];*/ /* varying length */
}
Qdbst_InputSection_LRS_hdr_t;
#pragma pack()

#pragma pack(1)
typedef struct Qdbst_HeaderSection_LRS
{
   char ContinuationHandle[48];
}
Qdbst_HeaderSection_LRS_t;
#pragma pack()

/******************************************************************/

#if (__OS400_TGTVRM__>=510)
#pragma datamodel(pop)
#endif

#endif
