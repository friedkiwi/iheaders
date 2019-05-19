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
#ifndef _QTOCNETSTS_H
#define _QTOCNETSTS_H

#if (__OS400_TGTVRM__>=510)
#pragma datamodel(P128)
#endif

/**********************************************************************/
/*                                                                    */
/* Header File Name:  H/QTOCNETSTS                                    */
/*                                                                    */
/* Header File Description: Netstat APIs                              */
/*                                                                    */
/**********************************************************************/

#ifndef QTOC_EXTERN
  #ifdef __ILEC400__
     #define QTOC_EXTERN extern
  #else
     #define QTOC_EXTERN extern "C"
  #endif
#endif


/********************************************************************/
/* Type Definition for Input Parameter - Connection List Qualifier  */
/********************************************************************/
typedef _Packed struct Qtoc_LstNetCnn_Input_Qual
{
  char          Net_Connection_Type[10];
  char          List_Request_Type[10];
  char          Reserved[12];
  unsigned long Local_Internet_Addr_Lower_Val;
  unsigned long Local_Internet_Addr_Upper_Val;
  unsigned long Local_Port_Lower_Val;
  unsigned long Local_Port_Upper_Val;
  unsigned long Remote_Internet_Addr_Lower_Val;
  unsigned long Remote_Internet_Addr_Upper_Val;
  unsigned long Remote_Port_Lower_Val;
  unsigned long Remote_Port_Upper_Val;
} Qtoc_LstNetCnn_Input_Qual_t;

typedef _Packed struct Qtoc_LstNetCnn_In_NCLQ0200
{
  char            Net_Connection_Type[10];
  char            List_Request_Type[10];
  char            Reserved[12];
  char            Local_Inet_IP6_Addr_Lower_Val[16];
  char            Local_Inet_IP6_Addr_Upper_Val[16];
  unsigned long   Local_Port_Lower_Val;
  unsigned long   Local_Port_Upper_Val;
  char            Remote_Inet_IP6_Addr_Lower_Val[16];
  char            Remote_Inet_IP6_Addr_Upper_Val[16];
  unsigned long   Remote_Port_Lower_Val;
  unsigned long   Remote_Port_Upper_Val;
} Qtoc_LstNetCnn_In_NCLQ0200_t;


/********************************************************************/
/* Type Definition for Input Parameter - Socket Connection Request  */
/********************************************************************/
typedef _Packed struct Qtoc_RtvNetCnnDta_Socket_Req
{
  unsigned long Protocol;
  unsigned long Local_IP_Address;
  unsigned long Local_Port_Number;
  unsigned long Remote_IP_Address;
  unsigned long Remote_Port_Number;
} Qtoc_RtvNetCnnDta_Socket_Req_t;

/********************************************************************/
/* Type Definition for Input Parameter -                            */
/*   IPv6 Socket Connection Request                                 */
/********************************************************************/
typedef _Packed struct Qtoc_RtvNetCnnDta_IP6_So_Req
{
  unsigned long   Protocol;
  char            Local_IP6_Address[16];
  unsigned long   Local_Port_Number;
  char            Remote_IP6_Address[16];
  unsigned long   Remote_Port_Number;
} Qtoc_RtvNetCnnDta_IP6_So_Req_t;

/********************************************************************/
/* Type Definition for Input Parameter - Interface Request          */
/********************************************************************/
typedef _Packed struct Qtoc_CvtIfcID_Ifc_Req
{
  char  Interface_Address[45];
  char  Reserved_1[3];
  char  Line_Description[10];
  char  Reserved_2[6];
} Qtoc_CvtIfcID_Ifc_Req_t;


/********************************************************************/
/* Type Definition for Input Parameter Section of the user space.   */
/********************************************************************/
typedef _Packed struct Qtoc_LstNetCnn_Input
{
  char          User_Space_Name[10];
  char          User_Space_Library_Name[10];
  char          Format_Name[8];
  struct Qtoc_LstNetCnn_Input_Qual Connection_List_Qual;
  unsigned long Connection_List_Qual_Size;
  char          Connection_List_Qual_Format[8];
} Qtoc_LstNetCnn_Input_t;

typedef _Packed struct Qtoc_LstNetCnn_In_Parm_0200
{
  char          User_Space_Name[10];
  char          User_Space_Library_Name[10];
  char          Format_Name[8];
  Qtoc_LstNetCnn_In_NCLQ0200_t Connection_List_Qual;
  unsigned long Connection_List_Qual_Size;
  char          Connection_List_Qual_Format[8];
} Qtoc_LstNetCnn_In_Parm_0200_t;

typedef _Packed struct Qtoc_LstNetIfc_Input
{
  char          User_Space_Name[10];
  char          User_Space_Library_Name[10];
  char          Format_Name[8];
} Qtoc_LstNetIfc_Input_t;

typedef _Packed struct Qtoc_LstNetRte_Input
{
  char          User_Space_Name[10];
  char          User_Space_Library_Name[10];
  char          Format_Name[8];
} Qtoc_LstNetRte_Input_t;

typedef _Packed struct Qtoc_LstPhyIfcDta_Input
{
  char          User_Space_Name[10];
  char          User_Space_Library_Name[10];
  char          Format_Name[8];
} Qtoc_LstPhyIfcDta_Input_t;

typedef _Packed struct Qtoc_LstPhyIfcARPTbl_Input
{
  char          User_Space_Name[10];
  char          User_Space_Library_Name[10];
  char          Format_Name[8];
  char          Line_Name[10];
} Qtoc_LstPhyIfcARPTbl_Input_t;

typedef _Packed struct Qtoc_LstNeighborTbl_Input
{
  char          User_Space_Name[10];
  char          User_Space_Library_Name[10];
  char          Format_Name[8];
  char          Line_Name[10];
} Qtoc_LstNeighborTbl_Input_t;


/********************************************************************/
/* Type Definition for Header Section of the user space.            */
/********************************************************************/
typedef _Packed struct Qtoc_LstNetCnn_Header
{
  char          User_Space_Name_Used[10];
  char          User_Space_Library_Name_Used[10];
} Qtoc_LstNetCnn_Header_t;

typedef _Packed struct Qtoc_LstNetIfc_Header
{
  char          User_Space_Name_Used[10];
  char          User_Space_Library_Name_Used[10];
} Qtoc_LstNetIfc_Header_t;

typedef _Packed struct Qtoc_LstNetRte_Header
{
  char          User_Space_Name_Used[10];
  char          User_Space_Library_Name_Used[10];
} Qtoc_LstNetRte_Header_t;

typedef _Packed struct Qtoc_LstPhyIfcDta_Header
{
  char          User_Space_Name_Used[10];
  char          User_Space_Library_Name_Used[10];
} Qtoc_LstPhyIfcDta_Header_t;

typedef _Packed struct Qtoc_LstPhyIfcARPTbl_Header
{
  char          User_Space_Name_Used[10];
  char          User_Space_Library_Name_Used[10];
  char          Line_Name_Used[10];
} Qtoc_LstPhyIfcARPTbl_Header_t;

typedef _Packed struct Qtoc_LstNeighborTbl_Header
{
  char          User_Space_Name_Used[10];
  char          User_Space_Library_Name_Used[10];
  char          Line_Name_Used[10];
} Qtoc_LstNeighborTbl_Header_t;


/********************************************************************/
/* Type Definition for the QtocLstNetCnn API output format NCNN0100.*/
/********************************************************************/
typedef _Packed struct Qtoc_LstNetCnn_NCNN0100
{
  char               Remote_Address[15];
  char               Reserved_1[1];
  unsigned long      Remote_Address_Binary;
  char               Local_Address[15];
  char               Reserved_2[1];
  unsigned long      Local_Address_Binary;
  unsigned long      Remote_Port;
  unsigned long      Local_Port;
  unsigned long      TCP_State;
  unsigned long      Idle_Time_In_Milliseconds;
  unsigned long long Bytes_In;
  unsigned long long Bytes_Out;
  unsigned long      Connection_Open_Type;
  char               Net_Connection_Type[10];
  char               Reserved_3[2];
  char               Associated_User_Profile[10];
  char               Reserved_4[2];
} Qtoc_LstNetCnn_NCNN0100_t;

/********************************************************************/
/* Type Definition for the QtocLstNetCnn API output format NCNN0200.*/
/********************************************************************/
typedef _Packed struct Qtoc_LstNetCnn_NCNN0200
{
  char               Remote_IP6_Address[45];
  char               Reserved_1[3];
  char               Remote_IP6_Address_Binary[16];
  char               Local_IP6_Address[45];
  char               Reserved_2[3];
  char               Local_IP6_Address_Binary[16];
  unsigned long      Remote_Port;
  unsigned long      Local_Port;
  unsigned long      TCP_State;
  unsigned long      Idle_Time_In_Milliseconds;
  unsigned long long Bytes_In;
  unsigned long long Bytes_Out;
  unsigned long      Connection_Open_Type;
  char               Net_Connection_Type[10];
  char               Associated_User_Profile[10];
  char               Line_Description[10];
} Qtoc_LstNetCnn_NCNN0200_t;

/********************************************************************/
/* Type Definition for the QtocLstNetIfc API output format NIFC0100.*/
/********************************************************************/
typedef _Packed struct Qtoc_LstNetIfc_NIFC0100
{
  char          Internet_Address[15];
  char          Reserved_1[1];
  unsigned long Internet_Address_Binary;
  char          Network_Address[15];
  char          Reserved_2[1];
  unsigned long Network_Address_Binary;
  char          Network_Name[10];
  char          Line_Description[10];
  char          Interface_Name[10];
  char          Reserved_3[2];
  unsigned long Interface_Status;
  long          Interface_Type_Of_Service;
  long          Interface_MTU;
  long          Interface_Line_Type;
  char          Host_Address[15];
  char          Reserved_4[1];
  unsigned long Host_Address_Binary;
  char          Interface_Subnet_Mask[15];
  char          Reserved_5[1];
  unsigned long Interface_Subnet_Mask_Binary;
  char          Directed_Broadcast_Address[15];
  char          Reserved_6[1];
  unsigned long Directed_Broadcast_Addr_Binary;
  char          Change_Date[8];
  char          Change_Time[6];
  char          Associated_Local_Interface[15];
  char          Reserved_7[3];
  unsigned long Associated_Local_Interface_Bin;
  unsigned long Change_Status;
  long          Packet_Rules;
  unsigned long Automatic_Start;
  unsigned long TRLAN_Bit_Sequencing;
  unsigned long Interface_Type;
  unsigned long Proxy_ARP_Enabled;
  unsigned long Proxy_ARP_Allowed;
  long          Configured_MTU;
  char          Network_Name_Full[24];
  char          Interface_Name_Full[24];
  char          Alias_Name[50];
  char          Reserved_8[2];
  unsigned long Alias_Name_CCSID;
  unsigned long Offset_Prf_Ifc_List;
  unsigned long Number_Prf_Ifc_List;
  unsigned long Length_Prf_Ifc_List;
  /*Qtoc_PrfIfcLst_t[] Prf_Ifc_List; */ /* Varying Length           */
} Qtoc_LstNetIfc_NIFC0100_t;

/********************************************************************/
/* Type Definition for Qtoc_PrfIfcLst_t                             */
/********************************************************************/
typedef _Packed struct Qtoc_PrfIfcLst
{
  char          Preferred_Interface_Address[15];
  char          Reserved_1[1];
  unsigned long Preferred_Interface_Binary;
  /*char        Reserved[]; */ /* Varying Length                    */
} Qtoc_PrfIfcLst_t;

/********************************************************************/
/* Type Definition for the QtocLstNetIfc API output format NIFC0200.*/
/********************************************************************/
typedef _Packed struct Qtoc_LstNetIfc_NIFC0200
{
  char            Internet_IP6_Address[45];
  char            Reserved_1[3];
  char            Internet_IP6_Address_Binary[16];
  char            Interface_Prefix_Length[3];
  char            Reserved_2[1];
  unsigned long   Interface_Prefix_Length_Binary;
  unsigned long   Address_Type;
  long            Address_State;
  long long       Address_Preferred_Lifetime;
  char            Addr_Pref_Lifetime_Exp_Date[8];
  char            Addr_Pref_Lifetime_Exp_Time[6];
  char            Reserved_3[2];
  long long       Address_Valid_Lifetime;
  char            Addr_Valid_Lifetime_Exp_Date[8];
  char            Addr_Valid_Lifetime_Exp_Time[6];
  char            Line_Name[10];
  long            Interface_Line_Type;
  char            Interface_Description[50];
  char            Network_IP6_Address[45];
  char            Reserved_4[1];
  char            Network_IP6_Address_Binary[16];
  char            Host_IP6_Address[45];
  char            Reserved_5[3];
  char            Host_IP6_Address_Binary[16];
  unsigned long   Interface_Status;
  unsigned long   Automatic_Start;
  long            Packet_Rules;
  unsigned long   Interface_Source;
  unsigned long   DAD_Transmits;
  long            Multicast_Number_Of_References;
  char            Reserved_6[4];
  char            Change_Date[8];
  char            Change_Time[6];
  char            Reserved_7[2];
  unsigned long   Interface_Description_CCSID;
  unsigned long   MTU_Configured;
  unsigned long   MTU_Current;
  unsigned long   DAD_Max_Transmits;
  char            Alias_Name[50];
  char            Reserved_8[6];
  unsigned long   Alias_Name_CCSID;
} Qtoc_LstNetIfc_NIFC0200_t;

/********************************************************************/
/* Type Definition for the QtocLstNetRte API output format NRTE0100.*/
/********************************************************************/
typedef _Packed struct Qtoc_LstNetRte_NRTE0100
{
  char          Route_Destination[15];
  char          Reserved_1[1];
  unsigned long Route_Destination_Binary;
  char          Subnet_Mask[15];
  char          Reserved_2[1];
  unsigned long Subnet_Mask_Binary;
  char          Next_Hop[15];
  char          Reserved_3[1];
  unsigned long Next_Hop_Binary;
  unsigned long Route_Status;
  long          Type_Of_Service;
  long          Route_MTU;
  unsigned long Route_Type;
  long          Route_Source;
  unsigned long Route_Precedence;
  unsigned long Local_Binding_Interface_Status;
  unsigned long Local_Binding_Type;
  long          Local_Binding_Line_Type;
  char          Local_Binding_Interface[15];
  char          Reserved_4[1];
  unsigned long Local_Binding_Interface_Binary;
  char          Local_Binding_Subnet_Mask[15];
  char          Reserved_5[1];
  unsigned long Local_Binding_Subnet_Mask_Bin;
  char          Local_Binding_Network_Address[15];
  char          Reserved_6[1];
  unsigned long Local_Binding_Network_Addr_Bin;
  char          Local_Binding_Line_Description[10];
  char          Change_Date[8];
  char          Change_Time[6];
} Qtoc_LstNetRte_NRTE0100_t;

/********************************************************************/
/* Type Definition for the QtocLstNetRte API output format NRTE0200.*/
/********************************************************************/
typedef _Packed struct Qtoc_LstNetRte_NRTE0200
{
  char            Route_Destination[45];
  char            Reserved_1[3];
  char            Route_Destination_Binary[16];
  char            Prefix_Length[3];
  char            Reserved_2[5];
  unsigned long   Prefix_Length_Binary;
  unsigned long   Next_Hop_Address_Family;
  char            Next_Hop_IP6[45];
  char            Reserved_3[3];
  char            Next_Hop_IP6_Binary[16];
  char            Next_Hop_IP4[15];
  char            Reserved_4[1];
  unsigned long   Next_Hop_IP4_Binary;
  char            Local_Binding_Line_Name[10];
  char            Reserved_5[2];
  long            Local_Binding_Line_Type;
  long            Local_Binding_Line_Status;
  long            Route_Status;
  long long       Route_Lifetime_Remaining;
  unsigned long   Route_Lifetime_At_Creation;
  long            Route_Source;
  long            Route_Type;
  long            Configured_Route_MTU;
  long            Actual_Route_MTU;
  unsigned long   Is_Onlink;
  unsigned long   Duplicate_Indicator;
  char            Change_Date[8];
  char            Change_Time[6];
  char            Expiration_Date[8];
  char            Expiration_Time[6];
  char            Text_Description[50];
  char            Reserved[2];
  unsigned long   Text_Description_CCSID;
} Qtoc_LstNetRte_NRTE0200_t;

/********************************************************************/
/* Type Definition for the IFCD0100 format of the user space.       */
/********************************************************************/
typedef _Packed struct Qtoc_LstPhyIfcDta_IFCD0100
{
  long               Line_Type;
  unsigned long      Packet_Rules;
  unsigned long long Total_Bytes_Received;
  unsigned long long Total_Bytes_Sent;
  unsigned long      Total_Unicast_Packets_Received;
  unsigned long      Total_Nonunicast_Packets_Rec;
  unsigned long      Total_Inbound_Packets_Disc;
  unsigned long      Total_Unicast_Packets_Sent;
  unsigned long      Total_Nonunicast_Packets_Sent;
  unsigned long      Total_Outbound_Packets_Disc;
  unsigned long      Physical_Interface_Status;
  char               Line_Description[10];
  char               Physical_Address[17];
  char               Date_Retrieved[8];
  char               Time_Retrieved[6];
  char               Reserved_1[3];
  unsigned long      Offset_To_Additional_Info;
  unsigned long      Length_Of_Additional_Info;
  unsigned long      Internet_Protocol_Version;
} Qtoc_LstPhyIfcDta_IFCD0100_t;

/********************************************************************/
/* Type Definition for the IFCD0200 format of the user space.       */
/* If this format is requested the IFCD0100 format is included also.*/
/********************************************************************/
typedef _Packed struct Qtoc_LstPhyIfcDta_IFCD0200
{
  char               Date_Filter_Rules_Loaded_Unl[8];
  char               Time_Filter_Rules_Loaded_Unl[6];
  char               Reserved_1[2];
  unsigned long long Out_Filter_Disc;
  unsigned long long Out_Filter_Perm;
  unsigned long long Out_Nonfiltered;
  unsigned long long Out_IPSec;
  unsigned long long Out_IPSec_Disc_No_Connection;
  unsigned long long Out_IPSec_Disc_Ondemand;
  unsigned long long Out_IPSec_Disc_VPN_NAT;
  unsigned long long Out_IPSec_Disc_Other;
  unsigned long long Out_NAT;
  unsigned long long Out_NAT_Disc;
  unsigned long long Out_Disc_Other;
  unsigned long long Out_Disc_Rule_Exception;
  unsigned long long In_IPSec;
  unsigned long long In_IPSec_Perm;
  unsigned long long In_IPSec_Disc_No_Connection;
  unsigned long long In_IPSec_Disc_No_AHESP;
  unsigned long long In_IPSec_Disc_Ondemand;
  unsigned long long In_IPSec_Disc_VPN_NAT;
  unsigned long long In_IPSec_Disc_Antireplay_Fail;
  unsigned long long In_IPSec_Disc_Sel_Mismatch;
  unsigned long long In_IPSec_Disc_Mode_Mismatch;
  unsigned long long In_IPSec_Disc_Auth_Error;
  unsigned long long In_IPSec_Disc_Other;
  unsigned long long In_NAT;
  unsigned long long In_Filter_Disc;
  unsigned long long In_Filter_Perm;
  unsigned long long In_Nonfiltered;
  unsigned long long In_Disc_Other;
  unsigned long long In_Disc_Rule_Exception;
  unsigned long      NAT_Rules;
  unsigned long      Filter_Rules;
  unsigned long      IPSec_Rules;
} Qtoc_LstPhyIfcDta_IFCD0200_t;

/********************************************************************/
/* Type Definition for the IFCD0300 format of the user space.       */
/* If this format is requested the IFCD0100 format is included also.*/
/********************************************************************/
typedef _Packed struct Qtoc_LstPhyIfcDta_IFCD0300
{
  long               Packet_Rules_IP6;
  unsigned long long Total_IP6_Bytes_Received;
  unsigned long long Total_IP6_Bytes_Sent;
  unsigned long      Total_IP6_Unicast_Packets_Rec;
  unsigned long      Total_IP6_Multicast_Pkts_Rec;
  unsigned long      Total_IP6_Anycast_Packets_Rec;
  unsigned long      Total_Inbound_IP6_Packets_Disc;
  unsigned long      Total_IP6_Unicast_Packets_Sent;
  unsigned long      Total_IP6_Multicast_Pkts_Sent;
  unsigned long      Total_IP6_Anycast_Packets_Sent;
  unsigned long      Total_Outbound_IP6_Pkts_Disc;
  char               IP6_Interface_Identifier[25];
  char               Reserved_1[7];
  unsigned long long IP6_Interface_Identifier_Bin;
  long               MTU_Configured;
  long               MTU_Current;
  unsigned long      Hop_Limit_Configured;
  unsigned long      Hop_Limit_Current;
  long               Use_Stateless_Autoconfig;
  long               Use_Stateful_Address_Config;
  long               Use_Other_Stateful_Config;
  unsigned long      Accept_Router_Advertisements;
  unsigned long      Accept_Redirects;
  unsigned long      ND_Base_Reach_Time_Configured;
  unsigned long      ND_Base_Reach_Time_Current;
  unsigned long      Neighbor_Disc_Reachable_Time;
  unsigned long      NS_Retrans_Interval_Configured;
  unsigned long      NS_Retrans_Interval_Current;
  unsigned long      DAD_Max_Transmits;
  char               Local_Tunnel_Endpoint_IP4_Addr[15];
  char               Reserved_2[1];
  unsigned long      Local_Tunnel_Endpoint_Binary;
  unsigned long      Autostart;
  char               Text_Description[50];
  char               Reserved_3[2];
  unsigned long      Text_Description_CCSID;
  unsigned long      Autoconfig_Line_Status;
} Qtoc_LstPhyIfcDta_IFCD0300_t;

/********************************************************************/
/* Type Definition for the NCND0100 format of the receiver variable.*/
/********************************************************************/
typedef _Packed struct Qtoc_RtvNetCnnDta_NCND0100
{
  unsigned long Bytes_Returned;
  unsigned long Bytes_Available;
  unsigned long TCP_Connections_Curr_Est;
  unsigned long TCP_Active_Opens;
  unsigned long TCP_Passive_Opens;
  unsigned long TCP_Attempted_Opens_Failed;
  unsigned long TCP_Established_And_Then_Reset;
  unsigned long TCP_Segments_Sent;
  unsigned long TCP_Retransmitted_Segments;
  unsigned long TCP_Reset_Segments;
  unsigned long TCP_Segments_Received;
  unsigned long TCP_Segments_Received_In_Error;
  unsigned long UDP_Datagrams_Sent;
  unsigned long UDP_Datagrams_Received;
  unsigned long UDP_Datagrams_ND_Port_Not_Fnd;
  unsigned long UDP_Datagrams_ND_Other_Dtg_Err;
  unsigned long Offset_To_Additional_Info;
  unsigned long Length_Of_Additional_Info;
} Qtoc_RtvNetCnnDta_NCND0100_t;

/********************************************************************/
/* Type Definition for the NCND0200 format of the receiver variable.*/
/* If this format is requested the NCND0100 format is included.     */
/********************************************************************/
typedef _Packed struct Qtoc_RtvNetCnnDta_NCND0200
{
  unsigned long Protocol;
  unsigned long Local_IP_Address;
  unsigned long Local_Port_Number;
  unsigned long Remote_IP_Address;
  unsigned long Remote_Port_Number;
  unsigned long Round_Trip_Time;
  unsigned long Round_Trip_Variance;
  unsigned long Outgoing_Bytes_Buffered;
  unsigned long User_Send_Next;
  unsigned long Send_Next;
  unsigned long Send_Unacknowledged;
  unsigned long Outgoing_Push_Number;
  unsigned long Outgoing_Urgency_Number;
  unsigned long Outgoing_Window_Number;
  unsigned long Incoming_Bytes_Buffered;
  unsigned long Receive_Next;
  unsigned long User_Receive_Next;
  unsigned long Incoming_Push_Number;
  unsigned long Incoming_Urgency_Number;
  unsigned long Incoming_Window_Number;
  unsigned long Total_Retransmissions;
  unsigned long Current_Retransmissions;
  unsigned long Maximum_Window_Size;
  unsigned long Current_Window_Size;
  unsigned long Last_Update;
  unsigned long Last_Update_Acknowledged;
  unsigned long Congestion_Window;
  unsigned long Slow_Start_Threshold;
  unsigned long Maximum_Segment_Size;
  unsigned long Initial_Send_Sequence_Number;
  unsigned long Initial_Receive_Sequence_Num;
  unsigned long Connection_Transport_Layer;
  unsigned long TCP_State;
  unsigned long Connection_Open_Type;
  unsigned long Idle_Time_In_Milliseconds;
  unsigned char IP_Options[40];
  unsigned long Bytes_In;
  unsigned long Bytes_Out;
  unsigned long Socket_State;
  unsigned long Offset_List_Of_Socket_Options;
  unsigned long Num_Socket_Opts_Assoc_With_Cnn;
  unsigned long Entry_Len_List_Sock_Opts_A_W_C;
  unsigned long Offset_List_Jobs_Assoc_W_Cnn;
  unsigned long Num_Jobs_Assoc_With_Connection;
  unsigned long Entry_Len_List_Jobs_A_W_Cnn;
  char          Associated_User_Profile[10];
  char          Reserved_1[2];
} Qtoc_RtvNetCnnDta_NCND0200_t;

/********************************************************************/
/* Type Definition for the List of Socket Options.                  */
/********************************************************************/
typedef _Packed struct Qtoc_RtvNetCnnDta_LSO
{
  unsigned long Socket_Option;
  unsigned long Option_Value;
} Qtoc_RtvNetCnnDta_LSO_t;

/********************************************************************/
/* Type Definition for the List of Job/Task Connections.            */
/********************************************************************/
typedef _Packed struct Qtoc_RtvNetCnnDta_LC
{
  unsigned long Format_Entry;
  char          Task_Name[16];
  char          Job_Name[10];
  char          Job_User_Name[10];
  char          Job_Number[6];
  char          Internal_Job_Identifier[16];
} Qtoc_RtvNetCnnDta_LC_t;

/********************************************************************/
/* Type Definition for the QtocRtvNetCnnDta API NCND1100 output     */
/* format of the receiver variable.                                 */
/********************************************************************/
typedef _Packed struct Qtoc_RtvNetCnnDta_NCND1100
{
  unsigned long Bytes_Returned;
  unsigned long Bytes_Available;
  unsigned long TCP_Connections_Curr_Est;
  unsigned long TCP_Active_Opens;
  unsigned long TCP_Passive_Opens;
  unsigned long TCP_Attempted_Opens_Failed;
  unsigned long TCP_Established_And_Then_Reset;
  unsigned long TCP_Segments_Sent;
  unsigned long TCP_Retransmitted_Segments;
  unsigned long TCP_Reset_Segments;
  unsigned long TCP_Segments_Received;
  unsigned long TCP_Segments_Received_In_Error;
  unsigned long UDP_Datagrams_Sent;
  unsigned long UDP_Datagrams_Received;
  unsigned long UDP_Datagrams_ND_Port_Not_Fnd;
  unsigned long UDP_Datagrams_ND_Other_Dtg_Err;
  unsigned long Offset_To_Additional_Info;
  unsigned long Length_Of_Additional_Info;
} Qtoc_RtvNetCnnDta_NCND1100_t;

/********************************************************************/
/* Type Definition for the QtocRtvNetCnnDta API NCND1200 output     */
/* format.  If this format is requested then output format NCND1100 */
/* is included.                                                     */
/********************************************************************/
typedef _Packed struct Qtoc_RtvNetCnnDta_NCND1200
{
  unsigned long      Protocol;
  char               Local_IP6_Address[16];
  unsigned long      Local_Port_Number;
  char               Remote_IP6_Address[16];
  unsigned long      Remote_Port_Number;
  unsigned long      Round_Trip_Time;
  unsigned long      Round_Trip_Variance;
  unsigned long      Outgoing_Bytes_Buffered;
  unsigned long      User_Send_Next;
  unsigned long      Send_Next;
  unsigned long      Send_Unacknowledged;
  unsigned long      Outgoing_Push_Number;
  unsigned long      Outgoing_Urgency_Number;
  unsigned long      Outgoing_Window_Number;
  unsigned long      Incoming_Bytes_Buffered;
  unsigned long      Receive_Next;
  unsigned long      User_Receive_Next;
  unsigned long      Incoming_Push_Number;
  unsigned long      Incoming_Urgency_Number;
  unsigned long      Incoming_Window_Number;
  unsigned long      Total_Retransmissions;
  unsigned long      Current_Retransmissions;
  unsigned long      Maximum_Window_Size;
  unsigned long      Current_Window_Size;
  unsigned long      Last_Update;
  unsigned long      Last_Update_Acknowledged;
  unsigned long      Congestion_Window;
  unsigned long      Slow_Start_Threshold;
  unsigned long      Maximum_Segment_Size;
  unsigned long      Initial_Send_Sequence_Number;
  unsigned long      Initial_Receive_Sequence_Num;
  unsigned long      Connection_Transport_Layer;
  unsigned long      TCP_State;
  unsigned long      Connection_Open_Type;
  unsigned long      Idle_Time_In_Milliseconds;
  unsigned long long Bytes_In;
  unsigned long long Bytes_Out;
  unsigned long      Socket_State;
  char               Associated_User_Profile[10];
  char               Reserved_1[2];
  unsigned long      Offset_List_Of_Socket_Options;
  unsigned long      Num_Socket_Opts_Assoc_With_Cnn;
  unsigned long      Entry_Len_List_Sock_Opts_A_W_C;
  unsigned long      Offset_List_Jobs_Assoc_W_Cnn;
  unsigned long      Num_Jobs_Assoc_With_Connection;
  unsigned long      Entry_Len_List_Jobs_A_W_Cnn;
} Qtoc_RtvNetCnnDta_NCND1200_t;

/********************************************************************/
/* Type Definition for the ARPT0100 format of the user space.       */
/********************************************************************/
typedef _Packed struct Qtoc_LstPhyIfcARPT_ARPT0100
{
  char          Internet_Address[15];
  char          Reserved_1;
  unsigned long Internet_Address_Binary;
  long          Line_Type;
  long          Ethernet_Type;
  long          Type_Of_Entry;
  unsigned long Data_Link_Cnn_Identifier;
  long          Routing_Info_Field_Valid_Mask;
  char          Routing_Information_Field[18];
  char          Physical_Address[17];
  char          Reserved_2;
} Qtoc_LstPhyIfcARPT_ARPT0100_t;

/********************************************************************/
/* Type Definition for QtocRtvTCPA API output format TCPA0100.      */
/********************************************************************/
typedef _Packed struct Qtoc_RtvTCPA_TCPA0100
{
  unsigned long Bytes_Returned;
  unsigned long Bytes_Available;
  unsigned long TCPIP_Stack_Status;
  unsigned long How_Long_Active;
  char          When_Last_Started_Date[8];
  char          When_Last_Started_Time[6];
  char          When_Last_Ended_Date[8];
  char          When_Last_Ended_Time[6];
  char          Who_Last_Started_Job_Name[10];
  char          Who_Last_Started_Job_User_Name[10];
  char          Who_Last_Started_Job_Number[6];
  char          Who_Last_Started_Int_Job_ID[16];
  char          Who_Last_Ended_Job_Name[10];
  char          Who_Last_Ended_Job_User_Name[10];
  char          Who_Last_Ended_Job_Number[6];
  char          Who_Last_Ended_Internal_Job_ID[16];
  unsigned long Offset_To_Additional_Info;
  unsigned long Length_Of_Additional_Info;
  unsigned long Limited_Mode;
} Qtoc_RtvTCPA_TCPA0100_t;

/********************************************************************/
/* Type Definition for QtocRtvTCPA API output format TCPA0200.      */
/* If this format is requested then output format TCPA0100 is       */
/* included.                                                        */
/********************************************************************/
typedef _Packed struct Qtoc_RtvTCPA_TCPA0200
{
  unsigned long IP_Datagram_Forwarding;
  unsigned long UDP_Checksum;
  unsigned long Log_Protocol_Errors;
  unsigned long IP_Source_Routing;
  unsigned long TCP_Urgent_Pointer;
  unsigned long IP_Reassembly_Timeout;
  unsigned long IP_Time_To_Live;
  unsigned long TCP_Keep_Alive;
  unsigned long TCP_Receive_Buffer;
  unsigned long TCP_Send_Buffer;
  unsigned long ARP_Cache_Timeout;
  unsigned long MTU_Path_Discovery;
  unsigned long MTU_Discovery_Interval;
  unsigned long QoS_Enablement;
  unsigned long QoS_Timer_Resolution;
  unsigned long QoS_Data_Path_Optimization;
  unsigned long Dead_Gateway_Detection_Enable;
  unsigned long Dead_Gateway_Detect_Interval;
  unsigned long TCP_Time_Wait_Timeout;
  unsigned long TCP_R1_Retransmission_Count;
  unsigned long TCP_R2_Retransmission_Count;
  unsigned long TCP_Min_Retransmission_Timeout;
  unsigned long TCP_Close_Connection_Message;
  unsigned long Network_File_Cache_Enablement;
  unsigned long Network_File_Cache_Interval;
  unsigned long Network_File_Cache_Size;
  unsigned long ECN_Enable;
} Qtoc_RtvTCPA_TCPA0200_t;

/********************************************************************/
/* Type Definition for the TCPA0300 format of the receiver variable.*/
/* If this format is requested the TCPA0100 format is included.     */
/********************************************************************/
typedef _Packed struct Qtoc_RtvTCPA_TCPA0300
{
  unsigned long Offset_To_List_Internet_Addr;
  unsigned long Number_Of_Internet_Addresses;
  unsigned long Entry_Len_List_Internet_Addr;
  unsigned long DNS_Protocol;
  unsigned long Retries;
  unsigned long Time_Interval;
  unsigned long Search_Order;
  unsigned long Initial_DNS_Server;
  unsigned long DNS_Listening_Port;
  char          Host_Name[64];
  char          Domain_Name[255];
  char          Reserved_1;
  char          Domain_Search_List[256];
} Qtoc_RtvTCPA_TCPA0300_t;

/********************************************************************/
/* Type Definition for the List of Internet Addresses               */
/********************************************************************/
typedef _Packed struct Qtoc_RtvTCPA_LIA
{
  char          Internet_Address[15];
  char          Reserved_1;
  unsigned long Internet_Address_Binary;
} Qtoc_RtvTCPA_Inet_Addr_t;

/********************************************************************/
/* Type Definition for the QtocRtvTCPA API TCPA1100 output          */
/* format.                                                          */
/********************************************************************/
typedef _Packed struct Qtoc_RtvTCPA_TCPA1100
{
  unsigned long Bytes_Returned;
  unsigned long Bytes_Available;
  unsigned long TCPIP6_Stack_Status;
  unsigned long Offset_To_Additional_Info;
  unsigned long Length_Of_Additional_Info;
} Qtoc_RtvTCPA_TCPA1100_t;

/********************************************************************/
/* Type Definition for QtocRtvTCPA API output format TCPA1200.      */
/* If this format is requested then output format TCPA1100 is       */
/* included.                                                        */
/********************************************************************/
typedef _Packed struct Qtoc_RtvTCPA_TCPA1200
{
  unsigned long ICMP_Error_Msg_Send_Rate_Time;
  unsigned long Router_Solicitation_Max_Delay;
  unsigned long Router_Solicitation_Interval;
  unsigned long Router_Sol_Max_Transmits;
  unsigned long Neighbor_Adv_Max_Transmits;
  unsigned long Neigh_Sol_Del_First_Probe_Time;
  unsigned long Neigh_Sol_Max_Unicast_Solicits;
  unsigned long Neigh_Sol_Max_Multicast_Sols;
  unsigned long TCP_Keep_Alive;
  unsigned long TCP_Urgent_Pointer;
  unsigned long TCP_Receive_Buffer_Size;
  unsigned long TCP_Send_Buffer_Size;
  unsigned long TCP_R1_Retransmission_Count;
  unsigned long TCP_R2_Retransmission_Count;
  unsigned long TCP_Closed_Timewait_Timeout;
  unsigned long TCP_Min_Retransmission_Timeout;
} Qtoc_RtvTCPA_TCPA1200_t;

/********************************************************************/
/* Type Definition for QtocRtvTCPA API output format TCPA1300.      */
/* If this format is requested then output format TCPA1100 is       */
/* included.                                                        */
/********************************************************************/
typedef _Packed struct Qtoc_RtvTCPA_TCPA1300
{
  unsigned long ICMP_Error_Message_Burst_Limit;
  unsigned long ICMP_Error_Message_Send_Rate;
  unsigned long Hop_Limit;
} Qtoc_RtvTCPA_TCPA1300_t;

/********************************************************************/
/* Type Definition for QtocCvtIfcID API output format NCII0100.     */
/********************************************************************/
typedef _Packed struct Qtoc_CvtIfcID_NCII0100
{
  unsigned long Bytes_Returned;
  unsigned long Bytes_Available;
  char          Interface_Address[45];
  char          Reserved_1[3];
  char          Line_Description[10];
  char          Reserved_2[6];
} Qtoc_CvtIfcID_NCII0100_t;

/********************************************************************/
/* Type Definition for QtocCvtIfcID API output format NCII0200.     */
/********************************************************************/
typedef _Packed struct Qtoc_CvtIfcID_NCII0200
{
  unsigned long Bytes_Returned;
  unsigned long Bytes_Available;
  char          Alias_Name[50];
  char          Reserved[6];
  unsigned long Alias_Name_CCSID;
} Qtoc_CvtIfcID_NCII0200_t;

/********************************************************************/
/* Type Definition for QtocCvtIfcID API output format NCII0300.     */
/********************************************************************/
typedef _Packed struct Qtoc_CvtIfcID_NCII0300
{
  unsigned long Bytes_Returned;
  unsigned long Bytes_Available;
  char          Alias_Name[50];
  char          Reserved[6];
  unsigned long Alias_Name_CCSID;
} Qtoc_CvtIfcID_NCII0300_t;

/********************************************************************/
/* Type Definition for QtocLstNeighborTbl API output format         */
/* NNCT0100.                                                        */
/********************************************************************/
typedef _Packed struct Qtoc_LstNeighborTbl_NNCT0100
{
  char               Internet_IP6_Address[45];
  char               Reserved_1[3];
  char               Internet_IP6_Address_Binary[16];
  char               Link_Layer_Address[17];
  char               Reserved_2[7];
  unsigned long long Link_Layer_Address_Binary;
  char               Line_Name[10];
  char               Reserved_3[2];
  long               Reachability_State;
  char               Reachability_State_Change_Date[8];
  char               Reachability_State_Change_Time[9];
  char               Reserved_4[3];
  long               Reachability_State_Error_Info;
  unsigned long      Time_In_Reachable_State;
  unsigned long      Is_Router;
  unsigned long      Num_Unicast_NS_Packets_Sent;
  unsigned long      Num_Multicast_NS_Packets_Sent;
  unsigned long      Delay_First_Probe_Time;
  unsigned long      Max_Unicast_Solicits;
  unsigned long      Max_Multicast_Solicits;
} Qtoc_LstNeighborTbl_NNCT0100_t;


/********************************************************************/
/* Constants for QtocRtvNetCnnDta special values which may come in  */
/* as input or be returned in an output format.                     */
/********************************************************************/

/* Input: Socket Connection Request - Protocol field */
#define QTOC_RNCD_PROT_TOTALS               0
#define QTOC_RNCD_PROT_TCP4                 1
#define QTOC_RNCD_PROT_UDP4                 2
#define QTOC_RNCD_PROT_TCP6                 3
#define QTOC_RNCD_PROT_UDP6                 4

/* Associated Jobs: Entry Type constants */
#define QTOC_RNCD_JOB_ENTRY                 1
#define QTOC_RNCD_TASK_ENTRY                2

/* Protocol constants */
#define QTOC_IP6_RNCD_TCP                   1
#define QTOC_IP6_RNCD_UDP                   2

/* Connection Transport Layer constants */
#define QTOC_IP6_RNCD_IPS                   0
#define QTOC_IP6_RNCD_IPX                   1
#define QTOC_IP6_RNCD_TCPIP                 2

/* TCP State constants */
#define QTOC_IP6_RNCD_LISTEN                0
#define QTOC_IP6_RNCD_SYN_SENT              1
#define QTOC_IP6_RNCD_SYN_RECV              2
#define QTOC_IP6_RNCD_ESTABLISHED           3
#define QTOC_IP6_RNCD_FIN_WAIT1             4
#define QTOC_IP6_RNCD_FIN_WAIT2             5
#define QTOC_IP6_RNCD_CLOSE_WAIT            6
#define QTOC_IP6_RNCD_CLOSING               7
#define QTOC_IP6_RNCD_LAST_ACK              8
#define QTOC_IP6_RNCD_TIME_WAIT             9
#define QTOC_IP6_RNCD_CLOSED                10
#define QTOC_IP6_RNCD_NOT_SUPPORTED         11

/* Connection Open Type constants */
#define QTOC_IP6_RNCD_COT_PASSIVE           0
#define QTOC_IP6_RNCD_COT_ACTIVE            1
#define QTOC_IP6_RNCD_COT_NOT_SUPPORTED     2

/* Socket State constants */
#define QTOC_IP6_RNCD_UNINITIALIZED         0
#define QTOC_IP6_RNCD_UNBOUND               1
#define QTOC_IP6_RNCD_BOUND                 2
#define QTOC_IP6_RNCD_LISTENING             3
#define QTOC_IP6_RNCD_CONNECTING            4
#define QTOC_IP6_RNCD_CONNECTED             5
#define QTOC_IP6_RNCD_DISCONNECTED          6
#define QTOC_IP6_RNCD_ERROR                 7

/* Socket Option constants */
#define QTOC_IP6_RNCD_SO_BROADCAST          1
#define QTOC_IP6_RNCD_SO_DONTROUTE          2
#define QTOC_IP6_RNCD_SO_DEBUG              3
#define QTOC_IP6_RNCD_SO_ERROR              4
#define QTOC_IP6_RNCD_SO_KEEPALIVE          5
#define QTOC_IP6_RNCD_SO_LINGER             6
#define QTOC_IP6_RNCD_SO_LINGER_TIME        7
#define QTOC_IP6_RNCD_SO_OOBINLINE          8
#define QTOC_IP6_RNCD_SO_RCVBUF             9
#define QTOC_IP6_RNCD_SO_RCVLOWAT           10
#define QTOC_IP6_RNCD_SO_REUSEADDR          11
#define QTOC_IP6_RNCD_SO_SNDBUF             12
#define QTOC_IP6_RNCD_SO_TYPE               13

/********************************************************************/
/* Constants for QtocLstNetCnn output format NCNN0200 special       */
/*   values which may be returned.                                  */
/********************************************************************/

/* TCP State constants */
#define QTOC_IP6_CNN_LISTEN                0
#define QTOC_IP6_CNN_SYN_SENT              1
#define QTOC_IP6_CNN_SYN_RECV              2
#define QTOC_IP6_CNN_ESTABLISHED           3
#define QTOC_IP6_CNN_FIN_WAIT1             4
#define QTOC_IP6_CNN_FIN_WAIT2             5
#define QTOC_IP6_CNN_CLOSE_WAIT            6
#define QTOC_IP6_CNN_CLOSING               7
#define QTOC_IP6_CNN_LAST_ACK              8
#define QTOC_IP6_CNN_TIME_WAIT             9
#define QTOC_IP6_CNN_CLOSED                10
#define QTOC_IP6_CNN_NOT_SUPPORTED         11

/* Connection Open Type constants */
#define QTOC_IP6_CNN_COT_PASSIVE           0
#define QTOC_IP6_CNN_COT_ACTIVE            1
#define QTOC_IP6_CNN_COT_NOT_SUPPORTED     2

/********************************************************************/
/* Constants for QtocLstNetIfc output format NIFC0200 special       */
/*   values which may be returned.                                  */
/********************************************************************/

/* Address Type constants */
#define QTOC_IP6_LI_UNICAST                1
#define QTOC_IP6_LI_MULTICAST              2
#define QTOC_IP6_LI_ANYCAST                3

/* Address State constants */
#define QTOC_IP6_LI_ADDR_FAILED            -1
#define QTOC_IP6_LI_ADDR_INACTIVE          1
#define QTOC_IP6_LI_ADDR_DUPLICATE         2
#define QTOC_IP6_LI_ADDR_TENTATIVE         3
#define QTOC_IP6_LI_ADDR_PREFERRED         4
#define QTOC_IP6_LI_ADDR_DEPRECATED        5
#define QTOC_IP6_LI_ADDR_EXPIRED           6
#define QTOC_IP6_LI_ADDR_NON_LISTENER      11
#define QTOC_IP6_LI_ADDR_IDLE_LISTENER     12
#define QTOC_IP6_LI_ADDR_DELAYING_LISTENER 13

/* Address Preferred & Valid Lifetime constants */
#define QTOC_IP6_LI_INFINITE               -1000000000
#define QTOC_IP6_LI_NOT_APPLICABLE         -1000000001

/* Address Preferred & Valid Expiration Date constants */
#define QTOC_IP6_LI_DATE_INFINITE          "00000000"
#define QTOC_IP6_LI_DATE_NOT_APPLICABLE    "00000001"

/* Address Preferred & Valid Expiration Time constants */
#define QTOC_IP6_LI_TIME_INFINITE          "000000"
#define QTOC_IP6_LI_TIME_NOT_APPLICABLE    "000001"

/* Interface Line Type constants */
#define QTOC_IP6_LI_OTHER                 -1
#define QTOC_IP6_LI_NONE                  -2
#define QTOC_IP6_LI_ERROR                 -3
#define QTOC_IP6_LI_NOTFND                -4
#define QTOC_IP6_LI_ELAN                  1
#define QTOC_IP6_LI_TRLAN                 2
#define QTOC_IP6_LI_FR                    3
#define QTOC_IP6_LI_ASYNC                 4
#define QTOC_IP6_LI_PPP                   5
#define QTOC_IP6_LI_WLS                   6
#define QTOC_IP6_LI_X25                   7
#define QTOC_IP6_LI_DDI                   8
#define QTOC_IP6_LI_TDLC                  9
#define QTOC_IP6_LI_L2TP                  10
#define QTOC_IP6_LI_64TNL                 11

/* Interface Status constants */
#define QTOC_IP6_LI_INACTIVE              0
#define QTOC_IP6_LI_ACTIVE                1
#define QTOC_IP6_LI_STARTING              2
#define QTOC_IP6_LI_ENDING                3
#define QTOC_IP6_LI_RCYPND                4
#define QTOC_IP6_LI_RCYCNL                5
#define QTOC_IP6_LI_FAILED                6
#define QTOC_IP6_LI_FAILED_TCP            7
#define QTOC_IP6_LI_DEPRECATED            8
#define QTOC_IP6_LI_EXPIRED               9

/* Automatic Start constants */
#define QTOC_IP6_LI_FALSE                 0
#define QTOC_IP6_LI_TRUE                  1

/* Packet Rules constants */
#define QTOC_IP6_LI_PR_OTHER              -1
#define QTOC_IP6_LI_PR_NONE               0
#define QTOC_IP6_LI_PR_NAT                1
#define QTOC_IP6_LI_PR_FILTERS            2
#define QTOC_IP6_LI_PR_FILTERS_AND_NAT    3
#define QTOC_IP6_LI_PR_FILTERS_AND_IPSEC  4
#define QTOC_IP6_LI_PR_NAT_AND_FILTERS_AND_IPSEC  5

/* Interface Source constants */
#define QTOC_IP6_LI_STATELESS             1
#define QTOC_IP6_LI_STATEFUL              2
#define QTOC_IP6_LI_MANUAL                3
#define QTOC_IP6_LI_LOOPBACK              4

/* Multicast - Number of References constants */
#define QTOC_IP6_LI_NOT_MULTICAST         -1


/********************************************************************/
/* Constants for QtocLstNetRte output format NRTE0200 special       */
/*   values which may be returned.                                  */
/********************************************************************/

/* Next Hop Address Family constants */
#define QTOC_IP6_RT_AF_INET               1
#define QTOC_IP6_RT_AF_INET6              2

/* Next Hop IPv6 constants */
#define QTOC_IP6_RT_NH_IP6_DIRECT         "*DIRECT"

/* Local Binding Line Type constants */
#define QTOC_IP6_RT_OTHER                 -1
#define QTOC_IP6_RT_NONE                  -2
#define QTOC_IP6_RT_ERROR                 -3
#define QTOC_IP6_RT_NOTFND                -4
#define QTOC_IP6_RT_ELAN                  1
#define QTOC_IP6_RT_TRLAN                 2
#define QTOC_IP6_RT_FR                    3
#define QTOC_IP6_RT_ASYNC                 4
#define QTOC_IP6_RT_PPP                   5
#define QTOC_IP6_RT_WLS                   6
#define QTOC_IP6_RT_X25                   7
#define QTOC_IP6_RT_DDI                   8
#define QTOC_IP6_RT_TDLC                  9
#define QTOC_IP6_RT_L2TP                  10
#define QTOC_IP6_RT_64TNL                 11

/* Local Binding Line Status constants */
#define QTOC_IP6_RT_ACTIVE                1
#define QTOC_IP6_RT_INACTIVE              2
#define QTOC_IP6_RT_FAILED                3

/* Route Status constants*/
#define QTOC_IP6_RT_ST_UNKNOWN            0
#define QTOC_IP6_RT_ST_ACTIVE             1
#define QTOC_IP6_RT_ST_INACTIVE           3

/* Route Lifetime constants */
#define QTOC_IP6_RT_INFINITE              -1000000000

/* Route Lifetime At Creation constants */
#define QTOC_IP6_RT_CREATION_INFINITE     0

/* Route Source constants */
#define QTOC_IP6_RT_SO_UNKNOWN            0
#define QTOC_IP6_RT_SO_REDIRECT           1
#define QTOC_IP6_RT_SO_RA_ROUTER_LIFETIME 2
#define QTOC_IP6_RT_SO_RA_PRFIX_OPTION    3
#define QTOC_IP6_RT_SO_CFGRTE             4
#define QTOC_IP6_RT_SO_CFGIFC             5
#define QTOC_IP6_RT_SO_AUTOCONFIG         6
#define QTOC_IP6_RT_SO_RIP                7
#define QTOC_IP6_RT_SO_OSPF               8
#define QTOC_IP6_RT_SO_ROUTING            9

/* Route Type constants */
#define QTOC_IP6_RT_UNKNOWN               0
#define QTOC_IP6_RT_DFTROUTE              1
#define QTOC_IP6_RT_DIRECT                2
#define QTOC_IP6_RT_HOST                  3
#define QTOC_IP6_RT_NET                   4

/* Configured Route MTU constants */
#define QTOC_IP6_RT_IP6LINMTU             0

/* Is On-link constants */
#define QTOC_IP6_RT_UNKNOWN_ONLINK        0
#define QTOC_IP6_RT_IS_ONLINK             1

/* Duplicate Indicator constants */
#define QTOC_IP6_RT_NOT_DUPLICATE         1
#define QTOC_IP6_RT_HAS_DUPLICATE         2
#define QTOC_IP6_RT_IS_DUPLICATE          3

/* Expiration Date constants */
#define QTOC_IP6_RT_DATE_INFINITE         "00000000"

/* Expiration Time constants */
#define QTOC_IP6_RT_TIME_INFINITE         "000000"

/********************************************************************/
/* Constants for QtocLstPhyIfcDta output format IFCD0100 special    */
/*   values which may be returned.                                  */
/********************************************************************/

/* Line Type constants */
#define QTOC_PI_OTHER                     -1
#define QTOC_PI_NONE                      -2
#define QTOC_PI_ERROR                     -3
#define QTOC_PI_NOTFND                    -4
#define QTOC_PI_ELAN                      1
#define QTOC_PI_TRLAN                     2
#define QTOC_PI_FR                        3
#define QTOC_PI_ASYNC                     4
#define QTOC_PI_PPP                       5
#define QTOC_PI_X25                       6
#define QTOC_PI_DDI                       7
#define QTOC_PI_OPC                       8
#define QTOC_PI_LOOPBACK                  9
#define QTOC_PI_64TNL                     10

/* Packet Rules constants */
#define QTOC_PI_PR_NONE                   0
#define QTOC_PI_PR_NAT                    1
#define QTOC_PI_PR_FILTERS                2
#define QTOC_PI_PR_NAT_AND_FILTERS        3
#define QTOC_PI_PR_FILTERS_AND_IPSEC      4
#define QTOC_PI_PR_NAT_AND_FILTERS_AND_IPSEC 5

/* Physical Interface Status constants */
#define QTOC_PI_UNKNOWN                   0
#define QTOC_PI_ACTIVE                    1
#define QTOC_PI_INACTIVE                  2
#define QTOC_PI_FAILED                    3
#define QTOC_PI_STARTING                  4
#define QTOC_PI_ENDING                    5
#define QTOC_PI_RCYPND                    6
#define QTOC_PI_RCYCNL                    7

/* Internet Protocol constants */
#define QTOC_PI_IP4                       1
#define QTOC_PI_IP6                       2
#define QTOC_PI_IP4_AND_IP6               3


/********************************************************************/
/* Constants for QtocLstPhyIfcDta output format IFCD0300 special    */
/*   values which may be returned.                                  */
/********************************************************************/

/* Packet Rules - IPv6 constants */
#define QTOC_IP6_PI_OTHER                 -1
#define QTOC_IP6_PI_NONE                  0
#define QTOC_IP6_PI_NAT                   1
#define QTOC_IP6_PI_FILTERS               2
#define QTOC_IP6_PI_FILTERS_AND_NAT       3
#define QTOC_IP6_PI_FILTERS_AND_IPSEC     4
#define QTOC_IP6_PI_NAT_AND_FILTERS_AND_IPSEC 5

/* MTU - Configured & Current constants */
#define QTOC_IP6_PI_LIND                  0

/* Use Stateless Autoconfig, Use Stateful Address Configuration,   */
/* Use Other Stateful Configuration, Accept Router Advertisements, */
/* and Accept Redirects constants                                  */
#define QTOC_IP6_PI_FALSE                 0
#define QTOC_IP6_PI_TRUE                  1
#define QTOC_IP6_PI_UNKNOWN               2

/* Duplicate Address Detection (DAD) Max Transmits */
#define QTOC_IP6_PI_NO_DAD                0

/* Local Tunnel Endpoint IPv4 Address (& Binary) constants */
#define QTOC_IP6_PI_NOT_TUNNEL            "000000000000000"
#define QTOC_IP6_PI_NOT_TUNNEL_BIN        0

/* Autoconfig LineStatus constants */
#define QTOC_IP6_PI_AUTOCONFIG_NOT_ACTIVE 0
#define QTOC_IP6_PI_SAC_CONFIGURED        1
#define QTOC_IP6_PI_SAC_ACTIVE            2

/********************************************************************/
/* Constants for QtocRtvTCPA output format TCPA1100 special         */
/*   values which may be returned.                                  */
/********************************************************************/

/* TCP/IPv6 Stack Status constants */
#define QTOC_IP6_TCPA_INACTIVE            0
#define QTOC_IP6_TCPA_ACTIVE              1
#define QTOC_IP6_TCPA_STARTING            2
#define QTOC_IP6_TCPA_ENDING_IMMEDIATE    3
#define QTOC_IP6_TCPA_ENDING_CONTROLLED   4

/********************************************************************/
/* Constants for QtocRtvTCPA output format TCPA1200 special         */
/*   values which may be returned.                                  */
/********************************************************************/

/* TCP Urgent Pointer constants */
#define QTOC_IP6_TCPA_BSD                 1
#define QTOC_IP6_TCPA_RFC                 2

/********************************************************************/
/* Constants for QtocRtvTCPA output format TCPA1300 special         */
/*   values which may be returned.                                  */
/********************************************************************/

/* TCP Address selection constants */
#define QTOC_IP6_TCPA_NATIVE                 0
#define QTOC_IP6_TCPA_6TO4                   1

/********************************************************************/
/* Constants for QtocLstNeighborTbl output format NNCT0100 special  */
/*   values which may be returned.                                  */
/********************************************************************/

/* Reachability State constants */
#define QTOC_IP6_NC_ERROR                 -1
#define QTOC_IP6_NC_INCOMPLETE            1
#define QTOC_IP6_NC_REACHABLE             2
#define QTOC_IP6_NC_STALE                 3
#define QTOC_IP6_NC_DELAY                 4
#define QTOC_IP6_NC_PROBE                 5
#define QTOC_IP6_NC_DELETING              6

/* Reachability State Error Information constants */
#define QTOC_IP6_NC_NO_ERROR              0
#define QTOC_IP6_NC_UNKNOWN               1

/* Time in Reachable State constants */
#define QTOC_IP6_NC_NOT_REACHABLE         -1

/* Is Router constants */
#define QTOC_IP6_NC_FALSE                 0
#define QTOC_IP6_NC_TRUE                  1



/********************************************************************/
/* External function prototypes                                     */
/********************************************************************/

/* QtocLstNetCnn                                                    */
/* 1st arg - INPUT  - pointer to qualified user space name          */
/* 2nd arg - INPUT  - pointer to API output format name             */
/* 3rd arg - INPUT  - pointer to connection list qualifier          */
/* 4th arg - INPUT  - pointer to connection list qualifier size     */
/* 5th arg - INPUT  - pointer to connection list qualifier format   */
/* 6th arg - I/O    - pointer to Error code storage variable        */

#ifdef __ILEC400__
  #pragma argument(QtocNetCnn,OS,nowiden)
#endif

QTOC_EXTERN void QtocLstNetCnn
             ( char *,      /* user space and library name          */
               char *,      /* format name                          */
               char *,      /* Connection list qualifier            */
               int  *,      /* Connection list qualifier size       */
               char *,      /* Connection list qualifier format     */
               char *);     /* error code                           */

/* QtocLstNetIfc                                                    */
/* 1st arg - INPUT  - pointer to qualified user space name          */
/* 2nd arg - INPUT  - pointer to API output format name             */
/* 3rd arg - I/O    - pointer to Error code storage variable        */

#ifdef __ILEC400__
  #pragma argument(QtocLstNetIfc,OS,nowiden)
#endif

QTOC_EXTERN void QtocLstNetIfc
              (char *,      /* user space and library name          */
               char *,      /* format name                          */
               char *);     /* error code                           */

/* QtocLstNetRte                                                    */
/* 1st arg - INPUT  - pointer to qualified user space name          */
/* 2nd arg - INPUT  - pointer to API output format name             */
/* 3rd arg - I/O    - pointer to Error code storage variable        */

#ifdef __ILEC400__
  #pragma argument(QtocLstNetRte,OS,nowiden)
#endif

QTOC_EXTERN void QtocLstNetRte
             ( char *,      /* user space and library name          */
               char *,      /* format name                          */
               char *);     /* error code                           */

/* QtocLstPhyIfcDta                                                 */
/* 1st arg - INPUT  - pointer to qualified user space name          */
/* 2nd arg - INPUT  - pointer to API output format name             */
/* 3rd arg - I/O    - pointer to Error code storage variable        */

#ifdef __ILEC400__
  #pragma argument(QtocLstPhyIfcDta,OS,nowiden)
#endif

QTOC_EXTERN void QtocLstPhyIfcDta
             ( char *,      /* user space and library name          */
               char *,      /* format name                          */
               char *);     /* error code                           */

/* QtocRtvNetCnnDta                                                 */
/* 1st arg - I/O    - pointer to receiver variable space            */
/* 2nd arg - INPUT  - size of receiver variable                     */
/* 3rd arg - INPUT  - pointer to API output format name             */
/* 4th arg - INPUT  - pointer to Socket Connection Request          */
/* 5th arg - I/O    - pointer to Error code storage variable        */

#ifdef __ILEC400__
  #pragma argument(QtocRtvNetCnnDta,OS,nowiden)
#endif

QTOC_EXTERN void QtocRtvNetCnnDta
       ( char *,            /* receiver variable                    */
         unsigned long *,   /* length of receiver variable          */
         char *,            /* format name                          */
         char *,            /* socket connection request format     */
         char *);           /* error code                           */

/* QtocLstPhyIfcARPTbl                                              */
/* 1st arg - I/O    - pointer to user space and library name        */
/* 2nd arg - INPUT  - pointer to format name                        */
/* 3rd arg - INPUT  - pointer to line name                          */
/* 4th arg - I/O    - pointer to Error code storage variable        */

#ifdef __ILEC400__
  #pragma argument(QtocLstPhyIfcARPTbl,OS,nowiden)
#endif

QTOC_EXTERN void QtocLstPhyIfcARPTbl(char *,   /* user space and    */
                                               /* library name      */
                                     char *,   /* format name       */
                                     char *,   /* line name         */
                                     char *);  /* error code        */

/* QtocRmvARPTblE                                                   */
/* 1st arg - INPUT  - pointer to line name                          */
/* 2nd arg - INPUT  - pointer to internet address of entry to remove*/
/* 3rd arg - INPUT  - pointer to entry type                         */
/* 4th arg - I/O    - pointer to Error code storage variable        */

#ifdef __ILEC400__
  #pragma argument(QtocRmvARPTblE,OS,nowiden)
#endif

QTOC_EXTERN void QtocRmvARPTblE(char *,         /* line name        */
                                unsigned long *,/* internet address */
                                char *,         /* entry type       */
                                char *);        /* error code       */

/* QtocRtvTCPA                                                      */
/* 1st arg - OUTPUT - pointer to receiver variable space            */
/* 2nd arg - INPUT  - size of receiver variable                     */
/* 3rd arg - INPUT  - pointer to API output format name             */
/* 4th arg - I/O    - pointer to Error code storage variable        */

#ifdef __ILEC400__
  #pragma argument(QtocRtvTCPA,OS,nowiden)
#endif

QTOC_EXTERN void QtocRtvTCPA(char *, /* receiver variable           */
                   unsigned long *,  /* length of receiver variable */
                   char *,           /* format name                 */
                   char *);          /* Error code                  */

/* QtocCvtIfcID                                                     */
/* 1st arg - OUTPUT - pointer to receiver variable space            */
/* 2nd arg - INPUT  - size of receiver variable                     */
/* 3rd arg - INPUT  - pointer to API output format name             */
/* 4th arg - INPUT  - pointer to Alias name or IP address           */
/* 5th arg - INPUT  - pointer to Alias name CCSID                   */
/* 6th arg - I/O    - pointer to Error code storage variable        */

#ifdef __ILEC400__
  #pragma argument(QtocCvtIfcID,OS,nowiden)
#endif

QTOC_EXTERN void QtocCvtIfcID
             ( char *,            /* receiver variable              */
               unsigned long *,   /* receiver variable length       */
               char *,            /* format name                    */
               char *,            /* interface request              */
               unsigned long *,   /* interface request CCSID        */
               char *);           /* error code                     */

/* QtocLstNeighborTbl                                               */
/* 1st arg - I/O    - pointer to user space and library name        */
/* 2nd arg - INPUT  - pointer to format name                        */
/* 3rd arg - INPUT  - pointer to line name                          */
/* 4th arg - I/O    - pointer to Error code storage variable        */

#ifdef __ILEC400__
  #pragma argument(QtocLstNeighborTbl,OS,nowiden)
#endif

QTOC_EXTERN void QtocLstNeighborTbl(char *,   /* user space and     */
                                              /* library name       */
                                    char *,   /* format name        */
                                    char *,   /* line name          */
                                    char *);  /* error code         */


#if (__OS400_TGTVRM__>=510)
#pragma datamodel(pop)
#endif

#endif /* _QTOCNETSTS_H */
