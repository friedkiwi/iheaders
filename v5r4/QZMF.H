#ifndef _QZMF_H
   #define _QZMF_H

/*** START HEADER FILE SPECIFICATIONS ********************************/
/*                                                                   */
/* Header File Name: H/QZMF                                          */
/*                                                                   */
/* Descriptive Name: Mail Server Framework (MSF) API and Exit Pgm.   */
/*                                                                   */
/* 5763-SS1  (C) Copyright IBM Corp. 1994,1994                       */
/* All rights reserved.                                              */
/* US Government Users Restricted Rights -                           */
/* Use, duplication or disclosure restricted                         */
/* by GSA ADP Schedule Contract with IBM Corp.                       */
/*                                                                   */
/* Licensed Materials-Property of IBM                                */
/*                                                                   */
/* Description: Include header file for the common structures and    */
/*              constants for MSF APIs and Exit Programs.            */
/*                                                                   */
/* Header Files Included:                                            */
/*                        H/POINTER                                  */
/*                        H/LIMITS                                   */
/*                                                                   */
/* Macros List: None.                                                */
/*                                                                   */
/* Structure List:                                                   */
/*                                                                   */
/*                 Qzmf_Exit_Pgm_Lib_Name_t                          */
/*                 Qzmf_Date_t                                       */
/*                 Qzmf_Time_t                                       */
/*                 Qzmf_System_Timestamp_t                           */
/*                                                                   */
/*                 Qzmf_GET_GMT_Delta_t                              */
/*                 Qzmf_GET_Timestamp_t                              */
/*                 Qzmf_GET_t                                        */
/*                 Qzmf_GET_Generic_Attrbt_t                         */
/*                 Qzmf_GET_Int_Attrbt_t                             */
/*                 Qzmf_GET_Timestamp_Attrbt_t                       */
/*                 Qzmf_GET_Subject_Attrbt_t                         */
/*                 Qzmf_GET_Signtr_Attrbt_t                          */
/*                 Qzmf_GET_Note_Attrbt_t                            */
/*                 Qzmf_GET_Appl_UId__Attrbt_t                       */
/*                 Qzmf_GET_Appl_Rf_UId_Attrbt_t                     */
/*                 Qzmf_GET_Ref_Attrbt_t                             */
/*                 Qzmf_GET_Attach_Attrbt_t                          */
/*                                                                   */
/*                 Qzmf_FSO_t                                        */
/*                                                                   */
/*                 Qzmf_Msg_Desc_Attrbt_Entity_t                     */
/*                 Qzmf_Msg_Desc_Hdr0100_t                           */
/*                                                                   */
/*                 Qzmf_ORGL0100_t                                   */
/*                 Qzmf_ENVL0100_t                                   */
/*                 Qzmf_RCPL0100_t                                   */
/*                 Qzmf_ROAL0100_t                                   */
/*                 Qzmf_RTAL0100_t                                   */
/*                 Qzmf_RPYL0100_t                                   */
/*                 Qzmf_ORCL0100_t                                   */
/*                 Qzmf_ATTL0100_t                                   */
/*                 Qzmf_MSGL0100_t                                   */
/*                                                                   */
/*                 Qzmf_Orgntr0100_Msg_Desc_t                        */
/*                 Qzmf_Envlp0100_Msg_Desc_t                         */
/*                 Qzmf_Rcpt0100_Msg_Desc_t                          */
/*                 Qzmf_Rpt_O_Addr0100_Msg_Desc_t                    */
/*                 Qzmf_Rpt_T_Addr0100_Msg_Desc_t                    */
/*                 Qzmf_Rply_T_Addr0100_Msg_Desc_t                   */
/*                 Qzmf_Org_Rcp_Addr0100_Msg_Desc_t                  */
/*                 Qzmf_Attch0100_Msg_Desc_t                         */
/*                 Qzmf_Msg_Type0100_Msg_Desc_t                      */
/*                                                                   */
/* Function Prototype List: None                                     */
/*                                                                   */
/* Change Activity:                                                  */
/*                                                                   */
/* CFD List:                                                         */
/*                                                                   */
/* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION       */
/* ---- ------------ ----- ------ -------   ------------------------ */
/* $A0= D9129400     3D10  940408 BANER :   New Include for V3R1     */
/* $A1= P3967695     3P10  940920 FGOH  :   Add reply requested flag */
/* $A2= D91597.1     3D60  941128 BANER :   Parenthize two defines   */
/* $A3= P3979716     3P10  950301 RIPSTRA:  Add importance to GET    */
/* $A4= P3991537     3P10  950602 HAN:      Chg FSO attach ref struct*/
/* $A5= P3611630     3D20  960119 GJROMAN:  (see below)              */
/*                                                                   */
/* End CFD List.                                                     */
/*                                                                   */
/* Additional notes about the Change Activity                        */
/*                                                                   */
/* A5: Added GET attribute type and structure for MIME Attachment    */
/*                                                                   */
/* End Change Activity.                                              */
/*                                                                   */
/*** END HEADER FILE SPECIFICATIONS **********************************/


#include <pointer.h>
#include <limits.h>

#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(P128)      /* @B1A*/
#endif                       /* @B1A*/

typedef char Qzmf_Type_Value_t[4];
typedef char Qzmf_Format_Name_t[8];
typedef char Qzmf_Msg_Id_t[32];
typedef long int Qzmf_CCSID_t;
typedef char Qzmf_Exit_Point_t[20];

typedef _Packed struct Qzmf_Exit_Pgm_Lib_Name
{
   char                    Program_Name[10];
   char                    Library_Name[10];
} Qzmf_Exit_Pgm_Lib_Name_t;

typedef char Qzmf_Type_Group_t[2];
typedef char Qzmf_Type_Name_t[8];
typedef char Qzmf_User_Space_t[20];

typedef _Packed struct Qzmf_Date
{
   char                    Year[2];
   char                    Month[2];
   char                    Day[2];
} Qzmf_Date_t;

typedef _Packed struct Qzmf_Time
{
   char                    Hour[2];
   char                    Minute[2];
   char                    Second[2];
} Qzmf_Time_t;

typedef _Packed struct Qzmf_System_Timestamp
{
   char                    Century_Digit;
   Qzmf_Date_t             Date;
   Qzmf_Time_t             Time;
   char                    Milli_Second[3];
} Qzmf_System_Timestamp_t;


typedef char Qzmf_Msg_Id_Qry_Status_t;

/*-------------------------------------------------------------------*/
/***   Following are the Valid MSF Configuration API Type Groups   ***/
/*-------------------------------------------------------------------*/

#define  QZMF_ADDR_TYPE_GROUP         "01"
#define  QZMF_MSG_TYPE_GROUP          "02"
#define  QZMF_ENV_TYPE_GROUP          "03"
#define  QZMF_ATTACH_TYPE_GROUP       "04"

#define  QZMF_LST_SEL_NO_TYPE_GROUP   "  "


#define  QZMF_TYPE_GROUP_LENGTH       (sizeof(Qzmf_Type_Group_t))


/*-------------------------------------------------------------------*/
/***   Following are the Valid MSF Configuration API Format Names  ***/
/*-------------------------------------------------------------------*/

#define  QZMF_ADD_CONFIG_FORMAT         "ADDC0100"
#define  QZMF_DEL_CONFIG_FORMAT         "DLTC0100"
#define  QZMF_LST_SELECTION_FORMAT      "LSTC0100"
#define  QZMF_LST_RECEIVER_FORMAT       "LSTL0100"

#define  QZMF_MSF_CONFIG_FMT_LENGTH     (sizeof(Qzmf_Format_Name_t))


/*-------------------------------------------------------------------*/
/***   Following are the Valid MSF Messaging API Format Names      ***/
/*-------------------------------------------------------------------*/

#define  QZMF_CRT_MAIL_MSG_FORMAT       "CRTM0100"
#define  QZMF_RTV_MAIL_MSG_FORMAT       "RTVM0100"
#define  QZMF_CHG_MAIL_MSG_FORMAT       "CHGM0100"
#define  QZMF_RSV_MAIL_MSG_FORMAT       "RSVF0100"
#define  QZMF_QRY_MAIL_MSG_FORMAT       "QRYF0100"
#define  QZMF_RMV_RSV_MAIL_MSG_FORMAT   "RMVF0100"
#define  QZMF_CRT_CMP_MAIL_MSG_FORMAT   "CCMP0100"

#define  QZMF_MSF_MSG_API_FMT_LENGTH    (sizeof(Qzmf_Format_Name_t))


/*-------------------------------------------------------------------*/
/** Various Format definitions of the Message Descriptor Structure  **/
/*-------------------------------------------------------------------*/

#define  QZMF_ORIGINATOR_LIST_FMT       "ORGL0100"
#define  QZMF_ENVELOPE_LIST_FMT         "ENVL0100"
#define  QZMF_RECIPIENT_LIST_FMT        "RCPL0100"
#define  QZMF_RECIPIENT_HIST_FMT        "RCHL0100"
#define  QZMF_REPORT_ON_ADDR_FMT        "ROAL0100"
#define  QZMF_REPORT_TO_ADDR_FMT        "RTAL0100"
#define  QZMF_REPLY_TO_ADDR_FMT         "RPYL0100"
#define  QZMF_ORIGINAL_RECIPIENT_FMT    "ORCL0100"
#define  QZMF_ATTACH_REF_FMT            "ATTL0100"
#define  QZMF_MSG_TYPE_LIST_FMT         "MSGL0100"
#define  QZMF_USR_EXT_HIST_FMT          "EXCH0100"
#define  QZMF_CRTN_ATTRB_FMT            "CRTA0100"

#define  QZMF_MSG_DESC_FMT_LENGTH       (sizeof(Qzmf_Format_Name_t))


/*-------------------------------------------------------------------*/
/*****    Different Distribution Types associated with Recipients ****/
/*-------------------------------------------------------------------*/

#define  QZMF_DIST_TYPE_NORMAL  0
#define  QZMF_DIST_TYPE_CC      1
#define  QZMF_DIST_TYPE_BCC     2


/*-------------------------------------------------------------------*/
/*******  Different Statuses associated with Recipient Entries  ******/
/*-------------------------------------------------------------------*/

#define  QZMF_STATUS_FORWARDED             1
#define  QZMF_STATUS_IGNORE                2
#define  QZMF_STATUS_LOCAL                 3
#define  QZMF_STATUS_NON_DELV              4
#define  QZMF_STATUS_SECRTY_VIOLATION      5
#define  QZMF_STATUS_REPROCESS            -1


/*-------------------------------------------------------------------*/
/******    Different Recipient Statuses (see RCHL0100 Format)    *****/
/*-------------------------------------------------------------------*/

#define  QZMF_STATUS_CHILDREN              0
#define  QZMF_STATUS_PARENT                1

/*-------------------------------------------------------------------*/
/**** Change Indicator Possible Values (see EXCH0100 Format)      ****/
/*-------------------------------------------------------------------*/

#define  QZMF_MSG_UNCHANGED               '0'
#define  QZMF_MSG_CHANGED                 '1'


/*-------------------------------------------------------------------*/
/**** Possible values of Msg-Id Status (see QzmfQryMailMsgId API) ****/
/*-------------------------------------------------------------------*/

#define  QZMF_MSG_ID_UNKNOWN              '0'
#define  QZMF_MSG_ID_CREATED              '1'
#define  QZMF_MSG_ID_RSVRD_AND_CREATED    '2'
#define  QZMF_MSG_ID_RSVRD_AND_PROCSSD    '3'
#define  QZMF_MSG_ID_RESERVED             '4'


/*-------------------------------------------------------------------*/
/**** Addition Indicator value in the Unique_Id                   ****/
/*         (see QzmfChgMailMsg API)                                  */
/*-------------------------------------------------------------------*/

#define  QZMF_UNIQUE_ID_ADD_ENTRY         -1


/*-------------------------------------------------------------------*/
/**** Following are some Maximum values allowed for various       ****/
/*    Message Descriptor Entries                                     */
/*-------------------------------------------------------------------*/

#define  QZMF_MAX_MSG_DESC_SIZE            16000000
#define  QZMF_MAX_RECIPIENT_ENTRIES        32768
#define  QZMF_MAX_ADDRESS_LENGTH           1024
#define  QZMF_MAX_SPIN_LENGTH              256


/*-------------------------------------------------------------------*/
/**** Following are the Valid SNAPIN Exit Point Names             ****/
/*-------------------------------------------------------------------*/

#define  QZMF_LIST_EXPANSION          "QIBM_QZMFMSF_LST_EXP"
#define  QZMF_ADDRESS_RESOLUTION      "QIBM_QZMFMSF_ADR_RSL"
#define  QZMF_ENVELOPE_PROCESSING     "QIBM_QZMFMSF_ENL_PSS"
#define  QZMF_ATTACHMENT_CONVERSION   "QIBM_QZMFMSF_ATT_CNV"
#define  QZMF_SECURITY_AND_AUTHORITY  "QIBM_QZMFMSF_SEC_AUT"
#define  QZMF_LOCAL_DELIVERY          "QIBM_QZMFMSF_LCL_DEL"
#define  QZMF_MESSAGE_FORWARDING      "QIBM_QZMFMSF_MSG_FWD"
#define  QZMF_NON_DELIVERY            "QIBM_QZMFMSF_NON_DEL"
#define  QZMF_ATTACHMENT_MANAGEMENT   "QIBM_QZMFMSF_ATT_MGT"
#define  QZMF_ACCOUNTING              "QIBM_QZMFMSF_ACT    "


/*-------------------------------------------------------------------*/
/**** Following two are the remaining User Exit Point Names       ****/
/*-------------------------------------------------------------------*/

#define  QZMF_VALIDATE_DATA           "QIBM_QZMFMSF_VLD_TYP"
#define  QZMF_TRACK_MAIL_CHANGE       "QIBM_QZMFMSF_TRK_CHG"

#define  QZMF_EXIT_POINT_LENGTH       (sizeof(Qzmf_Exit_Point_t))


/*-------------------------------------------------------------------*/
/**** Following are the MSF Exit Point/Program-Data Formats       ****/
/*-------------------------------------------------------------------*/

#define  QZMF_EXIT_POINT_FORMAT         "MSFF0100"
#define  QZMF_SNAPIN_FORMAT             "SPCL0100"
#define  QZMF_VALIDATE_DATA_FORMAT      "VDFF0100"
#define  QZMF_TRACK_MAIL_CHANGE_FORMAT  "TCMM0100"

#define  QZMF_EXIT_FMT_LENGTH           (sizeof(Qzmf_Format_Name_t))


/*-------------------------------------------------------------------*/
/**** Following can be the returned code after a SNAPIN Call      ****/
/*-------------------------------------------------------------------*/

#define  QZMF_CONTINUE                0
#define  QZMF_BACKOUT_CHANGE          1
#define  QZMF_END_MSF_JOB             2
#define  QZMF_END_MSG_PROCESSING      3


/*-------------------------------------------------------------------*/
/**** Following can be the returned code from Track Change Exit  *****/
/*-------------------------------------------------------------------*/

#define  QZMF_TRACK_OK                0
#define  QZMF_TRACK_INVALID_DATA      1
#define  QZMF_TRACK_SEVERE_ERR        2



/*********************************************************************/
/**** Following are some constants and type definitions           ****/
/**** pertaining to the IBM GET (Generic Envelope Type)           ****/
/*********************************************************************/

#define  QZMF_GET_INT_ATTRIBUTE_LENGTH          \
(sizeof(Qzmf_GET_Int_Attrbt_t))
#define  QZMF_GET_TIMESTAMP_ATTRIBUTE_LENGTH     \
(sizeof(Qzmf_GET_Timestamp_Attrbt_t))

/*-------------------------------------------------------------------*/
/**** Following are the valid values for GMT Delta Indicator in   ****/
/**** IBM GET                                                     ****/
/*-------------------------------------------------------------------*/

#define  QZMF_GET_GMT_DELTA_POSITIVE       '0'
#define  QZMF_GET_GMT_DELTA_NEGATIVE       '1'
#define  QZMF_GET_GMT_DELTA_UNSPECIFIED    '2'

/*-------------------------------------------------------------------*/
/**** Following are the predefined Attachment Types in IBM GET    ****/
/*-------------------------------------------------------------------*/

#define  QZMF_GET_CMC_ATTACHMENT       "CMC"
#define  QZMF_GET_OID_ATTACHMENT       "OID"
#define  QZMF_GET_BLT_ATTACHMENT       "BLT"

/*-------------------------------------------------------------------*/
/**** Following are the valid GET Attribute Types             @A5C****/
/*-------------------------------------------------------------------*/

enum Qzmf_GET_Attrbt_Type
{
   Qzmf_GET_Subject_Id             =  1,
   Qzmf_GET_Creation_Tmstmp_Id     =  2,
   Qzmf_GET_Expiration_Tmstmp_Id   =  3,
   Qzmf_GET_Reply_By_Tmstmp_Id     =  4,
   Qzmf_GET_Delivery_Type_Id       =  5,
   Qzmf_GET_Priority_Type_Id       =  6,
   Qzmf_GET_Elctrnc_Signature_Id   =  7,
   Qzmf_GET_Sensitivity_Type_Id    =  8,
   Qzmf_GET_Return_Contents_Id     =  9,
   Qzmf_GET_Non_Delivery_Id        =  10,
   Qzmf_GET_Delivery_Report_Id     =  11,
   Qzmf_GET_Receipt_Notif_Id       =  12,
   Qzmf_GET_Forward_Notif_Id       =  13,
   Qzmf_GET_Encryption_Id          =  14,
   Qzmf_GET_Conversion_Id          =  15,
   Qzmf_GET_No_Loss_Conv_Id        =  16,
   Qzmf_GET_Disclose_Rcpnts_Id     =  17,
   Qzmf_GET_Alternate_Rcpnts_Id    =  18,
   Qzmf_GET_Reassign_Rcpnts_Id     =  19,
   Qzmf_GET_Expand_Dist_List_Id    =  20,
   Qzmf_GET_Note_Content_Id        =  21,
   Qzmf_GET_Msg_Size_Id            =  22,
   Qzmf_GET_Appl_Uniq_Id_Id        =  23,
   Qzmf_GET_Appl_Ref_Uniq_Id_Id    =  24,
   Qzmf_GET_Reference_Id           =  25,
   Qzmf_GET_Attachment_Id          =  26,
   Qzmf_GET_Importance_Id          =  27,
   Qzmf_GET_ODF_Id                 =  98,
   Qzmf_GET_MIME_Att_Id            = 100
};

/*-------------------------------------------------------------------*/
/**** Following Type Definitions are used to define various IBM   ****/
/**** GET Attributes                                              ****/
/*-------------------------------------------------------------------*/


typedef enum Qzmf_GET_Delv_Type_Values
{
   Qzmf_New_Message            =  0,
   Qzmf_Del_Report             =  1,
   Qzmf_Non_Del_Report         =  2,
   Qzmf_Receipt_Notify         =  3,
   Qzmf_Forward_Notify         =  4,
   Qzmf_Delv_Long_Force        =  LONG_MAX
} Qzmf_GET_Delv_Type_Values_t;

typedef enum Qzmf_GET_Priority_Values
{
   Qzmf_Normal_Priority        =  0,
   Qzmf_Non_Urgent_Priority    =  1,
   Qzmf_Urgent_Priority        =  2,
   Qzmf_Prio_Long_Force        =  LONG_MAX
} Qzmf_GET_Priority_Values_t;

typedef enum Qzmf_GET_Sensitivity_Values
{
   Qzmf_Not_Sensitive          =  0,
   Qzmf_Personal               =  1,
   Qzmf_Private                =  2,
   Qzmf_Confidential           =  3,
   Qzmf_Senstv_Long_Force      =  LONG_MAX
} Qzmf_GET_Sensitivity_Values_t;

typedef enum Qzmf_GET_Rtrn_Cntnts_Values
{
   Qzmf_Dont_Return_Contents   =  0,
   Qzmf_Return_Contents        =  1,
   Qzmf_Ret_Cnt_Long_Force     =  LONG_MAX
} Qzmf_GET_Rtrn_Cntnts_Values_t;

typedef enum Qzmf_GET_Non_Delv_Values
{
   Qzmf_No_Non_Delv_Report     =  0,
   Qzmf_Non_Delv_Report        =  1,
   Qzmf_Non_Delv_Long_Force    =  LONG_MAX
} Qzmf_GET_Non_Delv_Values_t;

typedef enum Qzmf_GET_Delv_Rpt_Values
{
   Qzmf_No_Delivery_Report     =  0,
   Qzmf_Delivery_Report        =  1,
   Qzmf_Delv_Rep_Long_Force    =  LONG_MAX
} Qzmf_GET_Delv_Rpt_Values_t;

typedef enum Qzmf_GET_Rcpt_Notif_Values
{
   Qzmf_No_Receipt_Notif       =  0,
   Qzmf_Receipt_Notif          =  1,
   Qzmf_Rcpt_Ntf_Long_Force    =  LONG_MAX
} Qzmf_GET_Rcpt_Notif_Values_t;

typedef enum Qzmf_GET_Frwrd_Notif_Values
{
   Qzmf_No_Forward_Notif       =  0,
   Qzmf_Forward_Notif          =  1,
   Qzmf_Frwrd_Ntf_Long_Force   =  LONG_MAX
} Qzmf_GET_Frwrd_Notif_Values_t;

typedef enum Qzmf_GET_Encryption_Values
{
   Qzmf_Not_Encrypted          =  0,
   Qzmf_Encrypted              =  1,
   Qzmf_Encryption_Force       =  LONG_MAX
} Qzmf_GET_Encryption_Values_t;

typedef enum Qzmf_GET_Conversion_Values
{
   Qzmf_Allow_Conversion       =  0,
   Qzmf_Prohibit_Conversion    =  1,
   Qzmf_Cnv_Long_Force         =  LONG_MAX
} Qzmf_GET_Conversion_Values_t;

typedef enum Qzmf_GET_Loss_Cnvrsn_Values
{
   Qzmf_Allow_Loss_Conv        =  0,
   Qzmf_Not_Allow_Loss_Conv    =  1,
   Qzmf_Loss_Cnv_Long_Force    =  LONG_MAX
} Qzmf_GET_Loss_Cnvrsn_Values_t;

typedef enum Qzmf_GET_Dscl_Rcpnts_Values
{
   Qzmf_Disclose_Rcpnts        =  0,
   Qzmf_Not_Disclose_Rcpnts    =  1,
   Qzmf_Discl_Long_Force       =  LONG_MAX
} Qzmf_GET_Dscl_Rcpnts_Values_t;

typedef enum Qzmf_GET_Alt_Rcpnts_Values
{
   Qzmf_Alternate_Rcpnts       =  0,
   Qzmf_No_Alternate_Rcpnts    =  1,
   Qzmf_Alt_Rcpnt_Long_Force   =  LONG_MAX
} Qzmf_GET_Alt_Rcpnts_Values_t;

typedef enum Qzmf_GET_Rsgn_Rcpnts_Values
{
   Qzmf_Reassign_Rcpnts        =  0,
   Qzmf_No_Reassign_Rcpnts     =  1,
   Qzmf_Rsgn_Rcpnt_Long_Force  =  LONG_MAX
} Qzmf_GET_Rsgn_Rcpnts_Values_t;

typedef enum Qzmf_GET_Expand_DL_Values
{
   Qzmf_Expand_Dist_List       =  0,
   Qzmf_No_Expand_Dist_List    =  1,
   Qzmf_Expnd_DL_Long_Force    =  LONG_MAX
} Qzmf_GET_Expand_DL_Values_t;

typedef enum Qzmf_GET_Importance_Values
{
   Qzmf_Normal_Importance      =  0,
   Qzmf_Low_Importance         =  1,
   Qzmf_High_Importance        =  2,
   Qzmf_Import_Long_Force      =  LONG_MAX
} Qzmf_GET_Importance_Values_t;

typedef _Packed struct Qzmf_GET_GMT_Delta
{
   char                    Delta_Hour[2];
   char                    Delta_Minute[2];
} Qzmf_GET_GMT_Delta_t;

typedef _Packed struct Qzmf_GET_Timestamp
{
   char                    Century_Digit;
   Qzmf_Date_t             Date;
   Qzmf_Time_t             Time;
   char                    GMT_Delta_Indctr;
   Qzmf_GET_GMT_Delta_t    GMT_Delta;
} Qzmf_GET_Timestamp_t;


/*********************************************************************/
/* Type Definition for the GET Envelope                              */
/****                                                             ****/
/* NOTE: The following type definition only defines the fixed        */
/*       portion of the format.  Any varying length field will       */
/*       have to be defined by the user.                             */
/*********************************************************************/

typedef _Packed struct Qzmf_GET
{
   long int                GET_Length;
   long int                First_Attribute_Offset;
   long int                Num_Of_Attributes;
 /*char                    GET_Attribute[];*/    /* varying length   */
} Qzmf_GET_t;


/*********************************************************************/
/* Type Definition for the GET Generic Attribute Structure           */
/****                                                             ****/
/* NOTE: The following type definition only defines the fixed        */
/*       portion of the format.  Any varying length field will       */
/*       have to be defined by the user.                             */
/*********************************************************************/

typedef _Packed struct Qzmf_GET_Generic_Attrbt
{
   long int                Attribute_Length;
   long int                Attribute_Id;
 /*char                    Attribute[];*/        /* varying length   */
} Qzmf_GET_Generic_Attrbt_t;


/*-------------------------------------------------------------------*/
/**** Type definitions for the Integral Type GET Attributes       ****/
/*-------------------------------------------------------------------*/

typedef _Packed struct  Qzmf_GET_Int_Attrbt
{
   long int       Attribute_Length;
   long int       Attribute_Id;
   union
   {
      Qzmf_GET_Delv_Type_Values_t         GET_Delivery_Info;
      Qzmf_GET_Priority_Values_t          GET_Priority_Info;
      Qzmf_GET_Sensitivity_Values_t       GET_Sensitivity_Info;
      Qzmf_GET_Rtrn_Cntnts_Values_t       GET_Return_Contents_Info;
      Qzmf_GET_Non_Delv_Values_t          GET_Non_Delv_Report_Info;
      Qzmf_GET_Delv_Rpt_Values_t          GET_Delivery_Report_Info;
      Qzmf_GET_Rcpt_Notif_Values_t        GET_Receipt_Notif_Info;
      Qzmf_GET_Frwrd_Notif_Values_t       GET_Forward_Notif_Info;
      Qzmf_GET_Encryption_Values_t        GET_Encryption_Info;
      Qzmf_GET_Conversion_Values_t        GET_Conversion_Info;
      Qzmf_GET_Loss_Cnvrsn_Values_t       GET_No_Loss_Conversion_Info;
      Qzmf_GET_Dscl_Rcpnts_Values_t       GET_Disclose_Rcpnts_Info;
      Qzmf_GET_Alt_Rcpnts_Values_t        GET_Alternate_Rcpnts_Info;
      Qzmf_GET_Rsgn_Rcpnts_Values_t       GET_Reassign_Rcpnts_Info;
      Qzmf_GET_Expand_DL_Values_t         GET_Expand_DLs_Info;
      Qzmf_GET_Importance_Values_t        GET_Importance_Info;
      long int                            GET_Msg_Size_In_KBytes_Info;
   } Qzmf_GET_Int_Attrbt_Info;
} Qzmf_GET_Int_Attrbt_t;


/*-------------------------------------------------------------------*/
/**** Type definitions for the Timestamp Type GET Attributes      ****/
/*-------------------------------------------------------------------*/

typedef _Packed struct Qzmf_GET_Timestamp_Attrbt
{
   long int       Attribute_Length;
   long int       Attribute_Id;
   union
   {
      Qzmf_GET_Timestamp_t                GET_Creation_Timestamp;
      Qzmf_GET_Timestamp_t                GET_Expiration_Timestamp;
      Qzmf_GET_Timestamp_t                GET_Reply_By_Timestamp;
   } Qzmf_GET_Tmstmp_Attrbt_Info;
} Qzmf_GET_Timestamp_Attrbt_t;


/*********************************************************************/
/* Type Definitions for the Character-Array Type GET Attributes      */
/****                                                             ****/
/* NOTE: The following type definitions only define the fixed        */
/*       portion of the Attributes.  Any varying length field will   */
/*       have to be defined by the user.                             */
/*********************************************************************/

typedef _Packed struct Qzmf_GET_Subject_Attrbt
{
   long int                Attribute_Length;
   long int                Attribute_Id;
   Qzmf_CCSID_t            CCSID;
   long int                Subject_Length;
 /*char                    Subject[];*/          /* varying length   */
} Qzmf_GET_Subject_Attrbt_t;

typedef _Packed struct Qzmf_GET_Signtr_Attrbt
{
   long int                Attribute_Length;
   long int                Attribute_Id;
   long int                Signature_Length;
 /*char                    Elctrnc_Signtr[];*/   /* varying length   */
} Qzmf_GET_Signtr_Attrbt_t;

typedef _Packed struct Qzmf_GET_Note_Attrbt
{
   long int                Attribute_Length;
   long int                Attribute_Id;
   Qzmf_CCSID_t            CCSID;
   long int                Note_Content_Length;
 /*char                    Note_Content[];*/     /* varying length   */
} Qzmf_GET_Note_Attrbt_t;

typedef _Packed struct Qzmf_GET_Appl_UId_Attrbt
{
   long int                Attribute_Length;
   long int                Attribute_Id;
   long int                Appl_Unique_Id_Length;
 /*char                    Appl_Unique_Id[];*/   /* varying length   */
} Qzmf_GET_Appl_UId_Attrbt_t;

typedef _Packed struct Qzmf_GET_Appl_Rf_UId_Attrbt
{
   long int                Attribute_Length;
   long int                Attribute_Id;
   long int                Appl_Ref_Unique_Id_Length;
 /*char                    Appl_Ref_Unique_Id[];*/ /* varying length */
} Qzmf_GET_Appl_Rf_UId_Attrbt_t;

typedef _Packed struct Qzmf_GET_Ref_Attrbt
{
   long int                Attribute_Length;
   long int                Attribute_Id;
   Qzmf_CCSID_t            CCSID;
   long int                Ref_Data_Length;
 /*char                    Ref_Data[];*/         /* varying length   */
} Qzmf_GET_Ref_Attrbt_t;

typedef _Packed struct Qzmf_GET_Attach_Attrbt
{
   long int                Attribute_Length;
   long int                Attribute_Id;
   long int                Attach_Entry_Length;
 /*char                    Attach_Entry[];*/     /* varying length   */
} Qzmf_GET_Attach_Attrbt_t;

typedef _Packed struct Qzmf_GET_MIME_Att_Attrbt
{  /* if offset is 0, data was not in MIME header */
   long int           Attribute_Length;
   long int           Attribute_Id;
   long int           Attach_Unique_Id;
   long int           Attach_Type_Offset;
   long int           Attach_Description_Offset;
   long int           Attach_Content_ID_Offset;
   long int           Attach_Charset_Offset;
   long int           Attach_Filename_Offset;
 /*char               Attach_Entry[];*/     /* varying length   */
} Qzmf_GET_MIME_Att_Attrbt_t;

/*********************************************************************/
/**** Following are the constants and type definitions            ****/
/**** pertaining to FSO object Attachment Reference.              ****/
/**** QZMF_ATTR_LST_APP, QZMF_ATTR_LST_NAPP and                   ****/
/**** QZMF_ATTR_LST_NONE are used to set Attr_List field of       ****/
/**** Qzmf_FSO_t.                                             @A4A****/
/*********************************************************************/

#define  QZMF_FSO_PROD_ID  "QMSFPRD"
#define  QZMF_ATTR_LST_APP  0x04       /* attr. flag APP         @A4A*/
#define  QZMF_ATTR_LST_NAPP 0x08       /* attr. flag NAPP, Text
                                          FFT FSO                @A4A*/
#define  QZMF_ATTR_LST_NONE 0x00       /* attr. flag binary file @A4A*/

/*********************************************************************/
/* Type Definition for the FSO Attachment Structure                  */
/*********************************************************************/

typedef _Packed struct  Qzmf_FSO
{
   long int                Attach_Ref_Length;
   long int                Reserved1;
   char                    FSO_Handle[32];
   char                    Access_ID[8];
   char                    Product_ID[7];
   char                    Attr_List;                          /*@A4C*/
   long int                Data_Length;
   long int                FS_Name_Length;
   char                    FS_Name[64];
   long int                Resume_Position;
} Qzmf_FSO_t;


/*********************************************************************/
/* Type Definition for the Message Descriptor Attribute Entity       */
/*********************************************************************/

typedef _Packed struct Qzmf_Msg_Desc_Attrbt_Entity
{
   _SPCPTR                 Msg_Desc_Ptr;
   long int                Msg_Desc_Length;
   Qzmf_Format_Name_t      Msg_Desc_Format_Name;
   long int                Reserved;
} Qzmf_Msg_Desc_Attrbt_Entity_t;


/*********************************************************************/
/* Type Definition for the Message Descriptor Common Header          */
/*     for all the relevant XXXX0100 Format Structures               */
/*********************************************************************/

typedef _Packed struct Qzmf_Msg_Desc_Hdr0100
{
   long int                Msg_Desc_Total_Length;
   long int                Bytes_Available;
   Qzmf_Format_Name_t      Msg_Desc_Format_Name;
   long int                First_Entry_Offset;
   long int                Total_Num_Of_Entries;
   long int                Reserved;
 } Qzmf_Msg_Desc_Hdr0100_t;


/*********************************************************************/
/* Type Definition for the ORGL0100 Format                           */
/****                                                             ****/
/* NOTE: The following type definition only defines the fixed        */
/*       portion of the format.  Any varying length field will       */
/*       have to be defined by the user.                             */
/*********************************************************************/


typedef _Packed struct Qzmf_ORGL0100
{
   long int                Entry_Length;
   long int                Displacement;
   long int                Addr_Length;
   Qzmf_Type_Value_t       Addr_Type;
   Qzmf_CCSID_t            CCSID;
   long int                Unique_Id;
   long int                Ref_Unique_Id;
   long int                Reserved;
 /*char                    Origin_Addr[];*/      /* varying length   */
} Qzmf_ORGL0100_t;


/*********************************************************************/
/* Type Definition for the ENVL0100 Format                           */
/****                                                             ****/
/* NOTE: The following type definition only defines the fixed        */
/*       portion of the format.  Any varying length field will       */
/*       have to be defined by the user.                             */
/*********************************************************************/

typedef _Packed struct Qzmf_ENVL0100
{
   long int                Entry_Length;
   long int                Displacement;
   long int                Envelope_Length;
   Qzmf_Type_Value_t       Envelope_Type;
   long int                Unique_Id;
   long int                Ref_Unique_Id;
   long int                Reserved;
 /*char                    Envelope[];*/         /* varying length   */
} Qzmf_ENVL0100_t;


/*********************************************************************/
/* Type Definition for the RCPL0100 Format                           */
/****                                                             ****/
/* NOTE: The following type definition only defines the fixed        */
/*       portion of the format.  Any varying length field will       */
/*       have to be defined by the user.                             */
/*********************************************************************/

typedef _Packed struct Qzmf_RCPL0100
{
   long int                Entry_Length;
   long int                SPIN_Displacement;
   long int                SPIN_Length;
   long int                Recipient_Displacement;
   long int                Addr_Length;
   Qzmf_Type_Value_t       Addr_Type;
   Qzmf_CCSID_t            CCSID;
   long int                Reason_Code;
   long int                Diag_Code;
   Qzmf_Type_Value_t       Msg_Type;
   long int                Status;
   long int                Dist_Type;
   long int                Unique_Id;
   long int                Reserved;
 /*char                    Recipient_Addr[];*/   /* varying length   */
 /*char                    SPIN[];*/             /* varying length   */
 } Qzmf_RCPL0100_t;


/*********************************************************************/
/* Type Definition for the ROAL0100 Format                           */
/****                                                             ****/
/* NOTE: The following type definition only defines the fixed        */
/*       portion of the format.  Any varying length field will       */
/*       have to be defined by the user.                             */
/*********************************************************************/

typedef _Packed struct Qzmf_ROAL0100
{
   long int                Entry_Length;
   long int                SPIN_Displacement;
   long int                SPIN_Length;
   long int                Report_Displacement;
   long int                Addr_Length;
   Qzmf_Type_Value_t       Addr_Type;
   Qzmf_CCSID_t            CCSID;
   long int                Reason_Code;
   long int                Diag_Code;
   long int                Unique_Id;
   long int                Ref_Unique_Id;
   long int                Reserved;
 /*char                    Report_On_Addr[];*/   /* varying length   */
 /*char                    SPIN[];*/             /* varying length   */
} Qzmf_ROAL0100_t;


/*********************************************************************/
/* Type Definition for the RTAL0100 Format                           */
/****                                                             ****/
/* NOTE: The following type definition only defines the fixed        */
/*       portion of the format.  Any varying length field will       */
/*       have to be defined by the user.                             */
/*********************************************************************/


typedef _Packed struct Qzmf_RTAL0100
{
   long int                Entry_Length;
   long int                Displacement;
   long int                Addr_Length;
   Qzmf_Type_Value_t       Addr_Type;
   Qzmf_CCSID_t            CCSID;
   long int                Unique_Id;
   long int                Ref_Unique_Id;
   long int                Reserved;
 /*char                    Report_To_Addr[];*/   /* varying length   */
} Qzmf_RTAL0100_t;

/*********************************************************************/
/* Type Definition for the RPYL0100 Format                           */
/****                                                             ****/
/* NOTE: The following type definition only defines the fixed        */
/*       portion of the format.  Any varying length field will       */
/*       have to be defined by the user.                             */
/*********************************************************************/


typedef _Packed struct Qzmf_RPYL0100
{
   long int                Entry_Length;
   long int                Displacement;
   long int                Addr_Length;
   Qzmf_Type_Value_t       Addr_Type;
   Qzmf_CCSID_t            CCSID;
   long int                Unique_Id;
   long int                Ref_Unique_Id;
   long int                Reserved;
 /*char                    Reply_To_Addr[];*/    /* varying length   */
} Qzmf_RPYL0100_t;

/*********************************************************************/
/* Type Definition for the ORCL0100 Format                           */
/****                                                             ****/
/* NOTE: The following type definition only defines the fixed        */
/*       portion of the format.  Any varying length field will       */
/*       have to be defined by the user.                             */
/*********************************************************************/


typedef _Packed struct Qzmf_ORCL0100
{
   long int                Entry_Length;
   long int                Displacement;
   long int                Addr_Length;
   Qzmf_Type_Value_t       Addr_Type;
   Qzmf_CCSID_t            CCSID;
   long int                Dist_Type;
   long int                Reply_Req_Flag;
   long int                Unique_Id;
   long int                Ref_Unique_Id;
   long int                Reserved;
 /*char                    Org_Rcpnt_Addr[];*/   /* varying length   */
} Qzmf_ORCL0100_t;


/*********************************************************************/
/* Type Definition for the ATTL0100 Format                           */
/****                                                             ****/
/* NOTE: The following type definition only defines the fixed        */
/*       portion of the format.  Any varying length field will       */
/*       have to be defined by the user.                             */
/*********************************************************************/

typedef _Packed struct Qzmf_ATTL0100
{
   long int                Entry_Length;
   long int                Displacement;
   long int                Attach_Length;
   Qzmf_Type_Value_t       Attach_Type;
   long int                Unique_Id;
   long int                Ref_Unique_Id;
   long int                Reserved;
 /*char                    Attach_Ref[];*/       /* varying length   */
} Qzmf_ATTL0100_t;


/*********************************************************************/
/* Type Definition for the MSGL0100 Format                           */
/*********************************************************************/

typedef _Packed struct Qzmf_MSGL0100
{
   Qzmf_Type_Value_t       Msg_Type;
} Qzmf_MSGL0100_t;



/*********************************************************************/
/* Type Definition for the ORGL0100 Message Descriptor               */
/****                                                             ****/
/* NOTE: The following type definition only defines the fixed        */
/*       portion of the format.  Any varying length field will       */
/*       have to be defined by the user.                             */
/*********************************************************************/

typedef _Packed struct Qzmf_Orgntr0100_Msg_Desc
{
   Qzmf_Msg_Desc_Hdr0100_t Msg_Desc_Hdr;
 /*Qzmf_ORGL0100_t         Originator[];*/       /* varying length   */
} Qzmf_Orgntr0100_Msg_Desc_t;


/*********************************************************************/
/* Type Definition for the ENVL0100 Message Descriptor               */
/****                                                             ****/
/* NOTE: The following type definition only defines the fixed        */
/*       portion of the format.  Any varying length field will       */
/*       have to be defined by the user.                             */
/*********************************************************************/

typedef _Packed struct Qzmf_Envlp0100_Msg_Desc
{
   Qzmf_Msg_Desc_Hdr0100_t Msg_Desc_Hdr;
 /*Qzmf_ENVL0100_t         Envelope[];*/         /* varying length   */
} Qzmf_Envlp0100_Msg_Desc_t;


/*********************************************************************/
/* Type Definition for the RCPL0100 Message Descriptor               */
/****                                                             ****/
/* NOTE: The following type definition only defines the fixed        */
/*       portion of the format.  Any varying length field will       */
/*       have to be defined by the user.                             */
/*********************************************************************/

typedef _Packed struct Qzmf_Rcpt0100_Msg_Desc
{
   Qzmf_Msg_Desc_Hdr0100_t Msg_Desc_Hdr;
 /*Qzmf_RCPL0100_t         Recipient[];*/        /* varying length   */
} Qzmf_Rcpt0100_Msg_Desc_t;


/*********************************************************************/
/* Type Definition for the ROAL0100 Message Descriptor               */
/****                                                             ****/
/* NOTE: The following type definition only defines the fixed        */
/*       portion of the format.  Any varying length field will       */
/*       have to be defined by the user.                             */
/*********************************************************************/

typedef _Packed struct Qzmf_Rpt_O_Addr0100_Msg_Desc
{
   Qzmf_Msg_Desc_Hdr0100_t Msg_Desc_Hdr;
 /*Qzmf_ROAL0100_t         Report_On_Addr[];*/   /* varying length   */
} Qzmf_Rpt_O_Addr0100_Msg_Desc_t;


/*********************************************************************/
/* Type Definition for the RTAL0100 Message Descriptor               */
/****                                                             ****/
/* NOTE: The following type definition only defines the fixed        */
/*       portion of the format.  Any varying length field will       */
/*       have to be defined by the user.                             */
/*********************************************************************/

typedef _Packed struct Qzmf_Rpt_T_Addr0100_Msg_Desc
{
   Qzmf_Msg_Desc_Hdr0100_t Msg_Desc_Hdr;
 /*Qzmf_RTAL0100_t         Report_To_Addr[];*/   /* varying length   */
} Qzmf_Rpt_T_Addr0100_Msg_Desc_t;


/*********************************************************************/
/* Type Definition for the RPYL0100 Message Descriptor               */
/****                                                             ****/
/* NOTE: The following type definition only defines the fixed        */
/*       portion of the format.  Any varying length field will       */
/*       have to be defined by the user.                             */
/*********************************************************************/

typedef _Packed struct Qzmf_Rply_T_Addr0100_Msg_Desc
{
   Qzmf_Msg_Desc_Hdr0100_t Msg_Desc_Hdr;
 /*Qzmf_RPYL0100_t         Reply_To_Addr[];*/    /* varying length   */
} Qzmf_Rply_T_Addr0100_Msg_Desc_t;


/*********************************************************************/
/* Type Definition for the ORCL0100 Message Descriptor               */
/****                                                             ****/
/* NOTE: The following type definition only defines the fixed        */
/*       portion of the format.  Any varying length field will       */
/*       have to be defined by the user.                             */
/*********************************************************************/

typedef _Packed struct Qzmf_Org_Rcp_Addr0100_Msg_Desc
{
   Qzmf_Msg_Desc_Hdr0100_t Msg_Desc_Hdr;
 /*Qzmf_ORCL0100_t         Org_Rcpt_Addr[];*/    /* varying length   */
} Qzmf_Org_Rcp_Addr0100_Msg_Desc_t;


/*********************************************************************/
/* Type Definition for the ATTL0100 Message Descriptor               */
/****                                                             ****/
/* NOTE: The following type definition only defines the fixed        */
/*       portion of the format.  Any varying length field will       */
/*       have to be defined by the user.                             */
/*********************************************************************/

typedef _Packed struct Qzmf_Attch0100_Msg_Desc
{
   Qzmf_Msg_Desc_Hdr0100_t Msg_Desc_Hdr;
 /*Qzmf_ATTL0100_t         Attch_Ref[];*/        /* varying length   */
} Qzmf_Attch0100_Msg_Desc_t;


/*********************************************************************/
/* Type Definition for the MSGL0100 Message Descriptor               */
/****                                                             ****/
/* NOTE: The following type definition only defines the fixed        */
/*       portion of the format.  Any varying length field will       */
/*       have to be defined by the user.                             */
/*********************************************************************/

typedef _Packed struct Qzmf_Msg_Type0100_Msg_Desc
{
   Qzmf_Msg_Desc_Hdr0100_t Msg_Desc_Hdr;
 /*Qzmf_MSGL0100_t         Message_Type[];*/     /* varying length   */
} Qzmf_Msg_Type0100_Msg_Desc_t;
#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(pop)       /* @B1A*/
#endif                       /* @B1A*/

#endif /*_QZMF_H*/
