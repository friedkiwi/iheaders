 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QDCRCTLD                                   */
 /*                                                                */
 /* Descriptive Name: Retrieve Controller Description API          */
 /*                                                                */
 /* 5763-SS1  (C) Copyright IBM Corp. 1994,1994                    */
 /* All rights reserved.                                           */
 /* US Government Users Restricted Rights -                        */
 /* Use, duplication or disclosure restricted                      */
 /* by GSA ADP Schedule Contract with IBM Corp.                    */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /*                                                                */
 /* Description: The Retrieve Controller Description (QDCRCTLD)API */
 /*              retrieves information about a controller descrip- */
 /*              tion.                                             */
 /*                                                                */
 /* Header Files Included: None                                    */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: Qdc_CTLD0100_t                                 */
 /*                 Qdc_CTLD0200_t                                 */
 /*                 Qdc_CTLD0300_t                                 */
 /*                 Qdc_CTLD0400_t                                 */
 /*                 Qdc_CTLD0500_t                                 */
 /*                 Qdc_CTLD0600_t                                 */
 /*                 Qdc_CTLD0700_t                                 */
 /*                 Qdc_CTLD0800_t                                 */
 /*                 Qdc_CTLD0900_t                                 */
 /*                 Qdc_CTLD1000_t                                 */
 /*                 Qdc_CTLD1100_t                                 */
 /*                 Qdc_CTLD1200_t                                 */
 /*                 Qdc_CTLD1300_t                                 */
 /*                 Qdc_List_Attached_Devices_t                    */
 /*                 Qdc_Attached_Device_t                          */
 /*                 Qdc_Switched_Line_t                            */
 /*                                                                */
 /* Function Prototype List: QDCRCTLD                              */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= D2862007     3D10  940404 MOREY:    New Include           */
 /* $A1= D0091835     3D60  941018 ROCH:     CTLD0300 field added  */
 /* $A2= P3976922     3D60  941215 ROCH:     CTLD1000 fields added */
 /* $A3= p3617122     3d70  960513 muras:    fix pointer and struct*/
 /* $A4= D9483500     4D20  970401 CMWOOD:   Add system job and    */
 /*                                          HPRPTHSWT fields      */
 /* $A5= D9508400     4D20  970430 CMWOOD:   Add current maxframe  */
 /*                                          size                  */
 /* $A6= P3661092     4D30  971219 XZZ4468:  Add support for DLUR  */
 /*                                          ctl to CTLD0700 format*/
 /* $A7= P3665843     4D30  980224 KDICK:    Add reserved character*/
 /*                                          to CTL0800            */
 /* $A8= D95815       4D40  980806 CMWOOD:   Add msgq fields and   */
 /*                                          BEXROLE.              */
 /* $A9= P3676517     4D40  980818 CMWOOD:   Add current msgq      */
 /*                                          fields                */
 /* $AA= P3676517     4D40  980818 CMWOOD:   Add current msgq field*/
 /*                                          and system job name to*/
 /*                                          additional formats    */
 /* $AB= D97817       4D50  990520 JONES :   Add device wait timer */
 /*                                          to format CTLD1100    */
 /* $AC= D98212.1    v5r1m0 112199 gchaney:Teraspace stage 2       */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

 #ifndef QDCRCTLD_h
 #define QDCRCTLD_h

 #if (__OS400_TGTVRM__>=510)                       /* @ACA */
     #pragma datamodel(P128)                       /* @ACA */
 #endif                                            /* @ACA */

 /******************************************************************/
 /* Prototype for calling Retrieve Controller Description API      */
 /*   QDCRCTLD OPM                                                 */
 /******************************************************************/
 #ifdef  __ILEC400__
       #pragma linkage(QDCRCTLD,OS,nowiden)
 #else
       extern "OS"
 #endif

 void QDCRCTLD (void *,          /* Receiver variable              */
                int,             /* Length of receiver variable  @A3C*/
                char *,          /* Format name                    */
                char *,          /* Controller name                */
                void *);         /* Error code                     */

 /******************************************************************/
 /* Type Definition for the CTLD0100 format.                       */
 /******************************************************************/

 typedef _Packed struct Qdc_CTLD0100
    {
       int  Bytes_Returned;
       int  Bytes_Available;
       int  Num_Attached_Devices;
       char Date_Info_Retrieved[7];
       char Time_Info_Retrieved[6];
       char Controller_Name[10];
       char Controller_Category[10];
       char Online_At_IPL[10];
       char Text_Desc[50];
       char Reserved[3];
    } Qdc_CTLD0100_t;

 /******************************************************************/
 /* Type Definition for the CTLD0200 format.                       */
 /******************************************************************/

 typedef _Packed struct Qdc_List_Attached_Devices
    {
     char Attached_Device_Name[10];
     char Device_Category[10];
     char Device_Type[10];
     char Device_Text_Desc[50];
    } Qdc_List_Attached_Devices_t;

 typedef _Packed struct Qdc_CTLD0200
    {
       Qdc_CTLD0100_t CTLD0100;
       int Offset_Attached_Devices;
       int Length_Attached_Devices;
     /*Qdc_List_Attached_Devices_t List_Attached_Devices[];*//*
                                    Varying length                 */
    } Qdc_CTLD0200_t;


 /******************************************************************/
 /* Type Definition for the CTLD0300 format.                       */
 /****                                                          ****/
 /* NOTE: The following type definition only defines the fixed     */
 /*       portion of the format.  Any varying length field will    */
 /*       have to be defined by the user.                          */
 /******************************************************************/

 typedef _Packed struct Qdc_Attached_Device
    {
     char Device_Name[10];
     char Reserved[2];
    } Qdc_Attached_Device_t;

 typedef _Packed struct Qdc_Attached_Device_Serial           /*A3A*/
    {
     char Device_Name[10];
     char Serial_Number[10];
    } Qdc_Attached_Device_Serial_t;

 typedef _Packed struct Qdc_Switched_Line
    {
     char Switched_Line_Name[10];
     char Reserved[2];
    } Qdc_Switched_Line_t;

 typedef _Packed struct Qdc_CTLD0300
    {
       Qdc_CTLD0100_t CTLD0100;
       int  Max_Frame_Size;
       int  IDLC_Default_Window_Size;
       int  IDLC_Frame_Retry;
       int  IDLC_Response_Timer;
       int  IDLC_Connection_Retry;
       int  Predial_Delay;
       int  Redial_Delay;
       int  Dial_Retries;
       int  Disc_Timer_Min_Connect;
       int  Disc_Timer_Disc_Delay;
       int  SHM_Disconnection_Limit;
       int  SHM_Disconnection_Timer;
       int  SDLC_Poll_Limit;
       int  SDLC_Out_Limit;
       int  SDLC_Connect_Poll_Retry;
       int  SDLC_NDM_Poll_Timer;
       int  LAN_Frame_Retry;
       int  LAN_Connect_Retry;
       int  LAN_Response_Timer;
       int  LAN_Connect_Timer;
       int  LAN_Ack_Timer;
       int  LAN_Inactivate_Timer;
       int  LAN_Ack_Frequency;
       int  LAN_Max_Outstand_Frames;
       int  LAN_Access_Priority;
       int  LAN_Window_Step;
       int  Default_Packet_Size_Transmit;
       int  Default_Packet_Size_Receive;
       int  Neg_Packet_Size_Transmit;
       int  Neg_Packet_Size_Receive;
       int  Default_Window_Size_Transmit;
       int  Default_Window_Size_Receive;
       int  Neg_Window_Size_Transmit;
       int  Neg_Window_Size_Receive;
       int  X25_Frame_Retry;
       int  X25_Connect_Retry;
       int  X25_Response_Timer;
       int  X25_Connect_Timer;
       int  X25_Delay_Connect_Timer;
       int  X25_Ack_Timer;
       int  X25_Inactivate_Timer;
       int  APPN_Trans_Group_Num;
       int  Autodelete_Device;
       int  User_Defined_1;
       int  User_Defined_2;
       int  User_Defined_3;
       int  Recovery_Lmt_Count_Lmt;
       int  Recovery_Lmt_Time_Interval;
       int  Offset_Attached_Devices;
       int  Length_Attached_Devices;
       int  Offset_Switched_Lines;
       int  Num_Switched_Lines;
       int  Length_Switched_Lines;
       char Link_Type[10];
       char Control_Type[10];
       char Switched_Connection[10];
       char SHM[10];
       char Switched_Net_Backup[10];
       char Act_Switched_Net_Backup[10];
       char APPN_Capable[10];
       char Attach_Non_Switched_Line_Name[10];
       char Character_Code[10];
       char Remote_Net_ID[10];
       char Remote_Control_Point_Name[10];
       char Exchange_ID[10];
       char Sys_Service_Control_Point_ID[12];
       char Initial_Connection[10];
       char Dial_Initiation[10];
       char Connection_Num[32];
       char Answer_Num[10];
       char Act_X25_Net_Addr[10];
       char Connection_List[10];
       char Connection_List_Entry[10];
       char Switched_Disconnect[10];
       char Data_Link_Role[10];
       char Station_Addr[10];
       char SDLC_Poll_Priority[10];
       char LAN_Remote_Adapter_Addr[12];
       char Dest_Service_Access_Point[10];
       char Source_Service_Access_Point[10];
       char X25_Net_Level[10];
       char X25_Link_Protocol[10];
       char X25_Log_Chan_ID[10];
       char X25_Connection_Password[10];
       char X25_Switched_Line_Selection[10];
       char X25_User_Group_ID[10];
       char X25_Reverse_Charging[10];
       char APPC_CP_Session_Support[10];
       char APPN_Node_Type[10];
       char APPN_Min_Switched_Status[10];
       char Model_Control_Desc[10];
       char Connection_Net_ID[10];
       char Connection_Net_CP_Name[10];
       char Control_Owner[10];
       char User_Facilities[218];
       char Autocreate_Device[10];
       char APPN_HPR_Capable[10];
       char Active_Switched_Line_Name[10];
       char Remote_System_Name[8];
       char HPR_Path_Switching[10];
       char System_Job[10];
       int  Current_Maximum_Frame_Size;                      /*@A5A*/
       char Message_Queue_Name[10];                          /*@A8A*/
       char Message_Queue_Library[10];                       /*@A8A*/
       char Current_Message_Queue_Name[10];                  /*@A9A*/
       char Current_Message_Queue_Library[10];               /*@A9A*/
       char Branch_Extender_Role[10];              /*@A8A*/
    /*Qdc_Attached_Device_t Attached_Device[];*//* Varying length  */
    /*Qdc_Attached_Device_t Attached_Device[];*//* Varying length  */
    /*Qdc_Switched_Line_t Switched_Line[];*//* Varying length      */
    } Qdc_CTLD0300_t;


 /******************************************************************/
 /* Type Definition for the CTLD0400 format.                       */
 /****                                                          ****/
 /* NOTE: The following type definition only defines the fixed     */
 /*       portion of the format.  Any varying length field will    */
 /*       have to be defined by the user.                          */
 /******************************************************************/

 typedef _Packed struct Qdc_CTLD0400
    {
       Qdc_CTLD0100_t CTLD0100;
       int  Predial_Delay;
       int  Redial_Delay;
       int  Dial_Retries;
       int  File_Trans_Ack_Timer;
       int  File_Trans_Retry;
       int  Default_Packet_Size_Transmit;
       int  Default_Packet_Size_Receive;
       int  Neg_Packet_Size_Transmit;
       int  Neg_Packet_Size_Receive;
       int  Default_Window_Size_Transmit;
       int  Default_Window_Size_Receive;
       int  Neg_Window_Size_Transmit;
       int  Neg_Window_Size_Receive;
       int  Recovery_Lmt_Count_Lmt;
       int  Recovery_Lmt_Time_Interval;
       int  Offset_Attached_Devices;
       int  Length_Attached_Devices;
       int  Offset_Switched_Lines;
       int  Num_Switched_Lines;
       int  Length_Switched_Lines;
       char Link_Type[10];
       char Switched_Connection[10];
       char Switched_Net_Backup[10];
       char Act_Switched_Net_Backup[10];
       char Attach_Non_Switched_Line_Name[10];
       char Initial_Connection[10];
       char Connection_Num[32];
       char Answer_Num[10];
       char Act_X25_Net_Address[10];
       char Switched_Disconnect[10];
       char Remote_Verify[10];
       char Local_Location_Name[10];
       char Local_ID[10];
       char PAD_Emulation[10];
       char X25_Log_Chan_ID[10];
       char X25_Switched_Line_Selection[10];
       char X25_User_Group_ID[10];
       char X25_Reverse_Charging[10];
       char User_Facilities[218];
       char Message_Queue_Name[10];                          /*@A8A*/
       char Message_Queue_Library[10];                       /*@A8A*/
       char Current_Message_Queue_Name[10];                  /*@A9A*/
       char Current_Message_Queue_Library[10];               /*@A9A*/
       char System_Job[10];                                  /*@AAA*/
    /*Qdc_Attached_Device_t Attached_Device[];*//* Varying length  */
    /*Qdc_Switched_Line_t Switched_Line[];*//* Varying length      */
    } Qdc_CTLD0400_t;

 /******************************************************************/
 /* Type Definition for the CTLD0500 format.                       */
 /****                                                          ****/
 /* NOTE: The following type definition only defines the fixed     */
 /*       portion of the format.  Any varying length field will    */
 /*       have to be defined by the user.                          */
 /******************************************************************/

 typedef _Packed struct Qdc_Remote_ID
    {
     char Remote_ID[30];
     char Reserved[2];
    } Qdc_Remote_ID_t;

 typedef _Packed struct Qdc_CTLD0500
    {
       Qdc_CTLD0100_t CTLD0100;
       int  Predial_Delay;
       int  Redial_Delay;
       int  Dial_Retries;
       int  Recovery_Lmt_Count_Lmt;
       int  Recovery_Lmt_Time_Interval;
       int  Offset_Attached_Devices;
       int  Length_Attached_Devices;
       int  Offset_Switched_Lines;
       int  Num_Switched_Lines;
       int  Length_Switched_Lines;
       int  Offset_Remote_ID;
       int  Num_Remote_ID;
       int  Length_Remote_ID;
       char Connect_Type[10];
       char Switched_Net_Backup[10];
       char Act_Switched_Net_Backup[10];
       char Attach_Non_Switched_Line_Name[10];
       char Application_Type[10];
       char Initial_Connection[10];
       char Connection_Num[32];
       char Local_ID[10];
       char RJE_Host_Type[10];
       char RJE_Host_Signon[80];
       char Current_Message_Queue_Name[10];                  /*@AAA*/
       char Current_Message_Queue_Library[10];               /*@AAA*/
       char System_Job[10];                                  /*@AAA*/
    /*Qdc_Attached_Device_t Attached_Device[];*//* Varying length  */
    /*Qdc_Switched_Line_t Switched_Line[];*//* Varying length      */
    /*Qdc_Remote_ID_t Remote_ID[];*//* Varying length              */
    } Qdc_CTLD0500_t;


 /******************************************************************/
 /* Type Definition for the CTLD0600 format.                       */
 /****                                                          ****/
 /* NOTE: The following type definition only defines the fixed     */
 /*       portion of the format.  Any varying length field will    */
 /*       have to be defined by the user.                          */
 /******************************************************************/

 typedef _Packed struct Qdc_CTLD0600
    {
       Qdc_CTLD0100_t CTLD0100;
       int  Maximum_Frame_Size;
       int  Predial_Delay;
       int  Redial_Delay;
       int  Dial_Retries;
       int  SHM_Disconnection_Limit;
       int  SHM_Disconnection_Timer;
       int  SDLC_Poll_Limit;
       int  SDLC_Out_Limit;
       int  SDLC_Connect_Poll_Retry;
       int  SDLC_NDM_Poll_Timer;
       int  LAN_Frame_Retry;
       int  LAN_Connect_Retry;
       int  LAN_Response_Timer;
       int  LAN_Connect_Timer;
       int  LAN_Ack_Timer;
       int  LAN_Inactivate_Timer;
       int  LAN_Ack_Frequency;
       int  LAN_Max_Outstand_Frames;
       int  LAN_Access_Priority;
       int  LAN_Window_Step;
       int  Default_Packet_Size_Transmit;
       int  Default_Packet_Size_Receive;
       int  Neg_Packet_Size_Transmit;
       int  Neg_Packet_Size_Receive;
       int  Default_Window_Size_Transmit;
       int  Default_Window_Size_Receive;
       int  Neg_Window_Size_Transmit;
       int  Neg_Window_Size_Receive;
       int  X25_Frame_Retry;
       int  X25_Connect_Retry;
       int  X25_Response_Timer;
       int  X25_Connect_Timer;
       int  X25_Delay_Connect_Timer;
       int  X25_Ack_Timer;
       int  X25_Inactivate_Timer;
       int  Recovery_Lmt_Count_Lmt;
       int  Recovery_Lmt_Time_Interval;
       int  Offset_Attached_Devices;
       int  Length_Attached_Devices;
       int  Offset_Switched_Lines;
       int  Num_Switched_Lines;
       int  Length_Switched_Lines;
       char Control_Type[10];
       char Control_Model[10];
       char Link_Type[10];
       char Switched_Connection[10];
       char SHM[10];
       char Switched_Net_Backup[10];
       char Act_Switched_Net_Backup[10];
       char Attach_Non_Switched_Line_Name[10];
       char Character_Code[10];
       char Exchange_ID[10];
       char Sys_Service_Control_Point_ID[12];
       char Initial_Connection[10];
       char Connection_Num[32];
       char Answer_Num[10];
       char Act_X25_Net_Address[10];
       char Switched_Disconnect[10];
       char Station_Addr[10];
       char SDLC_Poll_Priority[10];
       char LAN_Remote_Adapter_Addr[12];
       char Dest_Service_Access_Point[10];
       char Source_Service_Access_Point[10];
       char X25_Net_Level[10];
       char X25_Link_Protocol[10];
       char X25_Log_Chan_ID[10];
       char X25_Connection_Password[10];
       char X25_Switched_Line_Selection[10];
       char X25_User_Group_ID[10];
       char X25_Reverse_Charging[10];
       char User_Facilities[218];
       int  Current_Maximum_Frame_Size;                      /*@A5A*/
       char Current_Message_Queue_Name[10];                  /*@AAA*/
       char Current_Message_Queue_Library[10];               /*@AAA*/
       char System_Job[10];                                  /*@AAA*/
    /*Qdc_Attached_Device_t Attached_Device[];*//* Varying length  */
    /*Qdc_Switched_Line_t Switched_Line[];*//* Varying length      */
    } Qdc_CTLD0600_t;

 /******************************************************************/
 /* Type Definition for the CTLD0700 format.                       */
 /****                                                          ****/
 /* NOTE: The following type definition only defines the fixed     */
 /*       portion of the format.  Any varying length field will    */
 /*       have to be defined by the user.                          */
 /******************************************************************/

 typedef _Packed struct Qdc_CTLD0700
    {
       Qdc_CTLD0100_t CTLD0100;
       int  Maximum_Frame_Size;
       int  IDLC_Default_Window_Size;
       int  IDLC_Frame_Retry;
       int  IDLC_Response_Timer;
       int  IDLC_Connect_Retry;
       int  Predial_Delay;
       int  Redial_Delay;
       int  Dial_Retries;
       int  Discon_Timer_Min_Connect;
       int  Discon_Timer_Discon_Delay;
       int  LAN_Frame_Retry;
       int  LAN_Connect_Retry;
       int  LAN_Response_Timer;
       int  LAN_Connect_Timer;
       int  LAN_Ack_Timer;
       int  LAN_Inactivate_Timer;
       int  LAN_Ack_Frequency;
       int  LAN_Max_Outstand_Frames;
       int  LAN_Access_Priority;
       int  LAN_Window_Step;
       int  Default_Packet_Size_Transmit;
       int  Default_Packet_Size_Receive;
       int  Neg_Packet_Size_Transmit;
       int  Neg_Packet_Size_Receive;
       int  Default_Window_Size_Transmit;
       int  Default_Window_Size_Receive;
       int  Neg_Window_Size_Transmit;
       int  Neg_Window_Size_Receive;
       int  X25_Frame_Retry;
       int  X25_Response_Timer;
       int  X25_Ack_Timer;
       int  X25_Inactivate_Timer;
       int  APPN_Trans_Group_Num;
       int  Autodelete_Device;
       int  User_Defined_1;
       int  User_Defined_2;
       int  User_Defined_3;
       int  Recovery_Lmt_Count_Lmt;
       int  Recovery_Lmt_Time_Interval;
       int  Offset_Attached_Devices;
       int  Length_Attached_Devices;
       int  Offset_Switched_Lines;
       int  Num_Switched_Lines;
       int  Length_Switched_Lines;
       char Link_Type[10];
       char Switched_Connection[10];
       char SHM[10];
       char Switched_Net_Backup[10];
       char Act_Switched_Net_Backup[10];
       char APPN_Capable[10];
       char Attach_Non_Switched_Line_Name[10];
       char Character_Code[10];
       char Remote_Net_ID[10];
       char Remote_Control_Point_Name[10];
       char Adj_Link_Station[10];
       char Sys_Service_Control_Point_ID[12];
       char Local_Exchange_ID[10];
       char Initial_Connection[10];
       char Dial_Initiation[10];
       char Connection_Num[32];
       char Answer_Num[10];
       char Act_X25_Net_Address[10];
       char Connection_List[10];
       char Connection_List_Entry[10];
       char Switched_Disconnect[10];
       char Station_Addr[10];
       char LAN_Remote_Adapter_Addr[12];
       char Dest_Service_Access_Point[10];
       char Source_Service_Access_Point[10];
       char X25_Net_Level[10];
       char X25_Link_Protocol[10];
       char X25_Log_Chan_ID[10];
       char X25_Connection_Password[10];
       char X25_Switched_Line_Selection[10];
       char X25_User_Group_ID[10];
       char X25_Reverse_Charging[10];
       char APPC_CP_Session_Support[10];
       char APPN_Node_Type[10];
       char APPN_Min_Switched_Status[10];
       char Recontact_At_Vary_Off[10];
       char Autocreate_Device[10];
       char User_Facilities[218];
       char APPN_HPR_Capable[10];
       char Primary_DLUS_PU_Name[10];                        /*@A6A*/
       char Primary_DLUS_Network_ID[10];                     /*@A6A*/
       char Backup_DLUS_PU_Name[10];                         /*@A6A*/
       char Backup_DLUS_Network_ID[10];                      /*@A6A*/
       char Dependent_PU_Name[10];                           /*@A6A*/
       char Unused[2];                                       /*@A6A*/
       int  Activation_Timer;                                /*@A6A*/
       int  Reconnect_Timer;                                 /*@A6A*/
       char HPR_Path_Switching[10];
       char Reserved[2];                                     /*@A5A*/
       int  Current_Maximum_Frame_Size;                      /*@A5A*/
       char Message_Queue_Name[10];                          /*@A8A*/
       char Message_Queue_Library[10];                       /*@A8A*/
       char Current_Message_Queue_Name[10];                  /*@A9A*/
       char Current_Message_Queue_Library[10];               /*@A9A*/
       char Branch_Extender_Role[10];                        /*@A8A*/
       char System_Job[10];                                  /*@AAA*/
    /*Qdc_Attached_Device_t Attached_Device[];*//* Varying length  */
    /*Qdc_Switched_Line_t Switched_Line[];*//* Varying length      */
    } Qdc_CTLD0700_t;

 /******************************************************************/
 /* Type Definition for the CTLD0800 format.                       */
 /****                                                          ****/
 /* NOTE: The following type definition only defines the fixed     */
 /*       portion of the format.  Any varying length field will    */
 /*       have to be defined by the user.                          */
 /******************************************************************/

 typedef _Packed struct Qdc_CTLD0800
    {
       Qdc_CTLD0100_t CTLD0100;
       int  Connection_Response_Timer;
       int  Offset_Attached_Devices;
       int  Length_Attached_Devices;
       char Attached_Line[10];
       char Current_Message_Queue_Name[10];                  /*@AAA*/
       char Current_Message_Queue_Library[10];               /*@AAA*/
       char System_Job[10];                                  /*@AAA*/
       char Reserved[2];                                     /*@A7A*/
    /*Qdc_Attached_Device_t Attached_Device[];*//* Varying length  */
    } Qdc_CTLD0800_t;

 /******************************************************************/
 /* Type Definition for the CTLD0900 format.                       */
 /****                                                          ****/
 /* NOTE: The following type definition only defines the fixed     */
 /*       portion of the format.  Any varying length field will    */
 /*       have to be defined by the user.                          */
 /******************************************************************/

 typedef _Packed struct Qdc_CTLD0900
    {
       Qdc_CTLD0100_t CTLD0100;
       int  Maximum_Frame_Size;
       int  Predial_Delay;
       int  Redial_Delay;
       int  Dial_Retries;
       int  SDLC_Poll_Limit;
       int  SDLC_Out_Limit;
       int  SDLC_Connect_Poll_Retry;
       int  SDLC_NDM_Poll_Timer;
       int  LAN_Frame_Retry;
       int  LAN_Connect_Retry;
       int  LAN_Response_Timer;
       int  LAN_Connect_Timer;
       int  LAN_Ack_Timer;
       int  LAN_Inactivate_Timer;
       int  LAN_Ack_Frequency;
       int  LAN_Max_Outstand_Frames;
       int  LAN_Access_Priority;
       int  LAN_Window_Step;
       int  Default_Packet_Size_Transmit;
       int  Default_Packet_Size_Receive;
       int  Neg_Packet_Size_Transmit;
       int  Neg_Packet_Size_Receive;
       int  Default_Window_Size_Transmit;
       int  Default_Window_Size_Receive;
       int  Neg_Window_Size_Transmit;
       int  Neg_Window_Size_Receive;
       int  X25_Frame_Retry;
       int  X25_Connect_Retry;
       int  X25_Response_Timer;
       int  X25_Connect_Timer;
       int  X25_Delay_Connect_Timer;
       int  Recovery_Lmt_Count_Lmt;
       int  Recovery_Lmt_Time_Interval;
       int  Offset_Attached_Devices;
       int  Length_Attached_Devices;
       int  Offset_Switched_Lines;
       int  Num_Switched_Lines;
       int  Length_Switched_Lines;
       char Control_Type[10];
       char Control_Model[10];
       char Link_Type[10];
       char Switched_Line_Name[10];
       char Switched_Net_Backup[10];
       char Act_Switched_Net_Backup[10];
       char Attach_Non_Switched_Line_Name[10];
       char Character_Code[10];
       char Exchange_ID[10];
       char Sys_Service_Control_Point_ID[12];
       char Initial_Connection[10];
       char Connection_Num[32];
       char Answer_Num[10];
       char Act_X25_Net_Address[10];
       char Switched_Disconnect[10];
       char Station_Addr[10];
       char SDLC_Poll_Priority[10];
       char LAN_Remote_Adapter_Addr[12];
       char Dest_Service_Access_Point[10];
       char Source_Service_Access_Point[10];
       char X25_Net_Level[10];
       char X25_Log_Chan_ID[10];
       char X25_Connection_Password[10];
       char X25_Switched_Line_Selection[10];
       char X25_User_Group_ID[10];
       char X25_Reverse_Charging[10];
       char User_Facilities[218];
       int  Current_Maximum_Frame_Size;                      /*@A5A*/
       char Current_Message_Queue_Name[10];                  /*@AAA*/
       char Current_Message_Queue_Library[10];               /*@AAA*/
       char System_Job[10];                                  /*@AAA*/
    /*Qdc_Attached_Device_t Attached_Device[];*//* Varying length  */
    /*Qdc_Switched_Line_t Switched_Line[];*//* Varying length      */
    } Qdc_CTLD0900_t;

 /******************************************************************/
 /* Type Definition for the CTLD1000 format.                       */
 /****                                                          ****/
 /* NOTE: The following type definition only defines the fixed     */
 /*       portion of the format.  Any varying length field will    */
 /*       have to be defined by the user.                          */
 /******************************************************************/

 typedef _Packed struct Qdc_CTLD1000
    {
       Qdc_CTLD0100_t CTLD0100;
       int  Device_Wait_Timer;
       int  Maximum_Frame_Size;
       int  IDLC_Default_Window_Size;
       int  IDLC_Frame_Retry;
       int  IDLC_Response_Timer;
       int  IDLC_Connect_Retry;
       int  Predial_Delay;
       int  Redial_Delay;
       int  Dial_Retries;
       int  SHM_Disconnection_Limit;
       int  SHM_Disconnection_Timer;
       int  SDLC_Poll_Limit;
       int  SDLC_Out_Limit;
       int  SDLC_Connect_Poll_Retry;
       int  SDLC_NDM_Poll_Timer;
       int  LAN_Frame_Retry;
       int  LAN_Connect_Retry;
       int  LAN_Response_Timer;
       int  LAN_Connect_Timer;
       int  LAN_Ack_Timer;
       int  LAN_Inactivate_Timer;
       int  LAN_Ack_Frequency;
       int  LAN_Max_Outstand_Frames;
       int  LAN_Access_Priority;
       int  LAN_Window_Step;
       int  Default_Packet_Size_Transmit;
       int  Default_Packet_Size_Receive;
       int  Neg_Packet_Size_Transmit;
       int  Neg_Packet_Size_Receive;
       int  Default_Window_Size_Transmit;
       int  Default_Window_Size_Receive;
       int  Neg_Window_Size_Transmit;
       int  Neg_Window_Size_Receive;
       int  X25_Frame_Retry;
       int  X25_Connect_Retry;
       int  X25_Response_Timer;
       int  X25_Connect_Timer;
       int  X25_Delay_Connect_Timer;
       int  X25_Ack_Timer;
       int  X25_Inactivate_Timer;
       int  Allocation_Retry_Timer;
       int  Recovery_Lmt_Count_Lmt;
       int  Recovery_Lmt_Time_Interval;
       int  Offset_Attached_Devices;
       int  Length_Attached_Devices;
       int  Offset_Switched_Lines;
       int  Num_Switched_Lines;
       int  Length_Switched_Lines;
       char Control_Type[10];
       char Control_Model[10];
       char Link_Type[10];
       char Switched_Connection[10];
       char SHM[10];
       char Switched_Net_Backup[10];
       char Act_Switched_Net_Backup[10];
       char Attach_Non_Switched_Line_Name[10];
       char TDLC_Line_Name[10];
       char Character_Code[10];
       char Remote_Location_Name[10];
       char Local_Location_Name[10];
       char Remote_Net_ID[10];
       char Exchange_ID[10];
       char Sys_Service_Control_Point_ID[12];
       char Initial_Connection[10];
       char Dial_Initiation[10];
       char Connection_Num[32];
       char Answer_Num[10];
       char Act_X25_Net_Address[10];
       char Connection_List[10];
       char Connection_List_Entry[10];
       char Station_Addr[10];
       char SDLC_Poll_Priority[10];
       char LAN_Remote_Adapter_Addr[12];
       char Dest_Service_Access_Point[10];
       char Source_Service_Access_Point[10];
       char X25_Net_Level[10];
       char X25_Link_Protocol[10];
       char X25_Log_Chan_ID[10];
       char X25_Connection_Password[10];
       char X25_Switched_Line_Selection[10];
       char X25_User_Group_ID[10];
       char X25_Reverse_Charging[10];
       char User_Facilities[218];
       char Autocreate_Device[10];
       char Switched_Disconnect[10];
       char Associated_APPC_Device[10];
       char Serial_Number[10];
       char Release_Level[10];
       char Reserved[2];                                     /*@A5A*/
       int  Current_Maximum_Frame_Size;                      /*@A5A*/
       char Message_Queue_Name[10];                          /*@A8A*/
       char Message_Queue_Library[10];                       /*@A8A*/
       char Current_Message_Queue_Name[10];                  /*@A9A*/
       char Current_Message_Queue_Library[10];               /*@A9A*/
       char System_Job[10];                                  /*@AAA*/
    /*Qdc_Attached_Device_t Attached_Device[];*//* Varying length  */
    /*Qdc_Switched_Line_t Switched_Line[];*//* Varying length      */
    } Qdc_CTLD1000_t;

 /******************************************************************/
 /* Type Definition for the CTLD1100 format.                       */
 /****                                                          ****/
 /* NOTE: The following type definition only defines the fixed     */
 /*       portion of the format.  Any varying length field will    */
 /*       have to be defined by the user.                          */
 /******************************************************************/

 typedef _Packed struct Qdc_CTLD1100
    {
       Qdc_CTLD0100_t CTLD0100;
       int Offset_Attached_Devices;
       int Length_Attached_Devices;
       char Message_Queue_Name[10];                          /*@A9A*/
       char Message_Queue_Library[10];                       /*@A9A*/
       char Current_Message_Queue_Name[10];                  /*@A9A*/
       char Current_Message_Queue_Library[10];               /*@A9A*/
       char System_Job[10];                                  /*@AAA*/
       char Reserved[2];                                     /*@ABA*/
       int  Device_Wait_Timer;                               /*@ABA*/
     /*Qdc_Attached_Device_t Attached_Device[];*//* Varying length */
    } Qdc_CTLD1100_t;

 /******************************************************************/
 /* Type Definition for the CTLD1200 format.                       */
 /****                                                          ****/
 /* NOTE: The following type definition only defines the fixed     */
 /*       portion of the format.  Any varying length field will    */
 /*       have to be defined by the user.                          */
 /******************************************************************/

 typedef _Packed struct Qdc_CTLD1200
    {
       Qdc_CTLD0100_t CTLD0100;
       int Device_Wait_Timer;
       int Offset_Attached_Devices;
       int Length_Attached_Devices;
       char Control_Type[10];
       char Control_Model[10];
       char Resource_Name[10];
       char TDLC_Line_Name[10];
       char Auto_Configuration[10];
       char Init_File[10];
       char Init_File_Library[10];
       char Init_File_Member[10];
       char Init_Program[10];
       char Init_Program_Library[10];
       char Message_Queue_Name[10];                          /*@A8A*/
       char Message_Queue_Library[10];                       /*@A8A*/
       char Current_Message_Queue_Name[10];                  /*@A9A*/
       char Current_Message_Queue_Library[10];               /*@A9A*/
       char System_Job[10];                                  /*@AAA*/
     /*Qdc_Attached_Device_t Attached_Device[];*//* Varying length */
    } Qdc_CTLD1200_t;

 /******************************************************************/
 /* Type Definition for the CTLD1300 format.                       */
 /****                                                          ****/
 /* NOTE: The following type definition only defines the fixed     */
 /*       portion of the format.  Any varying length field will    */
 /*       have to be defined by the user.                          */
 /******************************************************************/

 typedef _Packed struct Qdc_CTLD1300
    {
       Qdc_CTLD0100_t CTLD0100;
       int Offset_Attached_Devices;
       int Length_Attached_Devices;
       char Control_Type[10];
       char Control_Model[10];
       char Resource_Name[10];
       char Auto_Configuration[10];
     /*Qdc_Attached_Device_t Attached_Device[];*//* Varying length */
    } Qdc_CTLD1300_t;

 #if (__OS400_TGTVRM__>=510)                       /* @ACA */
     #pragma datamodel(pop)                        /* @ACA */
 #endif                                            /* @ACA */

 #endif
