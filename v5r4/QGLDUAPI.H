/* begin_generated_IBM_copyright_prolog                              */
/* This is an automatically generated copyright prolog.              */
/* After initializing,  DO NOT MODIFY OR MOVE                        */
/* ----------------------------------------------------------------- */
/*                                                                   */
/* Product(s):                                                       */
/*     5769-SS1                                                      */
/*     5722-SS1                                                      */
/*                                                                   */
/* (C)Copyright IBM Corp.  1997, 2005                                */
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
#ifndef _qglduapi_h_
#define _qglduapi_h_

#ifdef __cplusplus
  #pragma info(none)
#else
  #pragma nomargins nosequence
  #pragma checkout(suspend)
#endif

 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: qglduapi.h                                   */
 /*                                                                */
 /* Descriptive Name: Directory Server Administration APIs         */
 /*                                                                */
 /* 5769-SS1,5722-SS1  (C) Copyright IBM Corp. 1997,2002           */
 /* All rights reserved.                                           */
 /* US Government Users Restricted Rights -                        */
 /* Use, duplication or disclosure restricted                      */
 /* by GSA ADP Schedule Contract with IBM Corp.                    */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /*                                                                */
 /* Description: This file provides structure definitions and      */
 /*              function prototypes for the Directory Server      */
 /*              Administration and Configuration APIs.  These     */
 /*              APIs are contained in service program QDIRSRV/    */
 /*              QGLDUAPI.                                         */
 /*                                                                */
 /* Header Files Included: None.                                   */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List:                                                */
 /*    QgldRtvDirSvrA_RSVR0100                                     */
 /*    QgldRtvDirSvrA_RSVR0400                                     */
 /*    QgldRtvDirSvrA_RSVR0700                                 @A4A*/
 /*    QgldRtvDirSvrA_RSVR0900                                 @A7A*/
 /*    QgldLstDirSvrA_LSVR0200                                     */
 /*    QgldLstDirSvrA_LSVR0300                                     */
 /*    QgldLstDirSvrA_LSVR0500                                 @A1A*/
 /*    QgldLstDirSvrA_LSVR0600                                 @A2A*/
 /*    QgldLstDirSvrA_LSVR0800                                 @A6A*/
 /*    QgldChgDirSvrA_CSVR0100                                     */
 /*    QgldChgDirSvrA_CSVR0200                                     */
 /*    QgldChgDirSvrA_SuffixEntry                                  */
 /*    QgldChgDirSvrA_CSVR0300                                     */
 /*    QgldChgDirSvrA_AddChgIdxEntry                               */
 /*    QgldChgDirSvrA_RmvIdxEntry                                  */
 /*    QgldChgDirSvrA_CSVR0400                                     */
 /*    QgldChgDirSvrA_CSVR0500                                 @A1A*/
 /*    QgldChgDirSvrA_AddChgPubAgtEntry                        @A1A*/
 /*    QgldChgDirSvrA_RmvPubAgtEntry                           @A1A*/
 /*    QgldChgDirSvrA_CSVR0600                                 @A2A*/
 /*    QgldChgDirSvrA_RefSvrEntry                              @A2A*/
 /*    QgldChgDirSvrA_CSVR0700                                 @A4A*/
 /*    QgldChgDirSvrA_CSVR0800                                 @A6A*/
 /*    QgldChgDirSvrA_IpAddrEntry                              @A6A*/
 /*    QgldChgDirSvrA_CSVR0900                                 @A7A*/
 /*    QgldCfgDirSvr_CFGD0100                                      */
 /*    QgldCfgDirSvr_SuffixEntry                                   */
 /*    QgldExportLdif_LDIF0100                                     */
 /*    QgldExportLdif_LDIF0200                                 @A7A*/
 /*    QgldImportLdif_LDIF0100                                     */
 /*    QgldImportLdif_LDIF0200                                     */
 /*                                                            @A7A*/
 /* Function Prototype List:                                       */
 /*    QgldRtvDirSvrA - Retrieve Directory Server Attributes       */
 /*    QgldLstDirSvrA - Open List of Directory Server Attributes   */
 /*    QgldChgDirSvrA - Change Directory Server Attributes         */
 /*    QgldCfgDirSvr  - Configure Directory Server                 */
 /*    QgldExportLdif - Export LDAP Data Interchange Format File   */
 /*    QgldImportLdif - Import LDAP Data Interchange Format File   */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /*    FLAG REASON   VERS DATE   PGMR  COMMENTS                    */
 /*    ---- -------- ---- ------ ----  --------------------------- */
 /*    $A0= D95431   4D30 970926 JAM : New Include.                */
 /*    $A1= D97183   4D40 980430 PAW : Add new formats for LDAP    */
 /*                                    publishing information.     */
 /*    $A2= D97487   4D50 990302 PAW : LDAP V3 support.            */
 /*    $A3= D98212.2 5D10 000103 GAC : Teraspace stage 2.          */
 /*    $A4= D98328   5D10 000328 PAW : SecureWay 3.2 support.      */
 /*    $A5= D98606.1 5D20 010405 BLK : OS/400 V5R2 support.        */
 /*    $A6= D98684.6 5D20 010904 PAW : Add new formats for IP      */
 /*                                    address information.        */
 /*    $A7= D99285.5 5D30 021118 PAW : OS/400 V5R3 support.        */
 /*    $B1= D99827.4 5D40 040514 NAGI: Add TLS support             */
 /*    $B2= P9A90694 5D40 050524 JACKY: Add AES-256 cipher         */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

 #if (__OS400_TGTVRM__>=510)                                /* @A3A*/
     #pragma datamodel(P128)                                /* @A3A*/
 #endif                                                     /* @A3A*/

/*******************************************
* Includes
*******************************************/

/*******************************************
* Type definitions and structures
*******************************************/

/* UCS-2 encoding of *NONE */
static const unsigned short GLD_UCS2_NONE[] =
{ 0x2A, 0x4E, 0x4F, 0x4E, 0x45 };

/* UTF-16 encoding of *NONE */
static const unsigned short GLD_UTF16_NONE[] =
{ 0x2A, 0x4E, 0x4F, 0x4E, 0x45 };

/* UCS-2 encoding of *DEFAULT */
static const unsigned short GLD_UCS2_DEFAULT[] =
{ 0x2A, 0x44, 0x45, 0x46, 0x41, 0x55, 0x4C, 0x54 };

/* UTF-16 encoding of *DEFAULT */
static const unsigned short GLD_UTF16_DEFAULT[] =
{ 0x2A, 0x44, 0x45, 0x46, 0x41, 0x55, 0x4C, 0x54 };

/* UTF-16 encoding of *ALL */
static const unsigned short GLD_UTF16_ALL[] =
{ 0x2A, 0x41, 0x4C, 0x4C };

#define GLD_READONLY    1
#define GLD_READWRITE   0

#define GLD_SERVER_IS_REPLICA   1
#define GLD_SERVER_IS_MASTER    0

#define GLD_NO_LIMIT    0

#define GLD_TRIPLE_DES_SHA_US   0x0100
#define GLD_DES_SHA_US          0x0200
#define GLD_RC4_SHA_US          0x0400
#define GLD_RC4_MD5_US          0x0800
#define GLD_RC2_MD5_EXPORT      0x1000
#define GLD_RC4_MD5_EXPORT      0x2000
#define GLD_AES_SHA_US          0x4000
#define GLD_AES_128_SHA_US      0x4000                            /* @B2A */
#define GLD_AES_256_SHA_US      0x8000                            /* @B2A */

#define GLD_STD_NONENCRYPTED_PORT 389
#define GLD_STD_ENCRYPTED_PORT    636

#define GLD_NONENCRYPTED_ONLY                 1
#define GLD_ENCRYPTED_ONLY                    2
#define GLD_ENCRYPTED_AND_NONENCRYPTED        3
#define GLD_ENCRYPTED_AND_NONENCRYPTED_SSLTLS 4                    /* @B1A*/
#define GLD_NONENCRYPTED_TLS                  5                    /* @B1A*/

#define GLD_RULE_NONE           0
#define GLD_RULE_EQUAL          1
#define GLD_RULE_APPROXIMATE    2
#define GLD_RULE_SUBSTRING      4

#define GLD_ACTION_ADD          1
#define GLD_ACTION_CHANGE       2
#define GLD_ACTION_REMOVE       3

#define GLD_PWD_FORMAT_CLEAR    1
#define GLD_PWD_FORMAT_SHA      2
#define GLD_PWD_FORMAT_MD5      3
#define GLD_PWD_FORMAT_CRYPT    4

#define GLD_INT_NO_CHANGE       (-1)
#define GLD_UCS2_NO_CHANGE      0
#define GLD_UTF16_NO_CHANGE     GLD_UCS2_NO_CHANGE

#define GLD_ENABLE_PUB_AGENT    0
#define GLD_DISABLE_PUB_AGENT   1

#define GLD_SSL_AUTH_SVR        1
#define GLD_SSL_AUTH_CLNT_SVR   3

#define GLD_SCHEMA_CHECK_NONE   0
#define GLD_SCHEMA_CHECK_V2     1
#define GLD_SCHEMA_CHECK_V3_S   2
#define GLD_SCHEMA_CHECK_V3_L   3

#define GLD_DFT_DB_CONNS        4

#define GLD_TERM_IDLE_OFF       0
#define GLD_TERM_IDLE_ON        1

#define GLD_INT_NO              0
#define GLD_INT_YES             1

#define GLD_ACL_MODEL_ATTRIBUTE 1

#define GLD_OBJECT_AUDIT_OFF    0
#define GLD_OBJECT_AUDIT_CHANGE 1
#define GLD_OBJECT_AUDIT_ACCESS 2

#define GLD_AUTHINT_NONE        0
#define GLD_AUTHINT_DIRECT      1

#define GLD_RSVR0100 "RSVR0100"
#define GLD_RSVR0400 "RSVR0400"
#define GLD_RSVR0700 "RSVR0700"
#define GLD_RSVR0900 "RSVR0900"
#define GLD_LSVR0200 "LSVR0200"
#define GLD_LSVR0300 "LSVR0300"
#define GLD_LSVR0500 "LSVR0500"
#define GLD_LSVR0600 "LSVR0600"
#define GLD_LSVR0800 "LSVR0800"
#define GLD_CSVR0100 "CSVR0100"
#define GLD_CSVR0200 "CSVR0200"
#define GLD_CSVR0300 "CSVR0300"
#define GLD_CSVR0400 "CSVR0400"
#define GLD_CSVR0500 "CSVR0500"
#define GLD_CSVR0600 "CSVR0600"
#define GLD_CSVR0700 "CSVR0700"
#define GLD_CSVR0800 "CSVR0800"
#define GLD_CSVR0900 "CSVR0900"
#define GLD_CGFD0100 "CFGD0100"
#define GLD_LDIF0100 "LDIF0100"
#define GLD_LDIF0200 "LDIF0200"

typedef _Packed struct QgldRtvDirSvrA_RSVR0100
{
    int         Bytes_Returned;
    int         Bytes_Available;
    int         Version;
    int         Readonly;
    int         Server_Is_Replica;
    int         Security;
    int         Nonencrypted_Port_Number;
    int         Encrypted_Port_Number;
    int         Current_Cipher_Protocols;
    int         Installed_Cipher_Protocols;
    int         Search_Time_Limit;
    int         Search_Size_Limit;
    int         Maximum_Connections;
    int         Reserved1;
    int         Referral_Port;
    int         Password_Format;
    int         Offset_To_Referral_Server;
    int         Length_Of_Referral_Server;
    int         Offset_To_Administrator_Dn;
    int         Length_Of_Administrator_Dn;
    int         Offset_To_Update_Dn;
    int         Length_Of_Update_Dn;
    int         Offset_To_Key_Ring_File;
    int         Length_Of_Key_Ring_File;
    int         Offset_To_Database_Path;
    int         Length_Of_Database_Path;
    int         Reserved;
    int         SSL_Authentication_Method;
    int         Number_Of_Database_Conns;
    int         Schema_Checking_Level;
    int         Offset_To_Master_Server_URL;
    int         Length_Of_Master_Server_URL;
    int         Change_Log_Indicator;
    int         Max_Num_Change_Log_Entries;
    int         Terminate_Idle_Conns;
    int         Kerberos_Auth_Indicator;
    int         Offset_To_Kerb_Key_Tab_File;
    int         Length_Of_Kerb_Key_Tab_File;
    int         Kerb_To_Dn_Mapping_Indicator;
    int         Offset_To_Kerb_Admin_Id;
    int         Length_Of_Kerb_Admin_Id;
    int         Offset_To_Kerb_Admin_Realm;
    int         Length_Of_Kerb_Admin_Realm;
    int         Event_Notification_Reg_Ind;
    int         Max_Num_Event_Regs_For_Conn;
    int         Max_Num_Event_Regs_For_Server;
    int         Max_Num_Ops_Per_Transaction;
    int         Max_Num_Pending_Transactions;
    int         Transaction_Time_Limit;
    int         ACL_Model;
    int         Level_Of_Authority_Integration;
    int         Offset_To_Proj_Sys_Suffix;
    int         Length_Of_Proj_Sys_Suffix;
    int         Schema_Readonly;
    int         Proj_Sys_Readonly;
    int         Log_Client_Messages;
    int         Max_Age_Change_Log_Entries;
} QgldRtvDirSvrA_RSVR0100;

typedef _Packed struct QgldRtvDirSvrA_RSVR0400
{
    int         Bytes_Returned;
    int         Bytes_Available;
    int         Offset_To_Server_Name;
    int         Length_Of_Server_Name;
    int         LDAP_Port_Number;
    int         Connection_Type;
    union
    {
        int     Offset_To_Directory_Path;
        int     Offset_To_Parent_DN;
    } DP_PDN_Offset;
    union
    {
        int     Length_Of_Directory_Path;
        int     Length_Of_Parent_DN;
    } DP_PDN_Length;
    int         Reserved;
} QgldRtvDirSvrA_RSVR0400;

typedef _Packed struct QgldRtvDirSvrA_RSVR0700
{
    int         Bytes_Returned;
    int         Bytes_Available;
    int         Object_Security_Audit_Option;
} QgldRtvDirSvrA_RSVR0700;

typedef _Packed struct QgldRtvDirSvrA_RSVR0900
{
    int         Bytes_Returned;
    int         Bytes_Available;
    int         Offset_To_Server_Admin_URL;
    int         Length_Of_Server_Admin_URL;
} QgldRtvDirSvrA_RSVR0900;

typedef _Packed struct QgldLstDirSvrA_LSVR0200
{
    int         Displacement_To_Next_Entry;
    int         Displacement_To_Suffix;
    int         Length_Of_Suffix;
    int         Reserved;
} QgldLstDirSvrA_LSVR0200;

typedef _Packed struct QgldLstDirSvrA_LSVR0300
{
    int         Displacement_To_Next_Entry;
    int         Displacement_To_Attribute_Name;
    int         Length_Of_Attribute_Name;
    unsigned int Matching_Rules;
    int         Reserved;
} QgldLstDirSvrA_LSVR0300;

typedef _Packed struct QgldLstDirSvrA_LSVR0500
{
    int         Displacement_To_Next_Entry;
    int         Displacement_To_Pub_Agent_Name;
    int         Length_Of_Pub_Agent_Name;
    int         Displacement_To_Server_Name;
    int         Length_Of_Server_Name;
    int         Displacement_To_Bind_DN;
    int         Length_Of_Bind_DN;
    int         LDAP_Port_Number;
    int         Connection_Type;
    int         Displacement_To_Parent_DN;
    int         Length_Of_Parent_DN;
    int         Pub_Agent_Disabled;
    int         Reserved;
    int         Kerberos_Auth_Indicator;
    int         Disp_To_Kerb_Key_Tab_File;
    int         Length_Of_Kerb_Key_Tab_File;
    int         Disp_To_Kerb_Principal;
    int         Length_Of_Kerb_Principal;
    int         Disp_To_Kerb_Realm;
    int         Length_Of_Kerb_Realm;
} QgldLstDirSvrA_LSVR0500;

typedef _Packed struct QgldLstDirSvrA_LSVR0600
{
    int         Displacement_To_Next_Entry;
    int         Displacement_To_Ref_Server_URL;
    int         Length_Of_Ref_Server_URL;
    int         Reserved;
} QgldLstDirSvrA_LSVR0600;

typedef _Packed struct QgldLstDirSvrA_LSVR0800
{
    int         Displacement_To_Next_Entry;
    int         Displacement_To_IP_Address;
    int         Length_Of_IP_Address;
} QgldLstDirSvrA_LSVR0800;

typedef _Packed struct QgldChgDirSvrA_CSVR0100
{
    int         Readonly;
    int         Server_Is_Replica;
    int         Security;
    int         Nonencrypted_Port_Number;
    int         Encrypted_Port_Number;
    int         Current_Cipher_Protocols;
    int         Search_Time_Limit;
    int         Search_Size_Limit;
    int         Maximum_Connections;
    int         Reserved1;
    int         Referral_Port;
    int         Password_Format;
    int         Offset_To_Referral_Server;
    int         Length_Of_Referral_Server;
    int         Offset_To_Administrator_Dn;
    int         Length_Of_Administrator_Dn;
    int         Offset_To_Administrator_Pwd;
    int         Length_Of_Administrator_Pwd;
    int         Offset_To_Update_Dn;
    int         Length_Of_Update_Dn;
    int         Offset_To_Update_Pwd;
    int         Length_Of_Update_Pwd;
    int         Offset_To_Key_Ring_File;
    int         Length_Of_Key_Ring_File;
    int         Offset_To_Database_Path;
    int         Length_Of_Database_Path;
    union
    {
        int     Reserved;
        int     Level_Indicator;
    } R_LI;
    int         SSL_Authentication_Method;
    int         Number_Of_Database_Conns;
    int         Schema_Checking_Level;
    int         Offset_To_Master_Server_URL;
    int         Length_Of_Master_Server_URL;
    int         Change_Log_Indicator;
    int         Max_Num_Change_Log_Entries;
    int         Terminate_Idle_Conns;
    int         Reserved2;
    int         Kerberos_Auth_Indicator;
    int         Offset_To_Kerb_Key_Tab_File;
    int         Length_Of_Kerb_Key_Tab_File;
    int         Kerb_To_Dn_Mapping_Indicator;
    int         Offset_To_Kerb_Admin_Id;
    int         Length_Of_Kerb_Admin_Id;
    int         Offset_To_Kerb_Admin_Realm;
    int         Length_Of_Kerb_Admin_Realm;
    int         Event_Notification_Reg_Ind;
    int         Max_Num_Event_Regs_For_Conn;
    int         Max_Num_Event_Regs_For_Server;
    int         Max_Num_Ops_Per_Transaction;
    int         Max_Num_Pending_Transactions;
    int         Transaction_Time_Limit;
    int         ACL_Model;
    int         Reserved3;
    int         Level_Of_Authority_Integration;
    int         Offset_To_Proj_Sys_Suffix;
    int         Length_Of_Proj_Sys_Suffix;
    int         Schema_Readonly;
    int         Proj_Sys_Readonly;
    int         Log_Client_Messages;
    int         Max_Age_Change_Log_Entries;
} QgldChgDirSvrA_CSVR0100;

typedef _Packed struct QgldChgDirSvrA_CSVR0200
{
    int         Offset_To_Entries;
    int         Number_Of_Entries;
    /* QgldChgDirSvrA_SuffixEntry structure(s) follow... */
} QgldChgDirSvrA_CSVR0200;

typedef _Packed struct QgldChgDirSvrA_SuffixEntry
{
    int         Displacement_To_Next_Entry;
    int         Action;
    int         Displacement_To_Suffix;
    int         Length_Of_Suffix;
} QgldChgDirSvrA_SuffixEntry;

typedef _Packed struct QgldChgDirSvrA_CSVR0300
{
    int         Offset_To_Entries;
    int         Number_Of_Entries;
    /* QgldChgDirSvrA_AddChgIdxEntry or QgldChgDirSvrA_RmvIdxEntry
       structure(s) follow... */
} QgldChgDirSvrA_CSVR0300;

typedef _Packed struct QgldChgDirSvrA_AddChgIdxEntry
{
    int         Displacement_To_Next_Entry;
    int         Action;
    int         Displacement_To_Attribute_Name;
    int         Length_Of_Attribute_Name;
    int         Matching_Rule;
    int         Reserved;
} QgldChgDirSvrA_AddChgIdxEntry;

typedef _Packed struct QgldChgDirSvrA_RmvIdxEntry
{
    int         Displacement_To_Next_Entry;
    int         Action;
    int         Displacement_To_Attribute_Name;
    int         Length_Of_Attribute_Name;
    int         Reserved;
} QgldChgDirSvrA_RmvIdxEntry;

typedef _Packed struct QgldChgDirSvrA_CSVR0400
{
    int         Offset_To_Server_Name;
    int         Length_Of_Server_Name;
    int         LDAP_Port_Number;
    int         Connection_Type;
    union
    {
        int     Offset_To_Directory_Path;
        int     Offset_To_Parent_DN;
    } DP_PDN_Offset;
    union
    {
        int     Length_Of_Directory_Path;
        int     Length_Of_Parent_DN;
    } DP_PDN_Length;
    int         Reserved;
} QgldChgDirSvrA_CSVR0400;

typedef _Packed struct QgldChgDirSvrA_CSVR0500
{
    int         Offset_To_Entries;
    int         Number_Of_Entries;
    /* QgldChgDirSvrA_AddChgPubAgtEntry or QgldChgDirSvrA_RmvPubAgtEntry
       structure(s) follow... */
} QgldChgDirSvrA_CSVR0500;

typedef _Packed struct QgldChgDirSvrA_AddChgPubAgtEntry
{
    int         Displacement_To_Next_Entry;
    int         Action;
    int         Displacement_To_Pub_Agent_Name;
    int         Length_Of_Pub_Agent_Name;
    int         Displacement_To_Server_Name;
    int         Length_Of_Server_Name;
    int         Displacement_To_Bind_DN;
    int         Length_Of_Bind_DN;
    int         Displacement_To_Bind_Cred;
    int         Length_Of_Bind_Cred;
    int         LDAP_Port_Number;
    int         Connection_Type;
    int         Displacement_To_Parent_DN;
    int         Length_Of_Parent_DN;
    int         Disable_Publishing_Agent;
    union
    {
        int     Reserved;
        int     Level_Indicator;
    } R_LI;
    int         Kerberos_Auth_Indicator;
    int         Disp_To_Kerb_Key_Tab_File;
    int         Length_Of_Kerb_Key_Tab_File;
    int         Disp_To_Kerb_Principal;
    int         Length_Of_Kerb_Principal;
    int         Disp_To_Kerb_Realm;
    int         Length_Of_Kerb_Realm;
} QgldChgDirSvrA_AddChgPubAgtEntry;

typedef _Packed struct QgldChgDirSvrA_RmvPubAgtEntry
{
    int         Displacement_To_Next_Entry;
    int         Action;
    int         Displacement_To_Pub_Agent_Name;
    int         Length_Of_Pub_Agent_Name;
    int         Reserved;
} QgldChgDirSvrA_RmvPubAgtEntry;

typedef _Packed struct QgldChgDirSvrA_CSVR0600
{
    int         Offset_To_Entries;
    int         Number_Of_Entries;
    /* QgldChgDirSvrA_RefSvrEntry structure(s) follow... */
} QgldChgDirSvrA_CSVR0600;

typedef _Packed struct QgldChgDirSvrA_RefSvrEntry
{
    int         Displacement_To_Next_Entry;
    int         Displacement_To_Ref_Server_URL;
    int         Length_Of_Ref_Server_URL;
} QgldChgDirSvrA_RefSvrEntry;

typedef _Packed struct QgldChgDirSvrA_CSVR0700
{
    int         Object_Security_Audit_Option;
    int         Reserved;
} QgldChgDirSvrA_CSVR0700;

typedef _Packed struct QgldChgDirSvrA_CSVR0800
{
    int         Offset_To_Entries;
    int         Number_Of_Entries;
    /* QgldChgDirSvrA_IpAddrEntry structure(s) follow... */
} QgldChgDirSvrA_CSVR0800;

typedef _Packed struct QgldChgDirSvrA_IpAddrEntry
{
    int         Displacement_To_Next_Entry;
    int         Displacement_To_IP_Address;
    int         Length_Of_IP_Address;
} QgldChgDirSvrA_IpAddrEntry;

typedef _Packed struct QgldChgDirSvrA_CSVR0900
{
    int         Offset_To_Server_Admin_URL;
    int         Length_Of_Server_Admin_URL;
    int         Reserved;
} QgldChgDirSvrA_CSVR0900;

typedef _Packed struct QgldCfgDirSvr_CFGD0100
{
    int         Offset_To_Database_Path;
    int         Length_Of_Database_Path;
    int         Offset_To_Administrator_Dn;
    int         Length_Of_Administrator_Dn;
    int         Offset_To_Administrator_Pwd;
    int         Length_Of_Administrator_Pwd;
    int         Offset_To_Suffixes;
    int         Number_Of_Suffixes;
    int         Reserved;
    /* GgldCfgDirSvr_SuffixEntry structure(s) follow... */
} QgldCfgDirSvr_CFGD0100;

typedef _Packed struct QgldCfgDirSvr_SuffixEntry
{
    int         Displacement_To_Next_Entry;
    int         Displacement_To_Suffix;
    int         Length_Of_Suffix;
} QgldCfgDirSvr_SuffixEntry;

typedef _Packed struct QgldExportLdif_LDIF0100
{
    int         Offset_To_Ldif_File;
    int         Length_Of_Ldif_File;
    int         Offset_To_Administrator_Dn;
    int         Length_Of_Administrator_Dn;
    int         Offset_To_Administrator_Pwd;
    int         Length_Of_Administrator_Pwd;
    int         Offset_To_Subtree_Dn;
    int         Length_Of_Subtree_Dn;
} QgldExportLdif_LDIF0100;

typedef _Packed struct QgldExportLdif_LDIF0200
{
    int         Offset_To_Ldif_File;
    int         Length_Of_Ldif_File;
    int         Offset_To_Administrator_Dn;
    int         Length_Of_Administrator_Dn;
    int         Offset_To_Administrator_Pwd;
    int         Length_Of_Administrator_Pwd;
    int         Offset_To_Subtree_Dn;
    int         Length_Of_Subtree_Dn;
    int         Level_Indicator;
    int         Include_Cn_Localhost;
    int         Include_Cn_Pwdpolicy;
    int         Include_Nested_Repl_Contexts;
    int         Include_Operational_Attrs;
} QgldExportLdif_LDIF0200;

typedef _Packed struct QgldImportLdif_LDIF0100
{
    int         Offset_To_Ldif_File;
    int         Length_Of_Ldif_File;
    int         Offset_To_Administrator_Dn;
    int         Length_Of_Administrator_Dn;
    int         Offset_To_Administrator_Pwd;
    int         Length_Of_Administrator_Pwd;
} QgldImportLdif_LDIF0100;

typedef _Packed struct QgldImportLdif_LDIF0200
{
    int         Offset_To_Ldif_File;
    int         Length_Of_Ldif_File;
    int         Offset_To_Administrator_Dn;
    int         Length_Of_Administrator_Dn;
    int         Offset_To_Administrator_Pwd;
    int         Length_Of_Administrator_Pwd;
    int         Level_Indicator;
    int         Replicate_Imported_Data;
} QgldImportLdif_LDIF0200;

/*******************************************
* Prototypes
*******************************************/

#ifdef __cplusplus
extern "c" {
#endif

void QgldRtvDirSvrA
( void *,       /* receiver variable */
  int,          /* length of receiver variable */
  const char *, /* format name */
  void *        /* error code structure */
);

void QgldLstDirSvrA
( const char *, /* user space name */
  const char *, /* format name */
  void *        /* error code structure */
);

void QgldChgDirSvrA
( const void *, /* input data */
  int,          /* length of input data */
  const char *, /* format name */
  void *        /* error code structure */
);

void QgldCfgDirSvr
( const void *, /* input data */
  int,          /* length of input data */
  const char *, /* format name */
  void *        /* error code structure */
);

void QgldExportLdif
( const void *, /* input data */
  int,          /* length of input data */
  const char *, /* format name */
  void *        /* error code structure */
);

void QgldImportLdif
( const void *, /* input data */
  int,          /* length of input data */
  const char *, /* format name */
  void *        /* error code structure */
);

#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
    #pragma info(restore)
#else
    #pragma checkout(resume)
#endif

#if (__OS400_TGTVRM__>=510)                               /* @A2A*/
    #pragma datamodel(pop)                                /* @A2A*/
#endif                                                    /* @A2A*/

#endif /* _qglduapi_h_ */
