/* begin_generated_IBM_copyright_prolog                              */
/* This is an automatically generated copyright prolog.              */
/* After initializing,  DO NOT MODIFY OR MOVE                        */
/* ----------------------------------------------------------------- */
/*                                                                   */
/* Product(s):                                                       */
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
/*** START HEADER FILE SPECIFICATIONS ********************************/
/*                                                                   */
/* Header File Name: H/QPMLPFRD                                      */
/*                                                                   */
/* Descriptive Name: List Performace Data API.                       */
/*                                                                   */
/* Description: The List Performance Data (QPMLPFRD) API returns the */
/*              latest collection of performance data in the user    */
/*              space specified for the resource on the Work with    */
/*              Collector (QPMWKCOL) API.                            */
/*                                                                   */
/* Header Files Included: None.                                      */
/*                                                                   */
/* Macros List: None.                                                */
/*                                                                   */
/* Structure List: Qpm_Input_Parameter_Section_t                     */
/*                 Qpm_Header_Section_t                              */
/*                 Qpm_Job_Format_t                                  */
/*                 Qpm_Pool_Format_t                                 */
/*                 Qpm_Disk_Format_t                                 */
/*                 Qpm_IOP_Format_t                                  */
/*                 Qpm_Async_Format_t                                */
/*                 Qpm_Bisync_Format_t                               */
/*                 Qpm_ECL_Format_t                                  */
/*                 Qpm_Ethernet_Format_t                             */
/*                 Qpm_IDLC_Format_t                                 */
/*                 Qpm_LAPD_Format_t                                 */
/*                 Qpm_SDLC_Format_t                                 */
/*                 Qpm_X_25_Format_t                                 */
/*                 Qpm_PPP_Format_t                                  */
/*                                                                   */
/* Function Prototype List: QPMLPFRD.                                */
/*                                                                   */
/* Change Activity:                                                  */
/*                                                                   */
/* CFD List:                                                         */
/*                                                                   */
/* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION       */
/* ---- ------------ ----- ------ --------- ------------------------ */
/* $A0= D2862000     3D10  940417 LUPA:     New Include              */
/* $A1= D9169600     3D60  941128 MMILLER:  New fields added to      */
/*                                          end of formats           */
/* $A2= D94395       3D70  960314 DFL:      New fields added to      */
/*                                           IOP format              */
/* $C3= D94940.2     4D20  970220 MAS:      New fields added to      */
/*                                          end of formats           */
/* $E1= D97008       4D40  980831 MAS:      New field added to       */
/*                                           IDLC format             */
/* $EH= D97636       4D50  990325 ALP:      New fields added to      */
/*                                           ECL and ETH formats     */
/*                                          Machine interactive flag */
/*                                          and DB CPU field added   */
/*                                          to JOB format            */
/* @CM= D98507       5D20  010103 ALP:      Add PPP format           */
/*                                          New fields added to      */
/*                                           end of formats          */
/* @IC= D99383.2     5D30  020917 MAS:      New fields added to      */
/*                                           DISK format             */
/*                                          Add new job fields       */
/* @JF  D99458       5D30  030429 ALP       Uncapped LPAR support    */
/* @LO  D99936.4     5D40  040910 AP        Changes to disk data     */
/*      P9A98703     5D40  050526 DFL       Cleanup                  */
/* End CFD List.                                                     */
/*                                                                   */
/*  Additional notes about the Change Activity                       */
/* End Change Activity.                                              */
/*** END HEADER FILE SPECIFICATIONS **********************************/

#ifndef QPMLPFRD_h
 #define QPMLPFRD_h
#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(P128)      /* @B1A*/
#endif                       /* @B1A*/

 /********************************************************************/
 /*  Prototype for QPMLPFRD API                                      */
 /********************************************************************/
 #ifdef __ILEC400__
    #pragma linkage (QPMLPFRD,OS,nowiden)
 #else
    extern "OS"
 #endif
 void QPMLPFRD (char *,           /* Type of Resource                */
                int  *,           /* Sequence Number of Collection   */
                void *);          /* Error Code                      */

 /********************************************************************/
 /*  Typedef for Input Parameter Section                             */
 /********************************************************************/
 typedef _Packed struct Qpm_Input_Parameter_Section {
       char  R_Type[10];
       char  Reserved[2];
       int   Sequence_Num;
 } Qpm_Input_Parameter_Section_t;

 /********************************************************************/
 /*  Typedef for Header Section                                      */
 /********************************************************************/
 typedef _Packed struct Qpm_Header_Section {
       char  R_Type[10];
       char  Reserved[2];
       int   Interval_Time;
       int   CPU_Secs_Used;
       int   Num_CPU;
       int   Sequence_Num;
       char  System_Name[10];
       char  Release[6];
       char  Date_Time[12];
       int   CPU_Secs_Available;
 } Qpm_Header_Section_t;

 /********************************************************************/
 /*  Typedef for Job Format                                          */
 /********************************************************************/
 typedef _Packed struct Qpm_Job_Format {
       char  Job_Name[10];
       char  User_Name[10];
       char  Job_Number[6];
       char  Job_Type;
       char  Job_Subtype;
       char  PT_Source_Job;
       char  PT_Target_Job;
       char  Emulation_Job;
       char  PCS_App_Job;
       char  Target_DDM_Job;
       char  MRT_Job;
       char  S36_Env_Job;
       char  Priority[2];
       char  Pool[2];
       char  Machine_Interactive;
       char  Reserved[8];
       int   DB_CPU_Time;
       int   Time_Slice;
       int   CPU_Time;
       int   Trans_Count;
       int   Trans_Time;
       int   Sync_DB_Reads;
       int   Sync_DB_Writes;
       int   Sync_NDB_Reads;
       int   Sync_NDB_Writes;
       int   Async_DB_Reads;
       int   Async_DB_Writes;
       int   Async_NDB_Reads;
       int   Async_NDB_Writes;
       int   Comm_Puts;
       int   Comm_Gets;
       int   EAO_Exceptions;
       int   Binary_Overflows;
       int   Decimal_Overflows;
       int   Float_Overflows;
       int   Logical_DB_Reads;
       int   Logical_DB_Writes;
       int   Misc_DB_Ops;
       int   Permanent_Writes;
       int   Checksum_IO;
       int   PAG_Faults;
       int   Number_Print_Lines;
       int   Number_Print_Pages;
       int   Active_Wait_Trans;
       int   Wait_Ineligible_Trans;
       int   Active_Ineligible_Trans;
       char  Line_Desc[10];
       char  Secondary_Line_D[10];
       char  Task_Type[2];
       char  Task_Type_Extender[2];
       int   Threads_Active;
       int   Threads_Count;
       int   Pages_Allocated;
       int   Pages_Deallocated;
 } Qpm_Job_Format_t;

 /********************************************************************/
 /*  Typedef for Pool Format                                         */
 /********************************************************************/
 typedef _Packed struct Qpm_Pool_Format {
       int   Pool_Number;
       int   Activity_Level;
       int   Pool_Size;
       int   Machine_Res_Portion;
       int   DB_Faults;
       int   NDB_Faults;
       int   DB_Pages;
       int   NDB_Pages;
       int   Active_Wait_Trans;
       int   Wait_Ineligible_Trans;
       int   Active_Ineligible_Trans;
       int   Active_Wait_Std_Wrap;
       int   Wait_Inel_Std_Wrap;
       int   Active_Inel_Std_Wrap;
 } Qpm_Pool_Format_t;

 /********************************************************************/
 /*  Typedef for Disk Format                                         */
 /********************************************************************/
 typedef _Packed struct Qpm_Disk_Format {
       int   Bus_Number;
       int   IOP_Address;
       char  Arm_Number[4];
       char  Drive_Type[4];
       char  Mirror_Flag;
       char  Mirror_Status;
       char  IOP_Managed;
       char  Category;
       int   Times_Not_Busy;
       int   Samples_Taken;
       int   Drive_Capacity;
       int   Drive_Available;
       int   Blocks_Read;
       int   Blocks_Written;
       int   Read_Commands;
       int   Write_Commands;
       int   Idle_Loop_Count;
       int   Idle_Loop_Time;
       int   Seeks_23;
       int   Seeks_13_23;
       int   Seeks_16_13;
       int   Seeks_112_16;
       int   Seeks_112;
       int   Zero_Seeks;
       int   Buffer_Overruns;
       int   Buffer_Underruns;
       int   Avg_Queue_Length;
       char  ASP_Number[2];
       char  Checksum_Number[2];
       int   Permanent_Capacity;
       int   Permanent_Available;
       char  IOP_Resource_Name[10];
       char  Unit_Resource_Name[10];
       char  Compressed_Unit;
       char  Reserved_2;
       char  ASP_Resource_Name[10];
       int   ASP_Number_Extended;
       char  Multipath_Unit;
       char  Initial_Path;
       char  Production_Copy;
       char  Mirror_Copy;
       char  Reserved_3[4];
       long long Drive_Capacity_Ext;
       long long Drive_Available_Ext;
 } Qpm_Disk_Format_t;

 /********************************************************************/
 /*  Typedef for IOP Format                                          */
 /********************************************************************/
 typedef _Packed struct Qpm_IOP_Format {
       int   Bus_Number;
       int   IOP_Address;
       char  IOP_Type;
       char  Resource_Type[4];
       char  Reserved_1[3];
       int   Idle_Loop_Count;
       int   Idle_Loop_Time;
       int   RAM_Util;
       int   IOP_Sys_Time;
       int   All_Comm_Time;
       int   SDLC_Comm_Time;
       int   Async_Comm_Time;
       int   Bisync_Comm_Time;
       int   X25_LLC_Comm_Time;
       int   X25_PLC_Comm_Time;
       int   X25_DLC_Comm_Time;
       int   LAN_Comm_Time;
       int   SDLC_Short_Hold_Mode;
       int   ISDN_LAPE_LAPD_Comm_Time;
       int   ISDN_Q931_Comm_Time;
       int   Disk_Time;
       char  Function_1_Id;
       char  Function_2_Id;
       char  Function_3_Id;
       char  Function_4_Id;
       char  Function_5_Id;
       char  Reserved_2[3];
       int   Function_1_Time;
       int   Function_2_Time;
       int   Function_3_Time;
       int   Function_4_Time;
       int   Function_5_Time;
       int   Proc_2_Time;
       char  IOP_Resource_Name[10];
       char  Reserved_3[2];
       int   Reserved_4;
       int   Twinax_Time;
       int   Other_Function_Time;
       int   Interrupt_Level_Time;
       int   Remote_Access_Time;
 } Qpm_IOP_Format_t;

 /********************************************************************/
 /*  Typedef for Asynchronus Format                                  */
 /********************************************************************/
 typedef _Packed struct Qpm_Async_Format {
       int   Bus_Number;
       int   IOP_Address;
       char  Protocol;
       char  Line_Desc[10];
       char  Line_Active;
       char  Reserved[12];
       int   Line_Speed;
       int   Vary_On_Ops;
       int   Active_Time;
       int   Bytes_Trans;
       int   Bytes_Rec;
       int   Protocol_DU_Trans;
       int   Protocol_DU_Rec;
       int   Protocol_DU_Error;
       char  IOP_Resource_Name[10];
 } Qpm_Async_Format_t;

 /********************************************************************/
 /*  Typedef for Bisynchronus Format                                 */
 /********************************************************************/
 typedef _Packed struct Qpm_Bisync_Format {
       int   Bus_Number;
       int   IOP_Address;
       char  Protocol;
       char  Line_Desc[10];
       char  Line_Active;
       char  Reserved[12];
       int   Line_Speed;
       int   Vary_On_Ops;
       int   Active_Time;
       int   Bytes_Trans;
       int   Bytes_Rec;
       int   Data_Char_Trans;
       int   Data_Char_Rec;
       int   Data_Char_Retrans;
       int   Data_Char_Error;
       int   Char_Error;
       int   NAK_Rec;
       int   Wrong_ACK;
       int   Enqueue_To_Text;
       int   Invalid_Format;
       int   Enqueue_To_ACK;
       int   Disconnect_A;
       int   EOT_A;
       int   Disconnect_FA;
       int   EOT_FA;
       int   Data_Blocks_Trans;
       int   Data_Blocks_Rec;
       char  IOP_Resource_Name[10];
 } Qpm_Bisync_Format_t;

 /********************************************************************/
 /*  Typedef for ECL Format.                                         */
 /********************************************************************/
 typedef _Packed struct Qpm_ECL_Format {
       int   Bus_Number;
       int   IOP_Address;
       char  Protocol;
       char  Line_Desc[10];
       char  Line_Active;
       char  Reserved_1[12];
       int   Line_Speed;
       int   Vary_On_Ops;
       int   Active_Time;
       int   IFrame_Char_Trans;
       int   IFrame_Char_Rec;
       int   RNR_Frames_Trans;
       int   RNR_Frames_Rec;
       int   Reject_Frames_Trans;
       int   Reject_Frames_Rec;
       int   IFrames_Trans;
       int   IFrames_Rec;
       int   SABME_Frames_Trans;
       int   SABME_Frames_Rec;
       int   N2_Retries_Expiration;
       int   T1_Timer_Expiration;
       int   Frames_Trans;
       int   Frames_Rec;
       int   R_IFrames_Trans;
       int   R_IFrames_Rec;
       int   Line_Errors;
       int   Internal_Errors;
       int   Burst_Error;
       int   ARI_FCI_Error;
       int   Abort_Delimiter;
       int   Lost_Frame;
       int   Rec_Congestion;
       int   Frame_Copied_Error;
       int   Frequency_Error;
       int   Token_Error;
       int   DMA_Bus_Error;
       int   DMA_Parity_Error;
       int   Address_not_Recognized;
       int   Frame_Not_Copied;
       int   Transmit_Strip_Error;
       int   Unauth_AP;
       int   Unauth_MAC_Frame;
       int   Soft_Error;
       int   Transmit_Beacon;
       int   IOA_Status_Overrun;
       int   Frames_Discarded;
       int   Spurious_Interrupts;
       int   Total_MAC_Bytes_Rec_OK;
       int   Total_MAC_Bytes_Trans_OK;
       int   Total_Frames_Not_Trans;
       int   Ring_Use;
       int   Ring_Sample;
       int   FSC_Code_Violations;
       int   Frames_Trans_Failed_Ret;
       int   Number_Underruns;
       char  IOP_Resource_Name[10];
       char  Duplex;
       char  Reserved_2;
       long long  Line_Speed_Long;
       long long  IFrame_Char_Trans_Long;
       long long  IFrame_Char_Rec_Long;
       long long  IFrames_Trans_Long;
       long long  IFrames_Rec_Long;
       long long  Frames_Trans_Long;
       long long  Frames_Rec_Long;
       long long  R_IFrames_Trans_Long;
       long long  R_IFrames_Rec_Long;
       long long  Total_MAC_Bytes_Rec_OK_Long;
       long long  Total_MAC_Bytes_Trans_OK_Long;
       int   Unsupported_Protocol_Frames;
       int   Reserved_3;
 } Qpm_ECL_Format_t;

 /********************************************************************/
 /*  Typedef for Ethernet Format.                                    */
 /********************************************************************/
 typedef _Packed struct Qpm_Ethernet_Format {
       int   Bus_Number;
       int   IOP_Address;
       char  Protocol;
       char  Line_Desc[10];
       char  Line_Active;
       char  Reserved_1[12];
       int   Line_Speed;
       int   Vary_On_Ops;
       int   Active_Time;
       int   IFrame_Char_Trans;
       int   IFrame_Char_Rec;
       int   RNR_Frames_Trans;
       int   RNR_Frames_Rec;
       int   Reject_Frames_Trans;
       int   Reject_Frames_Rec;
       int   IFrames_Trans;
       int   IFrames_Rec;
       int   SABME_Frames_Trans;
       int   SABME_Frames_Rec;
       int   N2_Retries_Expiration;
       int   T1_Timer_Expiration;
       int   Frames_Trans;
       int   Frames_Rec;
       int   Inbound_Frames_Missed;
       int   CRC_Error;
       int   More_16_Retries;
       int   Out_Window_Collisions;
       int   Alignment_Error;
       int   Carrier_Loss;
       int   Time_domain_Reflect;
       int   Rec_Buffer_Errors;
       int   Spurious_Interrupts;
       int   Discard_Inbound_Frames;
       int   Receive_Overruns;
       int   Memory_Error;
       int   Interrupt_Overrun;
       int   Transmit_Underflow;
       int   Babble_Errors;
       int   Signal_Quality_Error;
       int   More_1_Retry;
       int   Exactly_1_Retry;
       int   Deferred_Conditions;
       int   Trans_Frames_Discard;
       int   Total_MAC_Bytes_Rec_OK;
       int   Total_MAC_Bytes_Trans_OK;
       int   Total_Frames_Not_Trans;
       int   Total_Mail_Frames_Discard;
       char  IOP_Resource_Name[10];
       char  Duplex;
       char  Reserved_2;
       long long  Line_Speed_Long;
       long long  IFrame_Char_Trans_Long;
       long long  IFrame_Char_Rec_Long;
       long long  IFrames_Trans_Long;
       long long  IFrames_Rec_Long;
       long long  Frames_Trans_Long;
       long long  Frames_Rec_Long;
       long long  Total_MAC_Bytes_Rec_OK_Long;
       long long  Total_MAC_Bytes_Trans_OK_Long;
       int   Unsupported_Protocol_Frames;
       int   Reserved_3;
 } Qpm_Ethernet_Format_t;

 /********************************************************************/
 /*  Typedef for IDLC Format                                         */
 /********************************************************************/
 typedef _Packed struct Qpm_IDLC_Format {
       int   Bus_Number;
       int   IOP_Address;
       char  Protocol;
       char  Line_Desc[10];
       char  Network_Interface_Desc[10];
       char  Line_Active;
       char  Reserved_1[2];
       int   Line_Speed;
       int   Vary_On_Ops;
       int   Active_Time;
       int   Bytes_Trans;
       int   Bytes_Rec;
       int   Rec_CRC_Errors;
       int   Short_Frame_Errors;
       int   Aborts_Received;
       int   Sequence_Errors;
       int   Frames_Trans;
       int   Frames_Retrans;
       int   Frames_Received;
       int   Frames_Error;
       char  B1_Channel;
       char  B2_Channel;
       char  IOP_Resource_Name[10];
       char  B_Channel_Used[4];
 } Qpm_IDLC_Format_t;

 /********************************************************************/
 /*  Typedef for LAPD Format.                                        */
 /********************************************************************/
 typedef _Packed struct Qpm_LAPD_Format {
       int   Bus_Number;
       int   IOP_Address;
       char  Protocol;
       char  Network_Interface_Desc[10];
       char  Line_Active;
       char  Reserved_1[12];
       int   Line_Speed;
       int   Vary_On_Ops;
       int   Active_Time;
       int   Bytes_Trans;
       int   Bytes_Rec;
       int   Loss_Frame_Align;
       int   Local_End_Code;
       int   Access_Trans_Err_in;
       int   Access_Trans_Err_out;
       int   Far_End_Code;
       int   Errored_Secs;
       int   Severely_Errored_Secs;
       int   Collision_Detect;
       int   Rec_CRC_Errors;
       int   Short_Frame_Errors;
       int   Aborts_Received;
       int   Sequence_Errors;
       int   Frames_Trans;
       int   Frames_Retrans;
       int   Frames_Received;
       int   Frames_Error;
       int   Outgoing_Calls;
       int   Outgoing_Retries;
       int   Incoming_Calls;
       int   Incoming_Retries;
       char  Maintenance_Channel;
       char  IOP_Resource_Name[10];
 } Qpm_LAPD_Format_t;

 /********************************************************************/
 /*  Typedef for SDLC Format.                                        */
 /********************************************************************/
 typedef _Packed struct Qpm_SDLC_Format {
       int   Bus_Number;
       int   IOP_Address;
       char  Protocol;
       char  Line_Desc[10];
       char  Line_Active;
       char  Reserved_1[12];
       int   Line_Speed;
       int   Vary_On_Ops;
       int   Active_Time;
       int   Bytes_Trans;
       int   Bytes_Rec;
       int   IFrames_Retrans;
       int   Error_Free_Frames;
       int   Frames_Error;
       int   Invalid_Frames_Rec;
       int   Link_Resets;
       int   IFrames_Trans;
       int   Frames_Retrans;
       int   RR_Frames_Trans;
       int   RR_Frames_Rec;
       int   RNR_Frames_Trans;
       int   RNR_Frames_Rec;
       int   Poll_Wait_Time;
       char  IOP_Resource_Name[10];
 } Qpm_SDLC_Format_t;

 /********************************************************************/
 /*  Typedef for X.25 Format.                                        */
 /********************************************************************/
 typedef _Packed struct Qpm_X_25_Format {
       int   Bus_Number;
       int   IOP_Address;
       char  Protocol;
       char  Line_Desc[10];
       char  Line_Active;
       char  Reserved_1[12];
       int   Line_Speed;
       int   Vary_On_Ops;
       int   Active_Time;
       int   Bytes_Trans;
       int   Bytes_Rec;
       int   IFrames_Retrans;
       int   Frames_Error;
       int   Invalid_Frames_Rec;
       int   Link_Resets;
       int   IFrames_Trans;
       int   Error_Free_Frames;
       int   RR_Frames_Trans;
       int   RR_Frames_Rec;
       int   RNR_Frames_Trans;
       int   RNR_Frames_Rec;
       int   Reset_Packs_Trans;
       int   Reset_Packs_Rec;
       char  IOP_Resource_Name[10];
 } Qpm_X_25_Format_t;

 /********************************************************************/
 /*  Typedef for PPP Format.                                         */
 /********************************************************************/
 typedef _Packed struct Qpm_PPP_Format {
       int    Reserved_1;
       int    Reserved_2;
       char   Protocol;
       char   Line_Desc[10];
       char   Line_Active;
       char   Reserved_3[8];
       long long  Line_Speed;
       int    Vary_On_Ops;
       int    Active_Time;
       char   IOP_Resource_Name[10];
       char   Reserved_4[2];
       long long  Bytes_Trans;
       long long  Bytes_Rec;
       long long  Frames_Trans;
       long long  Error_Free_Frames;
       int    Frames_Error;
       int    Invalid_Frames_Rec;
 } Qpm_PPP_Format_t;

#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(pop)       /* @B1A*/
#endif                       /* @B1A*/
#endif
