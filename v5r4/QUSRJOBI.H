/* begin_generated_IBM_copyright_prolog                              */
/* This is an automatically generated copyright prolog.              */
/* After initializing,  DO NOT MODIFY OR MOVE                        */
/* ----------------------------------------------------------------- */
/*                                                                   */
/* Product(s):                                                       */
/*     5763-SS1                                                      */
/*     5716-SS1                                                      */
/*     5769-SS1                                                      */
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
/* ----------------------------------------------------------------- */

 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QUSRJOBI                                   */
 /*                                                                */
 /* Descriptive Name: Retrieve Job Information API                 */
 /*                                                                */
 /* Description: The Retrieve Job Information (QUSRJOBI) API       */
 /*              retrieves information, such as job attributes     */
 /*              and performance data about a specific job.        */
 /*                                                                */
 /* Header Files Included: None.                                   */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: Qwc_JOBI0100_t.                                */
 /*                 Qwc_JOBI0150_t.                                */
 /*                 Qwc_JOBI0200_t.                                */
 /*                 Qwc_JOBI0300_t.                                */
 /*                 Qwc_JOBI0400_t.                                */
 /*                 Qwc_JOBI0500_t.                                */
 /*                 Qwc_JOBI0600_t.                                */
 /*                 Qwc_JOBI0700_t.                                */
 /*                 Qwc_JOBI0750_t.                                */
 /*                 Qwc_JOBI0900_t.                                */
 /*                 Qwc_JOBI1000_t.                                */
 /*                 Qwc_Grp_List_t.                                */
 /*                 Qwc_Lib_List_t.                                */
 /*                 Qwc_Lib_List2_t.                               */
 /*                 Qwc_ASP_List_t.                                */
 /*                 Qwc_TZone_List_t.                              */
 /*                                                                */
 /* Function Prototype List: QUSRJOBI.                             */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= D2862000     3D10  940424 ROCH:     New Include           */
 /* $A1= D6464800     3D70  960322 MJD:      Add routing data.     */
 /* $A2= D9497904     4D20  970314 TDP:      Add Decimal Format.   */
 /* $A3= D9497904     4D20  970314 TDP:      Add Decimal Format.   */
 /* $01= p3653833     4D20  970909 TCR:      Add reserved field.   */
 /*                                           to 200 fmt           */
 /* $A4= D9560000     4D30  971008 ROCH:     Add Server Mode for   */
 /*                                          SQL                   */
 /*                                          Correct order of      */
 /*                                          Qwc_JOBI0900_t fields */
 /*                                                                */
 /* $A5= D9571100     4D30  971203 ROCH:     Add Chrid Control     */
 /* $A6= D9560400     4D30  971217 ROCH:     Add Maximum threads   */
 /* $A7= D9560411     4D30  980107 ROCH:     Add Job user ID,      */
 /*                                          Job user ID setting,  */
 /*                                          Process ID number     */
 /* $02= p3669769     4Q30  980430 AMN:      Move reserved field   */
 /*      p3669897                             in 200 fmt.          */
 /* $A8= D95998       4D40  980624 ROCH:     Add server type.      */
 /* $A9= D97233       4D40  980902 ROCH:     Add new tmp storage   */
 /* $AA= D97752.1     4D50  990607 ROCH:     Add current SQL info  */
 /* $AB= D9753002   v5r1m0  991031 ROCH:     Add larger CPU and    */
 /*                                          aux I/O fields        */
 /* $AC= D9803105   v5r1m0  000331 ROCH:     Add formats JOBI1000  */
 /*                                          and JOBI0750          */
 /*                                          Add Memory Pool Name, */
 /*                                          Job ending reason,    */
 /*                                          Active job stat 4 end,*/
 /*                                          CPU for database,     */
 /*                                          Client IP address,    */
 /*                                          Allow multiple threads*/
 /*                                          Message reply flag,   */
 /*                                          Page faults,          */
 /*                                          Date/Time Job complete*/
 /*                                          Job log pending flag  */
 /* $AD= D9860301   v5r2m0  010223 ROCH:     Add spooled file      */
 /*                                          action and ASP group  */
 /*                                          information           */
 /* $AE= D98375.7   v5r2m0  010712 ROCH:     Add RDB Name field to */
 /*                                          JOBI0900              */
 /* $03= P9A05638 v5r2m0fpga 020411 ROCH:    Phrasing of comment   */
 /* $AF= D9914513   v5r3m0  030202 ROCH:     Add time zone         */
 /*                                          description field to  */
 /*                                          JOBI0400 and time     */
 /*                                          zone information to   */
 /*                                          JOBI0600              */
 /* $04= P9A26885  v5r3m0   030330 ROCH:     Add Daylight Saving   */
 /*                                          Time indicator to time*/
 /*                                          zone information on   */
 /*                                          JOBI0600 format       */
 /* $05= P9A38996  v5r3m0   030908 ROCH:     Add Containing object */
 /*                                          for Current SQL       */
 /* $AG= D9983601  v5r4m0   040905 ROCH:     Add job log output    */
 /* $AH= D93088.7  v5r4m0   050128 ROCH:     Add cumulative SQL    */
 /*                                          cursor counts to      */
 /*                                          JOBI0900              */
 /* $AI= D93088.7  v5r4m0   050202 ROCH:     Add current SQL       */
 /*                                          statement name to     */
 /*                                          JOBI0900              */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/
#ifndef  QUSRJOBI_h
#define  QUSRJOBI_h
#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(P128)      /* @B1A*/
#endif                       /* @B1A*/

/*******************************************************************/
/*  Prototype for calling Retrieve Job Information API (QUSRJOBI)  */
/*******************************************************************/
#ifdef __ILEC400__
     #pragma linkage (QUSRJOBI,OS,nowiden)
#else
     extern "OS"
#endif

void QUSRJOBI(void *,            /* Receiver variable              */
              int,               /* Length of receiver variable    */
              char *,            /* Format name                    */
              void *,            /* Qualified job name             */
              void *,            /* Internal job identifier        */
              ...);              /* Optional Parameter 1:
                                      Error code                   */
                                 /* Optional Parameter 2:
	      char,		      Reset status statistics      */

/*******************************************************************/
/* Record structure for QUSRJOBI JOBI0100 format                   */
/*******************************************************************/

typedef _Packed struct Qwc_JOBI0100 {
     int  Bytes_Return;
     int  Bytes_Avail;
     char Job_Name[10];
     char User_Name[10];
     char Job_Number[6];
     char Int_Job_ID[16];
     char Job_Status[10];
     char Job_Type[1];
     char Job_Subtype[1];
     char Reserved[2];
     int  Run_Priority;
     int  Time_Slice;
     int  Default_Wait;
     char Purge[10];
} Qwc_JOBI0100_t;


/*******************************************************************/
/* Record structure for QUSRJOBI JOBI0150 format                   */
/*******************************************************************/

typedef _Packed struct Qwc_JOBI0150 {
     int  Bytes_Return;
     int  Bytes_Avail;
     char Job_Name[10];
     char User_Name[10];
     char Job_Number[6];
     char Int_Job_ID[16];
     char Job_Status[10];
     char Job_Type[1];
     char Job_Subtype[1];
     char Reserved[2];
     int  Run_Priority;
     int  Time_Slice;
     int  Default_Wait;
     char Purge[10];
     char Time_Slice_End_Pool[10];
     int  CPU_Used;
     int  System_Pool_ID;
     int  Max_CPU_Time;
     int  Temp_Storage_Used;
     int  Max_Temp_Storage;
     int  Thread_Count;
     int  Maximum_Threads;
     unsigned int  Temp_Storage_Used_MB;
     int  Max_Temp_Storage_MB;
     char Reserved_2[4];
     unsigned long long CPU_Used_Long;
} Qwc_JOBI0150_t;


/*******************************************************************/
/* Record structure for QUSRJOBI JOBI0200 format                   */
/*******************************************************************/

typedef _Packed struct Qwc_JOBI0200 {
     int  Bytes_Return;
     int  Bytes_Avail;
     char Job_Name[10];
     char User_Name[10];
     char Job_Number[6];
     char Int_Job_ID[16];
     char Job_Status[10];
     char Job_Type[1];
     char Job_Subtype[1];
     char Subsys_Name[10];
     int  Run_Priority;
     int  System_Pool_ID;
     int  CPU_Used;
     int  Aux_IO_Request;
     int  Interact_Trans;
     int  Response_Time;
     char Function_Type[1];
     char Function_Name[10];
     char Active_Job_Stat[4];
     int  Num_DBase_Lock_Wts;
     int  Num_Internal_Mch_Lck_Wts;
     int  Num_Non_DBase_Lock_Wts;
     int  Wait_Time_DBase_Lock_Wts;
     int  Wait_Time_Internal_Mch_Lck_Wts;
     int  Wait_Time_Non_DBase_Lock_Wts;
     char Reserved[1];
     int  Current_System_Pool_ID;
     int  Thread_Count;
     unsigned long long CPU_Used_Long;
     unsigned long long Aux_IO_Request_Long;
     unsigned long long CPU_Used_DB_Long;
     unsigned long long Page_Faults_Long;
     char Active_Job_Stat_Ending_Jobs[4];
     char Memory_Pool_Name[10];
     char Message_Reply;
} Qwc_JOBI0200_t;


/*******************************************************************/
/* Record structure for QUSRJOBI JOBI0300 format                   */
/*******************************************************************/
typedef _Packed struct Qwc_JOBI0300 {
     int  Bytes_Return;
     int  Bytes_Avail;
     char Job_Name[10];
     char User_Name[10];
     char Job_Number[6];
     char Int_Job_ID[16];
     char Job_Status[10];
     char Job_Type[1];
     char Job_Subtype[1];
     char Jobq_Name[10];
     char Jobq_Lib[10];
     char Jobq_Priority[2];
     char Outq_Name[10];
     char Outq_Lib[10];
     char Outq_Priority[2];
     char Prt_Dev_Name[10];
     char Subm_Job_Name[10];
     char Subm_User_Name[10];
     char Subm_Job_Num[6];
     char Subm_Msgq_Name[10];
     char Subm_Msgq_Lib[10];
     char Sts_On_Jobq[10];
     char Date_Put_On_Jobq[8];
     char Job_Date[7];
} Qwc_JOBI0300_t;


/*******************************************************************/
/* Record structure for QUSRJOBI JOBI0400 format                   */
/*******************************************************************/
typedef _Packed struct Qwc_ASP_List{
     char ASP_Name[10];
} Qwc_ASP_List_t;

typedef _Packed struct Qwc_JOBI0400 {
     int  Bytes_Return;
     int  Bytes_Avail;
     char Job_Name[10];
     char User_Name[10];
     char Job_Number[6];
     char Int_Job_ID[16];
     char Job_Status[10];
     char Job_Type[1];
     char Job_Subtype[1];
     char Date_Enter_Sys[13];
     char Date_Job_Active[13];
     char Job_Acct_Code[15];
     char Job_Desc_Name[10];
     char Job_Desc_Lib[10];
     char Unit_Work_ID[24];
     char Mode_Name[8];
     char Inq_Msg_Reply[10];
     char Log_Cl_Pgms[10];
     char Brk_Msg_Hndl[10];
     char Status_Msg_Hndl[10];
     char Device_Recov_Act[13];
     char DDM_Conv_Hndl[10];
     char Date_Separator[1];
     char Date_Format[4];
     char Print_Text[30];
     char Subm_Job_Name[10];
     char Subm_User_Name[10];
     char Subm_Job_Num[6];
     char Subm_Msgq_Name[10];
     char Subm_Msgq_Lib[10];
     char Time_Separator[1];
     int  Coded_Char_Set_ID;
     char Sched_Date_Time[8];
     char Print_Key_Format[10];
     char Sort_Sequence[10];
     char Sort_Sequence_Lib[10];
     char Language_ID[3];
     char Country_ID[2];        /* Country or region             */
     char Completion_Status[1];
     char Signed_On_Job[1];
     char Job_Switches[8];
     char Job_Msgq_Full_Action[10];
     char Reserved1[1];
     int  Job_Msgq_Max_Size;
     int  Default_Coded_Char_Set_Id;
     char Routing_Data[80];
     char Decimal_Format[1];
     char Chrid_Ctl[10];
     char Server_Type[30];
     char Allow_Multiple_Threads[1];
     char Job_Log_Pending;
     char Reserved2;
     int  Job_Ending_Reason;
     int  Job_Type_Enhanced;
     char Date_Time_Job_End[13];
     char Reserved3;
     char Spooled_File_Action[10];
     int  ASP_Group_Info_Offset;
     int  Number_ASP_Group_Entries;
     int  Length_ASP_Group_Entry;
     char Time_Zone_Description[10];
     char Job_Log_Output[10];
   /*Qwc_ASP_List_t ASP[];*/     /* Varying length                 */
} Qwc_JOBI0400_t;


/*******************************************************************/
/* Record structure for QUSRJOBI JOBI0500 format                   */
/*******************************************************************/

typedef _Packed struct Qwc_JOBI0500 {
     int  Bytes_Return;
     int  Bytes_Avail;
     char Job_Name[10];
     char User_Name[10];
     char Job_Number[6];
     char Int_Job_ID[16];
     char Job_Status[10];
     char Job_Type[1];
     char Job_Subtype[1];
     char Reserved[2];
     int  End_Severity;
     int  Log_Severity;
     char Log_Level[1];
     char Log_Text[10];
} Qwc_JOBI0500_t;


/*******************************************************************/
/* Record structure for QUSRJOBI JOBI0600 format                   */
/*******************************************************************/
typedef _Packed struct Qwc_Grp_List{
     char Grp_Name[10];
} Qwc_Grp_List_t;

typedef _Packed struct Qwc_TZone_List{
     char Time_Zone_Description[10];
     char Reserved;
     char Time_Zone_DST_Indicator;
     int  Time_Zone_Offset;
     char Time_Zone_Full_Name[50];
     char Time_Zone_Abbreviated_Name[10];
     char Time_Zone_Message_ID[7];
     char Time_Zone_Message_File_Name[10];
     char Time_Zone_Message_File_Library[10];
} Qwc_TZone_List_t;

typedef _Packed struct Qwc_JOBI0600 {
     int  Bytes_Return;
     int  Bytes_Avail;
     char Job_Name[10];
     char User_Name[10];
     char Job_Number[6];
     char Int_Job_ID[16];
     char Job_Status[10];
     char Job_Type[1];
     char Job_Subtype[1];
     char Job_Switch[8];
     char End_Status[1];
     char Subsys_Name[10];
     char Subsys_Lib[10];
     char Curr_Usrprf_Name[10];
     char Dbcs_Enabled[1];
     char Exit_Key[1];
     char Cancel_Key[1];
     int  Product_Return_Code;
     int  User_Return_Code;
     int  Program_Return_Code;
     char Special_Environment[10];
     char Device_Name[10];
     char Group_Profile_Name[10];
     Qwc_Grp_List_t Grp[15];
     char Job_User_ID[10];
     char Job_User_ID_Setting[1];
     char Client_IP_Address[15];
     char Reserved[2];
     int  Time_Zone_Info_Offset;
     int  Time_Zone_Info_Length;
   /*Qwc_TZone_List_t TimeZoneInfo;*//* Varying length             */
} Qwc_JOBI0600_t;


/*******************************************************************/
/* Record structure for QUSRJOBI JOBI0700 format                   */
/****                                                           ****/
/* NOTE: The following type definition only defines the fixed      */
/*       portion of the format.  Any varying length field will     */
/*       have to be defined by the user.                           */
/*******************************************************************/

typedef _Packed struct Qwc_Lib_List{
     char Lib_Name[11];
} Qwc_Lib_List_t;

typedef _Packed struct Qwc_JOBI0700 {
     int  Bytes_Return;
     int  Bytes_Avail;
     char Job_Name[10];
     char User_Name[10];
     char Job_Number[6];
     char Int_Job_ID[16];
     char Job_Status[10];
     char Job_Type[1];
     char Job_Subtype[1];
     char Reserved[2];
     int  Libs_In_Syslibl;
     int  Prod_Libs;
     int  Curr_Libs;
     int  Libs_In_Usrlibl;
   /*Qwc_Lib_List_t Lib[];*/     /* Varying length                 */
} Qwc_JOBI0700_t;


/*******************************************************************/
/* Record structure for QUSRJOBI JOBI0750 format                   */
/****                                                           ****/
/* NOTE: The following type definition only defines the fixed      */
/*       portion of the format.  Any varying length field will     */
/*       have to be defined by the user.                           */
/*******************************************************************/

typedef _Packed struct Qwc_Lib_List2{
     char Lib_Name[10];
     char Lib_Text_Description[50];
     int  Lib_ASP_Number;
     char Lib_ASP_Name[10];
     /* char Reserved[*]; */
} Qwc_Lib_List2_t;

typedef _Packed struct Qwc_JOBI0750 {
     int  Bytes_Return;
     int  Bytes_Avail;
     char Job_Name[10];
     char User_Name[10];
     char Job_Number[6];
     char Int_Job_ID[16];
     char Job_Status[10];
     char Job_Type[1];
     char Job_Subtype[1];
     char Reserved[2];
     int  Offset_Sys_Libs;
     int  Number_Sys_Libs;
     int  Offset_Prod_Libs;
     int  Number_Prod_Libs;
     int  Offset_Curr_Libs;
     int  Number_Curr_Libs;
     int  Offset_User_Libs;
     int  Number_User_Libs;
     int  Lng_One_Lib_Entry;
     /*Qwc_Lib_List2_t SysLib[];*/     /* Varying length           */
     /*Qwc_Lib_List2_t ProdLib[];*/    /* Varying length           */
     /*Qwc_Lib_List2_t CurrLib[];*/    /* Varying length           */
     /*Qwc_Lib_List2_t UserLib[];*/    /* Varying length           */
} Qwc_JOBI0750_t;


/*******************************************************************/
/* Record structure for QUSRJOBI JOBI0800 format                   */
/****                                                           ****/
/* NOTE: The following type definition only defines the fixed      */
/*       portion of the format.  Any varying length field will     */
/*       have to be defined by the user.                           */
/*******************************************************************/

typedef _Packed struct Qwc_Sig_List{
     int Signal_Number;
     int Signal_Action;
     int Default_Signal_Action;
     int Max_Num_Signal;
     int Current_Num_Signals;
     char Reserved[12];
} Qwc_Sig_List_t;

typedef _Packed struct Qwc_JOBI0800 {
     int  Bytes_Return;
     int  Bytes_Avail;
     char Job_Name[10];
     char User_Name[10];
     char Job_Number[6];
     char Int_Job_ID[16];
     char Job_Status[10];
     char Job_Type[1];
     char Job_Subtype[1];
     char Reserved[2];
     int  Signal_Status;
     char Signal_Blocking_Mask[8];
     char Pending_Signal_Set[8];
     int  Offset_Signal_Monitor_Data;
     int  Number_Signal_Monitor;
     int  Process_ID_Number;
   /*Qwc_Sig_List_t Sig[];*/     /* Varying length                 */
} Qwc_JOBI0800_t;


/*******************************************************************/
/* Record structure for QUSRJOBI JOBI0900 format                   */
/****                                                           ****/
/* NOTE: The following type definition only defines the fixed      */
/*       portion of the format.  Any varying length field will     */
/*       have to be defined by the user.                           */
/*******************************************************************/


typedef _Packed struct Qwc_Cur_List{
     char Object_Name[10];
     char Object_Library[10];
     char Object_Type[10];
     char Open_Cursor_Name[18];
     char Statement_Name[18];
} Qwc_Cur_List_t;

typedef _Packed struct Qwc_JOBI0900 {
     int  Bytes_Return;
     int  Bytes_Avail;
     char Job_Name[10];
     char User_Name[10];
     char Job_Number[6];
     char Int_Job_ID[16];
     char Job_Status[10];
     char Job_Type[1];
     char Job_Subtype[1];
     char Server_Mode_for_SQL[1];
     char Reserved[1];
     int  Offset_SQL_Open_Cursor_Data;
     int  Size_SQL_Open_Cursor_Entry;
     int  Num_SQL_Open_Cursors;
     int  Offset_Current_SQL;
     int  Length_Current_SQL;
     int  Status_Current_SQL;
     int  CCSID_Current_SQL;
     char Relational_Database_Name[18];
     char Object_Current_SQL[10];
     char Library_Current_SQL[10];
     char Object_Type_Current_SQL[10];
     char Reserved2[4];
     unsigned long long Cumulative_Full_Opens;
     unsigned long long Cumulative_Psuedo_Opens;
     int  Offset_Current_SQL_Name;
     int  Length_Current_SQL_Name;
   /*Qwc_Cur_List_t Cur[];*/     /* Varying length                 */
} Qwc_JOBI0900_t;



/*******************************************************************/
/* Record structure for QUSRJOBI JOBI1000 format                   */
/*******************************************************************/

typedef _Packed struct Qwc_JOBI1000 {
     int  Bytes_Return;
     int  Bytes_Avail;
     char Job_Name[10];
     char User_Name[10];
     char Job_Number[6];
     char Int_Job_ID[16];
     char Job_Status[10];
     char Job_Type[1];
     char Job_Subtype[1];
     char Reserved[2];
     unsigned long long  Elapsed_Time;
     unsigned long long  Total_DiskIO_Count;
     unsigned long long  Async_DiskIO_Count;
     unsigned long long  Sync_DiskIO_Count;
     int  Int_Response_Time;
     int  Int_Trans_Count;
     int  CPU_Used_Percent;
     int  CPU_Used_DB_Percent;
     unsigned long long  CPU_Used_Time;
     unsigned long long  CPU_Used_DB_Time;
     unsigned long long  Lock_Wait_Time;
     unsigned long long  Page_Fault_Count;
} Qwc_JOBI1000_t;


#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(pop)       /* @B1A*/
#endif                       /* @B1A*/
#endif
