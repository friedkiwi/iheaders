/* begin_generated_IBM_copyright_prolog                              */
/* This is an automatically generated copyright prolog.              */
/* After initializing,  DO NOT MODIFY OR MOVE                        */
/* ----------------------------------------------------------------- */
/*                                                                   */
/* Product(s):                                                       */
/*     5722-SS1                                                      */
/*                                                                   */
/* (C)Copyright IBM Corp.  2000, 2005                                */
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
#ifndef _QTOCPPPAPI_H
#define _QTOCPPPAPI_H

/*********************************************************************/
/*                                                                   */
/* Header File Name:  qtocpppapi                                     */
/*                                                                   */
/* Header File Description: List/Retrieve PPP connection profiles API*/
/*                                                                   */
/* Change Activity:                                                  */
/*                                                                   */
/* CFD List:                                                         */
/*  Flag Reason   Vers  Date   Userid    Description                 */
/*  ---- -------- ---- ------  --------  -----------                 */
/*  $A0=D98284.7  5D10 000719  GWD       NEW PART                    */
/*  $B0=P9A03348  5D20 020304  GWD       Changes for V5R2 PPP        */
/*  $C0=D99516.2  5D30 013103  WINGERTS  Add *AUTOSTART              */
/*  $D0=D99895.1  5D40 040721  BOBC      Add thread id               */
/*                                                                   */
/*                                                                   */
/* End CFD List.                                                     */
/*                                                                   */
/*  Additional notes about the Change Activity                       */
/*                                                                   */
/* End Change Activity.                                              */
/*                                                                   */
/*********************************************************************/


#if (__OS400_TGTVRM__>=510)
#pragma datamodel(P128)
#endif

#ifndef QTOC_EXTERN
  #ifdef __ILEC400__
     #define QTOC_EXTERN extern
  #else
     #define QTOC_EXTERN extern "C"
  #endif
#endif

/********************************************************************/
/* Type Definition for Input Parameter Section of the user space.   */
/********************************************************************/

typedef _Packed struct Qtoc_LSTCNNPRF_Input
{
   unsigned char User_Space_Name[10];
   unsigned char User_Space_Library_Name[10];
   unsigned char Format_Name[8];
} Qtoc_LSTCNNPRF_Input_t;

typedef _Packed struct Qtoc_RTVCNNPRF_Input
{
    unsigned char User_Space_Name[10];
    unsigned char User_Space_Library_Name[10];
    unsigned char Format_Name[8];
} Qtoc_RTVCNNPRF_Input_t;

/********************************************************************/
/* Type Definition for Header Section of the user space.            */
/********************************************************************/

typedef _Packed struct Qtoc_LSTCNNPRF_Header
{
   unsigned char   User_Space_Name[10];
   unsigned char   User_Space_Library_Name[10];
} Qtoc_LSTCNNPRF_Header_t;

typedef _Packed struct Qtoc_RTVCNNPRF_Header
{
    unsigned char   User_Space_Name[10];
    unsigned char   User_Space_Library_Name[10];
} Qtoc_RTVCNNPRF_Header_t;

/********************************************************************/
/* Type Definition for the PRFD0100 format of the receiver variable.*/
/********************************************************************/

typedef _Packed struct Qtoc_LSTCNNPRF_PRFD0100
{
    unsigned long Profile_Mode;
    unsigned long Connection_Protocol;
    unsigned long Connection_Status;
    unsigned long Connection_Type;
    unsigned long Profile_Job_Type;
    unsigned long Multilink_Connection_Enabled;
    char          Profile_Name[10];
    char          Line_Name[10];
    char          Line_Type[10];
    char          Job_Name[10];
    char          Job_User_Profile[10];
    char          Job_Number[6];
    char          Profile_Description[50];
    char          Dial_On_Demand_Answer_Profile[10];
    unsigned long Start_When_TCPIP_Is_Started;               /* @C0A*/
    char          Thread_ID[8];                              /* @D0A*/
    char          Reserved[8];                               /* @D0C*/
} Qtoc_LSTCNNPRF_PRFD0100_t;

/********************************************************************/
/* Type Definition for the PRFR0100 format of the receiver variable.*/
/********************************************************************/

typedef _Packed struct Qtoc_RTVCNNPRF_PRFR0100
{
    unsigned long Bytes_Returned;
    unsigned long Bytes_Available;
    unsigned long Profile_Mode;
    unsigned long Connection_Protocol;
    unsigned long Connection_Status;
    unsigned long Connection_Type;
    unsigned long Profile_Job_Type;
    unsigned long Start_When_TCPIP_Is_Started;               /* @C0C*/
    char          Profile_Name[10];
    char          Profile_Description[50];
    char          Reserved_2[16];
    unsigned long Offset_Additional_Information;
    unsigned long Length_Additional_Information;
} Qtoc_RTVCNNPRF_PRFR0100_t;

/********************************************************************/
/* Type Definition for the PRFR0200 format of the receiver variable.*/
/* If this format is requested the PRFR0100 format is included.     */
/********************************************************************/

typedef _Packed struct Qtoc_RTVCNNPRF_PRFR0200
{
    unsigned long Move_Phone_Nbr_If_Success;
    unsigned long Redial_When_Disconnected;
    unsigned long Number_Of_Dial_Attempts;
    unsigned long Delay_Between_Dial_Attempts;
    unsigned long Max_Connections;
    unsigned long Multilink_Connection_Enabled;
    unsigned long Max_Multilink_Connections;
    unsigned long Inactivity_Timeout;
    unsigned long Line_Definition;
    char          Line_Name[10];
    char          Line_Type[10];
    char          L2TP_Tunnel_End_Point_Address[15];
    char          Reserved_1[5];
    unsigned long Local_User_ID_Defined;
    unsigned long Local_User_ID_Encryption_Type;
    char          Local_User_ID_Validation_List[10];
    char          Reserved_2[6];
    unsigned long Remote_User_ID_For_Logon;
    unsigned long Remote_User_ID_Auth_Protocols;
    unsigned long Remote_User_ID_Val_Method;
    unsigned long RADIUS_Cnn_Auditing_Accounting;
    char          Remote_User_ID_Validation_List[10];
    char          Reserved_3[6];
    unsigned long ASCII_CCSID_Of_The_Line_Data;
    unsigned long Connection_Script_File_Defined;
    char          Connection_Script_Library[10];
    char          Connection_Script_File[10];
    char          Connection_Script_Member[10];
    char          Reserved_4[2];
    unsigned long DNS_Definition;
    char          DNS_IP_Address[15];
    char          Reserved_5[5];
    unsigned long Local_IP_Address_Definition;
    char          Local_IP_Address[15];
    char          Reserved_6[5];
    unsigned long Remote_IP_Address_Definition;
    char          Remote_IP_Address[15];
    char          Reserved_7[5];
    unsigned long Allow_Remote_IP_Addr_By_User;
    unsigned long Allow_Remote_IP_Addr_Assign;
    unsigned long Allow_IP_Datagram_Forwards;
    unsigned long Request_VJ_Hdr_Compression;
    unsigned long Routing_Definition;
    unsigned long Hide_Address;
    unsigned long Number_Remote_IP_Addresses;
    char          Reserved_8[4];
    char          Line_Pool_List_Name[64];
    char          Subsystem_Description[10];
    char          Reserved_9[6];
    unsigned long Requires_IP_Sec_Protection;
    char          IP_Sec_Connection_Group[40];
    char          Answering_Profile_For_DOD[10];
    char          Reserved_10[6];
    unsigned long Allow_Remote_To_Initiate_Call;
    unsigned long Allow_BACP;
    unsigned long Add_Link_Percentage;
    unsigned long Time_To_Wait_For_Adding_Link;
    unsigned long Drop_Link_Percentage;
    unsigned long Time_To_Wait_For_Drop_Link;
    unsigned long Bandwidth_Test_Direction;
    unsigned long Use_Filter_Rule;
    char          Filter_Rule_Name[32];
    unsigned long Allow_L2TP_Multihop_Cnn;
    unsigned long Allow_L2TP_Outgoing_Cnn;
    unsigned long L2TP_Outgoing_Call_Line_Def;
    char          L2TP_Outgoing_Call_Line_Name[10];
    char          Reserved_11[10];
    unsigned long Offset_Profile_Dyn_Parms;
    unsigned long Nbr_Profile_Dyn_Parm_Entries;
    unsigned long Entry_Length_Profile_Dyn_Parms;
    unsigned long Offset_Phone_Number_Entries;
    unsigned long Number_Phone_Number_Entries;
    unsigned long Entry_Length_Phone_Numbers;
    unsigned long PPPOE_Server_Addressing;                   /* @B0A*/
    unsigned long Persistent_PPPOE_Connection;               /* @B0A*/
    char          Requested_PPPOE_Server[256];               /* @B0A*/
    char          Requested_PPPOE_Service[256];              /* @B0A*/
    char          L2TP_Tunnel_Endpoint_Hostname[64];         /* @C0A*/
} Qtoc_RTVCNNPRF_PRFR0200_t;

/********************************************************************/
/* Type Definition for the profile dynamic parameters               */
/********************************************************************/

typedef _Packed struct Qtoc_RTVCNNPRF_Dynamic
{
    unsigned long Connection_Status;
    unsigned long Max_Transmission_Unit;
    unsigned long Max_Links_Per_Bundle;
    unsigned long Nbr_Active_Links;
    unsigned long Line_Inact_Timeout;
    char          Reserved_1[4];
    char          Job_Number[6];
    char          Job_User[10];
    char          Job_Name[10];
    char          Line_Name[10];
    char          Active_Local_IP_Address[15];
    char          Active_Remote_IP_Address[15];
    char          Reserved_2[6];
    char          Remote_User_ID[48];
    char          Group_Policy[64];
    char          Filter_Rule[32];
    char          IP_Forward;
    char          Proxy_ARP_Route;
    char          TCP_Header_Compress;
    char          Full_Masquerading;
    char          Auth_Protocol;
    char          Mlink_Proto_Enabled;
    char          Mlink_BUM_Enabled;
    char          Reserved_3[1];                             /* @B0C*/
    unsigned long Connection_Status2;                        /* @B0A*/
    char          Thread_ID[8];                              /* @D0A*/
} Qtoc_RTVCNNPRF_Dynamic_t;

/********************************************************************/
/* Type Definition for the remote phone number entries              */
/********************************************************************/

typedef _Packed struct Qtoc_RTVCNNPRF_Phonenum
{
    char          Remote_Phone_Number[48];
    char          Reserved_1[16];			
} Qtoc_RTVCNNPRF_Phonenum_t;

/********************************************************************/
/* External function prototypes                                     */
/********************************************************************/

/* QtocLstPPPCnnPrf                                                 */
/* 1st arg - I/O    - pointer to qualified user space name          */
/* 2nd arg - INPUT  - pointer to API output format name             */
/* 3rd arg - OUTPUT - pointer to Error code storage variable        */

#ifdef __ILEC400__
  #pragma argument(QtocLstPPPCnnPrf,OS,nowiden)
#endif

QTOC_EXTERN void QtocLstPPPCnnPrf(
                   char *,           /* qualified user space name   */
                   char *,           /* format name                 */
                   char *);          /* Error code                  */

/* QtocRtvPPPCnnPrf                                                 */
/* 1st arg - I/O    - pointer to receiver variable space            */
/* 2nd arg - OUTPUT - size of receiver variable                     */
/* 3rd arg - INPUT  - pointer to API output format name             */
/* 4th arg - OUTPUT - pointer to Error code storage variable        */

#ifdef __ILEC400__
  #pragma argument(QtocRtvPPPCnnPrf,OS,nowiden)
#endif

QTOC_EXTERN void QtocRtvPPPCnnPrf(
                   char *,           /* receiver variable           */
                   unsigned long *,  /* length of receiver variable */
                   char *,           /* profile name                */
                   char *,           /* format name                 */
                   char *);          /* Error code                  */

#if (__OS400_TGTVRM__>=510)
#pragma datamodel(pop)
#endif



#endif /* _QTOCPPPAPI_H */

