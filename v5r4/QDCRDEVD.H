/* begin_generated_IBM_copyright_prolog                              */
/* This is an automatically generated copyright prolog.              */
/* After initializing,  DO NOT MODIFY OR MOVE                        */
/* ----------------------------------------------------------------- */
/*                                                                   */
/* Product(s):                                                       */
/*     5728-SS1                                                      */
/*     5722-SS1                                                      */
/*                                                                   */
/* (C)Copyright IBM Corp.  1994, 2005                                */
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
 /* Header File Name: H/QDCRDEVD                                   */
 /*                                                                */
 /* Descriptive Name: Retrieve Device Description                  */
 /*                                                                */
 /*                                                                */
 /*                                                                */
 /* Description: The Retrieve Device Description (QDCRDEVD) API    */
 /*              retrieves information about a deivce description. */
 /*                                                                */
 /* Header Files Included: None.                                   */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: Qdc_DEVD0100_t                                 */
 /*                 Qdc_DEVD0200_t                                 */
 /*                 Qdc_DEVD0300_t                                 */
 /*                 Qdc_DEVD0400_t                                 */
 /*                 Qdc_DEVD0500_t                                 */
 /*                 Qdc_DEVD0600_t                                 */
 /*                 Qdc_DEVD0700_t                                 */
 /*                 Qdc_DEVD0800_t                                 */
 /*                 Qdc_DEVD0900_t                                 */
 /*                 Qdc_DEVD1000_t                                 */
 /*                 Qdc_DEVD1100_t                                 */
 /*                 Qdc_DEVD1200_t                                 */
 /*                 Qdc_DEVD1300_t                                 */
 /*                 Qdc_DEVD1400_t                                 */
 /*                 Qdc_DEVD1500_t                                 */
 /*                 Qdc_DEVD1600_t                                 */
 /*                 Qdc_DEVD1700_t                                 */
 /*                 Qdc_DEVD1800_t                                 */
 /*                 Qdc_DEVD1900_t                                 */
 /*                 Qdc_DEVD2000_t                                 */
 /*                 Qdc_Mode_Names_t                               */
 /*                 Qdc_Auxiliary_Devices_t                        */
 /*                 Qdc_Switch_Lines_t                             */
 /*                 Qdc_User_Options_t                             */
 /*                 Qdc_User_Data_t                                */
 /*                 Qdc_Publishinf_t                               */
 /*                 Qdc_Local_Interfaces_t                         */
 /*                 Qdc_File_Svr_Storage_Entries_t                 */
 /*                 Qdc_Vrt_Eth_Entries_t                          */
 /*                                                                */
 /* Function Prototype List: QDCRDEVD                              */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= D2862004     3D10  940213 MOREY:    New Include           */
 /* $A1= D2883000     3D60  941211 JAM  :    Add DEV1600 and 1700  */
 /*                                          formats               */
 /* $A2= D9171000     3D60  950210 ALLSEN    Add new fields to     */
 /*                                          DEVD1100 format       */
 /* $a3= p3617122     3d70  960409 muras:    add numerical status  */
 /*                                          for devd1700 MLB drive*/
 /* $A4= D95020       4D10  961030 ZUBAIR:   ACT printer support   */
 /* $A5= D9508400     4D20  970430 CMWOOD:   Add allocated to info */
 /* $A6= D9548600     4D20  970604 ADAFIN:   Add IP info for       */
 /*                                          virtual printer and   */
 /*                                          virtual display       */
 /* $A7= P3649392     4D20  970720 CMWOOD:   Fix problems with     */
 /*                                          formats DEVD0800,     */
 /*                                          DEVD1100, DEVD1300,   */
 /*                                          and DEVD1400.         */
 /* $A8=D9556100      4D30  971010 ZUBAIR:   Add RSCALCPTY,        */
 /*                                          INLMNTWAIT and        */
 /*                                          EOVMNTWAIT  for       */
 /*                                          Tape MLB (devd1700)   */
 /* $A9= P3665843     4D30  980219 KDICK:    Fix problems with     */
 /*                                          formats DEVD0600 and  */
 /*                                          char allocations for  */
 /*                                          job number in all     */
 /*                                          other formats.        */
 /* $AA= D97010       4D40  980615 rbs  :    add crypto support    */
 /* $AB= D97157       4D40  980805 ADAFIN:   Support 2nd robot     */
 /*                                          device for Tape MLB   */
 /* $AC= D95815       4D40  980806 CMWOOD:   Add current msgq      */
 /*                                          fields.               */
 /* $AD= D97584       4D50  990319 CMWOOD:   Add current msgq field*/
 /*                                          to additional formats */
 /* $AE= D97171       5D10  991106 JGR:      Add ASP support       */
 /* $AF= D98212.1    v5r1m0 112199 gchaney:  Teraspace stage 2     */
 /* $AG= D97314       5D10  000501 MARYHS:   Add PUBLISHINF parm   */
 /* $AH= SA90100      5D10  000804 MARYHS:   Correct DEVD0600      */
 /*                                          structure             */
 /* $AI= D98508       5D20  001213 TRENSE:   Add type and model to */
 /*                                          DEVD1800 structure    */
 /* $AJ= D98416.66    5D20  010629 MARYHS:   Add RDB to DEVD1900   */
 /* $AK= P9954184     5d20  011006 KDICK :   Add TCP/IP to DEVD1700*/
 /* $AL= D98633       5D20  011012 MARYHS:   Add Data Stream and   */
 /*                                          SECURECNN, and VLDL   */
 /* $AM= D99396       5D30  020709 TRENSE:   Add application type  */
 /*                                          to DEVD1800           */
 /* $AN= D99890.4     5D40  040803 RKF  :    Add DEV2000 format    */
 /* $AO= D99918.1     5D40  040910 LOPEZAM:  Add the owning process*/
 /*                                          to DEVD1500           */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

 #ifndef QDCRDEVD_h
 #define QDCRDEVD_h

 #if (__OS400_TGTVRM__>=510)
     #pragma datamodel(P128)
 #endif


 /******************************************************************/
 /* Prototype for calling Retrieve Device Desc API (QDCRDEVD)      */
 /******************************************************************/
 #ifdef  __ILEC400__
       #pragma linkage(QDCRDEVD,OS,nowiden)
 #else
       extern "OS"
 #endif
 void QDCRDEVD (void *,          /* Receiver variable              */
                int,             /* Length of receiver variable    */
                char *,          /* Format name                    */
                char *,          /* Line name                      */
                void *);         /* Error code                     */


 /******************************************************************/
 /* Type Definition for the DEVD0100 format - Basic Device Info    */
 /******************************************************************/

 typedef _Packed struct Qdc_DEVD0100
    {
       int  Bytes_Returned;
       int  Bytes_Available;
       char Date_Info_Retrieved[7];
       char Time_Info_Retrieved[6];
       char Device_Name[10];
       char Device_Category[10];
       char Online_At_IPL[10];
       char Text_Desc[50];
       char Reserved[3];
    } Qdc_DEVD0100_t;


 /******************************************************************/
 /* Type Definition for the DEVD0200 format - *APPC                */
 /****                                                          ****/
 /* NOTE: The following type definition only defines the fixed     */
 /*       portion of the format.  Any varying length field will    */
 /*       have to be defined by the user.                          */
 /******************************************************************/

 typedef _Packed struct Qdc_Mode_Names
    {
       char Mode_Name[10];
       char Reserved[2];
    } Qdc_Mode_Names_t;

 typedef _Packed struct Qdc_Active_Modes
    {
       char Mode_Name[10];
       char Allocated_By_Job[10];
       char Allocated_By_User[10];
       char Allocated_By_Job_Number[6];
    } Qdc_Active_Modes_t;

 typedef _Packed struct Qdc_DEVD0200
    {
       Qdc_DEVD0100_t DEVD0100;
       int  Offset_Mode_Names;
       int  Num_Mode_Names;
       int  Length_Mode_Names;
       char Remote_Location_Name[10];
       char Local_Location_Name[10];
       char Remote_Net_ID[10];
       char Attached_Non_Switch_Ctl_Name[10];
       char Message_Queue_Name[10];
       char Message_Queue_Library[10];
       char Local_Location_Addr[10];
       char APPN_Capable[10];
       char Single_Session_Indication[10];
       char Single_Session_Num_Conv[10];
       char Locally_Control_Session[10];
       char Pre_Established_Session[10];
       char Secure_Location[10];
       char Automatically_Configured[10];
       int  Offset_Active_Modes;
       int  Num_Active_Modes;
       int  Length_Active_Modes;
       char Current_Message_Queue_Name[10];
       char Current_Message_Queue_Library[10];
     /*Qdc_Mode_Names Mode_Names;*//* Varying length               */
     /*Qdc_Active_Modes Active_Modes;*//* Varying length           */
    } Qdc_DEVD0200_t;


 /******************************************************************/
 /* Type Definition for the DEVD0300 format - *ASC                 */
 /******************************************************************/

 typedef _Packed struct Qdc_DEVD0300
    {
       Qdc_DEVD0100_t DEVD0100;
       char Remote_Location_Name[10];
       char Attached_Non_Switch_Ctl_Name[10];
       char Allocated_By_Job[10];
       char Allocated_By_User[10];
       char Allocated_By_Job_Number[6];
       char Current_Message_Queue_Name[10];
       char Current_Message_Queue_Library[10];
    } Qdc_DEVD0300_t;


 /******************************************************************/
 /* Type Definition for the DEVD0400 format - *BSC                 */
 /******************************************************************/

 typedef _Packed struct Qdc_DEVD0400
    {
       Qdc_DEVD0100_t DEVD0100;
       int  Record_Length;
       int  Block_Length;
       char Local_Location_Addr[10];
       char Remote_Location_Name[10];
       char Attached_Non_Switch_Ctl_Name[10];
       char Connect_Type[10];
       char Application_Type[10];
       char Contention_Resolution_Winner[10];
       char Blocking_Type[10];
       char Separator_Character[10];
       char Remote_BSCEL[10];
       char Transmit_Transparent_Mode[10];
       char Compress_Decompress_Data[10];
       char Truncate_Trailing_Blanks[10];
       char Group_Separator_Type[10];
       char Emulated_Device[10];
       char Emulated_Keyboard[10];
       char Emulated_Numeric_Lock[10];
       char Emulated_Work_Station[10];
       char Allocated_By_Job[10];
       char Allocated_By_User[10];
       char Allocated_By_Job_Number[6];
       char Current_Message_Queue_Name[10];
       char Current_Message_Queue_Library[10];
    } Qdc_DEVD0400_t;


 /******************************************************************/
 /* Type Definition for the DEVD0500 format - *DKT                 */
 /******************************************************************/

 typedef _Packed struct Qdc_DEVD0500
    {
       Qdc_DEVD0100_t DEVD0100;
       char Device_Type[10];
       char Device_Model[10];
       char Resource_Name[10];
    } Qdc_DEVD0500_t;


 /******************************************************************/
 /* Type Definition for the DEVD0600 format - *DSP                 */
 /****                                                          ****/
 /* NOTE: The following type definition only defines the fixed     */
 /*       portion of the format.  Any varying length field will    */
 /*       have to be defined by the user.                          */
 /******************************************************************/

 typedef _Packed struct Qdc_Auxiliary_Devices
    {
       int  Auxiliary_Device_Addr;
       char Auxiliary_Device_Type[10];
       char Reserved[2];
    } Qdc_Auxiliary_Devices_t;

 typedef _Packed struct Qdc_DEVD0600
    {
       Qdc_DEVD0100_t DEVD0100;
       int  Char_ID_Graphic_Char_Set;
       int  Char_ID_Code_Page;
       int  Max_Length_Request_Unit;
       int  Inactive_Timer;
       int  DBCS_Feature_RAM_Size;
       int  Activation_Timer;
       int  Switch_Setting;
       int  Device_Port;
       int  Max_Outstand_Frames;
       int  Idle_Timer;
       int  NRM_Poll_Timer;
       int  Frame_Retry;
       int  Offset_Auxiliary_Devices;
       int  Num_Auxiliary_Devices;
       int  Length_Auxiliary_Devices;
       char Device_Class[10];
       char Device_Type[10];
       char Device_Model[10];
       char Local_Location_Addr[10];
       char Attached_Non_Switch_Ctl_Name[10];
       char Keyboard_Language_Type[10];
       char Drop_Line_At_Signoff[10];
       char Allow_Blinking_Cursor[10];
       char Print_Device[10];
       char Remote_Location_Name[10];
       char Local_Location_Name[10];
       char Remote_Net_ID[10];
       char Ctl_Session_Device_Desc[10];
       char Assoc_Printer_Name[10];
       char Assoc_Printer_Remote_Net_ID[10];
       char Alternate_Printer_Name[10];
       char Alternate_Printer_Remote_Net_ID[10];
       char Output_Queue_Name[10];
       char Output_Queue_Library[10];
       char Printer[10];
       char Print_File_Name[10];
       char Print_File_Library[10];
       char Work_Station_Custom_Obj_Name[10];
       char Work_Station_Custom_Obj_Lib[10];
       char Application_Type[10];
       char DBCS_Feature_Matrix_Size[10];
       char DBCS_Feature_Language_ID[10];
       char DBCS_Feature_Last_Code_Point[10];
       char SNA_Pass_Through_Device[10];
       char SNA_Pass_Through_Group_Name[10];
       char Emulated_Device[10];
       char Emulated_Device_Model[10];
       char Emulating_ASCII_Device[10];
       char Physical_Attachment[10];
       char Line_Speed[10];
       char Word_Length[10];
       char Parity_Type[10];
       char Stop_Bits[10];
       char ASCII_Terminal_ID[20];
       char Assoc_APPC_Device[10];
       char Host_Signon_Logon_Command[256];
       char Pass_Through_ID[1];
       char Automatically_Configured[10];
       char Reserved[3];
       int  Shared_Session_Num;
       char Dependent_Location_Name[10];
       char Network_Protocol[1];
       char Network_Protocol_Address[18];
       char Network_IP_Address_Dotted_Fmt[15];
       char Allocated_By_Job[10];
       char Allocated_By_User[10];
       char Allocated_By_Job_Number[6];
       char Current_Message_Queue_Name[10];
       char Current_Message_Queue_Library[10];
       char Server_Network_Protocol[1];
       char Server_Network_Protocol_Add[18];
       char Server_Network_IP_Add[15];
     /*Qdc_Auxiliary_Devices Auxiliary Devices[];*//* Varying length*/
    } Qdc_DEVD0600_t;


 /******************************************************************/
 /* Type Definition for the DEVD0700 format - *FNC                 */
 /******************************************************************/

 typedef _Packed struct Qdc_DEVD0700
    {
       Qdc_DEVD0100_t DEVD0100;
       int  Max_Length_Request_Unit;
       int  Inactive_Timer;
       int  Activation_Timer;
       char Device_Type[10];
       char Local_Location_Addr[10];
       char Remote_Location_Name[10];
       char Attached_Non_Switch_Ctl_Name[10];
       char Device_Class[10];
       char SNA_Pass_Through_Device[10];
       char SNA_Pass_Through_Group_Name[10];
       char Allocated_By_Job[10];
       char Allocated_By_User[10];
       char Allocated_By_Job_Number[6];
       char Current_Message_Queue_Name[10];
       char Current_Message_Queue_Library[10];
    } Qdc_DEVD0700_t;


 /******************************************************************/
 /* Type Definition for the DEVD0800 format - *HOST                */
 /******************************************************************/

 typedef _Packed struct Qdc_DEVD0800
    {
       Qdc_DEVD0100_t DEVD0100;
       int  Max_Length_Request_Unit;
       char Local_Location_Addr[10];
       char Remote_Location_Name[10];
       char Attached_Non_Switch_Ctl_Name[10];
       char Application_Type[10];
       char Emulated_Device[10];
       char Emulated_Device_Model[10];
       char Emulated_Keyboard[10];
       char Emulated_Numeric_Lock[10];
       char Emulated_Work_Station[10];
       char End_Session_With_Host[10];
       char Dependent_Location_Name[10];
       char Allocated_By_Job[10];
       char Allocated_By_User[10];
       char Allocated_By_Job_Number[6];
       char Current_Message_Queue_Name[10];
       char Current_Message_Queue_Library[10];
    } Qdc_DEVD0800_t;


 /******************************************************************/
 /* Type Definition for the DEVD0900 format - *INTR                */
 /******************************************************************/

 typedef _Packed struct Qdc_DEVD0900
    {
       Qdc_DEVD0100_t DEVD0100;
       char Remote_Location_Name[10];
       char Allocated_By_Job[10];
       char Allocated_By_User[10];
       char Allocated_By_Job_Number[6];
    } Qdc_DEVD0900_t;


 /******************************************************************/
 /* Type Definition for the DEVD1000 format - *NET                 */
 /******************************************************************/

 typedef _Packed struct Qdc_DEVD1000
    {
       Qdc_DEVD0100_t DEVD0100;
       char Net_Type[10];
       char Attached_Non_Switch_Ctl_Name[10];
       char Allocated_By_Job[10];
       char Allocated_By_User[10];
       char Allocated_By_Job_Number[6];
       char Current_Message_Queue_Name[10];
       char Current_Message_Queue_Library[10];
    } Qdc_DEVD1000_t;


 /******************************************************************/
 /* Type Definition for the DEVD1100 format - *PRT                 */
 /****                                                          ****/
 /* NOTE: The following type definition only defines the fixed     */
 /*       portion of the format.  Any varying length field will    */
 /*       have to be defined by the user.                          */
 /******************************************************************/

 typedef _Packed struct Qdc_Switch_Lines
    {
       char Switch_Line_Name[10];
    } Qdc_Switch_Lines_t;

 typedef _Packed struct Qdc_User_Options
    {
       char User_Option[10];
    } Qdc_User_Options_t;

 typedef _Packed struct Qdc_User_Data
    {
       char User_Data[1];
    } Qdc_User_Data_t;

 typedef _Packed struct Qdc_Publishinf
 {
     char Support_Duplex[10];
     char Support_Color[10];
     int  PPM_Black;
     int  PPM_Color;
     char Location[30];
     char Pub_Reserve[2];
     int  Offset_DataStream;
     int  Num_Data_Stream_Formats;
     int  Sizeof_DataStream;
 }Qdc_Publishinf_t;

 typedef _Packed struct Qdc_Data_Stream
 {
     char Data_Stream[10];
     char Data_Reserve[2];
 } Qdc_Data_Stream_t;

 typedef _Packed struct Qdc_DEVD1100
    {
       Qdc_DEVD0100_t DEVD0100;
       int  Font_ID_Point_Size;
       int  Max_Length_Request_Unit;
       int  Pacing;
       int  Max_Pending_Requests;
       int  Print_Request_Timer;
       int  Char_ID_Graphic_Char_Set;
       int  Char_ID_Code_Page;
       int  DBCS_Feature_RAM_Size;
       int  Inactive_Timer;
       int  Activation_Timer;
       int  Switch_Setting;
       int  Device_Port;
       char Device_Class[10];
       char Device_Type[10];
       char Device_Model[10];
       char Advanced_Function_Printing[10];
       char AFP_Attachments[10];
       char Local_Location_Addr[10];
       char Attached_Non_Switch_Ctl_Name[10];
       char Font_ID_ID[10];
       char Form_Feed[10];
       char Separator_Drawer[10];
       char Printer_Error_Message[10];
       char Message_Queue_Name[10];
       char Message_Queue_Library[10];
       char Application_Type[10];
       char Print_While_Converting[10];
       char Form_Definition_Name[10];
       char Form_Definition_Library[10];
       char Work_Station_Custom_Obj_Name[10];
       char Work_Station_Custom_Obj_Lib[10];
       char Remote_Location_Name[10];
       char Local_Location_Name[10];
       char Remote_Net_ID[10];
       char Ctl_Session_Device_Desc[10];
       char Mode_Name[10];
       char DBCS_Feature_Matrix_Size[10];
       char DBCS_Feature_Language_ID[10];
       char DBCS_Feature_Last_Code_Point[10];
       char SNA_Pass_Through_Device[10];
       char SNA_Pass_Through_Group_Name[10];
       char Emulated_Device[10];
       char Emulated_Device_Model[10];
       char Emulating_ASCII_Device[10];
       char Physical_Attachment[10];
       char Auxiliary_Printer[10];
       char Language_Type[10];
       char Line_Speed[10];
       char Word_Length[10];
       char Parity_Type[10];
       char Stop_Bits[10];
       char Num_Drawers[10];
       char Print_Quality[10];
       char Transform_Enabled[10];
       char Manufacturer_Type_Model[20];
       char Paper_Source_1[10];
       char Paper_Source_2[10];
       char Envelope_Source[10];
       char ASCII_Code_Page_899_Support[10];
       char Separator_Exit_Program_Name[10];
       char Separator_Exit_Program_Lib[10];
       char Host_Signon_Logon_Command[256];
       char Automatically_Configured[10];
       char Reserved[2];
       int  Offset_Switch_Lines;
       int  Num_Switch_Lines;
       int  Length_Switch_Lines;
       char Adapter_Addr[12];
       char Adapter_Type[10];
       char Adapter_Connect_Type[10];
       int  Offset_User_Options;
       int  Num_User_Options;
       int  Length_User_Options;
       int  Offset_User_Data;
       int  Length_User_Data;
       char LAN_Attachment[10];
       char User_Object_Name[10];
       char User_Object_Library[10];
       char User_Object_Type[10];
       char User_Driver_Program_Name[10];
       char User_Driver_Program_Library[10];
       char Data_Transform_Program_Name[10];
       char Data_Transform_Program_Library[10];
       char Remote_System_Name[255];
       char Reserved_A[1];
       char Character_version_font_size[10];
       char Type_rmtlocation_name[10];
       char System_driver_program_name[15];
       char Reserved_B[10];  /* Reserved for System driver Lib */
       char Image_configuration_name[10];
       char Reserved_C[10];  /* Reserved for Image config Lib  */
       char Network_Protocol[1];
       char Network_Protocol_Address[18];
       char Network_IP_Address_Dotted_Fmt[15];
       char Dependent_Location_Name[10];
       char Allocated_By_Job[10];
       char Allocated_By_User[10];
       char Allocated_By_Job_Number[6];
       char Current_Message_Queue_Name[10];
       char Current_Message_Queue_Library[10];
       char Server_Network_Protocol;
       char Server_Network_Protocol_Addr[18];
       char Server_IP_Address[15];
       char Reserved_D;
       char Published_Printer[10];
       int  Offset_Publishinf;
       int  Number_Publishinf_entries;
       int  Publishinf_EntryList_Length;
       char Use_Secure_Connection[10];
       char Validation_List_Name[10];
       char Validation_List_Lib[10];
       char Reserved_E[2];
     /*Qdc_Switch_Lines_t Switch_Lines[];*//* Varying length       */
     /*Qdc_User_Options_t User_Options[];*//* Varying length       */
     /*Qdc_User_Data_t User_Data[];*/      /* Varying length       */
     /*Qdc_Publishinf_t Publishinf[];*/    /* Varying length       */
     /*Qdc_Data_Stream_t DataStream[];*/   /* Varying length       */
    } Qdc_DEVD1100_t;


 /******************************************************************/
 /* Type Definition for the DEVD1200 format - *RTL                 */
 /******************************************************************/

 typedef _Packed struct Qdc_DEVD1200
    {
       Qdc_DEVD0100_t DEVD0100;
       int  Pacing;
       int  Max_Length_Request_Unit;
       int  Inactive_Timer;
       int  Activation_Timer;
       char Local_Location_Addr[10];
       char Remote_Location_Name[10];
       char Attached_Non_Switch_Ctl_Name[10];
       char Application_Type[10];
       char Device_Class[10];
       char SNA_Pass_Through_Device[10];
       char SNA_Pass_Through_Group_Name[10];
       char Allocated_By_Job[10];
       char Allocated_By_User[10];
       char Allocated_By_Job_Number[6];
       char Current_Message_Queue_Name[10];
       char Current_Message_Queue_Library[10];
    } Qdc_DEVD1200_t;


 /******************************************************************/
 /* Type Definition for the DEVD1300 format - *SNPT                */
 /******************************************************************/

 typedef _Packed struct Qdc_DEVD1300
    {
       Qdc_DEVD0100_t DEVD0100;
       int  Activation_Timer;
       char Local_Location_Addr[10];
       char SNA_Pass_Through_Class[10];
       char Attached_Non_Switch_Ctl_Name[10];
       char SNA_Pass_Through_Device[10];
       char SNA_Pass_Through_Group_Name[10];
       char Dependent_Location_Name[10];
       char Allocated_By_Job[10];
       char Allocated_By_User[10];
       char Allocated_By_Job_Number[6];
       char Current_Message_Queue_Name[10];
       char Current_Message_Queue_Library[10];
    } Qdc_DEVD1300_t;


 /******************************************************************/
 /* Type Definition for the DEVD1400 format - *SNUF                */
 /******************************************************************/

 typedef _Packed struct Qdc_DEVD1400
    {
       Qdc_DEVD0100_t DEVD0100;
       int  Record_Length;
       int  Block_Length;
       char Local_Location_Addr[10];
       char Remote_Location_Name[10];
       char Attached_Non_Switch_Ctl_Name[10];
       char Program_Start_Request_Capable[10];
       char Special_Host_Application[10];
       char Application_ID[10];
       char Host_Type[10];
       char Default_Program_Name[10];
       char Default_Program_Library[10];
       char HCP_Emulation[10];
       char Dependent_Location_Name[10];
       char Allocated_By_Job[10];
       char Allocated_By_User[10];
       char Allocated_By_Job_Number[6];
       char Current_Message_Queue_Name[10];
       char Current_Message_Queue_Library[10];
    } Qdc_DEVD1400_t;


 /******************************************************************/
 /* Type Definition for the DEVD1500 format - *TAP                 */
 /******************************************************************/

 typedef _Packed struct Qdc_DEVD1500
    {
       Qdc_DEVD0100_t DEVD0100;
       int  Switch_Setting;
       char Device_Type[10];
       char Device_Model[10];
       char Resource_Name[10];
       char Message_Queue_Name[10];
       char Message_Queue_Library[10];
       char Attached_Non_Switch_Ctl_Name[10];
       char Assign_Device_Vary_On[10];
       char Unload_Device_Vary_Off[10];
       char Allocated_By_Job[10];
       char Allocated_By_User[10];
       char Allocated_By_Job_Number[6];
    } Qdc_DEVD1500_t;

 /******************************************************************/
 /* Type Definition for the DEVD1600 format - *OPT                 */
 /******************************************************************/

 typedef _Packed struct Qdc_DEVD1600
    {
       Qdc_DEVD0100_t DEVD0100;
       char Device_Type[10];
       char Device_Model[10];
       char Resource_Name[10];
       char Message_Queue_Name[10];
       char Message_Queue_Library[10];
    } Qdc_DEVD1600_t;

 /******************************************************************/
 /* Type Definition for the DEVD1700 format - *MLB                 */
 /****                                                          ****/
 /* NOTE: The following type definition only defines the fixed     */
 /*       portion of the format.  Any varying length field will    */
 /*       have to be defined by the user.                          */
 /******************************************************************/

 typedef _Packed struct Qdc_Drive_Resources
    {
       char Drive_Resource_Name[10];
       char Drive_Resource_Status[20];
       char MLB_filler_1[2];
       int  Drive_Resource_Status_Index;
       char Drive_Official_Status_Txt[20];
       int  Drive_Official_Status_Index;
    } Qdc_Drive_Resources_t;

 typedef _Packed struct Qdc_Robot_Dev_Desc
    {
       char Robot_Device_Description[10];
    } Qdc_Robot_Dev_Desc_t;

 typedef _Packed struct Qdc_Robot_Host
    {
       char Robot_Host_Indentifier[255];
       char MLB_filler_2[1];
    } Qdc_Robot_Host_t;

 typedef _Packed struct Qdc_DEVD1700
    {
       Qdc_DEVD0100_t DEVD0100;
       int  Offset_Drive_Resources;
       int  Num_Drive_Resources;
       int  Length_Drive_Resources;
       int  Unload_Wait_Time;
       int  Max_Device_Time;
       char Device_Class[10];
       char Device_Type[10];
       char Device_Model[10];
       char Resource_Name[10];
       char Message_Queue_Name[10];
       char Message_Queue_Library[10];
       char Generate_Ctg_Ids[10];
       char Robot_Device_Name[10];
       int  Rsrc_Alloc_Prty;
       int  Int_Mnt_Wait_Time;
       int  End_Of_Vlm_Mnt_Wait_Time;
       int  Offset_Robot_Dev_Desc;
       int  Num_Robot_Dev_Desc;
       int  Length_Robot_Dev_Desc;
       int  Offset_Robot_Host;
       int  Num_Robot_Host;
       int  Length_Robot_Host;
       char Local_Int_Address[45];
     /*Qdc_Drive_Resources_t Drive_Resources[];*//* Varying length */
     /*Qdc_Robot_Dev_Desc_t Robot_Dev_Desc[];*/  /*Varying length  */
     /*Qdc_Robot_Host_t Robot_Host[];*/ /*Varying length*/
    } Qdc_DEVD1700_t;

 /******************************************************************/
 /* Type Definition for the DEVD1800 format - *CRP                 */
 /******************************************************************/

 typedef _Packed struct Qdc_DEVD1800
    {
       Qdc_DEVD0100_t DEVD0100;
       char Device_Type[10];
       char Resource_Name[10];
       char Message_Queue_Name[10];
       char Message_Queue_Library[10];
       char PKA_Key_File_Name[10];
       char PKA_Key_File_Library[10];
       char DES_Key_File_Name[10];
       char DES_Key_File_Library[10];
       char Allocated_By_Job[10];
       char Allocated_By_User[10];
       char Allocated_By_Job_Number[6];
       char Current_Message_Queue_Name[10];
       char Current_Message_Queue_Library[10];
       char Device_Model[10];
       char Application_Type[10];
    } Qdc_DEVD1800_t;


 /******************************************************************/
 /* Type Definition for the DEVD1900 format - *ASP                 */
 /******************************************************************/

 typedef _Packed struct Qdc_DEVD1900
    {
       Qdc_DEVD0100_t DEVD0100;
       char Resource_Name[10];
       char Message_Queue_Name[10];
       char Message_Queue_Library[10];
       char Current_Message_Queue_Name[10];
       char Current_Message_Queue_Library[10];
       char Relational_Database_Name[18];
    } Qdc_DEVD1900_t;

 /******************************************************************/
 /* Type Definition for the DEVD2000 format - *NWSH                */
 /****                                                          ****/
 /* NOTE: The following type definition only defines the fixed     */
 /*       portion of the format.  Any varying length field will    */
 /*       have to be defined by the user.                          */
 /******************************************************************/

 typedef _Packed struct Qdc_Local_Interfaces
    {
       char Subnet_Mask[15];
       char Reserved_one[1];
       int  Port_Speed;
       int  Current_Port_Speed;
       char Duplex[10];
       char Current_Duplex[10];
       char Local_SCSI_Internet_Address[15];
       char Local_SCSI_Gateway_Address[15];
       char Reserved_two[6];
       int  SCSI_TCP_Port;
       char Local_SCSI_Adapter_Address[12];
       char Local_LAN_Internet_Address[15];
       char Local_LAN_Gateway_Address[15];
       char Reserved_three[2];
       int  Vrt_Eth_Base_UDP_Port;
       int  Vrt_Eth_Upper_UDP_Port;
       char Local_LAN_Adapter_Address[12];
    } Qdc_Local_Interfaces_t;

 typedef _Packed struct Qdc_File_Svr_Stg_Entries
    {
       char Network_Server_Name[8];
       char Active_File_Svr_Stg_Rsc[10];
    } Qdc_File_Svr_Stg_Entries_t;

typedef _Packed struct Qdc_Vrt_Eth_Entries
    {
       char Line_Name[10];
       char Active_Vrt_Eth_Rsc[10];
       char Assoc_Network_Server_Name[8];
    } Qdc_Vrt_Eth_Entries_t;

 typedef _Packed struct Qdc_DEVD2000
    {
       Qdc_DEVD0100_t DEVD0100;
       char Resource_Name[10];
       char Reserved_one[2];
       int  Offset_Local_Interfaces;
       int  Num_Local_Interfaces;
       int  Length_Local_Interfaces;
       char Message_Queue_Name[10];
       char Message_Queue_Library[10];
       char Current_Message_Queue_Name[10];
       char Current_Message_Queue_Library[10];
       int  Recovery_Count_Limit;
       int  Recovery_Time_Interval;
       int  Offset_File_Svr_Stg_Entries;
       int  Num_File_Svr_Stg_Entries;
       int  Length_File_Svr_Stg_Entries;
       int  Offset_Vrt_Eth_Entries;
       int  Num_Vrt_Eth_Entries;
       int  Length_Vrt_Eth_Entries;
       int  Num_File_Svr_Stg_Rsc_Supported;
       int  Num_Vrt_Eth_Rsc_Supported;
     /*Qdc_Local_Interfaces Local_Interfaces[];*//* Varying length */
     /*Qdc_File_Svr_Stg_Entries File_Svr_Stg_Entries[];*//* Varying length */
     /*Qdc_Vrt_Eth_Entries Vrt_Eth_Entries[];*//* Varying length       */
    } Qdc_DEVD2000_t;

 #if (__OS400_TGTVRM__>=510)
     #pragma datamodel(pop)
 #endif


 #endif
