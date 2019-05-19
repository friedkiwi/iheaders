/* begin_generated_IBM_copyright_prolog                              */
/* This is an automatically generated copyright prolog.              */
/* After initializing,  DO NOT MODIFY OR MOVE                        */
/* ----------------------------------------------------------------- */
/*                                                                   */
/* Product(s):                                                       */
/*     5763-SS1                                                      */
/*     5722-SS1                                                      */
/*                                                                   */
/* (C)Copyright IBM Corp.  1998, 2005                                */
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
 /* Header File Name: H/QYASPOL                                    */
 /*                                                                */
 /* Descriptive Name: Open list of ASPs API.                       */
 /*                                                                */
 /* Description: The Open List of ASPs API provides information    */
 /*              about ASPs and the disk units that form the       */
 /*              ASPs.                                             */
 /*                                                                */
 /* Header Files Included: None.                                   */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: YASP0100_t                                     */
 /*                 YASP0200_t                                     */
 /*                 YASP0300_t                                     */
 /*                 YASP0400_t                                     */
 /*                 YASP0500_t                                     */
 /*                 YASP0600_t                                     */
 /*                 YASP_List_Information_t                        */
 /*                 YASP_Filter_t                                  */
 /*                 Qgy_YASP_Sort_Information_t                    */
 /*                 Qgy_YASP_Sort_Data_t                           */
 /*                                                                */
 /* Function Prototype List: QYASPOL                               */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= D95991       4D40  980824 JGR    :  New Include           */
 /* $A1= D97171       5D10  000314 JGR    :  Add IASP support      */
 /* $A2= D98416       5D20  010529 JGR    :  IASP stage 2 support  */
 /* $A3= D99409       5D30  030122 JGR    :  IASP stage 3 support  */
 /* $A4= D93276       5D40  050225 JGR    :  V5R4 enhancements     */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

 #ifndef QYASPOL_h
 #define QYASPOL_h
#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(P128)      /* @B1A*/
#endif                       /* @B1A*/

 /******************************************************************/
 /*  Prototype for QYASPOL API                                     */
 /******************************************************************/
 #ifdef  __ILEC400__
       #pragma linkage(QYASPOL,OS,nowiden)
 #else
       extern "OS"
 #endif
 void QYASPOL(void *,           /* Receiver variable              */
              int  *,            /* Length of receiver variable    */
              void *,            /* List information               */
              int  *,            /* Number of records to return    */
              int  *,            /* Number of filters              */
              void *,            /* Filter information             */
              char *,            /* Format name                    */
              void *,            /* Error Code                     */
              ...);              /* Optional: sort information @A2A*/

 /******************************************************************/
 /* Type Definition for the YASP0100 format.                       */
 /******************************************************************/
 typedef _Packed struct YASP0100
    {
       int  Number;
       char Resource[10];                                    /*@A1A*/
       char Device_Desc[10];                                 /*@A1A*/
       int  Version;                                         /*@A1A*/
       int  Usage;                                           /*@A2A*/
       int  Status;                                          /*@A2A*/
       char Database_Name[18];                               /*@A2A*/
       char Primary_Resource[10];                            /*@A4A*/
    } YASP0100_t;

 /******************************************************************/
 /* Type Definition for the YASP0200 format.                       */
 /******************************************************************/
 typedef _Packed struct YASP0200
    {
       int  Number;
       int  Disks;
       int  Total;
       int  Avail;
       int  Prot_Total;
       int  Prot_Avail;
       int  Unprot_Total;
       int  Unprot_Avail;
       int  System_Stg;
       int  Ovrflow_Stg;
       int  Error_Log;
       int  Mach_Log;
       int  Mach_Trace;
       int  M_S_Dump;
       int  Microcode;
       int  Threshold;
       char Type[2];
       char Ovrflow_Rslt;
       char End_Immed;
       char Comp_Rcvy_Pol;
       char Comp_Disks;
       char Bal_Status;
       char Bal_Type;
       char Date_Time[13];
       char Reserved1[3];
       int  Bal_Moved;
       int  Bal_Remain;
       int  Trace_Duration;
       char Trace_Status;
       char Trace_Date_Time[13];
       char Changes_Written;                                 /*@A3A*/
       char Reserved2;                                       /*@A3A*/
       int  Multiple_Connection_Units;                       /*@A3A*/
       int  Geo_mirror_role;                                 /*@A3A*/
       int  Geo_mirror_copy_state;                           /*@A3A*/
       int  Geo_mirror_copy_data_state;                      /*@A3A*/
    } YASP0200_t;

 /******************************************************************/
 /* Type Definition for the YASP0300 format.                       */
 /******************************************************************/
 typedef _Packed struct YASP0300
    {
       int  Number;
       char Type[4];
       char Model[4];
       char Serial_Num[10];
       char Resource[10];
       int  Unit_Number;
       int  Total;
       int  Available;
       int  Sys_Reserved;
       char Mir_Prot;
       char Mir_Report;
       char Mir_Status;
       char Reserved1;
       int  Unit_Control;
       int  Blks_To_M_S;
       int  Blks_From_M_S;
       int  Req_To_M_S;
       int  Req_From_M_S;
       int  P_Blks_From_M_S;
       int  P_Req_From_M_S;
       int  Sample_Cnt;
       int  Not_Busy_Cnt;
       char Comp_Status;
       char Prot_Type;
       char Compressed;                                      /*@A3A*/
       char Allocation_restricted;                           /*@A3A*/
       char Avail_Parity_Set;                                /*@A3A*/
       char Multiple_Connection;                             /*@A3A*/
    } YASP0300_t;

 /******************************************************************/
 /* Type Definition for the YASP0400 format.                   @A1A*/
 /******************************************************************/
 typedef _Packed struct YASP0400
    {
       int  Number;
       char Error_Code[4];
       int  Disk_Unit;
       char Mirror_Unit[1];
    } YASP0400_t;

 /******************************************************************/
 /* Type Definition for the YASP0500 format.                   @A1A*/
 /******************************************************************/
 typedef _Packed struct YASP0500
    {
       int  Number;
       char Transition_Target[2];
       char Reserved1[2];
       char Function[16];
       int  Current_Objects;
       int  Total_Objects;
       int  Current_Items;
       int  Total_Items;
       char Elapsed_Time[6];
    } YASP0500_t;

 /******************************************************************/
 /* Type Definition for the YASP0600 format.                   @A1A*/
 /******************************************************************/
 typedef _Packed struct YASP0600
    {
       int  Number;
       int  Use_Identification;
       char Job_Name[10];
       char Job_User[10];
       char Job_Number[6];
       char Reserved[2];                                     /*@A2A*/
       char Thread_Identifier[8];                            /*@A2A*/
       unsigned int Thread_Handle;                           /*@A2A*/
       char Thread_Status[4];                                /*@A2A*/
    } YASP0600_t;


 /******************************************************************/
 /* Type Definition for the Filter.                                */
 /******************************************************************/
 typedef _Packed struct YASP_Filter
    {
       int  Entry_Size;
       int  Key;
       int  Data_Size;
     /*char Data[];*/           /* Variable length data            */
    } YASP_Filter_t;

 /* Valid values for the filter key field.                         */
 #define QYASPOL_KEY_NUMBER           1 /* ASP number              */
 #define QYASPOL_KEY_RESOURCE         2 /* Resource name           */
 #define QYASPOL_KEY_DEVICE           3 /* Device name             */
 #define QYASPOL_KEY_DATABASE         4 /* Database name           */

 /* Valid values for the filter data field when the key is an      */
 /* ASP number.                                                    */
 #define QYASPOL_NUMBERKEY_NONE       0 /* Select no ASPs          */
 #define QYASPOL_NUMBERKEY_ALL       -1 /* Select all ASPs         */
 #define QYASPOL_NUMBERKEY_ALLUSER   -2 /* Select all user ASPs    */
 #define QYASPOL_NUMBERKEY_ALLIASP   -3 /* Select all IASPs        */


 /******************************************************************/
 /* Type Definition for List Information                           */
 /******************************************************************/
 typedef _Packed struct Qgy_YASP_List_Information
    {
       int  Total_Records;
       int  Records_Returned;
       char Request_Handle[4];
       int  Record_Length;
       char Information_Complete;
       char Date_Time_Created[13];
       char List_Status;
       char Reserved;
       int  Information_Length;
       int  First_Record_In_Buffer;
       char Reserved2[40];
    } YASP_List_Information_t;

 /******************************************************************/
 /* Type Definition for Sort Data                              @A2A*/
 /******************************************************************/

 typedef _Packed struct Qgy_YASP_Sort_Data
    {
       int  Starting_Position;
       int  Key_Length;
       short Data_Type;
       char Sort_Order;
       char Reserved;
    } Qgy_YASP_Sort_Data_t;

 /******************************************************************/
 /* Type Definition for Sort Information                       @A2A*/
 /****                                                          ****/
 /* NOTE: The following type definition only defines the fixed     */
 /*       portion of the format.  Any varying length field will    */
 /*       have to be defined by the user.                          */
 /******************************************************************/

 typedef _Packed struct Qgy_YASP_Sort_Information
    {
       int  Number_Sort_Keys;
     /*Qgy_YASP_Sort_Data_t Sort_Keys[];*//* Varying length. */
    } Qgy_YASP_Sort_Information_t;


#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(pop)       /* @B1A*/
#endif                       /* @B1A*/
 #endif
