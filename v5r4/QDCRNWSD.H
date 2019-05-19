/* begin_generated_IBM_copyright_prolog                              */
/* This is an automatically generated copyright prolog.              */
/* After initializing,  DO NOT MODIFY OR MOVE                        */
/* ----------------------------------------------------------------- */
/*                                                                   */
/* Product(s):                                                       */
/*     5763-SS1,5769-SS1,5722-SS1                                    */
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
 /* Header File Name: H/QDCRNWSD                                   */
 /*                                                                */
 /* Descriptive Name: Retrieve NWSD Description                    */
 /*                                                                */
 /* Description: The Retrieve NWSD Description (QDCRNWSD) API      */
 /*              retrieves information about a server description. */
 /******************************************************************/
 /*                                                                */
 /* WARNING:          This macro/include is a CUE.                 */
 /*                   This macro/include provides an interface     */
 /*                   that is externally documented to customers   */
 /*                   or is function that any user could create.   */
 /*                   Any changes to this part MUST be upward      */
 /*                   compatible at compile and run time.          */
 /*                   This interface may be generated as in-line   */
 /*                   code in customer programs.                   */
 /*                                                                */
 /*                   CSTATUS:  OT                                 */
 /*                                                                */
 /******************************************************************/
 /*                                                                */
 /* Header Files Included: None.                                   */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: Qdc_NWSD0100_t          (Basic info)           */
 /*                 Qdc_NWSD0110_t          (Basic info, with OS)  */
 /*                 Qdc_NWSD0200_t          (*LANSERVER)           */
 /*                 Qdc_NWSD0300_t          (*NETWARE)             */
 /*                 Qdc_NWSD0400_t          (*BASE)                */
 /*                 Qdc_NWSD0500_t          (*AIX)                 */
 /*                 Qdc_NWSD0600_t          (*WINDOWSNT or *IXSVR) */
 /*                 Qdc_NWSD0700_t          (*GUEST)               */
 /*                 Qdc_NWSD0800_t          (*ISCSI)               */
 /*                 Qdc_Attached_Non_Switch_Line_t                 */
 /*                 Qdc_Network_Storage_List_t                     */
 /*                 Qdc_AIX_Network_Storage_List_t                 */
 /*                 Qdc_WNT_Network_Storage_List_t                 */
 /*                 Qdc_TCP_IP_Port_Configuration_t                */
 /*                 Qdc_TCP_IP_Route_Entries_t                     */
 /*                 Qdc_TCP_IP_Name_Server_Entries                 */
 /*                 Qdc_RSTD_Device_List                           */
 /*                 Qdc_Event_Log_Entries                          */
 /*                 Qdc_Valid_CodePage_Entries                     */
 /*                 Qdc_Cluster_Config_Info                        */
 /*                 Qdc_Cluster_Server_Names                       */
 /*                 Qdc_Storage_Path_Entries                       */
 /*                 Qdc_Vrt_Ethernet_Path_Entries                  */
 /*                 Qdc_Multi_Path_Entries                         */
 /*                 Qdc_ISC_Network_Storage_List_t                 */
 /*                                                                */
 /* Function Prototype List: QDCRNWSD                              */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON     LEVEL DATE   PGMR        CHANGE DESCRIPTION    */
 /* ---- ---------- ----- ------ ---------   ----------------------*/
 /* $A0= D95270     4D20  970304 JAH     :   New Include           */
 /* $A1= D95279     4D20  970618 ADAFIN  :   Add synctime for BASE */
 /*                                          & NETWARE             */
 /* $A2= D95735.2   4D30  970930 JAH     :   Add evtlog for Windows*/
 /* $A3= P3665843   4D30  980224 KDICK   :   Change from int to    */
 /*                                          char type of 2 fields */
 /*                                          in NWSD0500           */
 /* $A4= D95735.5   4D30  980304 ADAFIN  :   Add drvseqnbr for     */
 /*                                          Windows NT Servers    */
 /* $A5= D95996     4D40  980713 rgarvey :   Add cfgfile for NT    */
 /* $A6= D97490     4D50  990404 RGARVEY :   Add svrstg for NT     */
 /* $A7= P9902694   4D50  990801 ADAFIN  :   Add code page info    */
 /* $A8= D98212.1    v5r1m0 112199 gchaney:Teraspace stage 2       */
 /* $A9= D97825     5D10  000511 ZUBAIR  : Dynamic Linking         */
 /* $AA= D98202     5D10  000522 ZUBAIR  : 4-way support           */
 /* $AB= D98641.3   5d20  010803 JABEN   : CLUSTER SUPPORT         */
 /* $AC= D99348     5d30  021021 JAH     : Add shutdown_timeout    */
 /* $AD= D99163     5d30  021021 JAH     : Add pwrctl,ptnnbr GUEST */
 /* $AE= D99890.4   5d40  040701 ZUBAIR  : New structure 0800 *ISCI*/
 /* $AF= D99890.18  5d40  050302 RKF     : Update structure 0800   */
 /* $AG= D99890.19  5d40  050316 RKF     : StgLink changes         */
 /* $AH= P9A93024   5d40  050420 RKF     : Update structure 0800   */
 /* $AI= P9A94586   5d40  050516 RKF     : Miscellaneous changes   */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

 #ifndef QDCRNWSD_h
 #define QDCRNWSD_h

 #if (__OS400_TGTVRM__>=510)
     #pragma datamodel(P128)
 #endif

 /******************************************************************/
 /* Prototype for calling Retrieve NWSD Description API (QDCRNWSD) */
 /******************************************************************/
 #ifdef  __ILEC400__
       #pragma linkage(QDCRNWSD,OS,nowiden)
 #else
       extern "OS"
 #endif
 void QDCRNWSD (void *,          /* Receiver variable              */
                int,             /* Length of receiver variable    */
                char *,          /* Format name                    */
                char *,          /* Line name                      */
                void *);         /* Error code                     */


 /******************************************************************/
 /* Type Definition for the NWSD0100 format - Basic NWSD Info      */
 /****                                                          ****/
 /* NOTE: The following type definition only defines the fixed     */
 /*       portion of the format.  Any varying length field will    */
 /*       have to be defined by the user.                          */
 /* V5R4 NOTE: Type field consists of server connection type and   */
 /*            operating system.                                   */
 /******************************************************************/

 typedef _Packed struct Qdc_NWSD0100
    {
       int  Bytes_Returned;
       int  Bytes_Available;
       int  Offset_to_Higher_level_Fmt;
       char Nbr_of_Atch_Non_Switch_Line[10];
       char Date_Info_Retrieved[7];
       char Time_Info_Retrieved[6];
       char Server_Name[8];
       char Online_At_IPL[10];
       char Text_Desc[50];
       char Server_Type[1];
    } Qdc_NWSD0100_t;

 /******************************************************************/
 /* Type Definition for the NWSD0110 format - Basic NWSD Info, it  */
 /* contains the field for operating system of the server type.    */
 /****                                                          ****/
 /* NOTE: The following type definition only defines the fixed     */
 /*       portion of the format.  Any varying length field will    */
 /*       have to be defined by the user.                          */
 /******************************************************************/

 typedef _Packed struct Qdc_NWSD0110
    {
       int  Bytes_Returned;
       int  Bytes_Available;
       int  Offset_to_Higher_level_Fmt;
       char Nbr_of_Atch_Non_Switch_Line[10];
       char Date_Info_Retrieved[7];
       char Time_Info_Retrieved[6];
       char Server_Name[8];
       char Online_At_IPL[10];
       char Text_Desc[50];
       char Network_Server_Connection_Type[1];
       char Server_Operating_System[10];
    } Qdc_NWSD0110_t;

 /******************************************************************/
 /* Type Definition for the Attached lines                         */
 /******************************************************************/

 typedef _Packed struct Qdc_Attached_Non_Switch_Line
    {
       char Att_Non_Switch_Line_Name[10];
       char Line_Category[10];
       char Port_Number[10];
       char Line_Text_Desc[50];

    } Qdc_Attached_Non_Switch_Line_t;

 /******************************************************************/
 /* Type Definition for the Network Storage List                   */
 /******************************************************************/

 typedef _Packed struct Qdc_Network_Storage_List
    {
       char Storage_Space_Size[10];
       char Storage_Space_Name[10];
       char Drive_Letter[1];
       char Storage_Space_Text_Desc[50];
       char Reserved[1];

    } Qdc_Network_Storage_List_t;

 /******************************************************************/
 /* Type Definition for the AIX Network Storage List               */
 /******************************************************************/

 typedef _Packed struct Qdc_AIX_Network_Storage_List
    {
       char Storage_Space_Size[10];
       char Storage_Space_Name[10];
       char Drive_Letter[1];
       char Storage_Space_Text_Desc[50];
       char Drive_number[3];
       char Physical_volume_name[8];
       char Volume_group_name[15];
       char Level_identifier[14];
       char Remove_link_allowed[1];
       char Reserved[1];

    } Qdc_AIX_Network_Storage_List_t;

 /******************************************************************/
 /* Type Definition for the TCP/IP port configuration              */
 /******************************************************************/

 typedef _Packed struct Qdc_TCP_IP_Port_Configuration
    {
       char TCP_Port_Number[10];
       char Internet_Address[15];
       char Reserve_one[1];
       char Subnet_Mask[15];
       char Reserve_two[1];
       int  MTU_for_port;
       char Gateway_Address[15];

    } Qdc_TCP_IP_Port_Configuration_t;

 /******************************************************************/
 /* Type Definition for the TCP/IP route entries                   */
 /******************************************************************/

 typedef _Packed struct Qdc_TCP_IP_Route_Entries
    {
       char Route_Destination[15];
       char Reserved[1];
       char Route_Subnet_Mask[15];
       char Reserve_one[1];
       char Next_Hop[15];
       char Reserve_two[1];

    } Qdc_TCP_IP_Route_Entries_t;

 /******************************************************************/
 /* Type Definition for the TCP/IP name server                     */
 /******************************************************************/

 typedef _Packed struct Qdc_TCP_IP_Name_Server_Entries
    {
       char Route_Destination[15];
       char Reserved[1];

    } Qdc_TCP_IP_Name_Server_Entries_t;

 /******************************************************************/
 /* Type Definition for the Restricted Device Resource             */
 /******************************************************************/

 typedef _Packed struct Qdc_RSTD_Device_List
    {
       char Restricted_Tape_Device[10];
       char Reserved[2];

    } Qdc_RSTD_Device_Entries_t;

 /******************************************************************/
 /* Type Definition for the WINDOWS NT Network Storage List        */
 /******************************************************************/

 typedef _Packed struct Qdc_WNT_Network_Storage_List
    {
       char Storage_Space_Size[10];
       char Storage_Space_Name[10];
       char Drive_Letter[1];
       char Storage_Space_Text_Desc[50];
       char Drive_number[3];
       char Reserved[38];
       char Auxiliary_storage_pool_id[2];
       char Access_Mode[10];
       char Dynamic_Link[10];
       char Auxiliary_storage_pool_nm[10];
       int  Auxiliary_storage_pool_fl;
    } Qdc_WNT_Network_Storage_List_t;


 /******************************************************************/
 /* Type Definition for the ISCSI Network Storage List             */
 /******************************************************************/

 typedef _Packed struct Qdc_ISC_Network_Storage_List
    {
       char ISC_Storage_Space_Size[10];
       char ISC_Storage_Space_Name[10];
       char Reserved[1];
       char ISC_Stg_Space_Text_Desc[50];
       char ISC_Drive_number[3];
       char ISC_Reserved[40];
       char ISC_Access_Mode[10];
       char ISC_Dynamic_Link[10];
       char ISC_Auxiliary_stg_pool_nm[10];
       int  ISC_Auxiliary_stg_pool_fl;
       int  ISC_Stg_path_number;
    } Qdc_ISC_Network_Storage_List_t;


 /******************************************************************/
 /* Type Definition for the Event Log                              */
 /******************************************************************/

 typedef _Packed struct Qdc_Event_Log_Entries
    {
       char Event_Log[10];
       char Reserved[2];

    } Qdc_Event_Log_Entries_t;

 /******************************************************************/
 /* Type Definition for the Valid Code Pages                       */
 /******************************************************************/

 typedef _Packed struct Qdc_Valid_CodePage_Entries
    {
       char CodePage[10];
       char Reserved[2];

    } Qdc_Valid_CodePage_Entries_t;

 /******************************************************************/
 /* Type Definition for the Valid Code Pages                       */
 /******************************************************************/
   typedef _Packed struct Qdc_Cluster_Config_Info
    {
        char cluster_config_name[10];
        char cluster_config_domain[15];
        char Reserved[3];
        int cluster_config_quorum;
        char cluster_config_cnnport[10];
        char cluster_config_internet[15];
        char cluster_config_subnet[15];

   } Qdc_Cluster_Config_Info_t;

 /******************************************************************/
 /* Type Definition for the Valid Code Pages                       */
 /******************************************************************/
  typedef _Packed struct Qdc_Cluster_Server_Names
  {
        char le_clssrv_name[8];
        char le_clssrv_text[50];
        char Reserved[2];

  } Qdc_Cluster_Server_Names_t;

 /******************************************************************/
 /* Type Definition for the Storage Paths                          */
 /******************************************************************/
  typedef _Packed struct Qdc_Storage_Path_Entries
  {
        char Network_Srvr_Host_Adptr_Name[10];
        char Storage_Path_Resource_Name[10];
        char Storage_Path_Status[2];
        char Storage_Path_IQN[72];
        char Reserved_One[2];
        int  Storage_Path_Nbr;
        int  Remote_Port_1_Rule;
        int  Remote_Port_2_Rule;
        int  Remote_Port_3_Rule;
        int  Remote_Port_4_Rule;

  } Qdc_Storage_Path_Entries_t;

 /******************************************************************/
 /* Type Definition for the Virtual Ethernet Path                  */
 /******************************************************************/
  typedef _Packed struct Qdc_Vrt_Ethernet_Path_Entries
  {
        char Vrt_Ethernet_Port_Number[10];
        char Network_Srvr_Host_Adptr_Name[10];
        char Vrt_Ethernet_Path_Rsrc_Name[10];
        char Reserved_One[2];
        int  Remote_Port_1_Rule;
        int  Remote_Port_2_Rule;
        int  Remote_Port_3_Rule;
        int  Remote_Port_4_Rule;

  } Qdc_Vrt_Ethernet_Path_Entries_t;

 /******************************************************************/
 /* Type Definition for the Multi-Path group                       */
 /******************************************************************/
  typedef _Packed struct Qdc_Multi_Path_Entries
  {
        int  Multi_Path_Group_Number;

  } Qdc_Multi_Path_Entries_t;

 /******************************************************************/
 /* Type Definition for the NWSD0200 format - *LANSERVER Info      */
 /******************************************************************/

 typedef _Packed struct Qdc_NWSD0200
    {
       Qdc_NWSD0100_t NWSD0100;
       int  Offset_Atch_Non_Switch_Line;
       int  Nbr_of_Atch_Non_Switch_Line;
       int  Length_Atch_Non_Switch_Line;
       int  Offset_List_Server_Storage;
       int  Nbr_of_Linked_Server_Storage;
       int  Length_List_Server_Storage;
       char Vary_On_Wait[10];
       char Language_Version[4];
       char Country_Code[10];
       char Code_Page[10];
       char Resource_Name[10];
       char Domain_Name[10];
       char Domain_Role[10];
       char Group_Profile[10];
       char NetBios_Description[10];
       char Reserved[2];
       char Cfg_File_Name[10];
       char Cfg_File_Library_Name[10];
       char Start_TCPIP[10];
       int  Offset_of_TCP_Port_Cfg;
       int  Length_TCP_Port_Cfg_Entry;
       int  Number_of_TCP_Port_Cfgs;
       int  Offset_of_TCP_Route_Entries;
       int  Length_of_TCP_Route_Entry;
       int  Number_of_TCP_Route_Entries;
       int  Offset_of_TCP_Name_Svr_Entries;
       int  Length_of_TCP_Name_Svr_Entries;
       int  Number_of_TCP_Name_Svr_Entries;
       char TCP_IP_Host_Name_for_FSIOP[63];
       char Reserved_one[1];
       char TCP_IP_Domain_Name[255];
       char Reserved_two[1];
     /*Qdc_Attached_Non_Switch_Line Att_Non_SW_Lines[];*//*Varying*/
     /*Qdc_Network_Storage_List Network_Storage[];*//*Varying*/
     /*Qdc_TCP_IP_Port_Configuration TPC_Ports[];*//*Varying*/
     /*Qdc_TCP_IP_Route_Entries TCP_Routes[];*//*Varying*/
     /*Qdc_TCP_IP_Name_Server_Entries TCP_Name_Servers[];*//*Varying*/
    } Qdc_NWSD0200_t;


 /******************************************************************/
 /* Type Definition for the NWSD0300 format - *NETWARE             */
 /******************************************************************/


 typedef _Packed struct Qdc_NWSD0300
    {
       Qdc_NWSD0100_t NWSD0100;
       int  Offset_Atch_Non_Switch_Line;
       int  Nbr_of_Atch_Non_Switch_Line;
       int  Length_Atch_Non_Switch_Line;
       int  Offset_List_Server_Storage;
       int  Nbr_of_Linked_Server_Storage;
       int  Length_List_Server_Storage;
       char Vary_On_Wait[10];
       char Language_Version[4];
       char Country_Code[10];
       char Code_Page[10];
       char Resource_Name[10];
       char IPX_description[10];
       char Local_IPX_connection[10];
       char Cfg_File_Name[10];
       char Cfg_File_Library_Name[10];
       char Console_Message_Queue_Name[10];
       char Console_Message_Queue_Library[10];
       char Synchronize_date_time[10];
       int  Offset_RSTD_Device;
       int  Length_RSTD_Device_Entries;
       int  Number_of_RSTD_Device;
     /*Qdc_Attached_Non_Switch_Line Att_Non_SW_Lines[];*//*Varying*/
     /*Qdc_Network_Storage_List Network_Storage[];*//*Varying*/
     /*Qdc_RSTD_Device_List RSTD_Devices[];*//*Varying*/

    } Qdc_NWSD0300_t;

 /******************************************************************/
 /* Type Definition for the NWSD0400 format - *BASE                */
 /******************************************************************/

 typedef _Packed struct Qdc_NWSD0400
    {
       Qdc_NWSD0100_t NWSD0100;
       int  Offset_Atch_Non_Switch_Line;
       int  Nbr_of_Atch_Non_Switch_Line;
       int  Length_Atch_Non_Switch_Line;
       int  Offset_List_Server_Storage;
       int  Nbr_of_Linked_Server_Storage;
       int  Length_List_Server_Storage;
       char Vary_On_Wait[10];
       char Language_Version[4];
       char Country_Code[10];
       char Code_Page[10];
       char Resource_Name[10];
       char Net_BIOS_description[10];
       char Cfg_File_Name[10];
       char Cfg_File_Library_Name[10];
       char Start_NETBIOS[10];
       char Start_TCPIP[10];
       char Reserved_alignment[2];
       int  Offset_of_TCP_Port_Cfg;
       int  Length_TCP_Port_Cfg_Entry;
       int  Number_of_TCP_Port_Cfgs;
       int  Offset_of_TCP_Route_Entries;
       int  Length_of_TCP_Route_Entry;
       int  Number_of_TCP_Route_Entries;
       int  Offset_of_TCP_Name_Svr_Entries;
       int  Length_of_TCP_Name_Svr_Entries;
       int  Number_of_TCP_Name_Svr_Entries;
       char TCP_IP_Host_Name_for_FSIOP[63];
       char Reserved_one[1];
       char TCP_IP_Domain_Name[255];
       char Reserved_two[1];
       char Console_Message_Queue_Name[10];
       char Console_Message_Queue_Library[10];
       char Synchronize_date_time[10];
     /*Qdc_Attached_Non_Switch_Line Att_Non_SW_Lines[];*//*Varying*/
     /*Qdc_Network_Storage_List Network_Storage[];*//*Varying*/
     /*Qdc_TCP_IP_Port_Configuration TPC_Ports[];*//*Varying*/
     /*Qdc_TCP_IP_Route_Entries TCP_Routes[];*//*Varying*/
     /*Qdc_TCP_IP_Name_Server_Entries TCP_Name_Servers[];*//*Varying*/

    } Qdc_NWSD0400_t;

 /******************************************************************/
 /* Type Definition for the NWSD0500 format - *AIX                 */
 /******************************************************************/

 typedef _Packed struct Qdc_NWSD0500
    {
       Qdc_NWSD0100_t NWSD0100;
       int  Offset_Atch_Non_Switch_Line;
       int  Nbr_of_Atch_Non_Switch_Line;
       int  Length_Atch_Non_Switch_Line;
       int  Offset_List_of_Server_Storage;
       int  Nbr_of_Linked_Server_Storage;
       int  Length_List_Server_Storage;
       char Vary_On_Wait[10];
       char Resource_Name[10];
       char Console_buffer_size[10];
       char Delete_server_users[10];
       char Set_password_rules[10];
       char Synchronize_date_time[10];
       char Reserved_alignment[4];
       int  Offset_of_TCP_Port_Cfg;
       int  Length_TCP_Port_Cfg_Entry;
       int  Number_of_TCP_Port_Cfgs;
       char TCP_IP_Host_Name_for_FSIOP[63];
       char Reserved_one[1];
       char Console_Message_Queue_Name[10];
       char Console_Message_Queue_Library[10];
       int  Default_CCSID;  /* API documentation defined as reserved*/
       char AIX_version[15];
       char Default_locale[5];
     /*Qdc_Attached_Non_Switch_Line Att_Non_SW_Lines[];*//*Varying*/
     /*Qdc_AIX_Network_Storage_List Network_Storage[];*//*Varying*/
     /*Qdc_TCP_IP_Port_Configuration TPC_Ports[];*//*Varying*/

    } Qdc_NWSD0500_t;

 /******************************************************************/
 /* Type Definition for the NWSD0600 format - *WINDOWSNT or *IXSVR */
 /******************************************************************/

 typedef _Packed struct Qdc_NWSD0600
    {
       Qdc_NWSD0100_t NWSD0100;
       int  Offset_Atch_Non_Switch_Line;
       int  Nbr_of_Atch_Non_Switch_Line;
       int  Length_Atch_Non_Switch_Line;
       int  Offset_List_of_Server_Storage;
       int  Nbr_of_Linked_Server_Storage;
       int  Length_List_Server_Storage;
       char Vary_On_Wait[10];
       char Resource_Name[10];
       char Domain_Role[10];
       char Language_Version[4];
       char Country_Code[10];
       char Code_Page[10];
       char Console_Message_Queue_Name[10];
       char Console_Message_Queue_Library[10];
       char Synchronize_date_time[10];
       int  Offset_of_TCP_Port_Cfg;
       int  Length_TCP_Port_Cfg_Entry;
       int  Number_of_TCP_Port_Cfgs;
       int  Offset_of_TCP_Route_Entries;
       int  Length_of_TCP_Route_Entry;
       int  Number_of_TCP_Route_Entries;
       int  Offset_of_TCP_Name_Svr_Entries;
       int  Length_of_TCP_Name_Svr_Entries;
       int  Number_of_TCP_Name_Svr_Entries;
       char TCP_IP_Host_Name_for_FSIOP[63];
       char Reserved_one[1];
       char TCP_IP_Domain_Name[255];
       char Reserved_two[1];
       int  Offset_RSTD_Device;
       int  Length_RSTD_Device_Entries;
       int  Number_of_RSTD_Device;
       int  Offset_of_Event_Log;
       int  Length_Event_Log_Entry;
       int  Number_of_Event_Log;
       char Cfg_File_Name[10];
       char Cfg_File_Library_Name[10];
       char Install_Source_Storage_Size[10];
       char Install_Source_Storage_Type[10];
       char Install_Source_Storage_ASP[2];
       char System_Storage_Size[10];
       char System_Storage_Type[10];
       char System_Storage_ASP[2];
       int  Offset_of_Valid_CodePage;
       int  Length_Valid_CodePage_Entries;
       int  Number_of_Valid_CodePage;
       char Resource_Type_Model[10];
       char System_Storage_ASP_Name[10];
       int System_Storage_ASP_ID;
       int Install_Source_ASP_ID;
       char Install_Source_ASP_Name[10];
       char Propagate_Domain_Users[10];
       int Cluster_Config_List_Offset;
       int Cluster_Config_Entry_Length;
       int Cluster_Config_Number;
       int Cluster_Server_List_Offset;
       int Cluster_Server_Entry_Length;
       int Cluster_Server_Number;
       char Windows_Version[10];
       char Shutdown_Timeout[10];
       char Server_Operating_System[10];
     /*Qdc_Attached_Non_Switch_Line Att_Non_SW_Lines[];*//*Varying*/
     /*Qdc_WNT_Network_Storage_List Network_Storage[];*//*Varying*/
     /*Qdc_TCP_IP_Port_Configuration TPC_Ports[];*//*Varying*/
     /*Qdc_TCP_IP_Route_Entries TCP_Routes[];*//*Varying*/
     /*Qdc_TCP_IP_Name_Server_Entries TCP_Name_Servers[];*//*Varying*/
     /*Qdc_RSTD_Device_List RSTD_Devices[];*//*Varying*/
     /*Qdc_Event_Log_Entries Event_Log_Entries[];*//*Varying*/
     /*Qdc_Valid_CodePage_Entries Valid_CodePages[];*//*Varying*/
     /*Qdc_Cluster_Config_Info Cluster_Configuration[];*//*Varying*/
     /*Qdc_Cluster_Server_Names Clustered_Servers[];*//*Varying*/

    } Qdc_NWSD0600_t;
 /******************************************************************/
 /* Type Definition for the NWSD0700 format - *GUEST               */
 /******************************************************************/
 typedef _Packed struct Qdc_NWSD0700
    {
        Qdc_NWSD0100_t NWSD0100;
        int  Offset2_Network_Strg_Spaces;
        int  Nbr_Of_Strg_Spaces;
        int  Entry_Lngth_Strg_Spaces;
        char Vary_On_Wait[10];
        char Resource_Name[10];
        char Code_Page[10];
        char MsgQ_Name[10];
        char MsgQ_Lib_Name[10];
        char Synchronize_Date_And_Time[10];
        int  Offset2_RSTD_Dev_Rsrcs_Lst;
        int  Lngth_RSTD_Dev_Rsrc;
        int  Nbr_RSTD_Dev_Rsrc_Entries;
        char Partition_Name[10];
        char IPL_Source[10];
        int  Offset2_IPL_Stream_File;
        int  Lngth_IPL_Stream_File;
        int  Offset2_IPL_Parameters;
        int  Lngth_IPL_Parameters;
        int  Offset2_TCP_Port_Configs_Lst;
        int  Lngth_TCP_Port_Config_Entries;
        int  Nbr_Of_TCP_Port_Configs;
        int  Offset2_TCP_Route_Ent_Lst;
        int  Lngth_TCP_Route_Entries;
        int  Nbr_Of_TCP_Route_Entries;
        int  Offset2_TCP_Name_Svr_Ent_Lst;
        int  Lngth_TCP_Name_Svr_Entries;
        int  Nbr_Of_TCP_Name_Svr_Entries;
        char TCP_Host_Name[63];
        char Reserved[1];
        char TCP_Domain_Name[255];
        char Reserved1[1];
        char Shutdown_Timeout[10];
        char Power_Control[10];
        int  Partition_Number;
        char Partition_Name_Long[96];
        char Server_Operating_System[10];

     /*char IPL_Stream_File[];*//*Varying Max 5000*/
     /*char IPL_Parameters[];*//*Varying Max 512*/
     /*Qdc_WNT_Network_Storage_List Network_Storage[];*//*Varying*/
     /*Qdc_TCP_IP_Port_Configuration TPC_Ports[];*//*Varying*/
     /*Qdc_TCP_IP_Route_Entries TCP_Routes[];*//*Varying*/
     /*Qdc_TCP_IP_Name_Server_Entries TCP_Name_Servers[];*//*Varying*/
     /*Qdc_RSTD_Device_List RSTD_Devices[];*//*Varying*/
    } Qdc_NWSD0700_t;

 /******************************************************************/
 /* Type Definition for the NWSD0800 format - *ISCSI               */
 /******************************************************************/

 typedef _Packed struct Qdc_NWSD0800
    {
       int  Offset_Atch_Non_Switch_Line;
       int  Nbr_of_Atch_Non_Switch_Line;
       int  Length_Atch_Non_Switch_Line;
       int  Offset_List_of_Server_Storage;
       int  Nbr_of_Linked_Server_Storage;
       int  Length_List_Server_Storage;
       char Vary_On_Wait[10];
       char Resource_Name[10];
       char Domain_Role[10];
       char Language_Version[4];
       char Code_Page[10];
       char Console_Message_Queue_Name[10];
       char Console_Message_Queue_Library[10];
       char Synchronize_Date_Time[10];
       char Reserved_0[2];
       int  Offset_of_TCP_Port_Cfg;
       int  Length_TCP_Port_Cfg_Entry;
       int  Number_of_TCP_Port_Cfgs;
       int  Offset_of_TCP_Name_Svr_Entries;
       int  Length_of_TCP_Name_Svr_Entries;
       int  Number_of_TCP_Name_Svr_Entries;
       char TCP_IP_Host_Name[63];
       char Reserved_1[1];
       char TCP_IP_Domain_Name[255];
       char Reserved_2[1];
       int  Offset_RSTD_Device;
       int  Length_RSTD_Device_Entries;
       int  Number_of_RSTD_Device;
       int  Offset_of_Event_Log;
       int  Length_Event_Log_Entry;
       int  Number_of_Event_Log;
       char Cfg_File_Name[10];
       char Cfg_File_Library_Name[10];
       char Install_Source_Storage_Size[10];
       char Install_Source_Storage_Type[10];
       char System_Storage_Size[10];
       char System_Storage_Type[10];
       int  Offset_of_Valid_CodePage;
       int  Length_Valid_CodePage_Entries;
       int  Number_of_Valid_CodePage;
       char System_Storage_ASP_Name[10];
       char Reserved_3[2];
       int System_Storage_Pool_ID;
       int Install_Source_Pool_ID;
       char Install_Source_ASP_Name[10];
       char Propagate_Domain_Users[10];
       int Cluster_Config_List_Offset;
       int Cluster_Config_Entry_Length;
       int Cluster_Config_Number;
       int Cluster_Server_List_Offset;
       int Cluster_Server_Entry_Length;
       int Cluster_Server_Number;
       char OS_Version[10];
       char Shutdown_Timeout[10];
       int Offset_Storage_Path;
       int Length_Storage_Path;
       int Number_Storage_Path;
       int Offset_Virtual_Eth_Path;
       int Length_Virtual_Eth_Path;
       int Number_Virtual_Eth_Path;
       int Removable_Media_Path;
       int Default_Storage_Path;
       char Comm_Message_Queue_Name[10];
       char Comm_Message_Queue_Lib_Name[10];
       char NWS_Conn_Security_Name[10];
       char NWS_Conn_Security_Lib_Name[10];
       char NWS_Remote_Name[10];
       char NWS_Remote_Lib_Name[10];
       int Default_IP_Security_Rule;
       int Shutdown_TCP_Port;
       int Vrt_Ethernet_Control_Port;
       int Offset_Multi_Path;
       int Length_Multi_Path;
       int Number_Multi_Path;
       int Activation_Timer;
       char Multi_Path_IQN[72];
     /*Qdc_Attached_Non_Switch_Line Att_Non_SW_Lines[];*//*Varying*/
     /*Qdc_ISC_Network_Storage_List Network_Storage[];*//*Varying*/
     /*Qdc_TCP_IP_Port_Configuration TPC_Ports[];*//*Varying*/
     /*Qdc_TCP_IP_Name_Server_Entries TCP_Name_Servers[];*//*Varying*/
     /*Qdc_RSTD_Device_List RSTD_Devices[];*//*Varying*/
     /*Qdc_Event_Log_Entries Event_Log_Entries[];*//*Varying*/
     /*Qdc_Valid_CodePage_Entries Valid_CodePages[];*//*Varying*/
     /*Qdc_Cluster_Config_Info Cluster_Configuration[];*//*Varying*/
     /*Qdc_Cluster_Server_Names Clustered_Servers[];*//*Varying*/
     /*Qdc_Storage_Path_Entries Storage_Paths[];*//*Varying*/
     /*Qdc_Vrt_Ethernet_Path_Entries Vrt_Ethernet_Paths[];*//*Varying*/
     /*Qdc_Multi_Path_Entries Multi_Path[];*//*Varying*/

    } Qdc_NWSD0800_t;

 #if (__OS400_TGTVRM__>=510)
     #pragma datamodel(pop)
 #endif


 #endif
