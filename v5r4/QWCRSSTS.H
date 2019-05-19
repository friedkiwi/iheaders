/* begin_generated_IBM_copyright_prolog                              */
/* This is an automatically generated copyright prolog.              */
/* After initializing,  DO NOT MODIFY OR MOVE                        */
/* ----------------------------------------------------------------- */
/*                                                                   */
/* Product(s):                                                       */
/*     5738-SS1                                                      */
/*     5769-SS1                                                      */
/*     5722-SS1                                                      */
/*                                                                   */
/* (C)Copyright IBM Corp.  1991, 2005                                */
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
 /* Header File Name: H/QWCRSSTS                                   */
 /*                                                                */
 /* Descriptive Name: Retrieve System Status API                   */
 /*                                                                */
 /* Description: The Retrieve System Status API allows you to      */
 /*              retrieve a group of statistics that represents    */
 /*              the current status of the system.                 */
 /*                                                                */
 /* Header Files Included: None.                                   */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List:  Qwc_SSTS0100_t                                */
 /*                  Qwc_SSTS0200_t                                */
 /*                  Qwc_Rssts_Pool_Info_t                         */
 /*                  Qwc_SSTS0300_t                                */
 /*                  Qwc_Rssts_Pool2_Info_t                        */
 /*                  Qwc_Rssts_Select_Info                         */
 /*                  Qwc_SSTS0400_t                                */
 /*                  Qwc_SSTS0500_t                                */
 /*                                                                */
 /* Function Prototype List: QWCRSSTS                              */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= D2862000     3D10  940424 DETTMAN:  New Include           */
 /* $01= P3960305     3D70  940715 TCR    :  Add restricted state  */
 /*                                          to the 200 format     */
 /* $02= P3635035     4D10  961211 JAH    :  fix brackets and      */
 /*                                          array in 200 format   */
 /* $03= D97895       5D10  990629 ROCH   :  Add new formats       */
 /* $04= D98793       5D20  010603 ROCH   :  Add new fields to     */
 /*                                          format 200            */
 /* $05= D99458       5D30  030630 ROCH   :  Add new fields to     */
 /*                                          format 200            */
 /* $06= D99879       5D40  040305 ROCH   :  Add new fields to     */
 /*                                          format 400            */
 /* $07= P9A90363     5D40  050305 ROCH   :  Add new fields to     */
 /*                                          formats 200 and 400   */
 /* $08= D9987807     5D40  050324 ROCH   :  Add new fields to     */
 /*                                          format 200            */
 /* $09= D9987808     5D40  050515 ROCH   :  Field change to 200   */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

 #ifndef QWCRSSTS_h
 #define QWCRSSTS_h
#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(P128)      /* @B1A*/
#endif                       /* @B1A*/

 /******************************************************************/
 /*  Prototype for QWCRSSTS API                                    */
 /******************************************************************/
 #ifdef  __ILEC400__
       #pragma linkage(QWCRSSTS,OS,nowiden)
 #else
       extern "OS"
 #endif
 void QWCRSSTS(void *,           /* Receiver variable              */
               int,              /* Length of receiver variable    */
               char *,           /* Format name                    */
               char *,           /* Reset status statistics        */
               void *,           /* Error code                     */
               ...);             /* Optional Parameter Group:
                                      char *   Pool selection
                                               information
                                      int      Size of pool
                                               selection
                                               information         */

 /******************************************************************/
 /* Type Definition for the SSTS0100 format.                       */
 /******************************************************************/
 typedef _Packed struct Qwc_SSTS0100
    {
       int  Bytes_Available;
       int  Bytes_Returned;
       char Current_Date_Time[8];
       char System_Name[8];
       int  Users_Currently_Signed_On;
       int  Users_Signed_Off;
       int  Users_Suspended_Sys_Request;
       int  Users_Suspended_Group_Job;
       int  Users_Signed_Off_Printer_Output;
       int  Batch_Jobs_Waiting;
       int  Batch_Jobs_Running;
       int  Batch_Jobs_Held;
       int  Batch_Jobs_Ending;
       int  Batch_Jobs_Scheduled;
       int  Batch_Jobs_Held_On_Job_Q;
       int  Batch_Jobs_On_Held_Job_Q;
       int  Batch_Jobs_Unassigned_Job_Q;
       int  Batch_Jobs_Ended_Printer_Output;
    } Qwc_SSTS0100_t;

 /******************************************************************/
 /* Type Definition for the SSTS0200 format.                       */
 /******************************************************************/
 typedef _Packed struct Qwc_SSTS0200
    {
       int  Bytes_Available;
       int  Bytes_Returned;
       char Current_Date_Time[8];
       char System_Name[8];
       char Elapsed_Time[6];
       char Restricted_State[1];
       char Reserved[1];
       int  Pct_Processing_Unit_Used;
       int  Jobs_In_System;
       int  Pct_Perm_Addresses;
       int  Pct_Temp_Addresses;
       int  System_ASP;
       int  Pct_System_ASP_used;
       int  Total_Aux_Storage;
       int  Current_Unprotect_Storage;
       int  Maximum_Unprotect_Storage;
       int  DB_Capability;
       int  Main_Storage_Size;
       int  Number_Of_Partitions;
       int  Partition_Identifier;
       int  Reserved2;
       int  Current_Processing_Capacity;
       char Processor_Sharing_Attribute;
       char Reserved3[3];
       int  Number_Of_Processors;
       int  Active_Jobs_In_System;
       int  Active_Threads_In_System;
       int  Maximum_Jobs_In_System;
       int  Temp_256MB_Segments;
       int  Temp_4GB_Segments;
       int  Perm_256MB_Segments;
       int  Perm_4GB_Segments;
       int  Cur_Interactive_Performance;
       int  Uncapped_CPU_Capacity_Used;
       int  Shared_Processor_Pool_Used;
       unsigned long long Main_Storage_Size_Long;

    } Qwc_SSTS0200_t;

 /******************************************************************/
 /* Type Definition for the SSTS0300 format.                       */
 /****                                                          ****/
 /* NOTE: The following type definition only defines the fixed     */
 /*       portion of the format.  Any varying length field will    */
 /*       have to be defined by the user.                          */
 /******************************************************************/
 typedef _Packed struct Qwc_Rssts_Pool_Info
    {
       int  System_Pool;
       int  Pool_Size;
       int  Reserved_Size;
       int  Maximum_Active_Jobs;
       int  Database_Faults;
       int  Database_Pages;
       int  Nondatabase_Faults;
       int  Nondatabase_Pages;
       int  Active_Wait;
       int  Wait_ineligible;
       int  Active_ineligible;
       char Pool_Name[10];
       char Subsystem_Name[10];
       char Subsystem_Lib_Name[10];
       char Paging_Option[10];
    } Qwc_Rssts_Pool_Info_t;

 typedef _Packed struct Qwc_SSTS0300
    {
       int  Bytes_Available;
       int  Bytes_Returned;
       char Current_Date_Time[8];
       char System_Name[8];
       char Elapsed_Time[6];
       char Reserved[2];
       int  Number_Pools;
       int  Offset_Pool_Info;
       int  Length_Pool_Info;
     /*char Reserved2[];*/       /* Varying length                 */
     /*Qwc_Rssts_Pool_Info_t Pool_Info[];*//* Varying length       */
    } Qwc_SSTS0300_t;

 /******************************************************************/
 /* Type Definition for the SSTS0400 format.                       */
 /****                                                          ****/
 /* NOTE: The following type definition only defines the fixed     */
 /*       portion of the format.  Any varying length field will    */
 /*       have to be defined by the user.                          */
 /******************************************************************/
 typedef _Packed struct Qwc_Rssts_Pool2_Info
    {
       int  System_Pool;
       int  Pool_Size;
       int  Reserved_Size;
       int  Maximum_Active_Threads;
       int  Database_Faults;
       int  Database_Pages;
       int  Nondatabase_Faults;
       int  Nondatabase_Pages;
       int  Active_Wait;
       int  Wait_ineligible;
       int  Active_ineligible;
       char Pool_Name[10];
       char Subsystem_Name[10];
       char Subsystem_Lib_Name[10];
       char Paging_Option[10];
       int  Defined_Size;
       int  Current_Threads;
       int  Ineligible_Threads;
       int  Tuning_Priority;
       int  Tuning_Minimum_Percent;
       int  Tuning_Maximum_Percent;
       int  Tuning_Minimum_Faults;
       int  Tuning_per_thread_Faults;
       int  Tuning_Maximum_Faults;
       char Description[50];
       char Pool_Status;
       char Reserved[1];
       int  Tuning_Min_Activity_Level;
       int  Tuning_Max_Activity_Level;
    } Qwc_Rssts_Pool2_Info_t;

 typedef _Packed struct Qwc_SSTS0400
    {
       int  Bytes_Available;
       int  Bytes_Returned;
       char Current_Date_Time[8];
       char System_Name[8];
       char Elapsed_Time[6];
       char Reserved[2];
       int  Main_Storage_Size;
       int  Machine_Pool_Minimum;
       int  Base_Pool_Minimum;
       int  Number_Pools;
       int  Offset_Pool_Info;
       int  Length_Pool_Info;
       unsigned long long Main_Storage_Size_Long;
     /*char Reserved2[];*/       /* Varying length                 */
     /*Qwc_Rssts_Pool2_Info_t Pool_Info[];*//* Varying length      */
    } Qwc_SSTS0400_t;

 typedef _Packed struct Qwc_Rssts_Select_Info
    {
       char Type_Pool[10];
       char Shared_Pool_Name[10];
       int  System_Pool;
    } Qwc_Rssts_Select_Info_t;

 /******************************************************************/
 /* Type Definition for the SSTS0500 format.                       */
 /****                                                          ****/
 /* NOTE: The following type definition only defines the fixed     */
 /*       portion of the format.  Any varying length field will    */
 /*       have to be defined by the user.                          */
 /******************************************************************/
 typedef _Packed struct Qwc_Rssts_Subsystem_Info
    {
       char Subsystem_Name[10];
       char Subsystem_Lib_Name[10];
    } Qwc_Rssts_Subsystem_Info_t;

 typedef _Packed struct Qwc_SSTS0500
    {
       int  Bytes_Available;
       int  Bytes_Returned;
       char Current_Date_Time[8];
       char System_Name[8];
       int  System_Pool;
       int  Number_Subsystems_Available;
       int  Number_Subsystems_Returned;
       int  Offset_Subsystem_Info;
       int  Length_Subsystem_Info;
       char Pool_Name[10];
     /*char Reserved2[];*/       /* Varying length                 */
     /*Qwc_Rssts_Subsystem_Info_t Sbs_Info[];*//* Varying length   */
    } Qwc_SSTS0500_t;

#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(pop)       /* @B1A*/
#endif                       /* @B1A*/
 #endif
