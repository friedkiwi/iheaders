 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QDCRLIND                                   */
 /*                                                                */
 /* Descriptive Name: Retrieve Line Description                    */
 /*                                                                */
 /* 5722-SS1  (C) Copyright IBM Corp. 1994,2004                    */
 /* All rights reserved.                                           */
 /* US Government Users Restricted Rights -                        */
 /* Use, duplication or disclosure restricted                      */
 /* by GSA ADP Schedule Contract with IBM Corp.                    */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /* Description: The Retrieve Line Description (QDCRLIND) API      */
 /*              retrieves information about a line description.   */
 /*                                                                */
 /* Header Files Included: None.                                   */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: Qdc_LIND0100_t                                 */
 /*                 Qdc_LIND0200_t                                 */
 /*                 Qdc_LIND0300_t                                 */
 /*                 Qdc_LIND0400_t                                 */
 /*                 Qdc_LIND0500_t                                 */
 /*                 Qdc_LIND0600_t                                 */
 /*                 Qdc_LIND0700_t                                 */
 /*                 Qdc_LIND0800_t                                 */
 /*                 Qdc_LIND0900_t                                 */
 /*                 Qdc_LIND1000_t                                 */
 /*                 Qdc_LIND1100_t                                 */
 /*                 Qdc_LIND1200_t                                 */
 /*                 Qdc_LIND1300_t                                 */
 /*                 Qdc_LIND1400_t                                 */
 /*                 Qdc_LIND1500_t                                 */
 /*                 Qdc_LIND1600_t                                 */
 /*                 Qdc_Attached_Non_Switch_Ctl_t                  */
 /*                 Qdc_Non_Switch_Ctl_t                           */
 /*                 Qdc_Switch_Ctl_t                               */
 /*                 Qdc_Qctive_Switch_Ctl_t                        */
 /*                 Qdc_EOR_Characters_t                           */
 /*                 Qdc_SSAPs_t                                    */
 /*                 Qdc_Group_Addr_t                               */
 /*                 Qdc_Switch_NWIs_t                              */
 /*                 Qdc_Call_Progress_Sgn_Retry_t                  */
 /*                 Qdc_Function_Addr_t                            */
 /*                 Qdc_Logical_Chan_Entries_t                     */
 /*                 Qdc_Resource_Names_t                           */
 /*                                                                */
 /* Function Prototype List: QDCRLIND                              */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= D2862004     3D10  940415 MOREY:    New Include           */
 /* $a1= p3617122     3d70  960409 muras:    update line parameters*/
 /* $a2= D94771       4d10  960718 JAH  :    ADD ACTLANMGR to TRN  */
 /* $A3= D94889       4d10  960829 ZUBAIR:  Add Network Ctl to TDLC*/
 /* $a4= D95078       4d10  961105 JAH  :    ADD GENTSTFRM to ETH  */
 /* $A5= D95283       4d14  970401 ZUBAIR :ATM support for Ethernet*/
 /*                                        and Token Ring Lines    */
 /* $a6= d95024       4d20  970505 muras     add ppp lines-lind1600*/
 /* $A7= D95220       4d20  970612 ZUBAIR :ATM support for Ethernet*/
 /*                                        and Tokenring lines.    */
 /* $a8= d95743       4d30  970815 muras     add high order linkspd*/
 /* $A9= P3665843     4d30  980224 KDICK:  Add reserved characters */
 /*                                        to LIND0700 and delete  */
 /*                                        reserved from LIND0900  */
 /* $AA= D95898       4d40  980728 KLR  :  Add TCP only field      */
 /* $AB= D95815       4d40  980806 CMWOOD: Add msgq to trn, eth,   */
 /*                                        ddi, fr, and x.25 lines */
 /* $AC= P3676517     4d40  980817 CMWOOD: Add current msgq fields */
 /* $AD= D95895.4     4d40  980922 Adafin: Add MDMINZCMD field     */
 /* $AE= D95895       4d40  980923 zubair: Add new PPP fields      */
 /* $AF= D97584       4d50  990319 CMWOOD: Add current msgq fields */
 /*                                        to additional line fmts */
 /* $AG= D97636       4d50  990430 ZUBAIR: Add current line and    */
 /*                                        link speed to Token ring*/
 /*                                        and Ether Net lines.    */
 /* $AH= D98212.1    v5r1m0 112199 gchaney:Teraspace stage 2       */
 /* $AI= PP9932965   v5r1m0 000914 JABEN: Retrieve SINDVirtHdw Flag*/
 /* $AJ= D99395.1    v5r3m0 020916 v01176: Ethernet Enhancments    */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

 #ifndef QDCRLIND_h
 #define QDCRLIND_h

 #if (__OS400_TGTVRM__>=510)                       /* @AHA */
     #pragma datamodel(P128)                       /* @AHA */
 #endif                                            /* @AHA */

 /******************************************************************/
 /* Prototype for calling Retrieve Line Description API (QDCRLIND) */
 /******************************************************************/
 #ifdef  __ILEC400__
       #pragma linkage(QDCRLIND,OS,nowiden)
 #else
       extern "OS"
 #endif
 void QDCRLIND (void *,          /* Receiver variable              */
                int,               /* Length of receiver variable    */
                char *,            /* Format name                    */
                char *,            /* Line name                      */
                void *);           /* Error code                     */

 /******************************************************************/
 /* Type Definition for the LIND0100 format - Basic Line Info      */
 /****                                                          ****/
 /* NOTE: The following type definition only defines the fixed     */
 /*       portion of the format.  Any varying length field will    */
 /*       have to be defined by the user.                          */
 /******************************************************************/

 typedef _Packed struct Qdc_LIND0100
    {
       int  Bytes_Returned;
       int  Bytes_Available;
       int  Num_Attached_Non_Switch_Ctl;
       char Date_Info_Retrieved[7];
       char Time_Info_Retrieved[6];
       char Line_Name[10];
       char Line_Category[10];
       char Online_At_IPL[10];
       char Text_Desc[50];
       char Reserved[3];
    } Qdc_LIND0100_t;

 /******************************************************************/
 /* Type Definition for the LIND0200 format - Basic Line Info Plus */
 /******************************************************************/

 typedef _Packed struct Qdc_Attached_Non_Switch_Ctl
    {
       char Att_Non_Switch_Ctl_Name[10];
       char Ctl_Category[10];
       char Ctl_Type[10];
       char Ctl_Text_Desc[50];
    } Qdc_Attached_Non_Switch_Ctl_t;

 typedef _Packed struct Qdc_LIND0200
    {
       Qdc_LIND0100_t LIND0100;
       int  Offset_Attached_Non_Switch_Ctl;
       int  Length_Attached_Non_Switch_Ctl;
    /*Qdc_Attached_Non_Switch_Ctl_t Attached_Non_Switch_Ctl[];*//*
                                    Varying length                 */
    } Qdc_LIND0200_t;


 /******************************************************************/
 /* Type Definition for the LIND0300 format - *ASC                 */
 /****                                                          ****/
 /* NOTE: The following type definition only defines the fixed     */
 /*       portion of the format.  Any varying length field will    */
 /*       have to be defined by the user.                          */
 /******************************************************************/

 typedef _Packed struct Qdc_Non_Switch_Ctl
    {
       char Att_Non_Switch_Ctl_Name[10];
       char Reserved[2];
    } Qdc_Non_Switch_Ctl_t;

 typedef _Packed struct Qdc_Switch_Ctl
    {
       char Switch_Ctl_Name[10];
       char Reserved[2];
    } Qdc_Switch_Ctl_t;

 typedef _Packed struct Qdc_Active_Switch_Ctl
    {
       char Active_Switch_Ctl_Name[10];
       char Reserved[2];
    } Qdc_Active_Switch_Ctl_t;

 typedef _Packed struct Qdc_EOR_Characters
    {
       int  Num_Trailing_Characters;
       char EOR_Character[10];
       char Reserved[2];
    } Qdc_EOR_Characters_t;

 typedef _Packed struct Qdc_LIND0300
    {
       Qdc_LIND0100_t LIND0100;
       int  Vary_On_Wait;
       int  Line_Speed;
       int  Inactive_Timer;
       int  Max_Buffer_Size;
       int  Idle_Timer;
       int  Data_Set_Ready_Drop_Timer;
       int  Clear_To_Send_Timer;
       int  Remote_Answer_Timer;
       int  Recovery_Lmt_Count_Lmt;
       int  Recovery_Lmt_Time_Interval;
       int  Offset_Attached_Non_Switch_Ctl;
       int  Length_Attached_Non_Switch_Ctl;
       int  Offset_Switch_Ctl;
       int  Num_Switch_Ctl;
       int  Length_Switch_Ctl;
       int  Offset_Active_Switch_Ctl;
       int  Num_Active_Switch_Ctl;
       int  Length_Active_Switch_Ctl;
       int  Offset_EOR_Characters;
       int  Num_EOR_Characters;
       int  Length_EOR_Characters;
       char Resource_Name[10];
       char Physical_Interface[10];
       char Connect_Type[10];
       char Switch_Net_Backup[10];
       char Activate_Switch_Net_Backup[10];
       char Autocall_Unit[10];
       char Data_Bits_Per_Char[10];
       char Type_Parity[10];
       char Stop_Bits[10];
       char Duplex[10];
       char Echo_Support[10];
       char Modem_Type_Support[10];
       char Modem_Data_Rate_Select[10];
       char Switch_Connect_Type[10];
       char Autoanswer[10];
       char Autodial[10];
       char Dial_Command_Type[10];
       char Autocall_Resource_Name[10];
       char Calling_Num[32];
       char Error_Threshold_Level[10];
       char Flow_Control[10];
       char XON_Character[10];
       char XOFF_Character[10];
       char Autoanswer_Type[10];
       char Autoconfigured_AS36[10];                         /*@A1A*/
       char asc_reserved_1[2];                               /*@A1A*/
       char setmdmasc[40];                                   /*@a1a*/
       char Mdminzasc[60];                                   /*@ADA*/
       char Current_Message_Queue_Name[10];                  /*@AFA*/
       char Current_Message_Queue_Library[10];               /*@AFA*/
       char Asc_reserved_2[2];                               /*@ADA*/
     /*Qdc_Non_Switch_Ctl_t Non_Switch_Ctl[];*//* Varying length   */
     /*Qdc_Switch_Ctl_t Switch_Ctl[];*//* Varying length           */
     /*Qdc_Active_Switch_Ctl_t Active_Switch_Ctl[];*//* Varying
                                    length                         */
     /*Qdc_EOR_Characters EOR_Characters[];*//* Varying length     */
    } Qdc_LIND0300_t;


 /******************************************************************/
 /* Type Definition for the LIND0400 format - *BSC                 */
 /****                                                          ****/
 /* NOTE: The following type definition only defines the fixed     */
 /*       portion of the format.  Any varying length field will    */
 /*       have to be defined by the user.                          */
 /******************************************************************/

 typedef _Packed struct Qdc_LIND0400
    {
       Qdc_LIND0100_t LIND0100;
       int  Vary_On_Wait;
       int  Line_Speed;
       int  Inactive_Timer;
       int  Max_Buffer_Size;
       int  Receive_Timer;
       int  Continue_Timer;
       int  Contention_State_Retry;
       int  Data_State_Retry;
       int  Transmit_TTD_WACK_Retry;
       int  Receive_TTD_WACK_Retry;
       int  Data_Set_Ready_Drop_Timer;
       int  Clear_To_Send_Timer;
       int  Remote_Answer_Timer;
       int  Recovery_Lmt_Count_Lmt;
       int  Recovery_Lmt_Time_Interval;
       int  Offset_Attached_Non_Switch_Ctl;
       int  Length_Attached_Non_Switch_Ctl;
       int  Offset_Switch_Ctl;
       int  Num_Switch_Ctl;
       int  Length_Switch_Ctl;
       int  Offset_Active_Switch_Ctl;
       int  Num_Active_Switch_Ctl;
       int  Length_Active_Switch_Ctl;
       char Resource_Name[10];
       char Application_Type[10];
       char Physical_Interface[10];
       char Connect_Type[10];
       char Switch_Net_Backup[10];
       char Activate_Switch_Net_Backup[10];
       char Autocall_Unit[10];
       char Station_Addr[10];
       char Clocking[10];
       char Duplex[10];
       char Modem_Type_Support[10];
       char Modem_Data_Rate_Select[10];
       char Switch_Connect_Type[10];
       char Autoanswer[10];
       char Autodial[10];
       char Dial_Command_Type[10];
       char Autocall_Resource_Name[10];
       char Calling_Num[32];
       char Character_Code[10];
       char SYN_Characters[10];
       char Error_Threshold_Level[10];
       char Include_STX_Character_In_LRC[10];
       char Autoanswer_Type[10];
       char Autoconfigured_AS36[10];                         /*@A1A*/
       char Current_Message_Queue_Name[10];                  /*@AFA*/
       char Current_Message_Queue_Library[10];               /*@AFA*/
       char Bsc_reserved_1[2];                               /*@ADA*/
     /*Qdc_Non_Switch_Ctl_t Non_Switch_Ctl[];*//* Varying length   */
     /*Qdc_Switch_Ctl_t Switch_Ctl[];*//* Varying length           */
     /*Qdc_Active_Switch_Ctl_t Active_Switch_Ctl[];*//* Varying
                                    length                         */
    } Qdc_LIND0400_t;


 /******************************************************************/
 /* Type Definition for the LIND0500 format - *ETH                 */
 /****                                                          ****/
 /* NOTE: The following type definition only defines the fixed     */
 /*       portion of the format.  Any varying length field will    */
 /*       have to be defined by the user.                          */
 /******************************************************************/

 typedef _Packed struct Qdc_SSAPs
    {
       int  SSAP_Max_Frame;
       char SSAP_Addr[10];
       char SSAP_Type[10];
    } Qdc_SSAPs_t;

 typedef _Packed struct Qdc_Group_Addr
    {
       char Group_Addr[12];
    } Qdc_Group_Addr_t;

 typedef _Packed struct Qdc_PVC_Id
    {
       int PVC_Id;
    } Qdc_PVC_Id_t;

 typedef _Packed struct Qdc_LIND0500
    {
       Qdc_LIND0100_t LIND0100;
       int  Vary_On_Wait;
       int  Max_Ctl;
       int  Link_Speed;
       int  Cost_Per_Connect_Time;
       int  Cost_Per_Byte;
       int  User_Defined_1;
       int  User_Defined_2;
       int  User_Defined_3;
       int  Autodelete_Ctl;
       int  Recovery_Lmt_Count_Lmt;
       int  Recovery_Lmt_Time_Interval;
       int  Offset_Active_Switch_Ctl;
       int  Num_Active_Switch_Ctl;
       int  Length_Active_Switch_Ctl;
       int  Offset_SSAPs;
       int  Num_SSAPs;
       int  Length_SSAPs;
       int  Offset_Group_Addr;
       int  Num_Group_Addr;
       int  Length_Group_Addr;
       char Resource_Name[10];
       char Net_Ctl[10];
       char Local_Adapter_Addr[12];
       char Exchange_ID[10];
       char Ethernet_Standard[10];
       char Error_Threshold_Level[10];
       char Security_Line[10];
       char Propagation_Delay[10];
       char Autocreate_Ctl[10];
       int  Port_Num;
       char Attached_Non_Switch_NWI[10];
       char Net_Interface_DLC_ID[10];
       char Net_Server_Desc[10];
       char Duplex[10];                                      /*@A1A*/
       int  Line_Speed;                                      /*@A1A*/
       char Generate_Test_Frame[10];                         /*@A4A*/
       char Reserved[2];
       int  LAN_Eml_Clnt_Cache_Aging_Time;
       int  Addr_Res_Protocol_Retry_Count;
       int  Addr_Res_Protocol_Retry_Timer;
       int  Max_Addr_Res_Protocol_Entries;
       int  LEC_Disconnect_Time_Out;
       int  Offset_Of_PVC_Identifiers;
       int  Number_Of_PVC_Identifiers;
       int  Entry_Len_Of_PVC_Identifiers;
       char ATM_Access_Type[13];
       char Emulated_LAN_Name[32];
       char Lcl_ATM_Addr_Net_Pfix[26];
       char Lcl_ATM_Addr_End_sys_Id[12];
       char Lcl_ATM_Addr_LEC_Slct_Byte[2];
       char LES_ATM_Addr_Net_Pfix[26];
       char LES_ATM_Addr_End_Sys_Id[12];
       char LES_ATM_Addr_LEC_Slct_Byte[2];
       char LC_LES_ATM_Addr_Net_Pfix[26];
       char LC_LES_ATM_End_Sys_Id[12];
       char LC_LES_ATM_LEC_Slct_Byte[2];
       char Use_LAN_Eml_Conf_Srv_Addr[10];
       char Network_Interface_Type[10];
       char Rprted_Emulated_LAN_Name[32];                    /*@A7A*/
       char Reserved_1[3];                                   /*@A7A*/
       int  LAN_Emulation_Clnt_frm_size;                     /*@A7A*/
       int  Link_Speed_Multiplier;                           /*@A8a*/
       char Message_Queue_Name[10];                          /*@AAA*/
       char Message_Queue_Library[10];                       /*@AAA*/
       char Current_Message_Queue_Name[10];                  /*@ACA*/
       char Current_Message_Queue_Library[10];               /*@ACA*/
       char Enable_TCP_Only[10];                             /*@AAA*/
       char Eth_reserved_1[2];                               /*@ADA*/
       int  Max_Frame_Size;                                  /*@AGA*/
       int  Current_Line_Speed;                              /*@AGA*/
       char Current_Duplex[10];                              /*@AGA*/
       char Virtual_Hardware[10];                            /*@AIA*/
       char Associate_Port_Resource_Name[10];                /*@AJA*/
       char IOP_Attach_flag[1];                              /*@AJA*/
     /*Qdc_Active_Switch_Ctl_t Active_Switch_Ctl[];*//* Varying
                                    length                         */
     /*Qdc_SSAPs_t SSAPs[]; */   /* Varying length                 */
     /*Qdc_Group_Addr_t Group_Addr[];*//* Varying length           */
     /*Qdc_PVC_Id_t PVC_Id  ;*//* Varying length                   */
    } Qdc_LIND0500_t;


 /******************************************************************/
 /* Type Definition for the LIND0600 format - *IDLC                */
 /****                                                          ****/
 /* NOTE: The following type definition only defines the fixed     */
 /*       portion of the format.  Any varying length field will    */
 /*       have to be defined by the user.                          */
 /******************************************************************/

 typedef _Packed struct Qdc_Switch_NWIs
    {
       char NWI_Name[10];
       char NWI_Chan_Type[10];
       char NWI_Chan_Num[10];
       char Reserved[2];
    } Qdc_Switch_NWIs_t;

 typedef _Packed struct Qdc_LIND0600
    {
       Qdc_LIND0100_t LIND0100;
       int  Vary_On_Wait;
       int  Line_Speed;
       int  CRC_Errors_Received;
       int  Short_Frame;
       int  Receive_Overrun;
       int  Transmit_Underrun;
       int  Frame_Aborts;
       int  Retransmitted_Frames;
       int  Frame_Sequence_Errors;
       int  Max_Frame_Size;
       int  Default_Window_Size;
       int  Frame_Retry_Lmt;
       int  Response_Timer;
       int  Connect_Retry_Count;
       int  Link_Speed;
       int  Cost_Per_Connect_Time;
       int  Cost_Per_Byte;
       int  User_Defined_1;
       int  User_Defined_2;
       int  User_Defined_3;
       int  Recovery_Lmt_Count_Lmt;
       int  Recovery_Lmt_Time_Interval;
       int  Offset_Attached_Non_Switch_Ctl;
       int  Length_Attached_Non_Switch_Ctl;
       int  Offset_Active_Switch_Ctl;
       int  Num_Active_Switch_Ctl;
       int  Length_Active_Switch_Ctl;
       int  Offset_Switch_NWIs;
       int  Num_Switch_NWIs;
       int  Length_Switch_NWIs;
       char Connect_Type[10];
       char Attach_Non_Switch_NWI[10];
       char NWI_Chan_Type[10];
       char NWI_Chan_Num[10];
       char Switch_Connect_Type[10];
       char Connect_List[10];
       char Exchange_ID[10];
       char Error_Threshold_Level[10];
       char Info_Transfer_Type[13];
       char Switch_NWI_Selection[10];
       char Security_Line[10];
       char Propagation_Delay[10];
       char Current_Message_Queue_Name[10];                  /*@AFA*/
       char Current_Message_Queue_Library[10];               /*@AFA*/
       char IDLC_reserved_1[1];                              /*@A1A*/
     /*Qdc_Non_Switch_Ctl_t Non_Switch_Ctl[];*//* Varying length   */
     /*Qdc_Active_Switch_Ctl_t Active_Switch_Ctl[];*//* Varying
                                    length                         */
     /*Qdc_NWI_t NWI[];*/        /* Varying length                 */
    } Qdc_LIND0600_t;


 /******************************************************************/
 /* Type Definition for the LIND0700 format - *NET                 */
 /****                                                          ****/
 /* NOTE: The following type definition only defines the fixed     */
 /*       portion of the format.  Any varying length field will    */
 /*       have to be defined by the user.                          */
 /******************************************************************/

 typedef _Packed struct Qdc_LIND0700
    {
       Qdc_LIND0100_t LIND0100;
       int  Offset_Attached_Non_Switch_Ctl;
       int  Length_Attached_Non_Switch_Ctl;
       char Attach_Non_Switch_NWI[10];
       char Current_Message_Queue_Name[10];                  /*@AFA*/
       char Current_Message_Queue_Library[10];               /*@AFA*/
       char Reserved[2];                                     /*@A9A*/
     /*Qdc_Non_Switch_Ctl_t Non_Switch_Ctl[];*//* Varying length   */
    } Qdc_LIND0700_t;

 /******************************************************************/
 /* Type Definition for the LIND0800 format - *SDLC                */
 /* NOTE: The following type definition only defines the fixed     */
 /*       portion of the format.  Any varying length field will    */
 /*       have to be defined by the user.                          */
 /******************************************************************/

 typedef _Packed struct Qdc_Call_Progress_Sgn_Retry
    {
       char Call_Progress_Signal_Retry[10];
       char Reserved[2];
    } Qdc_Call_Progress_Sgn_Retry_t;

 typedef _Packed struct Qdc_LIND0800
    {
       Qdc_LIND0100_t LIND0100;
       int  Vary_On_Wait;
       int  Max_Ctl;
       int  Line_Speed;
       int  SHM_Call_Timer;
       int  SHM_Max_Connect_Timer;
       int  SHM_Answer_Delay_Timer;
       int  Connect_Poll_Retry;
       int  Connect_Timer;
       int  Short_Timer;
       int  Long_Timer;
       int  Short_Retry;
       int  Long_Retry;
       int  Max_Frame_Size;
       int  Max_Outstand_Frames;
       int  Inactivate_Timer;
       int  Poll_Response_Delay;
       int  Nonprod_Receive_Timer;
       int  Idle_Timer;
       int  Connect_Poll_Timer;
       int  Poll_Cycle_Pause;
       int  Frame_Retry;
       int  Fair_Poll_Timer;
       int  Data_Set_Ready_Drop_Timer;
       int  Clear_To_Send_Timer;
       int  Remote_Answer_Timer;
       int  Link_Speed;
       int  Cost_Per_Connect_Time;
       int  Cost_Per_Byte;
       int  User_Defined_1;
       int  User_Defined_2;
       int  User_Defined_3;
       int  Recovery_Lmt_Count_Lmt;
       int  Recovery_Lmt_Time_Interval;
       int  Offset_Attached_Non_Switch_Ctl;
       int  Length_Attached_Non_Switch_Ctl;
       int  Offset_Active_Switch_Ctl;
       int  Num_Active_Switch_Ctl;
       int  Length_Active_Switch_Ctl;
       int  Offset_Resource_Names;
       int  Num_Resource_Names;
       int  Length_Resource_Names;
       int  Offset_Call_Progress_Sgn_Retry;
       int  Num_Call_Progress_Sgn_Retry;
       int  Length_Call_Progress_Sgn_Retry;
       char Data_Link_Role[10];
       char Physical_Interface[10];
       char Connect_Type[10];
       char Switch_Net_Backup[10];
       char Act_Switch_Net_Backup[10];
       char SHM_Node_Type[10];
       char Autocall_Unit[10];
       char Exchange_ID[10];
       char NRZI_Data_Encoding[10];
       char Clocking[10];
       char Modem_Type_Supported[10];
       char Modem_Data_Rate_Select[10];
       char Switch_Connect_Type[10];
       char Autoanswer[10];
       char Autodial[10];
       char Dial_Command_Type[10];
       char Autocall_Resource_Name[10];
       char SHM_Call_Format[10];
       char SHM_Access_Code[10];
       char Calling_Num[32];
       char Station_Addr[10];
       char Error_Threshold_Level[10];
       char Duplex[10];
       char Modulus[10];
       char Autoanswer_Type[10];
       char Security_Line[10];
       char Propagation_Delay[10];
       char Autoconfigured_AS36[10];                         /*@a1a*/
       char Mdminzsdl[60];                                   /*@ADA*/
       char Current_Message_Queue_Name[10];                  /*@AFA*/
       char Current_Message_Queue_Library[10];               /*@AFA*/
       char Sdl_reserved_1[2];                               /*@ADA*/
     /*Qdc_Non_Switch_Ctl_t Non_Switch_Ctl[];*//* Varying length   */
     /*Qdc_Active_Switch_Ctl_t Active_Switch_Ctl[];*//* Varying
                                    length                         */
     /*Qdc_Resource_Names_t Resource_Names[];*//* Varying length   */
     /*Qdc_Call_Progress_Sgn_Retry_t Call_Progress_Sgn_Retry[];*//*
                                    Varying length                 */
    } Qdc_LIND0800_t;


 /******************************************************************/
 /* Type Definition for the LIND0900 format - *TDLC                */
 /* NOTE: The following type definition only defines the fixed     */
 /*       portion of the format.  Any varying length field will    */
 /*       have to be defined by the user.                          */
 /******************************************************************/

 typedef _Packed struct Qdc_LIND0900
    {
       Qdc_LIND0100_t LIND0100;
       int  Offset_Attached_Non_Switch_Ctl;
       int  Length_Attached_Non_Switch_Ctl;
       char Attached_Work_Station_Ctl[10];
       char Net_Ctl[10];                                     /*@A3A*/
       char Current_Message_Queue_Name[10];                  /*@AFA*/
       char Current_Message_Queue_Library[10];               /*@AFA*/
     /*Qdc_Attached_Non_Switch_Ctl_t Attached_Non_Switch_Ctl[];*//*
                                    Varying length                 */
    } Qdc_LIND0900_t;

 /******************************************************************/
 /* Type Definition for the LIND1000 format - *TRN                 */
 /* NOTE: The following type definition only defines the fixed     */
 /*       portion of the format.  Any varying length field will    */
 /*       have to be defined by the user.                          */
 /******************************************************************/

 typedef _Packed struct Qdc_Function_Addr
    {
       char Function_Addr[12];
    } Qdc_Function_Addr_t;

 typedef _Packed struct Qdc_LIND1000
    {
       Qdc_LIND0100_t LIND0100;
       int  Vary_On_Wait;
       int  Max_Ctl;
       int  Line_Speed;
       int  Max_Frame_Size;
       int  Link_Speed;
       int  Cost_Per_Connect_Time;
       int  Cost_Per_Byte;
       int  User_Defined_1;
       int  User_Defined_2;
       int  User_Defined_3;
       int  Autodelete_Ctl;
       int  Recovery_Lmt_Count_Lmt;
       int  Recovery_Lmt_Time_Interval;
       int  Offset_Active_Switch_Ctl;
       int  Num_Active_Switch_Ctl;
       int  Length_Active_Switch_Ctl;
       int  Offset_SSAPs;
       int  Num_SSAPs;
       int  Length_SSAPs;
       int  Offset_Function_Addr;
       int  Num_Function_Addr;
       int  Length_Function_Addr;
       char Resource_Name[10];
       char Net_Ctl[10];
       char TRLAN_Mgr_Log_Lvl_Configured[10];
       char TRLAN_Mgr_Log_Lvl_Current[10];
       char TRLAN_Mgr_Mode[12];
       char Log_Configuration_Changes[10];
       char Token_Ring_Inform_Beacon[10];
       char Local_Adapter_Addr[12];
       char Exchange_ID[10];
       char Early_Token_Release[10];
       char Error_Threshold_Level[10];
       char Security_Line[10];
       char Propagation_Delay[10];
       char Autocreate_Ctl[10];
       int  Port_Num;
       char Attached_Non_Switch_NWI[10];
       char Net_Interface_DLC_ID[10];
       char Net_Server_Desc[10];                            /*@a1c*/
       char Autoconfigured_AS36[10];                        /*@a1a*/
       char Duplex[10];                                     /*@a1a*/
       char Activate_LAN_Manager[10];                       /*@a2a*/
       int  LAN_Eml_Clnt_Cache_Aging_Time;
       int  Addr_Res_Protocol_Retry_Count;
       int  Addr_Res_Protocol_Retry_Timer;
       int  Max_Transmission_Unit_Size;     /* LEC frame size @A7C*/
       int  Max_Addr_Res_Protocol_Entries;
       int  LEC_Disconnect_Time_Out;
       int  Offset_Of_PVC_Identifiers;
       int  Number_Of_PVC_Identifiers;
       int  Entry_Len_Of_PVC_Identifiers;
       char ATM_Access_Type[13];
       char Emulated_LAN_Name[32];
       char Lcl_ATM_Addr_Net_Pfix[26];
       char Lcl_ATM_Addr_End_sys_Id[12];
       char Lcl_ATM_Addr_LEC_Slct_Byte[2];
       char LES_ATM_Addr_Net_Pfix[26];
       char LES_ATM_Addr_End_Sys_Id[12];
       char LES_ATM_Addr_LEC_Slct_Byte[2];
       char LC_LES_ATM_Addr_Net_Pfix[26];
       char LC_LES_ATM_End_Sys_Id[12];
       char LC_LES_ATM_LEC_Slct_Byte[2];
       char Use_LAN_Eml_Conf_Srv_Addr[10];
       char Network_Interface_Type[10];
       char Rprted_Emulated_LAN_Name[32];                    /*@A7A*/
       char Filler[3];                /* filler for alignment @a8a*/
       int Link_Speed_Multiplier;                           /*@a8a*/
       char Message_Queue_Name[10];                          /*@ABA*/
       char Message_Queue_Library[10];                       /*@ABA*/
       char Current_Message_Queue_Name[10];                  /*@ACA*/
       char Current_Message_Queue_Library[10];               /*@ACA*/
       int  Current_Line_Speed;                              /*@AGA*/
       char Current_Duplex[10];                              /*@AGA*/

     /*Qdc_Active_Switch_Ctl_t Active_Switch_Ctl[];*//* Varying
                                    length                         */
     /*Qdc_SSAPs_t SSAPs[];*/    /* Varying length                 */
     /*Qdc_Function_Addr_t Function_Addr[];*//* Varying length     */
     /*Qdc_PVC_Id_t PVC_Id  ;*//* Varying length                   */
    } Qdc_LIND1000_t;


 /******************************************************************/
 /* Type Definition for the LIND1100 format - X.25                 */
 /* NOTE: The following type definition only defines the fixed     */
 /*       portion of the format.  Any varying length field will    */
 /*       have to be defined by the user.                          */
 /******************************************************************/

 typedef _Packed struct Qdc_Logical_Chan_Entries
    {
       char Logical_Chan_ID[10];
       char Logical_Chan_Type[10];
       char Logical_Chan_Ctl[10];
       char Reserved[2];
    } Qdc_Logical_Chan_Entries_t;

 typedef _Packed struct Qdc_LIND1100
    {
       Qdc_LIND0100_t LIND0100;
       int  Vary_On_Wait;
       int  Line_Speed;
       int  Max_Frame_Size;
       int  Default_Packet_Size_Transmit;
       int  Default_Packet_Size_Receive;
       int  Max_Packet_Size_Transmit;
       int  Max_Packet_Size_Receive;
       int  Default_Window_Size_Transmit;
       int  Default_Window_Size_Receive;
       int  Idle_Timer;
       int  Frame_Retry;
       int  Predial_Delay;
       int  Redial_Delay;
       int  Dial_Retries;
       int  Switch_Disc_Timer_Min_Connect;
       int  Switch_Disc_Timer_Disc_Delay;
       int  Data_Set_Ready_Drop_Timer;
       int  Clear_To_Send_Timer;
       int  Remote_Answer_Timer;
       int  Link_Speed;
       int  Cost_Per_Connect_Time;
       int  Cost_Per_Byte;
       int  User_Defined_1;
       int  User_Defined_2;
       int  User_Defined_3;
       int  Recovery_Lmt_Count_Lmt;
       int  Recovery_Lmt_Time_Interval;
       int  Offset_Switch_Ctl;
       int  Num_Switch_Ctl;
       int  Length_Switch_Ctl;
       int  Offset_Active_Switch_Ctl;
       int  Num_Active_Switch_Ctl;
       int  Length_Active_Switch_Ctl;
       int  Offset_Logical_Chan_Entries;
       int  Num_Logical_Chan_Entries;
       int  Length_Logical_Chan_Entries;
       int  Offset_Switch_NWIs;
       int  Num_Switch_NWIs;
       int  Length_Switch_NWIs;
       char Resource_Name[10];
       char Local_Net_Addr[20];
       char Connect_Initiation[10];
       char Physical_Interface[10];
       char Connect_Type[10];
       char Attached_Non_Switch_NWI[10];
       char NWI_Chan_Type[10];
       char NWI_Chan_Num[10];
       char X25_DCE_Support[10];
       char Net_Ctl[10];
       char Exchange_ID[10];
       char Packet_Mode[10];
       char Info_Transfer_Type[13];
       char Extended_Net_Addr[10];
       char Modulus[10];
       char Insert_Net_Addr_Packets[10];
       char Error_Threshold_Level[10];
       char Connect_Num[32];
       char Calling_Num[32];
       char Modem_Type_Supported[10];
       char Modem_Data_Rate_Select[10];
       char Switch_Connect_Type[10];
       char Outgoing_Connect_List[10];
       char Outgoing_Connect_List_Entry[10];
       char Incoming_Connect_List[10];
       char Autoanswer[10];
       char Autodial[10];
       char Dial_Command_Type[10];
       char Call_Immediate[10];
       char Autocall_Unit[10];
       char Autocall_Resource_Name[10];
       char Switch_Disconnect[10];
       char Autoanswer_Type[10];
       char Switch_NWI_Selection[10];
       char Security_Line[10];
       char Propagation_Delay[10];
       char Net_User_ID_Facility[214];
       char reserved_1[1];      /*move to 4 byte boundary     @a1a*/
       char Clocking[10];                                   /*@a1a*/
       char Autoconfigured_AS36[10];                        /*@a1a*/
       char Message_Queue_Name[10];                          /*@ABA*/
       char Message_Queue_Library[10];                       /*@ABA*/
       char Current_Message_Queue_Name[10];                  /*@ACA*/
       char Current_Message_Queue_Library[10];               /*@ACA*/
       char Mdminzx25[60];                                   /*@ADA*/
     /*Qdc_Switch_Ctl_t Switch_Ctl[];*//* Varying length           */
     /*Qdc_Active_Switch_Ctl_t Active_Switch_Ctl[];*//* Varying
                                    length                         */
     /*Qdc_Logical_Chan_Entries_t Logical_Chan_Entries[];*//* Varying
                                    length                         */
     /*Qdc_NWI_t NWI[]; */       /* Varying length                 */
    } Qdc_LIND1100_t;


 /******************************************************************/
 /* Type Definition for the LIND1200 format - *DDI                 */
 /* NOTE: The following type definition only defines the fixed     */
 /*       portion of the format.  Any varying length field will    */
 /*       have to be defined by the user.                          */
 /******************************************************************/

 typedef _Packed struct Qdc_LIND1200
    {
       Qdc_LIND0100_t LIND0100;
       int  Vary_On_Wait;
       int  Max_Ctl;
       int  Max_Frame_Size;
       int  Token_Rotation_Time;
       int  Link_Speed;
       int  Autodelete_Ctl;
       int  Cost_Per_Connect_Time;
       int  Cost_Per_Byte;
       int  User_Defined_1;
       int  User_Defined_2;
       int  User_Defined_3;
       int  Recovery_Lmt_Count_Lmt;
       int  Recovery_Lmt_Time_Interval;
       int  Offset_Active_Switch_Ctl;
       int  Num_Active_Switch_Ctl;
       int  Length_Active_Switch_Ctl;
       int  Offset_SSAPs;
       int  Num_SSAPs;
       int  Length_SSAPs;
       int  Offset_Group_Addr;
       int  Num_Group_Addr;
       int  Length_Group_Addr;
       char Resource_Name[10];
       char NWI_Name[10];
       char Net_Interface_DLC_ID[10];
       char Local_Adapter_Addr[12];
       char Exchange_ID[10];
       char Attach_Mode[10];
       char Security_Line[10];
       char Propagation_Delay[10];
       char Autocreate_Ctl[10];
       char Logging_Level[10];
       char Local_Mgr_Mode[10];
       char Net_Ctl[10];
       char Message_Queue_Name[10];                          /*@ABA*/
       char Message_Queue_Library[10];                       /*@ABA*/
       char Current_Message_Queue_Name[10];                  /*@ACA*/
       char Current_Message_Queue_Library[10];               /*@ACA*/
       char Ddi_reserved_1[2];                               /*@ADA*/
     /*Qdc_Active_Switch_Ctl_t Active_Switch_Ctl[];*//* Varying
                                    length                         */
     /*Qdc_SSAPs_t SSAPs[];*/    /* Varying length                 */
     /*Qdc_Group_Addr_t Group_Addr[];*//* Varying length           */
    } Qdc_LIND1200_t;

 /******************************************************************/
 /* Type Definition for the LIND1300 format - *FR                  */
 /* NOTE: The following type definition only defines the fixed     */
 /*       portion of the format.  Any varying length field will    */
 /*       have to be defined by the user.                          */
 /******************************************************************/

 typedef _Packed struct Qdc_LIND1300
    {
       Qdc_LIND0100_t LIND0100;
       int  Vary_On_Wait;
       int  Max_Ctl;
       int  Max_Frame_Size;
       int  Link_Speed;
       int  Cost_Per_Connect_Time;
       int  Cost_Per_Byte;
       int  User_Defined_1;
       int  User_Defined_2;
       int  User_Defined_3;
       int  Recovery_Lmt_Count_Lmt;
       int  Recovery_Lmt_Time_Interval;
       int  Offset_Active_Switch_Ctl;
       int  Num_Active_Switch_Ctl;
       int  Length_Active_Switch_Ctl;
       int  Offset_SSAPs;
       int  Num_SSAPs;
       int  Length_SSAPs;
       char Attached_Non_Switch_NWI[10];
       int  Net_Interface_DLC_ID;
       char Exchange_ID[10];
       char Security_Line[10];
       char Propagation_Delay[10];
       char Net_Ctl[10];
       char Message_Queue_Name[10];                          /*@ABA*/
       char Message_Queue_Library[10];                       /*@ABA*/
       char Current_Message_Queue_Name[10];                  /*@ACA*/
       char Current_Message_Queue_Library[10];               /*@ACA*/
     /*Qdc_Active_Switch_Ctl_t Active_Switch_Ctl[];*//* Varying
                                    length                         */
     /*Qdc_SSAPs_t SSAPs[];*/    /* Varying length                 */
    } Qdc_LIND1300_t;



 /******************************************************************/
 /* Type Definition for the LIND1400 format - *FAX                 */
 /* NOTE: The following type definition only defines the fixed     */
 /*       portion of the format.  Any varying length field will    */
 /*       have to be defined by the user.                          */
 /******************************************************************/

 typedef _Packed struct Qdc_Resource_Names
    {
       char Resource_Name[10];
       char Reserved[2];
    } Qdc_Resource_Names_t;

 typedef _Packed struct Qdc_LIND1400
    {
       Qdc_LIND0100_t LIND0100;
       int  Vary_On_Wait;
       int  Offset_Attached_Non_Switch_Ctl;
       int  Length_Attached_Non_Switch_Ctl;
       int  Offset_Resource_Names;
       int  Num_Resource_Names;
       int  Length_Resource_Names;
       char Current_Message_Queue_Name[10];                  /*@AFA*/
       char Current_Message_Queue_Library[10];               /*@AFA*/
     /*Qdc_Non_Switch_Ctl_t Non_Switch_Ctl[];*//* Varying length   */
     /*Qdc_Resource_Names_T Resource_Names[];*//* Varying length   */
    } Qdc_LIND1400_t;


 /******************************************************************/
 /* Type Definition for the LIND1500 format - *WLS                 */
 /* NOTE: The following type definition only defines the fixed     */
 /*       portion of the format.  Any varying length field will    */
 /*       have to be defined by the user.                          */
 /******************************************************************/

 typedef _Packed struct Qdc_LIND1500
    {
       Qdc_LIND0100_t LIND0100;
       int  Vary_On_Wait;
       int  Max_Ctl;
       int  Link_Speed;
       int  Cost_Per_Connect_Time;
       int  Cost_Per_Byte;
       int  User_Defined_1;
       int  User_Defined_2;
       int  User_Defined_3;
       int  Autodelete_Ctl;
       int  Recovery_Lmt_Count_Lmt;
       int  Recovery_Lmt_Time_Interval;
       int  Offset_Active_Switch_Ctl;
       int  Num_Active_Switch_Ctl;
       int  Length_Active_Switch_Ctl;
       int  Offset_SSAPs;
       int  Num_SSAPs;
       int  Length_SSAPs;
       int  Offset_Group_Addr;
       int  Num_Group_Addr;
       int  Length_Group_Addr;
       char Resource_Name[10];
       char Net_Ctl[10];
       char Local_Adapter_Addr[12];
       char Exchange_ID[10];
       char Ethernet_Standard[10];
       char Security_Line[10];
       char Propagation_Delay[10];
       char Autocreate_Ctl[10];
       char Init_Source_File_Name[10];
       char Init_Source_File_Library_Name[10];
       char Init_Source_Member_Name[10];
       char Init_Program_Name[10];
       char Init_Program_Library_Name[10];
       char Current_Message_Queue_Name[10];                  /*@AFA*/
       char Current_Message_Queue_Library[10];               /*@AFA*/
     /*Qdc_Active_Switch_Ctl_t Active_Switch_Ctl[];*//* Varying
                                    length                         */
     /*Qdc_SSAPs_t SSAPs[]; */   /* Varying length                 */
     /*Qdc_Group_Addr_t Group_Addr[];*//* Varying length           */
    } Qdc_LIND1500_t;


 /******************************************************************/
 /*                                                                */
 /* type Definition for the LIND1600 format - *PPP            @a6a */
 /*                                                                */
 /******************************************************************/

 typedef _Packed struct Qdc_LIND1600                         /*@a6a*/
    {                                                        /*@a6a*/
       Qdc_LIND0100_t LIND0100;                              /*@a6a*/
       int  Vary_On_Wait;                                    /*@a6a*/
       int  Line_Speed;                                      /*@a6a*/
       int  Max_Frame_Size;                                  /*@a6a*/
       int  Inactivate_Timer;                                /*@a6a*/
       int  Remote_Answer_Timer;                             /*@a6a*/
       int  Clear_To_Send_Timer;                             /*@a6a*/
       int  Recovery_Lmt_Count_Lmt;                          /*@a6a*/
       int  Recovery_Lmt_Time_Interval;                      /*@a6a*/
       int  LCPAUT_Rmt_Peer_Challenge_Tmr;                   /*@a6a*/
       int  LCPAUT_Max_Auth_Requests;                        /*@a6a*/
       int  LCPCFG_Cfg_Retry_Tmr;                            /*@a6a*/
       int  LCPCFG_Max_Cfg_Failures;                         /*@a6a*/
       int  LCPCFG_Max_Cfg_Requests;                         /*@a6a*/
       int  LCPCFG_Max_Term_Requests;                        /*@a6a*/
       char LCPCFG_Cfg_Retry_Tmr_Ch[10];                     /*@a6a*/
       char Async_Ctl_Char_Map[10];                          /*@a6a*/
       char Resource_Name[10];                               /*@a6a*/
       char Physical_Interface[10];                          /*@a6a*/
       char Framing_Type[10];                                /*@a6a*/
       char Connect_Type[10];                                /*@a6a*/
       char Net_Ctl[10];                                     /*@a6a*/
       char NRZI_Data_Encoding[10];                          /*@a6a*/
       char Switch_Connect_Type[10];                         /*@a6a*/
       char Clocking[10];                                    /*@a6a*/
       char Dial_Command_Type[10];                           /*@a6a*/
       char setmdmasc[40];                                   /*@a6a*/
       char Calling_Num[32];                                 /*@a6a*/
       char Flow_Control[10];                                /*@a6a*/
       char Attached_Non_Switch_NWI[10];                     /*@AEA*/
       char NWI_Chan_Num[10];                                /*@AEA*/
       char Info_Transfer_Type[13];                          /*@AEA*/
       char Outgoing_Connect_List[10];                       /*@AEA*/
       char Outgoing_Connect_List_Entry[10];                 /*@AEA*/
       char Incoming_Connect_List[10];                       /*@AEA*/
       char Switch_NWI_Selection[10];                        /*@AEA*/
       char Compression[10];                                 /*@AEA*/
       char Message_Queue_Name[10];                          /*@AEA*/
       char Message_Queue_Library[10];                       /*@AEA*/
       char Current_Message_Queue_Name[10];                  /*@AEA*/
       char Current_Message_Queue_Library[10];               /*@AEA*/
       char MdminzPPP[60];                                   /*@AEA*/
       char reserved_1[1];                                   /*@AEA*/
       int  Offset_Switch_NWIs;                              /*@AEA*/
       int  Num_Switch_NWIs;                                 /*@AEA*/
       int  Length_Switch_NWIs;                              /*@AEA*/
     /*Qdc_NWI_t NWI[];*/        /* Varying length             @AEA*/

    } Qdc_LIND1600_t;                                        /*@a6a*/

 #if (__OS400_TGTVRM__>=510)                               /* @AHA */
     #pragma datamodel(pop)                                /* @AHA */
 #endif                                                    /* @AHA */

 #endif
