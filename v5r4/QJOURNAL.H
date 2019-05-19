/* begin_generated_IBM_copyright_prolog                              */
/* This is an automatically generated copyright prolog.              */
/* After initializing,  DO NOT MODIFY OR MOVE                        */
/* ----------------------------------------------------------------- */
/*                                                                   */
/* Product(s):                                                       */
/*     5769-SS1                                                      */
/*     5722-SS1                                                      */
/*                                                                   */
/* (C)Copyright IBM Corp.  1999, 2005                                */
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
#ifndef _QJOURNAL_H
#define _QJOURNAL_H

/*** START HEADER FILE SPECIFICATIONS ********************************/
/*                                                                   */
/* Header File Name: H/QJOURNAL                                      */
/*                                                                   */
/* Descriptive Name: Journal API's                                   */
/*                                                                   */
/* Description: Include header file containing the structure         */
/*              definitions and prototypes for the Journal           */
/*              API's for the QJOURNAL service program.              */
/*                                                                   */
/* Header Files Included:                                            */
/*                        H/POINTER                                  */
/*                        H/LIMITS                                   */
/*                        H/XA                                   @ACA*/
/*                        NETINET/IN                             @ACA*/
/*                                                                   */
/* Macros List: None.                                                */
/*                                                                   */
/* Structure List:                                                   */
/*                  Qjo_ADRJ0100_t                 | Add Remote      */
/*                                                 | Journal API     */
/*                                                                   */
/*                                                                   */
/*                  Qjo_CJST0100_Req_t             | Change Journal  */
/*                  Qjo_CJST0200_Req_t             | State API       */
/*                  Qjo_CJST0300_Req_t             |                 */
/*                  Qjo_CJST0300_Rcv_t             |                 */
/*                  Qjo_CJST0400_Req_t             |                 */
/*                  Qjo_CJST0500_Req_t             |                 */
/*                                                                   */
/*                                                                   */
/*                  Qjo_RMRJ0100_t                 | Remove Remote   */
/*                                                 | Journal API     */
/*                                                                   */
/*                                                                   */
/*                  Qjo_JN_Jrn_Info_Retrieve_t     | Retrieve Journal*/
/*                  Qjo_JN_Fmt_Var_Len_Rcrd_t      | Information API */
/*                  Qjo_JN_Data_Key_1_t            |                 */
/*                  Qjo_JN_Data_Key_2_t            |                 */
/*                  Qjo_JN_Data_Key_3_t            |                 */
/*                  Qjo_RJRN0100_t                 |                 */
/*                  Qjo_RJRN0200_t                 |             @AMA*/
/*                  Qjo_JN_Repeating_Key_Fields_t  |                 */
/*                  Qjo_JN_Key_1_Output_Section_t  |                 */
/*                  Qjo_JN_Repeating_Key_1_Output_t|                 */
/*                  Qjo_JN_Key_2_Output_Section_t  |                 */
/*                  Qjo_JN_Repeating_Key_2_Output_t|                 */
/*                  Qjo_JN_Key_3_Output_Section_t  |                 */
/*                  Qjo_JN_Repeating_Key_3_Output_t|                 */
/*                                                                   */
/*                                                                   */
/*                  Qjo_RRCV0100_t                 | Retrieve Journal*/
/*                                                 | Receiver        */
/*                                                 | Information API */
/*                                                                   */
/*                  Qjo_JE_Fmt_Var_Len_Rcrd_t      | Retrieve Journal*/
/*                  Qjo_JE_Jrn_Info_Retrieve_t     | Entries API     */
/*                  Qjo_JE_Rcv_Range_Fmt_t         |                 */
/*                  Qjo_JE_Data_Key_1_t            |                 */
/*                  Qjo_JE_Data_Key_2_t            |                 */
/*                  Qjo_JE_Data_Key_3_t            |                 */
/*                  Qjo_JE_Data_Key_4_t            |                 */
/*                  Qjo_JE_Data_Key_5_t            |                 */
/*                  Qjo_JE_Data_Key_6_t            |                 */
/*                  Qjo_JE_Jrn_Codes_t             |                 */
/*                  Qjo_JE_Data_Key_7_t            |                 */
/*                  Qjo_JE_Data_Key_8_t            |                 */
/*                  Qjo_JE_Data_Key_9_t            |                 */
/*                  Qjo_JE_Data_Key_10_t           |                 */
/*                  Qjo_JE_Data_Key_11_t           |                 */
/*                  Qjo_JE_Data_Key_12_t           |                 */
/*                  Qjo_JE_Data_Key_13_t           |                 */
/*                  Qjo_JE_Data_Key_14_t           |                 */
/*                  Qjo_JE_Data_Key_15_t           |                 */
/*                  Qjo_JE_File_Members_t          |                 */
/*                  Qjo_JE_Data_Key_16_t           |                 */
/*                  Qjo_JE_Data_Key_17_t           |                 */
/*                  Qjo_JE_Data_Key_18_t           |                 */
/*                  Qjo_JE_Data_Key_19_t           |                 */
/*                  Qjo_JE_Data_Key_20_t           |                 */
/*                  Qjo_JE_Data_Key_21_t           |                 */
/*                  Qjo_JE_Data_Key_22_t           |                 */
/*                  Qjo_RJNE0100_Hdr_t             |                 */
/*                  Qjo_RJNE0100_JE_Hdr_t          |                 */
/*                  Qjo_RJNE0100_JE_NVI_Varlen_t   |                 */
/*                  Qjo_RJNE0100_JE_NVI_Fld_Len_t  |                 */
/*                  Qjo_RJNE0100_JE_ESD_t          |                 */
/*                  Qjo_RJNE0200_Hdr_t             |             @ACA*/
/*                  Qjo_RJNE0200_JE_Hdr_t          |             @ACA*/
/*                  Qjo_RJNE0200_Receiver_Information_t          @AGA*/
/*                                                                   */
/*                  Qjo_Path_Name_t                | Start Journal   */
/*                  Qjo_Object_Entry_t             | and End Journal */
/*                  Qjo_Object_Entry_Array_t       | APIs            */
/*                  Qjo_File_ID_Entry_Array_t      |                 */
/*                  Qjo_Option_t                   |                 */
/*                  Qjo_Journal_Options_t          |                 */
/*                                                                   */
/*                                                                   */
/* Function Prototype List:                                          */
/*                          QjoAddRemoteJournal                      */
/*                          QjoChangeJournalState                    */
/*                          QjoRemoveRemoteJournal                   */
/*                          QjoRetrieveJournalInformation            */
/*                          QjoRtvJrnReceiverInformation             */
/*                          QjoRetrieveJournalEntries                */
/*                          QjoDeletePointerHandle                   */
/*                          QjoStartJournal                          */
/*                          QjoEndJournal                            */
/*                                                                   */
/*                                                                   */
/* Restrictions:                                                     */
/*    WARNING: Variables that are declared in this include must be   */
/*             no longer than 30 characters in length!!!!!!!!!!!!!   */
/*    WARNING: All lines must be 80 characters maximum because   @04A*/
/*             this file ends up in a 80 char record!!!!!!!!!!!! @04A*/
/*             To verify that the file is still "legal do the    @04A*/
/*             following command:                                @04A*/
/*             cat qjournal.cleinc | cut -c81-9999 | grep -n '.' @04A*/
/*                                                                   */
/* Change Activity:                                                  */
/*                                                                   */
/* CFD List:                                                         */
/*                                                                   */
/* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION       */
/* ---- ------------ ----- ------ -------   ------------------------ */
/* $A0= D9485900     4D20  970310 VTT       New Include for V4R2     */
/* $01= P3650574     4D20  970728 HVRDFC    D9485900 added changes   */
/* $02= P3650574     4D20  970731 HVRJT     Modify var names, must   */
/*                                          be <= 30 chars in length */
/* $A1= D9714800     4D40  980611 KTH       Add Header Information   */
/*                                          for Retrieve Journal     */
/*                                          Entries and Delete       */
/*                                          Pointer Handle API's     */
/* $A2= D9714800     4D40  980921 KTH       Moved various structure  */
/*                                          declarations for         */
/*                                          commented variable       */
/*                                          length records declares  */
/*                                          in Retrieve Jrn Info     */
/*                                          section to be before     */
/*                                          the commented declares   */
/*                                          rather than after.       */
/* $A3= D9750400     4D50  990201 47UDFC:   Changes to increase      */
/*                                          receiver size and        */
/*                                          sequence numbers.        */
/* $A4= D9746400     5D10  991217 47UTRS:   Add fields for number of */
/*                                          data areas, data queues, */
/*                                          IFS objects of type      */
/*                                          *DIR, *STMF, *SYMLNK     */
/*                                          Add Ignore APYJRNCHG and */
/*                                          RMVJRNCHG field.         */
/* $A5= D98212.6    v5r1m0 010400 gchaney:  Teraspace stage 2        */
/* $A6= D9746410    5d10   000309 Ray:      Add QjoStartJournal and  */
/*                                          QjoEndJournal APIs.      */
/* $A7= D9566200    5D10   000509 47UDFZ:   Changes for Journal      */
/*                                47UDFC:   Minimal Data and the     */
/*                                          addition of single quoted*/
/*                                          1 character #define items*/
/* $A8= D9777700    5D10   000509 47UDFZ:   Changes for 2 Gigabyte   */
/*                                47UDFC:   Lobs                     */
/* $A9= D9766000    v5r2m0 010308 47UDFZ:   Changes for STANDBY state*/
/* $AA= D9835600    v5r2m0 010308 47UDFZ:   Changes for JRNCACHE     */
/* $03= P9946317    v5r2m0 010402 47UDFZ:   Fixed RJRN0100 format    */
/* $AB= D9841600    v5r2m0 010619 47UDFZ:   IASP stage 2             */
/* $AC= D9888202    v5r2m0 010801 Ray: Intrusion detection enablement*/
/* $04= P9951430    v5r2m0 010806 Ray: Make all lines 80 chars max   */
/* $AD= D9888200    v5r2m0 010810 Ray: Move Fixed_Length_Data_SYSSEQ */
/* $AE= D9841600    v5r2m0 010918 RMorse:  Add dltRcvDelay value for */
/*                                         AddRmtJrn                 */
/* $AF= P9956678    v5r2m0 011115 Ray: Fix 16 byte bdy for 0200 rec  */
/* $AG= P9A01583    v5r2m0 020206 Ray: Change Qjo_RJNE0200_Hdr_t and */
/*                                     Qjo_RJNE0200_JE_Hdr_t to hold */
/*                                     continuation information.     */
/* $05= P9A14556    v5r3m0 020628 47UDFZ:changes for cxcl400 compiler*/
/*                                       remove extern "C" from      */
/*                                       QjoStartJournal and         */
/*                                       QjoEndJournal APIs          */
/* $AH= D9925400    v5r3m0 020917 47UDFZ:  MAXOPT3 changes           */
/* $AI= D9925400    v5r3m0 021025 47URKM:  count version of count/rrn*/
/*                                       can now exceed 10 digits.   */
/* $06= P9A70762    v5r4m0 030528 ROCH:   put extern "C" back into   */
/*                                        QjoStartJournal and        */
/*                                        QjoEndJournal APIs and     */
/*                                        remove QlgStartJournal and */
/*                                        QlgEndJournal              */
/* $AJ= D9995200    v5r4m0 040407 ROCH:    add object keys to        */
/*                                         QjoRetrieveJournalEntries */
/*                                         and new fields to RJNE0200*/
/* $AL= D9981400    v5r4m0 040524 ROCH:    Add recovery count value  */
/*      D9977800                        to RJRN0100, RJRN0200 for    */
/*                                      QjoRetrieveJournalInformation*/
/*                                      Add minimized on field       */
/*                                      boundaries indicator and     */
/*                                      nested commit level to       */
/*                                      RJNE0200 and add format      */
/*                                      minimized entry key to       */
/*                                      QjoRetrieveJournalEntries.   */
/*                                      Define QJO_FORMAT_MIN_DATA_xx*/
/*                                      for formatting minimized data*/
/*                                      Define QJO_MIN_ESD_FIL_2 for */
/*                                      minimized on field boundaries*/
/* $AM= D9976800    v5r4m0 040926 ROCH:   add RJRN0200, total number */
/*                                       journaled objects, journal  */
/*                                       object limit to API for     */
/*                                       Retrieve Journal Information*/
/*                                                                   */
/* End CFD List.                                                     */
/*                                                                   */
/* Additional notes about the Change Activity                        */
/*                                                                   */
/* End Change Activity.                                              */
/*                                                                   */
/*** END HEADER FILE SPECIFICATIONS **********************************/

/*********************************************************************/
#if (__OS400_TGTVRM__>=510)                                   /* @A5A*/
#pragma datamodel(P128)                                   /* @A5A*/
#endif                                                        /* @A5A*/

#ifndef __QBFC_EXTERN
    #ifdef __ILEC400__
        #define QBFC_EXTERN extern
    #else
        #define QBFC_EXTERN extern "C"
    #endif

    #define __QBFC_EXTERN
#endif

#include <qlg.h>                      /*  Qlg_Path_Name_T  */
#include <qp0lstdi.h>                 /*  Qp0lFID_t        */
#include <qusec.h>                    /*  Qus_EC_t         */
#include <xa.h>                       /*  xid_t            @ACA*/
#include <netinet/in.h>               /*  INET6_ADDRSTRLEN @ACA*/

/*********************************************************************/
/* Common Type Definitions.                                          */
/*********************************************************************/
/*********************************************************************/

typedef char Qjo_Qual_Jrn_Name_t[20];
typedef char Qjo_Rel_DB_Dir_Entry_t[18];
typedef long int Qjo_Length_Req_Var_t;
typedef char Qjo_Format_Name_Req_Var_t[8];
typedef char Qjo_Qual_Rmt_Jrn_Name_t[20];
typedef char Qjo_Remote_Jrn_Rcv_Lib_Name_t[10];
typedef char Qjo_Remote_Jrn_Type_t;
typedef char Qjo_Text_t[50];
typedef long int Qjo_Length_Rcv_Var_t;
typedef long int Qjo_Bytes_Returned_t;
typedef long int Qjo_Bytes_Available_t;
typedef char Qjo_Qual_Jrn_Rcv_Name_t[20];
typedef long int Qjo_Sending_Task_Prior_t;
typedef char Qjo_Format_Name_t[8];
typedef char Qjo_Jrn_Name_t[10];
typedef char Qjo_Jrn_Lib_Name_t[10];
typedef long int Qjo_Aux_Stg_Pool_t;
typedef char Qjo_Lcl_Jrn_Name_t[10];
typedef char Qjo_Lcl_Jrn_Lib_Name_t[10];
typedef char Qjo_Lcl_Jrn_System_t[8];
typedef char Qjo_Src_Jrn_Name_t[10];
typedef char Qjo_Src_Jrn_Lib_Name_t[10];
typedef char Qjo_Src_Jrn_System_t[8];
typedef char Qjo_Jrn_Rcv_Name_t[10];
typedef char Qjo_Jrn_Rcv_Lib_Name_t[10];
typedef long int Qjo_Num_Var_Len_Rcrds_t;
typedef long int Qjo_Len_Var_Len_Rcrd_t;
typedef long int Qjo_Key_t;
typedef long int Qjo_Len_Of_Data_t;
typedef long int Qjo_Number_Entries_t;
typedef unsigned long int Qjo_Ptr_Handle_t;
typedef char Qjo_Seq_Num_t[20];
typedef char Qjo_Min_ESD_Dta_t;                               /* @A7A*/
typedef char Qjo_Min_ESD_Fil_t;                               /* @A7A*/
typedef char Qjo_ASP_Dev_Name_t[10];                          /* @ABA*/
typedef char Qjo_Lcl_Jrn_ASP_Grp_Name_t[10];                  /* @ABA*/
typedef char Qjo_Src_Jrn_ASP_Grp_Name_t[10];                  /* @ABA*/
typedef long int Qjo_Dlt_Rcv_Dly_t;                           /* @ABA*/
typedef char Qjo_Object_Type_t[10];                           /* @AJM*/
typedef char Qjo_Object_Name_t[10];                           /* @AJM*/
typedef char Qjo_Object_Lib_Name_t[10];                       /* @AJM*/
typedef char Qjo_Include_Entries_t[10];

typedef _Packed struct Qjo_Path_Name
{
    Qlg_Path_Name_T        Path_Header;/* The path name structure.      */
                                       /* This field is a path name     */
                                       /* structure.  The path name     */
                                       /* itself, described by this     */
                                       /* structure, is in the Path     */
                                       /* field.                        */
    union {
        char          sb_name[1];     /* path name is a character string*/
        char          *sb_ptr;        /* path name is a pointer to a    */
                                      /* character string of single byte*/
                                      /* characters                     */
        char_double_t db_name[1];     /* path name is a character       */
                                      /* string of double byte chars    */
        char_double_t *db_ptr;        /* path name is a pointer to a    */
                                      /* character string of double byte*/
                                      /* characters                     */
    } Path;                           /* The path name itself.  It is   */
                                      /* described by the preceding     */
                                      /* PathHeader field.              */
} Qjo_Path_Name_t;                    /*                            @AJM*/

typedef _Packed struct Qjo_Object_Entry
{
    unsigned int           Length_Of_Object_Entry;
    Qjo_Include_Entries_t  Include_Or_Omit;
    char                   reserved[2];
    Qlg_Path_Name_T       *Path_Name;
} Qjo_Object_Entry_t;                 /*                            @AJM*/

typedef _Packed struct Qjo_Object_Entry_Array
{
    unsigned int        Number_In_Array;
    char                reserved[12];
    Qjo_Object_Entry_t  Entry[1];  /*  This is actually a variable
                                  length array that will have
                                  Number_In_Array elements.      */
} Qjo_Object_Entry_Array_t;           /*                            @AJM*/

typedef _Packed struct Qjo_File_ID_Entry_Array
{
    unsigned int        Number_In_Array;
    char                reserved[12];

    Qp0lFID_t           Entry[1]; /* This is actually a variable
                                  length array that will have
                                  Number_In_Array elements.      */
} Qjo_File_ID_Entry_Array_t;          /*                            @AJM*/


/*********************************************************************/
/*********************************************************************/
/* Type Definitions for Add Remote Journal (QjoAddRemoteJournal) API.*/
/*********************************************************************/
/*********************************************************************/

typedef char Qjo_Qual_Jrn_Msg_Queue_t[20];
typedef char Qjo_Delete_Receivers_t;


/*********************************************************************/
/*********************************************************************/
/* Type Definitions for Change Journal State (QjoChangeJournalState) */
/*  API.                                                             */
/*********************************************************************/
/*********************************************************************/

typedef char Qjo_New_Journal_State_t;
typedef char Qjo_Remote_Journal_t[20];
typedef char Qjo_Prefrd_Inact_Type_t;
typedef char Qjo_Inactivate_Type_t;
typedef char Qjo_Inact_Jrn_Rcv_Nm_t[10];
typedef char Qjo_Inact_Jrn_Rcv_Lib_t[10];
typedef long int Qjo_Inact_Seq_Num_t;
typedef char Qjo_Starting_Jrn_Rcv_t[20];


/*********************************************************************/
/*********************************************************************/
/* Type Definitions for Retrieve Journal Information                 */
/*  (QjoRetrieveJournalInformation) API.                             */
/*********************************************************************/
/*********************************************************************/

typedef char Qjo_Journaled_Obj_Info_t[10];
typedef char Qjo_Remote_Jrn_Info_t[38];
typedef long int Qjo_Off_Key_Info_t;
typedef char Qjo_Message_Queue_Name_t[10];
typedef char Qjo_Message_Queue_Lib_Name_t[10];
typedef char Qjo_Manage_Receiver_Option_t;
typedef char Qjo_Delete_Receiver_Option_t;
typedef char Qjo_Rcv_Size_Opt_RMVINTENT_t;
typedef char Qjo_Rcv_Size_Opt_MINFIXLEN_t;
typedef char Qjo_Rcv_Size_Opt_MAXOPT1_t;
typedef char Qjo_Rcv_Size_Opt_MAXOPT2_t;                      /* @A8A*/
typedef char Qjo_Rcv_Size_Opt_MAXOPT3_t;                      /* @AHA*/
typedef char Qjo_Jrn_Object_Limit_Opt_t;                      /* @AMA*/
typedef char Qjo_Journal_Type_t;
typedef char Qjo_Journal_State_t;
typedef char Qjo_Journal_Delivery_Mode_t;
typedef char Qjo_Redirected_Rcv_Lib_Nm_t[10];
typedef char Qjo_Journal_Text_t[50];
typedef long int Qjo_Num_Att_Jrn_Rcvs_t;
typedef char Qjo_Att_Jrn_Rcv_Name_t[10];
typedef char Qjo_Att_Jrn_Rcv_Lib_Name_t[10];
typedef char Qjo_Lcl_Jrn_Sys_Asc_Att_Rcv_t[8];
typedef char Qjo_Src_Jrn_Sys_Asc_Att_Rcv_t[8];
typedef char Qjo_Att_Dual_Jrn_Rcv_Name_t[10];
typedef char Qjo_Att_Dual_Rcv_Lib_Name_t[10];
typedef long int Qjo_Mng_Rcv_Dly_t;                           /* @ABA*/
typedef long int Qjo_Num_Of_Key_Flds_t;
typedef long int Qjo_Off_Strt_Key_Info_t;
typedef long int Qjo_Len_Key_Info_Hdr_Sec_t;
typedef long int Qjo_Len_Ent_Key_Info_Lst_Sec_t;
typedef long int Qjo_Tot_Num_Jrn_Rcvs_t;
typedef long int Qjo_Tot_Size_Jrn_Rcvs_t;
typedef long int Qjo_Tot_Size_Jrn_Rcvs_Mult_t;
typedef char Qjo_Jrn_Rcv_Number_t[5];
typedef char Qjo_Jrn_Rcv_Att_Date_Time_t[13];
typedef char Qjo_Jrn_Rcv_Status_t;
typedef char Qjo_Jrn_Rcv_Save_Date_Time_t[13];
typedef char Qjo_Lcl_Jrn_Sys_Asc_Jrn_Rcv_t[8];
typedef char Qjo_Src_Jrn_Sys_Asc_Jrn_Rcv_t[8];
typedef long int Qjo_Jrn_Rcv_Size_t;
typedef long int Qjo_Tot_Num_Jrn_Files_t;
typedef long int Qjo_Tot_Num_Jrn_Mbrs_t;
typedef long int Qjo_Tot_Num_Jrn_DtaAs_t;
typedef long int Qjo_Tot_Num_Jrn_DtaQs_t;
typedef long int Qjo_Tot_Num_Jrn_IFS_t;
typedef long int Qjo_Tot_Num_Jrn_APs_t;                        /* @AMA*/
typedef long int Qjo_Tot_Num_Jrn_Cmt_Defs_t;                   /* @AMA*/
typedef long int Qjo_Tot_Num_Jrn_All_Objs_t;                   /* @AMA*/
typedef char Qjo_Object_File_ID_t[16];
typedef long int Qjo_Tot_Num_Rmt_Jrns_t;
typedef char Qjo_Remote_Jrn_Name_t[10];
typedef char Qjo_Remote_Jrn_Lib_Name_t[10];
typedef char Qjo_Remote_Jrn_State_t;
typedef char Qjo_Remote_Jrn_Delivery_Mode_t;
typedef char Qjo_Ctl_Inact_Jrn_St_Jrn_Rcv_t[10];
typedef char Qjo_Ctl_Inact_Jrn_St_Rcv_Lib_t[10];
typedef long int Qjo_Ctl_Inact_Jrn_St_Seq_Num_t;
typedef char Qjo_Rel_DB_Dir_Entry_Dtls_t[512];
typedef char Qjo_JN_Data_t;
typedef char Qjo_Jrn_Cache_t;                                 /* @AAA*/
typedef long int Qjo_Jrn_Recovery_Cnt_t;                      /* @ALA*/


/*********************************************************************/
/*********************************************************************/
/* Type Definitions for Retrieve Journal Receiver Information        */
/*  (QjoRtvJrnReceiverInformation) API.                              */
/*********************************************************************/
/*********************************************************************/

typedef long int Qjo_Threshold_t;
typedef long int Qjo_Size_t;
typedef long int Qjo_Num_Jrn_Entries_t;
typedef char Qjo_Num_Jrn_Entries_Long_t[20];
typedef long int Qjo_Max_Ent_Spc_Data_Len_t;
typedef char Qjo_Max_ESD_Len_Long_t[20];
typedef long int Qjo_Max_Null_Val_Ind_t;
typedef long int Qjo_First_Seq_Num_t;
typedef long int Qjo_Last_Seq_Num_t;
typedef char Qjo_Status_t;
typedef char Qjo_Min_Fxd_Len_Val_t;
typedef char Qjo_Fixed_Length_Data_t;    /* @ACA*/
typedef char Qjo_Rcv_Max_Opt_Val_t;
typedef char Qjo_Attach_Date_Time_t[13];
typedef char Qjo_Detach_Date_Time_t[13];
typedef char Qjo_Saved_Date_Time_t[13];
typedef char Qjo_Pending_Trans_t;
typedef char Qjo_Lcl_Jrn_Rcv_Lib_Name_t[10];
typedef char Qjo_Src_Jrn_Rcv_Lib_Name_t[10];
typedef char Qjo_Redirected_Jrn_Rcv_Lib_t[10];
typedef char Qjo_Dual_Jrn_Rcv_Name_t[10];
typedef char Qjo_Dual_Jrn_Rcv_Lib_Name_t[10];
typedef char Qjo_Prev_Jrn_Rcv_Name_t[10];
typedef char Qjo_Prev_Jrn_Rcv_Lib_Name_t[10];
typedef char Qjo_Prev_Dual_Jrn_Rcv_Name_t[10];
typedef char Qjo_Prev_Dual_Jrn_Rcv_Lib_Nm_t[10];
typedef char Qjo_Next_Jrn_Rcv_Name_t[10];
typedef char Qjo_Next_Jrn_Rcv_Lib_Name_t[10];
typedef char Qjo_Next_Dual_Jrn_Rcv_Name_t[10];
typedef char Qjo_Next_Dual_Jrn_Rcv_Lib_Nm_t[10];


/*********************************************************************/
/*********************************************************************/
/* Type Definitions for Retrieve Journal Entries                     */
/*  (QjoRetrieveJournalEntries) API.                                 */
/*********************************************************************/
/*********************************************************************/

#define QJORETRIEVEJOURNALENTRIES_RCVRNG_KEY      1            /* @AJA*/
#define QJORETRIEVEJOURNALENTRIES_FROMENT_KEY     2            /* @AJA*/
#define QJORETRIEVEJOURNALENTRIES_FROMTIME_KEY    3            /* @AJA*/
#define QJORETRIEVEJOURNALENTRIES_TOENT_KEY       4            /* @AJA*/
#define QJORETRIEVEJOURNALENTRIES_TOTIME_KEY      5            /* @AJA*/
#define QJORETRIEVEJOURNALENTRIES_NBRENT_KEY      6            /* @AJA*/
#define QJORETRIEVEJOURNALENTRIES_JRNCDE_KEY      7            /* @AJA*/
#define QJORETRIEVEJOURNALENTRIES_ENTTYP_KEY      8            /* @AJA*/
#define QJORETRIEVEJOURNALENTRIES_JOB_KEY         9            /* @AJA*/
#define QJORETRIEVEJOURNALENTRIES_PGM_KEY        10            /* @AJA*/
#define QJORETRIEVEJOURNALENTRIES_USRPRF_KEY     11            /* @AJA*/
#define QJORETRIEVEJOURNALENTRIES_CMTCYCID_KEY   12            /* @AJA*/
#define QJORETRIEVEJOURNALENTRIES_DEPENT_KEY     13            /* @AJA*/
#define QJORETRIEVEJOURNALENTRIES_INCENT_KEY     14            /* @AJA*/
#define QJORETRIEVEJOURNALENTRIES_NULLINDLEN_KEY 15            /* @AJA*/
#define QJORETRIEVEJOURNALENTRIES_FILE_KEY       16            /* @AJA*/
#define QJORETRIEVEJOURNALENTRIES_OBJ_KEY        17            /* @AJA*/
#define QJORETRIEVEJOURNALENTRIES_OBJPATH_KEY    18            /* @AJA*/
#define QJORETRIEVEJOURNALENTRIES_OBJFID_KEY     19            /* @AJA*/
#define QJORETRIEVEJOURNALENTRIES_SUBTREE_KEY    20            /* @AJA*/
#define QJORETRIEVEJOURNALENTRIES_PATTERN_KEY    21            /* @AJA*/
#define QJORETRIEVEJOURNALENTRIES_FMTMINDTA_KEY  22            /* @ALA*/

/*********************************************************************/
/* Input Type Definitions                                            */
/*********************************************************************/
typedef char Qjo_Job_t[26];
typedef char Qjo_Dependent_Entries_t[10];
typedef char Qjo_NVI_Len_t[10];
typedef char Qjo_Jrn_Code_Value_t[10];
typedef char Qjo_Jrn_Code_Selection_t[10];
typedef long int Qjo_Num_In_Array_t;
typedef char Qjo_Jrn_Entry_Type_t[10];
typedef char Qjo_File_Name_t[10];
typedef char Qjo_Library_Name_t[10];
typedef char Qjo_Member_Name_t[10];
typedef char Qjo_JE_Data_t;
typedef char Qjo_Subtree_t[5];                                /* @AJA*/
typedef char Qjo_Format_Min_Data_t[10];                       /* @ALA*/

/*********************************************************************/
/* Output Type Definitions                                           */
/*********************************************************************/
typedef unsigned long long Qjo_Unformatted_CCID_t;            /* @ACA*/
typedef unsigned long long Qjo_Unformatted_Seq_Num_t;         /* @ACA*/
typedef char Qjo_Address_Family_t;                            /* @ACA*/
typedef char Qjo_Remote_Address_t[16];                        /* @ACA*/
typedef unsigned short Qjo_Remote_Port_t;                     /* @ACA*/
typedef unsigned short Qjo_Arm_Number_t;                      /* @ACA*/
typedef char Qjo_Name_t[10];                                  /* @ACA*/
typedef unsigned short Qjo_ASP_t;                             /* @ACA*/
typedef char Qjo_LUW_t[39];                                   /* @ACA*/
typedef unsigned long long Qjo_Unformatted_Time_Stamp_t;      /* @ACA*/
typedef unsigned long long Qjo_Thread_ID_t;                   /* @ACA*/
typedef unsigned long long Qjo_System_Sequence_Number_t;      /* @ACA*/
typedef unsigned long long Qjo_Unformatted_Count_RRN_t;       /* @ACA*/
typedef unsigned int Qjo_Dsp_XID_t;                           /* @ACA*/
typedef unsigned int Qjo_Dsp_LUW_t;                           /* @ACA*/
typedef unsigned int Qjo_Dsp_Receiver_Information_t;          /* @AGA*/
typedef long int Qjo_Offset_First_Jrn_Entry_t;
typedef long int Qjo_Dsp_Next_Jrn_Entry_Hdr_t;
typedef long int Qjo_Dsp_NVI_t;
typedef long int Qjo_Dsp_Entry_Specific_Data_t;
typedef char Qjo_Jrn_Code_t;
typedef char Qjo_Entry_Type_t[2];
typedef char Qjo_Job_Name_t[10];
typedef char Qjo_User_Name_t[10];
typedef char Qjo_Job_Number_t[6];
typedef char Qjo_Object_t[30];
typedef char Qjo_Count_Rel_Rec_Num_t[10];
typedef char Qjo_Indicator_Flag_t;
typedef char Qjo_System_Name_t[8];
typedef char Qjo_Jid_t[10];
typedef char Qjo_Referential_Constraint_t;
typedef char Qjo_Trigger_t;
typedef char Qjo_Incomplete_Data_t;
typedef char Qjo_Object_Name_Indicator_t;
typedef char Qjo_Ignore_during_APYRMV_t;
typedef char Qjo_Min_ESD_t;                                   /* @A7A*/
typedef long int Qjo_Nested_Commit_Level;                     /* @ALA*/
typedef long int Qjo_Length_NVI_t;
typedef char Qjo_NVI_t;
typedef char Qjo_Len_ESD_t[5];
typedef char Qjo_ESD_t;
typedef char Qjo_Continuation_Handle_t;
typedef char Qjo_Continuation_Indicator_t;                    /* @AGA*/

/*********************************************************************/
/* Type Definitions common to Both Input and Output                  */
/*********************************************************************/
typedef char Qjo_Program_Name_t[10];
typedef char Qjo_Time_Stamp_t[26];
typedef char Qjo_User_Profile_t[10];
typedef char Qjo_Commit_Cycle_Id_t[20];


/*********************************************************************/
/*********************************************************************/
/* Type Definitions for Start Journal                                */
/*  (QjoStartJournal) API.                                           */
/*********************************************************************/
/*********************************************************************/
#define QJO_KEY_SUBTREE   1
#define QJO_KEY_PATTERN   2
#define QJO_KEY_INHERIT   3
#define QJO_KEY_IMAGES    4
#define QJO_KEY_OMTJRNE   5

#define QJO_KEY_MINIMUM_RECORD_LENGTH  32
#define QJO_KEY_PATTERN_LENGTH 48
#define QJO_KEY_PATTERN_ENTRY_LENGTH 32
#define QJO_MINMUM_OBJECT_ENTRY_LENGTH 32
#define QJO_KEY_MINIMUM_PATTERNS   1
#define QJO_KEY_MAXIMUM_PATTERNS   20

#define QJO_INC_ENT_LENGTH    10
#define QJO_INC_ENT_INCLUDE   "*INCLUDE  "
#define QJO_INC_ENT_OMIT      "*OMIT     "

#define QJO_KEY_INHERIT_LENGTH  4
#define QJO_INHERIT_YES       "*YES"
#define QJO_INHERIT_NO        "*NO "

#define QJO_KEY_IMAGES_LENGTH  6
#define QJO_IMAGES_BOTH       "*BOTH "
#define QJO_IMAGES_AFTER      "*AFTER"

#define QJO_KEY_OMTJRNE_LENGTH   10
#define QJO_OMTJRNE_NONE      "*NONE     "
#define QJO_OMTJRNE_OPNCLOSYN "*OPNCLOSYN"

typedef _Packed struct Qjo_Option
{
   unsigned int                Length_Of_Record;
   unsigned int                Key;
   unsigned int                Length_Of_Data;
   char                        reserved[4];
   char                        Data[1];/* Varying length data depending
                                          on Option.      */
} Qjo_Option_t;

typedef _Packed struct Qjo_Journal_Options
{
   unsigned int                Number_Of_Options;
   char                        reserved[12];
   Qjo_Option_t                Option[1]; /* This is actually a variable
                                  length array that will have
                                  Number_Of_Options elements.      */
} Qjo_Journal_Options_t;



/*********************************************************************/
/*********************************************************************/
/* Start Of Common Defines.                                          */
/*********************************************************************/
/*********************************************************************/


/*********************************************************************/
/* Valid values for the library name.                                */
/*********************************************************************/

#define  QJO_LIBL                           "*LIBL     "
#define  QJO_CURLIB                         "*CURLIB   "


/*********************************************************************/
/* Valid values for Remote Journal Type.                             */
/* Represented in single and double quoted versions.             @A7A*/
/*********************************************************************/

#define  QJO_RMT_JRN_TYPE_BS                ' '
#define  QJO_RMT_JRN_TYPE_0S                '0'
#define  QJO_RMT_JRN_TYPE_1S                '1'
#define  QJO_RMT_JRN_TYPE_2S                '2'

#define  QJO_RMT_JRN_TYPE_B                 " "
#define  QJO_RMT_JRN_TYPE_0                 "0"
#define  QJO_RMT_JRN_TYPE_1                 "1"
#define  QJO_RMT_JRN_TYPE_2                 "2"


/*********************************************************************/
/* Valid values for Journal State.                                   */
/* Represented in single and double quoted versions.             @A7A*/
/*********************************************************************/

#define  QJO_JRN_STATE_0S                   '0'
#define  QJO_JRN_STATE_1S                   '1'
#define  QJO_JRN_STATE_2S                   '2'
#define  QJO_JRN_STATE_3S                   '3'
#define  QJO_JRN_STATE_4S                   '4'
#define  QJO_JRN_STATE_5S                   '5'               /*@A9A*/

#define  QJO_JRN_STATE_0                    "0"
#define  QJO_JRN_STATE_1                    "1"
#define  QJO_JRN_STATE_2                    "2"
#define  QJO_JRN_STATE_3                    "3"
#define  QJO_JRN_STATE_4                    "4"
#define  QJO_JRN_STATE_5                    "5"               /*@A9A*/


/*********************************************************************/
/* Valid values for Journal Receiver Status.                         */
/* Represented in single and double quoted versions.             @A7A*/
/*********************************************************************/

#define  QJO_JRN_RCV_STATUS_1S              '1'
#define  QJO_JRN_RCV_STATUS_2S              '2'
#define  QJO_JRN_RCV_STATUS_3S              '3'
#define  QJO_JRN_RCV_STATUS_4S              '4'
#define  QJO_JRN_RCV_STATUS_5S              '5'
#define  QJO_JRN_RCV_STATUS_6S              '6'

#define  QJO_JRN_RCV_STATUS_1               "1"
#define  QJO_JRN_RCV_STATUS_2               "2"
#define  QJO_JRN_RCV_STATUS_3               "3"
#define  QJO_JRN_RCV_STATUS_4               "4"
#define  QJO_JRN_RCV_STATUS_5               "5"
#define  QJO_JRN_RCV_STATUS_6               "6"


/*********************************************************************/
/* Valid values for Minimize Entry Data for Data Areas.          @A7A*/
/*********************************************************************/

#define  QJO_MIN_ESD_DTA_B                  ' '
#define  QJO_MIN_ESD_DTA_0                  '0'
#define  QJO_MIN_ESD_DTA_1                  '1'


/*********************************************************************/
/* Valid values for Minimize Entry Data for Files.               @A7A*/
/*********************************************************************/

#define  QJO_MIN_ESD_FIL_B                  ' '
#define  QJO_MIN_ESD_FIL_0                  '0'
#define  QJO_MIN_ESD_FIL_1                  '1'
#define  QJO_MIN_ESD_FIL_2                  '2'               /* @ALA*/


/*********************************************************************/
/* Valid values for Journal Cache.                               @AAA*/
/*********************************************************************/

#define  QJO_JRN_CACHE_0                    '0'
#define  QJO_JRN_CACHE_1                    '1'


/*********************************************************************/
/* Valid values for ASP Device Name                              @ABA*/
/*********************************************************************/

#define  QJO_ASP_DEV_NAME_SYSBAS            "*SYSBAS   "


/*********************************************************************/
/* Valid values for Local Journal ASP Group Name                 @ABA*/
/*********************************************************************/

#define  QJO_LCL_JRN_ASP_GRP_NAME_SYSBAS    "*SYSBAS   "


/*********************************************************************/
/* Valid values for Source Journal ASP Group Name                @ABA*/
/*********************************************************************/

#define  QJO_SRC_JRN_ASP_GRP_NAME_SYSBAS    "*SYSBAS   "


/*********************************************************************/
/* Valid values for Directory Subtree.                           @AJM*/
/*********************************************************************/

#define QJO_KEY_SUBTREE_LENGTH 5

#define QJO_SUBTREE_NONE      "*NONE"
#define QJO_SUBTREE_ALL       "*ALL "


/*********************************************************************/
/*********************************************************************/
/* Start Of Defines For Add Remote Journal (QjoAddRemoteJournal) API.*/
/*********************************************************************/
/*********************************************************************/


/*********************************************************************/
/* Valid Format Names for Add Remote Journal (QjoAddRemoteJournal)   */
/*  API.                                                             */
/*********************************************************************/

#define  QJO_ADD_RMT_JRN_0100               "ADRJ0100"


/*********************************************************************/
/* Valid values for Delete Receivers.                                */
/* Represented in single and double quoted versions.             @A7A*/
/*********************************************************************/

#define  QJO_DELETE_RCVS_0S                 '0'
#define  QJO_DELETE_RCVS_1S                 '1'

#define  QJO_DELETE_RCVS_0                  "0"
#define  QJO_DELETE_RCVS_1                  "1"


/*********************************************************************/
/* Valid value for Qualified Journal Message Queue.                  */
/*********************************************************************/

#define  QJO_QSYSOPR_QSYS                   "QSYSOPR   QSYS      "


/*********************************************************************/
/*********************************************************************/
/* Start Of Defines For Change Journal State (QjoChangeJournalState) */
/*  API.                                                             */
/*********************************************************************/
/*********************************************************************/


/*********************************************************************/
/* Valid Format Names for Change Journal State(QjoChangeJournalState)*/
/*  API.                                                             */
/*********************************************************************/

#define  QJO_CHG_JRN_STATE_0100             "CJST0100"
#define  QJO_CHG_JRN_STATE_0200             "CJST0200"
#define  QJO_CHG_JRN_STATE_0300             "CJST0300"
#define  QJO_CHG_JRN_STATE_0400             "CJST0400"
#define  QJO_CHG_JRN_STATE_0500             "CJST0500"


/*********************************************************************/
/* Valid values for Inactivate Type.                                 */
/* Represented in single and double quoted versions.             @A7A*/
/*********************************************************************/

#define  QJO_INACTIVATE_TYPE_0S             '0'
#define  QJO_INACTIVATE_TYPE_1S             '1'

#define  QJO_INACTIVATE_TYPE_0              "0"
#define  QJO_INACTIVATE_TYPE_1              "1"


/*********************************************************************/
/* Valid values for Preferred Inactivate Type.                       */
/* Represented in single and double quoted versions.             @A7A*/
/*********************************************************************/

#define  QJO_PREFRD_INACT_TYPE_0S           '0'
#define  QJO_PREFRD_INACT_TYPE_1S           '1'

#define  QJO_PREFRD_INACT_TYPE_0            "0"
#define  QJO_PREFRD_INACT_TYPE_1            "1"


/*********************************************************************/
/* Valid values for Starting Journal Receiver.                       */
/*********************************************************************/

#define  QJO_ATTACHED                       "*ATTACHED           "
#define  QJO_SRCSYS                         "*SRCSYS             "


/*********************************************************************/
/*********************************************************************/
/* Start Of Defines For Remove Remote Journal                        */
/*  (QjoRemoveRemoteJournal) API.                                    */
/*********************************************************************/
/*********************************************************************/


/*********************************************************************/
/* Valid Format Names for Remove Remote Journal                      */
/*  (QjoRemoveRemoteJournal) API.                                    */
/*********************************************************************/

#define  QJO_RMV_RMT_JRN_0100               "RMRJ0100"


/*********************************************************************/
/*********************************************************************/
/* Start Of Defines For Retrieve Journal Information                 */
/*  (QjoRetrieveJournalInformation) API.                             */
/*********************************************************************/
/*********************************************************************/


/*********************************************************************/
/* Valid Format Names for Retrieve Journal Information               */
/*  (QjoRetrieveJournalInformation) API.                             */
/*********************************************************************/

#define  QJO_RTV_JRN_INFO_0100              "RJRN0100"
#define  QJO_RTV_JRN_INFO_0200              "RJRN0200"        /* @AMA*/

/*********************************************************************/
/* Valid values for Journaled Object Limit                       @AMA*/
/*********************************************************************/
#define  QJO_JRN_OBJECT_LIMIT_OPT_B        ' '
#define  QJO_JRN_OBJECT_LIMIT_OPT_0        '0'
#define  QJO_JRN_OBJECT_LIMIT_OPT_1        '1'


/*********************************************************************/
/* Valid value for Journal Object Information.                       */
/*********************************************************************/

#define  QJO_JRN_OBJ_INFO_ALL               "*ALL      "
#define  QJO_JRN_OBJ_INFO_ALLIFS            "*ALLIFS   "


/*********************************************************************/
/* Valid value for Relational Database Directory Entry.              */
/*********************************************************************/

#define  QJO_REL_DB_DIR_ENTRY_ALL           "*ALL              "


/*********************************************************************/
/* Valid value for Qualified Remote Journal Name.                    */
/*********************************************************************/

#define  QJO_QUAL_RMT_JRN_NM_ALL            "*ALL                "


/*********************************************************************/
/* Valid values for Delete Receiver Option.                          */
/* Represented in single and double quoted versions.             @A7A*/
/*********************************************************************/

#define  QJO_DELETE_RCV_OPT_0S              '0'
#define  QJO_DELETE_RCV_OPT_1S              '1'

#define  QJO_DELETE_RCV_OPT_0               "0"
#define  QJO_DELETE_RCV_OPT_1               "1"


/*********************************************************************/
/* Valid values for Journal Delivery Mode.                           */
/* Represented in single and double quoted versions.             @A7A*/
/*********************************************************************/

#define  QJO_JRN_DELIVERY_MODE_0S           '0'
#define  QJO_JRN_DELIVERY_MODE_1S           '1'
#define  QJO_JRN_DELIVERY_MODE_2S           '2'
#define  QJO_JRN_DELIVERY_MODE_3S           '3'
#define  QJO_JRN_DELIVERY_MODE_4S           '4'

#define  QJO_JRN_DELIVERY_MODE_0            "0"
#define  QJO_JRN_DELIVERY_MODE_1            "1"
#define  QJO_JRN_DELIVERY_MODE_2            "2"
#define  QJO_JRN_DELIVERY_MODE_3            "3"
#define  QJO_JRN_DELIVERY_MODE_4            "4"


/*********************************************************************/
/* Valid values for Journal Type.                                    */
/* Represented in single and double quoted versions.             @A7A*/
/*********************************************************************/

#define  QJO_JRN_TYPE_0S                    '0'
#define  QJO_JRN_TYPE_1S                    '1'

#define  QJO_JRN_TYPE_0                     "0"
#define  QJO_JRN_TYPE_1                     "1"


/*********************************************************************/
/* Valid values for Manage Receiver Option.                          */
/* Represented in single and double quoted versions.             @A7A*/
/*********************************************************************/

#define  QJO_MANAGE_RCV_OPT_BS              ' '
#define  QJO_MANAGE_RCV_OPT_0S              '0'
#define  QJO_MANAGE_RCV_OPT_1S              '1'

#define  QJO_MANAGE_RCV_OPT_B               " "
#define  QJO_MANAGE_RCV_OPT_0               "0"
#define  QJO_MANAGE_RCV_OPT_1               "1"


/*********************************************************************/
/* Valid values for Receiver Size Option *RMVINTENT.                 */
/* Represented in single and double quoted versions.             @A7A*/
/*********************************************************************/

#define  QJO_RCV_SIZE_OPT_RMVINTENT_BS      ' '
#define  QJO_RCV_SIZE_OPT_RMVINTENT_0S      '0'
#define  QJO_RCV_SIZE_OPT_RMVINTENT_1S      '1'

#define  QJO_RCV_SIZE_OPT_RMVINTENT_B       " "
#define  QJO_RCV_SIZE_OPT_RMVINTENT_0       "0"
#define  QJO_RCV_SIZE_OPT_RMVINTENT_1       "1"


/*********************************************************************/
/* Valid values for Receiver Size Option *MINFIXLEN.                 */
/* Represented in single and double quoted versions.             @A7A*/
/*********************************************************************/

#define  QJO_RCV_SIZE_OPT_MINFIXLEN_BS      ' '
#define  QJO_RCV_SIZE_OPT_MINFIXLEN_0S      '0'
#define  QJO_RCV_SIZE_OPT_MINFIXLEN_1S      '1'

#define  QJO_RCV_SIZE_OPT_MINFIXLEN_B       " "
#define  QJO_RCV_SIZE_OPT_MINFIXLEN_0       "0"
#define  QJO_RCV_SIZE_OPT_MINFIXLEN_1       "1"


/*********************************************************************/
/* Valid values for Receiver Size Option *MAXOPT1.                   */
/* Represented in single and double quoted versions.             @A7A*/
/*********************************************************************/

#define  QJO_RCV_SIZE_OPT_MAXOPT1_BS        ' '
#define  QJO_RCV_SIZE_OPT_MAXOPT1_0S        '0'
#define  QJO_RCV_SIZE_OPT_MAXOPT1_1S        '1'

#define  QJO_RCV_SIZE_OPT_MAXOPT1_B         " "
#define  QJO_RCV_SIZE_OPT_MAXOPT1_0         "0"
#define  QJO_RCV_SIZE_OPT_MAXOPT1_1         "1"


/*********************************************************************/
/* Valid values for Receiver Size Option *MAXOPT2.               @A8A*/
/*********************************************************************/

#define  QJO_RCV_SIZE_OPT_MAXOPT2_BS        ' '
#define  QJO_RCV_SIZE_OPT_MAXOPT2_0S        '0'
#define  QJO_RCV_SIZE_OPT_MAXOPT2_1S        '1'


/*********************************************************************/
/* Valid values for Receiver Size Option *MAXOPT3.               @AHA*/
/*********************************************************************/

#define  QJO_RCV_SIZE_OPT_MAXOPT3_BS        ' '
#define  QJO_RCV_SIZE_OPT_MAXOPT3_0S        '0'
#define  QJO_RCV_SIZE_OPT_MAXOPT3_1S        '1'


/*********************************************************************/
/* Valid values for Fixed Length Data *JOB.                      @ACA*/
/*********************************************************************/

#define  QJO_FIXED_LENGTH_DATA_JOB_B       ' '                /* @ACA*/
#define  QJO_FIXED_LENGTH_DATA_JOB_0       '0'                /* @ACA*/
#define  QJO_FIXED_LENGTH_DATA_JOB_1       '1'                /* @ACA*/

/*********************************************************************/
/* Valid values for Fixed Length Data *USR.                      @ACA*/
/*********************************************************************/

#define  QJO_FIXED_LENGTH_DATA_USR_B       ' '                /* @ACA*/
#define  QJO_FIXED_LENGTH_DATA_USR_0       '0'                /* @ACA*/
#define  QJO_FIXED_LENGTH_DATA_USR_1       '1'                /* @ACA*/

/*********************************************************************/
/* Valid values for Fixed Length Data *PGM.                      @ACA*/
/*********************************************************************/

#define  QJO_FIXED_LENGTH_DATA_PGM_B       ' '                /* @ACA*/
#define  QJO_FIXED_LENGTH_DATA_PGM_0       '0'                /* @ACA*/
#define  QJO_FIXED_LENGTH_DATA_PGM_1       '1'                /* @ACA*/

/*********************************************************************/
/* Valid values for Fixed Length Data *PGMLIB.                   @ACA*/
/*********************************************************************/

#define  QJO_FIXED_LENGTH_DATA_PGMLIB_B       ' '             /* @ACA*/
#define  QJO_FIXED_LENGTH_DATA_PGMLIB_0       '0'             /* @ACA*/
#define  QJO_FIXED_LENGTH_DATA_PGMLIB_1       '1'             /* @ACA*/

/*********************************************************************/
/* Valid values for Fixed Length Data *SYSSEQ.                   @ACA*/
/*********************************************************************/

#define  QJO_FIXED_LENGTH_DATA_SYSSEQ_B       ' '             /* @ACA*/
#define  QJO_FIXED_LENGTH_DATA_SYSSEQ_0       '0'             /* @ACA*/
#define  QJO_FIXED_LENGTH_DATA_SYSSEQ_1       '1'             /* @ACA*/

/*********************************************************************/
/* Valid values for Fixed Length Data *RMTADR.                   @ACA*/
/*********************************************************************/

#define  QJO_FIXED_LENGTH_DATA_RMTADR_B       ' '             /* @ACA*/
#define  QJO_FIXED_LENGTH_DATA_RMTADR_0       '0'             /* @ACA*/
#define  QJO_FIXED_LENGTH_DATA_RMTADR_1       '1'             /* @ACA*/

/*********************************************************************/
/* Valid values for Fixed Length Data *THD.                      @ACA*/
/*********************************************************************/

#define  QJO_FIXED_LENGTH_DATA_THD_B       ' '                /* @ACA*/
#define  QJO_FIXED_LENGTH_DATA_THD_0       '0'                /* @ACA*/
#define  QJO_FIXED_LENGTH_DATA_THD_1       '1'                /* @ACA*/

/*********************************************************************/
/* Valid values for Fixed Length Data *LUW.                      @ACA*/
/*********************************************************************/

#define  QJO_FIXED_LENGTH_DATA_LUW_B       ' '                /* @ACA*/
#define  QJO_FIXED_LENGTH_DATA_LUW_0       '0'                /* @ACA*/
#define  QJO_FIXED_LENGTH_DATA_LUW_1       '1'                /* @ACA*/

/*********************************************************************/
/* Valid values for Fixed Length Data *XID.                      @ACA*/
/*********************************************************************/

#define  QJO_FIXED_LENGTH_DATA_XID_B       ' '                /* @ACA*/
#define  QJO_FIXED_LENGTH_DATA_XID_0       '0'                /* @ACA*/
#define  QJO_FIXED_LENGTH_DATA_XID_1       '1'                /* @ACA*/


/*********************************************************************/
/*********************************************************************/
/* Start Of Defines For Retrieve Journal Receiver Information        */
/*  (QjoRtvJrnReceiverInformation) API.                              */
/*********************************************************************/
/*********************************************************************/


/*********************************************************************/
/* Valid Format Names for Retrieve Journal Receiver Information      */
/*  (QjoRtvJrnReceiverInformation) API.                              */
/*********************************************************************/

#define  QJO_RTV_JRN_RCV_INFO_0100          "RRCV0100"


/*********************************************************************/
/* Valid value for a name or library name.                           */
/*********************************************************************/

#define  QJO_NONE                           "*NONE     "


/*********************************************************************/
/* Valid values for Minimized Fixed Length Value.                    */
/* Represented in single and double quoted versions.             @A7A*/
/*********************************************************************/

#define  QJO_MIN_FIX_LEN_VAL_0S             '0'
#define  QJO_MIN_FIX_LEN_VAL_1S             '1'

#define  QJO_MIN_FIX_LEN_VAL_0              "0"
#define  QJO_MIN_FIX_LEN_VAL_1              "1"


/*********************************************************************/
/* Valid values for Receiver Maximum Option Value.               @A8A*/
/*********************************************************************/

#define  QJO_RCV_MAX_OPT_VAL_0              '0'
#define  QJO_RCV_MAX_OPT_VAL_1              '1'
#define  QJO_RCV_MAX_OPT_VAL_2              '2'


/*********************************************************************/
/* Valid values for Pending Transactions.                            */
/* Represented in single and double quoted versions.             @A7A*/
/*********************************************************************/

#define  QJO_PEND_TRANS_0S                  '0'
#define  QJO_PEND_TRANS_1S                  '1'

#define  QJO_PEND_TRANS_0                   "0"
#define  QJO_PEND_TRANS_1                   "1"


/*********************************************************************/
/*********************************************************************/
/* Start Of Defines For Retrieve Journal Entries                     */
/*  (QjoRetrieveJournalEntries) API.                                 */
/*********************************************************************/
/*********************************************************************/


/*********************************************************************/
/* Valid Format Name for Retrieve Journal Entries                    */
/*  (QjoRetrieveJournalEntries) API.                                 */
/*********************************************************************/

#define  QJO_RTV_JRN_ENTRIES_0100         "RJNE0100"
#define  QJO_RTV_JRN_ENTRIES_0200         "RJNE0200"          /* @ACA*/


/*********************************************************************/
/* Valid values for Journal Receiver Name fields in                  */
/* Receiver_Range in Qjo_JE_Data_Key_1_t                             */
/*********************************************************************/

#define  QJO_RANGE_JRN_RCV_CURCHAIN       "*CURCHAIN "
#define  QJO_RANGE_JRN_RCV_CURRENT        "*CURRENT  "

/*********************************************************************/
/* Valid values for Starting Sequence Number                         */
/* in QJO_JE_Data_Key_2_t                                            */
/*********************************************************************/

#define  QJO_STR_SEQ_NUM_FIRST            "*FIRST              "


/*********************************************************************/
/* Valid values for Ending Sequence Number                           */
/* in Qjo_JE_Data_Key_4_t                                            */
/*********************************************************************/

#define  QJO_ENDING_SEQ_NUM_LAST          "*LAST               "


/*********************************************************************/
/* Valid values for Journal Code Values and Selection                */
/* in Qjo_JE_Data_Key_7_t                                            */
/*********************************************************************/

#define  QJO_JRN_CODES_ALL                "*ALL      "
#define  QJO_JRN_CODES_CTL                "*CTL      "
#define  QJO_JRN_CODES_ALLSLT             "*ALLSLT   "
#define  QJO_JRN_CODES_IGNFILSLT          "*IGNFILSLT"


/*********************************************************************/
/* Valid values for Journal Entry Types                              */
/* in Qjo_JE_Data_Key_8_t                                            */
/*********************************************************************/

#define  QJO_JRN_ENTRY_TYPES_ALL          "*ALL      "
#define  QJO_JRN_ENTRY_TYPES_RCD          "*RCD      "


/*********************************************************************/
/* Valid values for Job                                              */
/* in Qjo_JE_Data_Key_9_t                                            */
/*********************************************************************/

#define  QJO_JOB_ALL                      "*ALL                      "


/*********************************************************************/
/* Valid values for Program                                          */
/* in Qjo_JE_Data_Key_10_t                                           */
/*********************************************************************/

#define  QJO_PROGRAM_ALL                  "*ALL      "


/*********************************************************************/
/* Valid values for User Profile                                     */
/* in Qjo_JE_Data_Key_11_t                                           */
/*********************************************************************/

#define QJO_USER_PROFILE_ALL              "*ALL      "


/*********************************************************************/
/* Valid values for Commit Cycle Identifier                          */
/* in Qjo_JE_Data_Key_12_t                                           */
/*********************************************************************/

#define  QJO_COMMIT_CYCLE_IDENT_ALL       "*ALL                "


/*********************************************************************/
/* Valid values for Dependent Entries                                */
/* in Qjo_JE_Data_Key_13_t                                           */
/*********************************************************************/

#define  QJO_DEPEND_ENT_ALL               "*ALL      "
#define  QJO_DEPEND_ENT_NONE              "*NONE     "


/*********************************************************************/
/* Valid values for Include Entries                                  */
/* in Qjo_JE_Data_Key_14_t                                           */
/*********************************************************************/

#define  QJO_INC_ENT_CONFIRMED            "*CONFIRMED"
#define  QJO_INC_ENT_ALL                  "*ALL      "


/*********************************************************************/
/* Valid values for Null Value Indicators Length                     */
/* in Qjo_JE_Data_Key_15_t                                           */
/*********************************************************************/

#define  QJO_NULL_VAL_IND_LEN_VARLEN      "*VARLEN   "


/*********************************************************************/
/* Valid values for File                                             */
/* in Qjo_JE_Data_Key_16_t                                           */
/*********************************************************************/

#define  QJO_FILE_ALLFILE                 "*ALLFILE  "
#define  QJO_FILE_ALL                     "*ALL      "
#define  QJO_FILE_FIRST                   "*FIRST    "


/*********************************************************************/
/* Valid values for Format Minimized Data                        @ALA*/
/* in Qjo_JE_Data_Key_22_t                                       @ALA*/
/*********************************************************************/

#define  QJO_FORMAT_MIN_DATA_NO           "*NO       "        /* @ALA*/
#define  QJO_FORMAT_MIN_DATA_YES          "*YES      "        /* @ALA*/


/*********************************************************************/
/* Valid values for Job Name                                         */
/* in Qjo_RJNE0100_JE_Hdr_t                                          */
/*********************************************************************/

#define  QJO_JOB_NAME_OMITTED             "*OMITTED  "
#define  QJO_JOB_NAME_NONE                "*NONE     "


/*********************************************************************/
/* Valid values for Program Name                                     */
/* in Qjo_RJNE0100_JE_Hdr_t                                          */
/*********************************************************************/

#define  QJO_PROGRAM_NAME_OMITTED         "*OMITTED  "
#define  QJO_PROGRAM_NAME_NONE            "*NONE     "


/*********************************************************************/
/* Valid values for User Profile                                     */
/* in Qjo_RJNE0100_JE_Hdr_t                                          */
/*********************************************************************/

#define  QJO_USER_PROFILE_OMITTED         "*OMITTED  "


/*********************************************************************/
/* Valid values for Referential Constraint                           */
/* in Qjo_RJNE0100_JE_Hdr_t                                          */
/*********************************************************************/

#define  QJO_REFERENTIAL_CONSTRAINT_0     '0'
#define  QJO_REFERENTIAL_CONSTRAINT_1     '1'


/*********************************************************************/
/* Valid values for Trigger                                          */
/* in Qjo_RJNE0100_JE_Hdr_t                                          */
/*********************************************************************/

#define  QJO_TRIGGER_0                    '0'
#define  QJO_TRIGGER_1                    '1'

/*********************************************************************/
/* Valid values for Incomplete Data                                  */
/* in Qjo_RJNE0100_JE_Hdr_t                                          */
/*********************************************************************/

#define  QJO_INCOMPLETE_DATA_0            '0'
#define  QJO_INCOMPLETE_DATA_1            '1'

/*********************************************************************/
/* Valid values for Object Name Indicator                            */
/* in Qjo_RJNE0100_JE_Hdr_t                                          */
/*********************************************************************/

#define  QJO_OBJECT_NAME_INDICATOR_0      '0'
#define  QJO_OBJECT_NAME_INDICATOR_1      '1'
#define  QJO_OBJECT_NAME_INDICATOR_2      '2'

/*********************************************************************/
/* Valid values for Ignore during APYJRNCHG or RMVJRNCHG         @A4A*/
/* in Qjo_RJNE0100_JE_Hdr_t                                      @A4A*/
/*********************************************************************/

#define  QJO_IGNORE_APYRMV_0              '0'
#define  QJO_IGNORE_APYRMV_1              '1'

/*********************************************************************/
/* Valid values for Minimized entry specific data                @A7A*/
/* in Qjo_RJNE0100_JE_Hdr_t                                      @A7A*/
/*********************************************************************/

#define  QJO_MIN_ESD_0                    '0'
#define  QJO_MIN_ESD_1                    '1'

/*********************************************************************/
/* Valid values for File type indicator                          @AJA*/
/* in Qjo_RJNE0200_JE_Hdr_t                                      @AJA*/
/*********************************************************************/

#define  QJO_FILE_TYPE_IND_0              '0'
#define  QJO_FILE_TYPE_IND_1              '1'

/***********************************************************/ /* @ACA*/
/* Valid values for Address Family data in                 */ /* @ACA*/
/* Qjo_Address_Family_t                                    */ /* @ACA*/
/***********************************************************/ /* @ACA*/
                                                              /* @ACA*/
#define QJO_AF_INET                       '4'                 /* @ACA*/
#define QJO_AF_INET6                      '6'                 /* @ACA*/

/***********************************************************/ /* @AGA*/
/* Valid values for Continue Indicator data in             */ /* @AGA*/
/* Qjo_Continuation_Indicator_t                            */ /* @AGA*/
/***********************************************************/ /* @AGA*/
                                                              /* @AGA*/
#define QJO_CONTINUATION_IS_NOT_NEEDED   '0'                  /* @AGA*/
#define QJO_CONTINUATION_IS_POSSIBLE     '1'                  /* @AGA*/

/*********************************************************************/
/* Valid values for Object Type                                      */
/* in Qjo_RJNE0200_JE_Hdr_t                                      @AJA*/
/*********************************************************************/

#define  QJO_JE_OBJECT_TYPE_DIR        "*DIR      "
#define  QJO_JE_OBJECT_TYPE_DTAARA     "*DTAARA   "
#define  QJO_JE_OBJECT_TYPE_DTAQ       "*DTAQ     "
#define  QJO_JE_OBJECT_TYPE_FILE       "*FILE     "
#define  QJO_JE_OBJECT_TYPE_QDDS       "*QDDS     "
#define  QJO_JE_OBJECT_TYPE_QDDSI      "*QDDSI    "
#define  QJO_JE_OBJECT_TYPE_STMF       "*STMF     "
#define  QJO_JE_OBJECT_TYPE_SYMLNK     "*SYMLNK   "


/*********************************************************************/
/*********************************************************************/
/* Start Of Structures For The Add Remote Journal                    */
/*  (QjoAddRemoteJournal) API.                                       */
/*********************************************************************/
/*********************************************************************/


/*********************************************************************/
/*  Type Definition for the ADRJ0100 Format, for the Add Remote      */
/*   Journal (QjoAddRemoteJournal) API request variable.             */
/*********************************************************************/

typedef _Packed struct Qjo_ADRJ0100
{
   Qjo_Qual_Rmt_Jrn_Name_t        Qual_Rmt_Jrn_Name;
   Qjo_Remote_Jrn_Rcv_Lib_Name_t  Remote_Jrn_Rcv_Lib_Name;
   Qjo_Remote_Jrn_Type_t          Remote_Jrn_Type;
   Qjo_Qual_Jrn_Msg_Queue_t       Qual_Jrn_Msg_Queue;
   Qjo_Delete_Receivers_t         Delete_Receivers;
   Qjo_Text_t                     Text;
   char                           Reserved[2];  /* force following */
                                        /*on quadword bdy        @AEA*/
   Qjo_Dlt_Rcv_Dly_t              Dlt_Rcv_Dly;                /* @AEA*/
} Qjo_ADRJ0100_t;


/*********************************************************************/
/*********************************************************************/
/* Start Of Structures For The Change Journal State                  */
/*  (QjoChangeJournalState) API.                                     */
/*********************************************************************/
/*********************************************************************/


/*********************************************************************/
/*  Type Definition for the CJST0100 Format, for the Change Journal  */
/*   State (QjoChangeJournalState) API request variable.             */
/*********************************************************************/

typedef _Packed struct Qjo_CJST0100_Req
{
   Qjo_New_Journal_State_t     New_Jrn_State;
} Qjo_CJST0100_Req_t;


/*********************************************************************/
/*  Type Definition for the CJST0200 Format, for the Change Journal  */
/*   State (QjoChangeJournalState) API request variable.             */
/*********************************************************************/

/* Empty format. No type definition required.                        */


/*********************************************************************/
/*  Type Definition for the CJST0300 Format, for the Change Journal  */
/*   State (QjoChangeJournalState) API request variable.             */
/*********************************************************************/

typedef _Packed struct Qjo_CJST0300_Req
{
   Qjo_Rel_DB_Dir_Entry_t      Rel_DB_Dir_Entry;
   Qjo_Remote_Journal_t        Remote_Journal;
   Qjo_Prefrd_Inact_Type_t     Prefrd_Inact_Type;
} Qjo_CJST0300_Req_t;


/*********************************************************************/
/*  Type Definition for the CJST0300 Format, for the Change Journal  */
/*   State (QjoChangeJournalState) API receiver variable.            */
/*********************************************************************/

typedef _Packed struct Qjo_CJST0300_Rcv
{
   Qjo_Bytes_Returned_t        Bytes_Returned;
   Qjo_Bytes_Available_t       Bytes_Available;
   Qjo_Rel_DB_Dir_Entry_t      Rel_DB_Dir_Entry;
   Qjo_Remote_Journal_t        Remote_Journal;
   Qjo_Prefrd_Inact_Type_t     Prefrd_Inact_Type;
   Qjo_Inactivate_Type_t       Inactivate_Type;
   Qjo_Inact_Jrn_Rcv_Nm_t      Inact_Jrn_Rcv_Nm;
   Qjo_Inact_Jrn_Rcv_Lib_t     Inact_Jrn_Rcv_Lib;
   Qjo_Inact_Seq_Num_t         Inact_Seq_Num;
   Qjo_Seq_Num_t               Inact_Seq_Num_Long;
} Qjo_CJST0300_Rcv_t;


/*********************************************************************/
/*  Type Definition for the CJST0400 Format, for the Change Journal  */
/*   State (QjoChangeJournalState) API request variable.             */
/*********************************************************************/

typedef _Packed struct Qjo_CJST0400_Req
{
   Qjo_Rel_DB_Dir_Entry_t      Rel_DB_Dir_Entry;
   Qjo_Remote_Journal_t        Remote_Journal;
   Qjo_Starting_Jrn_Rcv_t      Starting_Jrn_Rcv;
} Qjo_CJST0400_Req_t;


/*********************************************************************/
/*  Type Definition for the CJST0500 Format, for the Change Journal  */
/*   State (QjoChangeJournalState) API request variable.             */
/*********************************************************************/

typedef _Packed struct Qjo_CJST0500_Req
{
   Qjo_Rel_DB_Dir_Entry_t      Rel_DB_Dir_Entry;
   Qjo_Remote_Journal_t        Remote_Journal;
   Qjo_Starting_Jrn_Rcv_t      Starting_Jrn_Rcv;
   char                        Reserved[2];
   Qjo_Sending_Task_Prior_t    Sending_Task_Prior;
} Qjo_CJST0500_Req_t;


/*********************************************************************/
/*********************************************************************/
/* Start Of Structures For The Remove Remote Journal                 */
/*  (QjoRemoveRemoteJournal) API.                                    */
/*********************************************************************/
/*********************************************************************/


/*********************************************************************/
/*  Type Definition for the RMRJ0100 Format, for the Remove Remote   */
/*   Journal (QjoRemoveRemoteJournal) API request variable.          */
/*********************************************************************/

typedef _Packed struct Qjo_RMRJ0100
{
   Qjo_Qual_Rmt_Jrn_Name_t     Qual_Rmt_Jrn_Name;
} Qjo_RMRJ0100_t;


/*********************************************************************/
/*********************************************************************/
/* Start Of Structures For The Retrieve Journal Information          */
/*  (QjoRetrieveJournalInformation) API.                             */
/*********************************************************************/
/*********************************************************************/

/*********************************************************************/
/*  Type Definition for the Format For Variable Length Record, for   */
/*   the Retrieve Journal Information (QjoRetrieveJournalInformation)*/
/*   API input.                                                      */
/*********************************************************************/
/* NOTE: The following type definition only defines the fixed        */
/*       portion of the format. Any varying length field will        */
/*       have to be defined by the user.                             */
/*********************************************************************/

typedef _Packed struct Qjo_JN_Fmt_Var_Len_Rcrd
{
   Qjo_Len_Var_Len_Rcrd_t      Len_Var_Len_Rcrd;
   Qjo_Key_t                   Key;
   Qjo_Len_Of_Data_t           Len_Of_Data;
 /*Qjo_JN_Data_t               Data[];*//* Varying length data       */
} Qjo_JN_Fmt_Var_Len_Rcrd_t;

/*********************************************************************/
/*  Type Definition for the Journal Information To Retrieve, for the */
/*   Retrieve Journal Information (QjoRetrieveJournalInformation)    */
/*   API input.                                                      */
/*********************************************************************/
/* NOTE: The following type definition only defines the fixed        */
/*       portion of the format. Any varying length field will        */
/*       have to be defined by the user.                             */
/*********************************************************************/

typedef _Packed struct Qjo_JN_Jrn_Info_Retrieve
{
   Qjo_Num_Var_Len_Rcrds_t     Num_Var_Len_Rcrds;
 /*Qjo_JN_Fmt_Var_Len_Rcrd_t   Fmt_Var_Len_Rcrd[];*//*Varying length */
} Qjo_JN_Jrn_Info_Retrieve_t;

/*********************************************************************/
/*  Type Definition for the Data for Key 1, for the Retrieve Journal */
/*   Information (QjoRetrieveJournalInformation) API input.          */
/*********************************************************************/

/* Empty key. No type definition required.                           */


/*********************************************************************/
/*  Type Definition for the Data for Key 2, for the Retrieve Journal */
/*   Information (QjoRetrieveJournalInformation) API input.          */
/*********************************************************************/

typedef _Packed struct Qjo_JN_Data_Key_2
{
   Qjo_Journaled_Obj_Info_t    Journaled_Obj_Info;
} Qjo_JN_Data_Key_2_t;


/*********************************************************************/
/*  Type Definition for the Data for Key 3, for the Retrieve Journal */
/*   Information (QjoRetrieveJournalInformation) API input.          */
/*********************************************************************/

typedef _Packed struct Qjo_JN_Data_Key_3
{
   Qjo_Rel_DB_Dir_Entry_t      Rel_DB_Dir_Entry;
   Qjo_Qual_Rmt_Jrn_Name_t     Qual_Rmt_Jrn_Name;
} Qjo_JN_Data_Key_3_t;


/*********************************************************************/
/*  Type Definition for the Repeating Key Fields, for the Retrieve   */
/*   Journal Information (QjoRetrieveJournalInformation) API         */
/*   receiver variable.                                              */
/*********************************************************************/

typedef _Packed struct Qjo_JN_Repeating_Key_Fields
{
   Qjo_Key_t                      Key;
   Qjo_Off_Strt_Key_Info_t        Off_Strt_Key_Info;
   Qjo_Len_Key_Info_Hdr_Sec_t     Len_Key_Info_Hdr_Sec;
   Qjo_Number_Entries_t           Number_Entries;
   Qjo_Len_Ent_Key_Info_Lst_Sec_t Len_Ent_Key_Info_Lst_Sec;
} Qjo_JN_Repeating_Key_Fields_t;

/*********************************************************************/
/*  Type Definition for the RJRN0100 Format, for the Retrieve        */
/*   Journal Information (QjoRetrieveJournalInformation) API         */
/*   receiver variable.                                              */
/*********************************************************************/
/*  Type Definition for the RJRN0200 Format, for the Retrieve        */
/*   Journal Information (QjoRetrieveJournalInformation) API         */
/*   receiver variable is identical in all fields to the RJRN0100    */
/*   except that Qjo_Bytes_Returned and Qjo_Bytes_Available fields   */
/*   are in 4k (4096) byte units instead of 1 byte units.            */
/*********************************************************************/
/* NOTE: The following type definition only defines the fixed        */
/*       portion of the format. Any varying length field will        */
/*       have to be defined by the user.                             */
/*********************************************************************/

typedef _Packed struct Qjo_RJRN0100
{
   Qjo_Bytes_Returned_t              Bytes_Returned;
   Qjo_Bytes_Available_t             Bytes_Available;
   Qjo_Off_Key_Info_t                Off_Key_Info;
   Qjo_Jrn_Name_t                    Jrn_Name;
   Qjo_Jrn_Lib_Name_t                Jrn_Lib_Name;
   Qjo_Aux_Stg_Pool_t                Aux_Stg_Pool;
   Qjo_Message_Queue_Name_t          Message_Queue_Name;
   Qjo_Message_Queue_Lib_Name_t      Message_Queue_Lib_Name;
   Qjo_Manage_Receiver_Option_t      Manage_Receiver_Option;
   Qjo_Delete_Receiver_Option_t      Delete_Receiver_Option;
   Qjo_Rcv_Size_Opt_RMVINTENT_t      Rcv_Size_Opt_RMVINTENT;
   Qjo_Rcv_Size_Opt_MINFIXLEN_t      Rcv_Size_Opt_MINFIXLEN;
   Qjo_Rcv_Size_Opt_MAXOPT1_t        Rcv_Size_Opt_MAXOPT1;
   Qjo_Rcv_Size_Opt_MAXOPT2_t        Rcv_Size_Opt_MAXOPT2;    /* @A8A*/
   Qjo_Rcv_Size_Opt_MAXOPT3_t        Rcv_Size_Opt_MAXOPT3;    /* @AHA*/
   char                              Reserved_1[2];      /* @A8C @AHC*/
   Qjo_Journal_Type_t                Journal_Type;
   Qjo_Remote_Jrn_Type_t             Remote_Jrn_Type;
   Qjo_Journal_State_t               Journal_State;
   Qjo_Journal_Delivery_Mode_t       Journal_Delivery_Mode;
   Qjo_Lcl_Jrn_Name_t                Lcl_Jrn_Name;
   Qjo_Lcl_Jrn_Lib_Name_t            Lcl_Jrn_Lib_Name;
   Qjo_Lcl_Jrn_System_t              Lcl_Jrn_System;
   Qjo_Src_Jrn_Name_t                Src_Jrn_Name;
   Qjo_Src_Jrn_Lib_Name_t            Src_Jrn_Lib_Name;
   Qjo_Src_Jrn_System_t              Src_Jrn_System;
   Qjo_Redirected_Rcv_Lib_Nm_t       Redirected_Rcv_Lib_Nm;
   Qjo_Journal_Text_t                Journal_Text;
   Qjo_Min_ESD_Dta_t                 Min_ESD_Dta;             /* @A7A*/
   Qjo_Min_ESD_Fil_t                 Min_ESD_Fil;             /* @A7A*/
   char                              Reserved_2[8];      /* @A7C @AAC*/
   Qjo_Jrn_Cache_t                   Jrn_Cache;          /* @AAA @03C*/
   Qjo_Num_Att_Jrn_Rcvs_t            Num_Att_Jrn_Rcvs;
   Qjo_Att_Jrn_Rcv_Name_t            Att_Jrn_Rcv_Name;
   Qjo_Att_Jrn_Rcv_Lib_Name_t        Att_Jrn_Rcv_Lib_Name;
   Qjo_Lcl_Jrn_Sys_Asc_Att_Rcv_t     Lcl_Jrn_Sys_Asc_Att_Jrn_Rcv;
   Qjo_Src_Jrn_Sys_Asc_Att_Rcv_t     Src_Jrn_Sys_Asc_Att_Jrn_Rcv;
   Qjo_Att_Dual_Jrn_Rcv_Name_t       Att_Dual_Jrn_Rcv_Name;
   Qjo_Att_Dual_Rcv_Lib_Name_t       Att_Dual_Jrn_Rcv_Lib_Name;
   Qjo_Mng_Rcv_Dly_t                 Mng_Rcv_Dly;
   Qjo_Dlt_Rcv_Dly_t                 Dlt_Rcv_Dly;
   Qjo_ASP_Dev_Name_t                ASP_Dev_Name;
   Qjo_Lcl_Jrn_ASP_Grp_Name_t        Lcl_Jrn_ASP_Grp_Name;    /* @ABA*/
   Qjo_Src_Jrn_ASP_Grp_Name_t        Src_Jrn_ASP_Grp_Name;    /* @ABA*/
   Qjo_Fixed_Length_Data_t           Fixed_Length_Data_JOB;    /* @ACA*/
   Qjo_Fixed_Length_Data_t           Fixed_Length_Data_USR;    /* @ACA*/
   Qjo_Fixed_Length_Data_t           Fixed_Length_Data_PGM;    /* @ACA*/
   Qjo_Fixed_Length_Data_t           Fixed_Length_Data_PGMLIB; /* @ACA*/
   Qjo_Fixed_Length_Data_t           Fixed_Length_Data_SYSSEQ; /* @ACA*/
   Qjo_Fixed_Length_Data_t           Fixed_Length_Data_RMTADR; /* @ACA*/
   Qjo_Fixed_Length_Data_t           Fixed_Length_Data_THD;    /* @ACA*/
   Qjo_Fixed_Length_Data_t           Fixed_Length_Data_LUW;    /* @ACA*/
   Qjo_Fixed_Length_Data_t           Fixed_Length_Data_XID;    /* @ACA*/
   char                              Reserved_4[4];            /* @AMA*/
   Qjo_Jrn_Object_Limit_Opt_t        Jrn_Object_Limit_Opt;     /* @AMA*/
   Qjo_Tot_Num_Jrn_All_Objs_t        Tot_Num_Jrn_All_Objs;     /* @AMA*/
   Qjo_Tot_Num_Jrn_Files_t           Tot_Num_Jrn_Files;        /* @AMA*/
   Qjo_Tot_Num_Jrn_Mbrs_t            Tot_Num_Jrn_Mbrs;         /* @AMA*/
   Qjo_Tot_Num_Jrn_DtaAs_t           Tot_Num_Jrn_DtaAs;        /* @AMA*/
   Qjo_Tot_Num_Jrn_DtaQs_t           Tot_Num_Jrn_DtaQs;        /* @AMA*/
   Qjo_Tot_Num_Jrn_IFS_t             Tot_Num_Jrn_IFS;          /* @AMA*/
   Qjo_Tot_Num_Jrn_APs_t             Tot_Num_Jrn_APs;          /* @AMA*/
   Qjo_Tot_Num_Jrn_Cmt_Defs_t        Tot_Num_Jrn_Cmt_Defs;     /* @AMA*/
   Qjo_Jrn_Recovery_Cnt_t            Jrn_Recovery_Cnt;         /* @ALA*/
   char                              Reserved_3[104];/* @ACC @ALC @AMC*/
   Qjo_Num_Of_Key_Flds_t             Num_Of_Key_Flds;
 /*Qjo_JN_Repeating_Key_Fields_t     Repeating_Key_Fields[];*//*     */
                                     /* Varying length data          */
} Qjo_RJRN0100_t;

/*********************************************************************/
/*  Type Definition for the Repeating Key 1 Output, for the Retrieve */
/*   Journal Information (QjoRetrieveJournalInformation) API         */
/*   receiver variable.                                              */
/*********************************************************************/

typedef _Packed struct Qjo_JN_Repeating_Key_1_Output
{
   Qjo_Jrn_Rcv_Name_t             Jrn_Rcv_Name;
   Qjo_Jrn_Rcv_Lib_Name_t         Jrn_Rcv_Lib_Name;
   Qjo_Jrn_Rcv_Number_t           Jrn_Rcv_Number;
   Qjo_Jrn_Rcv_Att_Date_Time_t    Jrn_Rcv_Att_Date_Time;
   Qjo_Jrn_Rcv_Status_t           Jrn_Rcv_Status;
   Qjo_Jrn_Rcv_Save_Date_Time_t   Jrn_Rcv_Save_Date_Time;
   Qjo_Lcl_Jrn_Sys_Asc_Jrn_Rcv_t  Lcl_Jrn_Sys_Asc_Jrn_Rcv;
   Qjo_Src_Jrn_Sys_Asc_Jrn_Rcv_t  Src_Jrn_Sys_Asc_Jrn_Rcv;
   Qjo_Jrn_Rcv_Size_t             Jrn_Rcv_Size;
   char                           Reserved[56];
} Qjo_JN_Repeating_Key_1_Output_t;

/*********************************************************************/
/*  Type Definition for the Key 1 Output Section, for the Retrieve   */
/*   Journal Information (QjoRetrieveJournalInformation) API         */
/*   receiver variable.                                              */
/*********************************************************************/
/* NOTE: The following type definition only defines the fixed        */
/*       portion of the key. Any varying length field will have      */
/*       to be defined by the user.                                  */
/*********************************************************************/

typedef _Packed struct Qjo_JN_Key_1_Output_Section
{
   Qjo_Tot_Num_Jrn_Rcvs_t            Tot_Num_Jrn_Rcvs;
   Qjo_Tot_Size_Jrn_Rcvs_t           Tot_Size_Jrn_Rcvs;
   Qjo_Tot_Size_Jrn_Rcvs_Mult_t      Tot_Size_Jrn_Rcvs_Mult;
   char                              Reserved[8];
 /*Qjo_JN_Repeating_Key_1_Output_t   Repeating_Key_1_Output_[];*//*  */
                                     /* Varying length data          */
} Qjo_JN_Key_1_Output_Section_t;

/*********************************************************************/
/*  Type Definition for the Repeating Key 2 Output, for the Retrieve */
/*   Journal Information (QjoRetrieveJournalInformation) API         */
/*   receiver variable.                                              */
/*********************************************************************/

typedef _Packed struct Qjo_JN_Repeating_Key_2_Output
{
   Qjo_Object_Type_t              Object_Type;
   Qjo_Object_Name_t              Object_Name;
   Qjo_Object_Lib_Name_t          Object_Lib_Name;
   Qjo_Object_File_ID_t           Object_File_ID;
   char                           Reserved[2];
} Qjo_JN_Repeating_Key_2_Output_t;

/*********************************************************************/
/*  Type Definition for the Key 2 Output Section, for the Retrieve   */
/*   Journal Information (QjoRetrieveJournalInformation) API         */
/*   receiver variable.                                              */
/*********************************************************************/
/* NOTE: The following type definition only defines the fixed        */
/*       portion of the key. Any varying length field will have      */
/*       to be defined by the user.                                  */
/*********************************************************************/

typedef _Packed struct Qjo_JN_Key_2_Output_Section
{
   Qjo_Tot_Num_Jrn_Files_t           Tot_Num_Jrn_Files;
   Qjo_Tot_Num_Jrn_Mbrs_t            Tot_Num_Jrn_Mbrs;
   Qjo_Tot_Num_Jrn_DtaAs_t           Tot_Num_Jrn_DtaAs;
   Qjo_Tot_Num_Jrn_DtaQs_t           Tot_Num_Jrn_DtaQs;
   Qjo_Tot_Num_Jrn_IFS_t             Tot_Num_Jrn_IFS;
   char                              Reserved[16];
 /*Qjo_JN_Repeating_Key_2_Output_t   Repeating_Key_2_Output_[];*//*  */
                                     /* Varying length data          */
} Qjo_JN_Key_2_Output_Section_t;

/*********************************************************************/
/*  Type Definition for the Repeating Key 3 Output, for the Retrieve */
/*   Journal Information (QjoRetrieveJournalInformation) API         */
/*   receiver variable.                                              */
/*********************************************************************/

typedef _Packed struct Qjo_JN_Repeating_Key_3_Output
{
   Qjo_Rel_DB_Dir_Entry_t             Rel_DB_Dir_Entry;
   Qjo_Remote_Jrn_Name_t              Remote_Jrn_Name;
   Qjo_Remote_Jrn_Lib_Name_t          Remote_Jrn_Lib_Name;
   Qjo_Remote_Jrn_Rcv_Lib_Name_t      Remote_Jrn_Rcv_Lib_Name;
   Qjo_Ctl_Inact_Jrn_St_Jrn_Rcv_t     Ctl_Inact_Jrn_St_Jrn_Rcv;
   Qjo_Ctl_Inact_Jrn_St_Rcv_Lib_t     Ctl_Inact_Jrn_St_Jrn_Rcv_Lib;
   Qjo_Ctl_Inact_Jrn_St_Seq_Num_t     Ctl_Inact_Jrn_St_Seq_Num;
   long int                           Reserved_1;
   Qjo_Remote_Jrn_Type_t              Remote_Jrn_Type;
   Qjo_Remote_Jrn_State_t             Remote_Jrn_State;
   Qjo_Remote_Jrn_Delivery_Mode_t     Remote_Jrn_Delivery_Mode;
   char                               Reserved_2;
   Qjo_Sending_Task_Prior_t           Sending_Task_Prior;
   Qjo_Seq_Num_t                      Ctl_Inact_Jrn_St_Seq_Num_Long;
   char                               Reserved_3[60];
   Qjo_Rel_DB_Dir_Entry_Dtls_t        Rel_DB_Dir_Entry_Dtls;
   char                               Reserved_4[348];
} Qjo_JN_Repeating_Key_3_Output_t;

/*********************************************************************/
/*  Type Definition for the Key 3 Output Section, for the Retrieve   */
/*   Journal Information (QjoRetrieveJournalInformation) API         */
/*   receiver variable.                                              */
/*********************************************************************/
/* NOTE: The following type definition only defines the fixed        */
/*       portion of the key. Any varying length field will have      */
/*       to be defined by the user.                                  */
/*********************************************************************/

typedef _Packed struct Qjo_JN_Key_3_Output_Section
{
   Qjo_Tot_Num_Rmt_Jrns_t            Tot_Num_Rmt_Jrns;
   char                              Reserved[16];
 /*Qjo_JN_Repeating_Key_3_Output_t   Repeating_Key_3_Output_[];*//*  */
                                     /* Varying length data          */
} Qjo_JN_Key_3_Output_Section_t;


/*********************************************************************/
/*********************************************************************/
/* Start Of Structures For The Retrieve Journal Receiver Information */
/*  (QjoRtvJrnReceiverInformation) API.                              */
/*********************************************************************/
/*********************************************************************/


/*********************************************************************/
/*  Type Definition for the RRCV0100 Format, for the Retrieve Journal*/
/*   Receiver Information (QjoRtvJrnReceiverInformation) API         */
/*   receiver variable.                                              */
/*********************************************************************/

typedef _Packed struct Qjo_RRCV0100
{
   Qjo_Bytes_Returned_t           Bytes_Returned;
   Qjo_Bytes_Available_t          Bytes_Available;
   Qjo_Jrn_Rcv_Name_t             Jrn_Rcv_Name;
   Qjo_Jrn_Rcv_Lib_Name_t         Jrn_Rcv_Lib_Name;
   Qjo_Jrn_Name_t                 Jrn_Name;
   Qjo_Jrn_Lib_Name_t             Jrn_Lib_Name;
   Qjo_Threshold_t                Threshold;
   Qjo_Size_t                     Size;
   Qjo_Aux_Stg_Pool_t             Aux_Stg_Pool;
   Qjo_Num_Jrn_Entries_t          Num_Jrn_Entries;
   Qjo_Max_Ent_Spc_Data_Len_t     Max_Ent_Spc_Data_Len;
   Qjo_Max_Null_Val_Ind_t         Max_Null_Val_Ind;
   Qjo_First_Seq_Num_t            First_Seq_Num;
   Qjo_Min_ESD_Dta_t              Min_ESD_Dta;                /* @A7A*/
   Qjo_Min_ESD_Fil_t              Min_ESD_Fil;                /* @A7A*/
   char                           Reserved_1[2];              /* @A7C*/
   Qjo_Last_Seq_Num_t             Last_Seq_Num;
   long int                       Reserved_2;
   Qjo_Status_t                   Status;
   Qjo_Min_Fxd_Len_Val_t          Min_Fxd_Len_Val;
   Qjo_Rcv_Max_Opt_Val_t          Rcv_Max_Opt_Val;
   char                           Reserved_3[4];
   Qjo_Attach_Date_Time_t         Attach_Date_Time;
   Qjo_Detach_Date_Time_t         Detach_Date_Time;
   Qjo_Saved_Date_Time_t          Saved_Date_Time;
   Qjo_Text_t                     Text;
   Qjo_Pending_Trans_t            Pending_Trans;
   Qjo_Remote_Jrn_Type_t          Remote_Jrn_Type;
   Qjo_Lcl_Jrn_Name_t             Lcl_Jrn_Name;
   Qjo_Lcl_Jrn_Lib_Name_t         Lcl_Jrn_Lib_Name;
   Qjo_Lcl_Jrn_System_t           Lcl_Jrn_System;
   Qjo_Lcl_Jrn_Rcv_Lib_Name_t     Lcl_Jrn_Rcv_Lib_Name;
   Qjo_Src_Jrn_Name_t             Src_Jrn_Name;
   Qjo_Src_Jrn_Lib_Name_t         Src_Jrn_Lib_Name;
   Qjo_Src_Jrn_System_t           Src_Jrn_System;
   Qjo_Src_Jrn_Rcv_Lib_Name_t     Src_Jrn_Rcv_Lib_Name;
   Qjo_Redirected_Jrn_Rcv_Lib_t   Redirected_Jrn_Rcv_Lib;
   Qjo_Dual_Jrn_Rcv_Name_t        Dual_Jrn_Rcv_Name;
   Qjo_Dual_Jrn_Rcv_Lib_Name_t    Dual_Jrn_Rcv_Lib_Name;
   Qjo_Prev_Jrn_Rcv_Name_t        Prev_Jrn_Rcv_Name;
   Qjo_Prev_Jrn_Rcv_Lib_Name_t    Prev_Jrn_Rcv_Lib_Name;
   Qjo_Prev_Dual_Jrn_Rcv_Name_t   Prev_Dual_Jrn_Rcv_Name;
   Qjo_Prev_Dual_Jrn_Rcv_Lib_Nm_t Prev_Dual_Jrn_Rcv_Lib_Nm;
   Qjo_Next_Jrn_Rcv_Name_t        Next_Jrn_Rcv_Name;
   Qjo_Next_Jrn_Rcv_Lib_Name_t    Next_Jrn_Rcv_Lib_Name;
   Qjo_Next_Dual_Jrn_Rcv_Name_t   Next_Dual_Jrn_Rcv_Name;
   Qjo_Next_Dual_Jrn_Rcv_Lib_Nm_t Next_Dual_Jrn_Rcv_Lib_Nm;
   Qjo_Num_Jrn_Entries_Long_t     Num_Jrn_Entries_Long;
   Qjo_Max_ESD_Len_Long_t         Max_Ent_Spc_Data_Len_Long;
   Qjo_Seq_Num_t                  First_Seq_Num_Long;
   Qjo_Seq_Num_t                  Last_Seq_Num_Long;
   Qjo_ASP_Dev_Name_t             ASP_Dev_Name;
   Qjo_Lcl_Jrn_ASP_Grp_Name_t     Lcl_Jrn_ASP_Grp_Name;       /* @ABA*/
   Qjo_Src_Jrn_ASP_Grp_Name_t     Src_Jrn_ASP_Grp_Name;       /* @ABA*/
   Qjo_Fixed_Length_Data_t        Fixed_Length_Data_JOB;    /* @ACA*/
   Qjo_Fixed_Length_Data_t        Fixed_Length_Data_USR;    /* @ACA*/
   Qjo_Fixed_Length_Data_t        Fixed_Length_Data_PGM;    /* @ACA*/
   Qjo_Fixed_Length_Data_t        Fixed_Length_Data_PGMLIB; /* @ACA*/
   Qjo_Fixed_Length_Data_t        Fixed_Length_Data_SYSSEQ; /* @ADC*/
   Qjo_Fixed_Length_Data_t        Fixed_Length_Data_RMTADR; /* @ACA*/
   Qjo_Fixed_Length_Data_t        Fixed_Length_Data_THD;    /* @ACA*/
   Qjo_Fixed_Length_Data_t        Fixed_Length_Data_LUW;    /* @ACA*/
   Qjo_Fixed_Length_Data_t        Fixed_Length_Data_XID;    /* @ACA*/
   char                           Reserved_4[21];           /* @ACC*/
} Qjo_RRCV0100_t;


/*********************************************************************/
/*********************************************************************/
/* Start Of Structures For The Retrieve Journal Entries              */
/*  (QjoRetrieveJournalEntries) API.                                 */
/*********************************************************************/
/*********************************************************************/


/*********************************************************************/
/*  Type Definition for the Format For Variable Length Record, for   */
/*   the Retrieve Journal Entry (QjoRetrieveJournalEntries)          */
/*   API input.                                                      */
/*********************************************************************/
/* NOTE: The following type definition only defines the fixed        */
/*       portion of the format. Any varying length field will        */
/*       have to be defined by the user.                             */
/*********************************************************************/

typedef _Packed struct Qjo_JE_Fmt_Var_Len_Rcrd
{
   Qjo_Len_Var_Len_Rcrd_t      Len_Var_Len_Rcrd;
   Qjo_Key_t                   Key;
   Qjo_Len_Of_Data_t           Len_Of_Data;
 /*Qjo_JE_Data_t               Data[];*/
} Qjo_JE_Fmt_Var_Len_Rcrd_t;


/*********************************************************************/
/*  Type Definition for the Journal Entries To Retrieve, for the     */
/*   Retrieve Journal Entries (QjoRetrieveJournalEntries)            */
/*   API input.                                                      */
/*********************************************************************/
/* NOTE: The following type definition only defines the fixed        */
/*       portion of the format. Any varying length field will        */
/*       have to be defined by the user.                             */
/*********************************************************************/

typedef _Packed struct Qjo_JE_Jrn_Info_Retrieve
{
   Qjo_Num_Var_Len_Rcrds_t     Num_Var_Len_Rcrds;
 /*Qjo_JE_Fmt_Var_Len_Rcrd_t   Fmt_Var_Len_Rcrd[];*/
} Qjo_JE_Jrn_Info_Retrieve_t;


/*********************************************************************/
/*  Type Definition for the Format for Receiver Range, for the       */
/*   the Retrieve Journal Entry (QjoRetrieveJournalEntries)          */
/*   API input                                                       */
/*********************************************************************/

typedef _Packed struct Qjo_JE_Rcv_Range_Fmt
{
   Qjo_Jrn_Rcv_Name_t          Starting_Jrn_Rcv_Name;
   Qjo_Jrn_Rcv_Lib_Name_t      Starting_Jrn_Rcv_Lib_Name;
   Qjo_Jrn_Rcv_Name_t          Ending_Jrn_Rcv_Name;
   Qjo_Jrn_Rcv_Lib_Name_t      Ending_Jrn_Rcv_Lib_Name;
} Qjo_JE_Rcv_Range_Fmt_t;


/*********************************************************************/
/*  Type Definition for the Data for Key 1, for the Retrieve Journal */
/*   Entry (QjoRetrieveJournalEntries) API input.                    */
/*********************************************************************/


typedef _Packed struct Qjo_JE_Data_Key_1
{
   Qjo_JE_Rcv_Range_Fmt_t    Receiver_Range;
} Qjo_JE_Data_Key_1_t;


/*********************************************************************/
/*  Type Definition for the Data for Key 2, for the Retrieve Journal */
/*   Entry (QjoRetrieveJournalEntries) API input.                    */
/*********************************************************************/

typedef _Packed struct Qjo_JE_Data_Key_2
{
   Qjo_Seq_Num_t    Starting_Seq_Num;
} Qjo_JE_Data_Key_2_t;


/*********************************************************************/
/*  Type Definition for the Data for Key 3, for the Retrieve Journal */
/*   Entry (QjoRetrieveJournalEntries) API input.                    */
/*********************************************************************/

typedef _Packed struct Qjo_JE_Data_Key_3
{
   Qjo_Time_Stamp_t    Starting_Time_Stamp;
} Qjo_JE_Data_Key_3_t;


/*********************************************************************/
/*  Type Definition for the Data for Key 4, for the Retrieve Journal */
/*   Entry (QjoRetrieveJournalEntries) API input.                    */
/*********************************************************************/

typedef _Packed struct Qjo_JE_Data_Key_4
{
   Qjo_Seq_Num_t    Ending_Seq_Num;
} Qjo_JE_Data_Key_4_t;


/*********************************************************************/
/*  Type Definition for the Data for Key 5, for the Retrieve Journal */
/*   Entry (QjoRetrieveJournalEntries) API input.                    */
/*********************************************************************/

typedef _Packed struct Qjo_JE_Data_Key_5
{
   Qjo_Time_Stamp_t    Ending_Time_Stamp;
} Qjo_JE_Data_Key_5_t;


/*********************************************************************/
/*  Type Definition for the Data for Key 6, for the Retrieve Journal */
/*   Entry (QjoRetrieveJournalEntries) API input.                    */
/*********************************************************************/


typedef _Packed struct Qjo_JE_Data_Key_6
{
   Qjo_Number_Entries_t   Number_Entries;
} Qjo_JE_Data_Key_6_t;


/*********************************************************************/
/*  Type Definition for the Format for Journal Code, for the         */
/*   the Retrieve Journal Entry (QjoRetrieveJournalEntries)          */
/*   API input                                                       */
/*********************************************************************/

typedef _Packed struct Qjo_JE_Jrn_Codes
{
   Qjo_Jrn_Code_Value_t       Jrn_Code;
   Qjo_Jrn_Code_Selection_t   Jrn_Selection;
} Qjo_JE_Jrn_Codes_t;


/*********************************************************************/
/*  Type Definition for the Data for Key 7, for the Retrieve Journal */
/*   Entry (QjoRetrieveJournalEntries) API input.                    */
/*********************************************************************/
/* NOTE: The following type definition only defines the fixed        */
/*       portion of the format. Any varying length field will        */
/*       have to be defined by the user.                             */
/*********************************************************************/


typedef _Packed struct Qjo_JE_Data_Key_7
{
   Qjo_Num_In_Array_t    Num_In_Array;
 /*Qjo_JE_Jrn_Codes_t    Jrn_Codes[];*/
} Qjo_JE_Data_Key_7_t;


/*********************************************************************/
/*  Type Definition for the Data for Key 8, for the Retrieve Journal */
/*   Entry (QjoRetrieveJournalEntries) API input.                    */
/*********************************************************************/
/* NOTE: The following type definition only defines the fixed        */
/*       portion of the format. Any varying length field will        */
/*       have to be defined by the user.                             */
/*********************************************************************/


typedef _Packed struct Qjo_JE_Data_Key_8
{
   Qjo_Num_In_Array_t    Num_In_Array;
 /*Qjo_Jrn_Entry_Type_t  Jrn_Entry_Type[];*/
} Qjo_JE_Data_Key_8_t;


/*********************************************************************/
/*  Type Definition for the Data for Key 9, for the Retrieve Journal */
/*   Entry (QjoRetrieveJournalEntries) API input.                    */
/*********************************************************************/


typedef _Packed struct Qjo_JE_Data_Key_9
{
   Qjo_Job_t    Job;
} Qjo_JE_Data_Key_9_t;


/*********************************************************************/
/*  Type Definition for the Data for Key 10, for the Retrieve Journal*/
/*   Entry (QjoRetrieveJournalEntries) API input.                    */
/*********************************************************************/


typedef _Packed struct Qjo_JE_Data_Key_10
{
   Qjo_Program_Name_t    Program;
} Qjo_JE_Data_Key_10_t;


/*********************************************************************/
/*  Type Definition for the Data for Key 11, for the Retrieve Journal*/
/*   Entry (QjoRetrieveJournalEntries) API input.                    */
/*********************************************************************/


typedef _Packed struct Qjo_JE_Data_Key_11
{
   Qjo_User_Profile_t    User_Profile;
} Qjo_JE_Data_Key_11_t;


/*********************************************************************/
/*  Type Definition for the Data for Key 12, for the Retrieve Journal*/
/*   Entry (QjoRetrieveJournalEntries) API input.                    */
/*********************************************************************/


typedef _Packed struct Qjo_JE_Data_Key_12
{
   Qjo_Commit_Cycle_Id_t    Commit_Cycle_Id;
} Qjo_JE_Data_Key_12_t;


/*********************************************************************/
/*  Type Definition for the Data for Key 13, for the Retrieve Journal*/
/*   Entry (QjoRetrieveJournalEntries) API input.                    */
/*********************************************************************/


typedef _Packed struct Qjo_JE_Data_Key_13
{
   Qjo_Dependent_Entries_t    Dependent_Entries;
} Qjo_JE_Data_Key_13_t;


/*********************************************************************/
/*  Type Definition for the Data for Key 14, for the Retrieve Journal*/
/*   Entry (QjoRetrieveJournalEntries) API input.                    */
/*********************************************************************/


typedef _Packed struct Qjo_JE_Data_Key_14
{
   Qjo_Include_Entries_t    Include_Entries;
} Qjo_JE_Data_Key_14_t;


/*********************************************************************/
/*  Type Definition for the Data for Key 15, for the Retrieve Journal*/
/*   Entry (QjoRetrieveJournalEntries) API input.                    */
/*********************************************************************/


typedef _Packed struct Qjo_JE_Data_Key_15
{
   Qjo_NVI_Len_t    NVI_Len;
} Qjo_JE_Data_Key_15_t;


/*********************************************************************/
/*  Type Definitions for the Format for File, for the                */
/*   the Retrieve Journal Entry (QjoRetrieveJournalEntries)          */
/*   API input                                                       */
/*********************************************************************/

typedef _Packed struct Qjo_JE_File_Members
{
   Qjo_File_Name_t      File_Name;
   Qjo_Library_Name_t   Library_Name;
   Qjo_Member_Name_t    Member_Name;
} Qjo_JE_File_Members_t;


/*********************************************************************/
/*  Type Definition for the Data for Key 16, for the Retrieve Journal*/
/*   Entry (QjoRetrieveJournalEntries) API input.                    */
/*********************************************************************/
/* NOTE: The following type definition only defines the fixed        */
/*       portion of the format. Any varying length field will        */
/*       have to be defined by the user.                             */
/*********************************************************************/


typedef _Packed struct Qjo_JE_Data_Key_16
{
   Qjo_Num_In_Array_t      Num_In_Array;
 /*Qjo_JE_File_Members_t   File_Member[];*/
} Qjo_JE_Data_Key_16_t;


/*********************************************************************/
/*  Type Definitions for the Format for Key 17 (Object), for the     */
/*   the Retrieve Journal Entry (QjoRetrieveJournalEntries)          */
/*   API input                                                   @AJA*/
/*********************************************************************/


typedef _Packed struct Qjo_JE_Object
{
   Qjo_Object_Name_t       Object_Name;
   Qjo_Object_Lib_Name_t   Library_Name;
   Qjo_Object_Type_t       Object_Type;
   Qjo_Member_Name_t       Member_Name;
} Qjo_JE_Object_t;


/*********************************************************************/
/*  Type Definition for the Data for Key 17 (Object) for the         */
/*  Retrieve Journal Entry (QjoRetrieveJournalEntries) API input.@AJA*/
/*********************************************************************/
/* NOTE: The following type definition only defines the fixed        */
/*       portion of the format. Any varying length field will        */
/*       have to be defined by the user.                             */
/*********************************************************************/


typedef _Packed struct Qjo_JE_Data_Key_17
{
   Qjo_Num_In_Array_t      Num_In_Array;
 /*Qjo_JE_Object           Object[];*/
} Qjo_JE_Data_Key_17_t;


/*********************************************************************/
/*  Type Definition for the Data for Key 18 (Object Path) for the    */
/*  Retrieve Journal Entry (QjoRetrieveJournalEntries) API input.@AJA*/
/*********************************************************************/
/* NOTE: The following type definition only defines the fixed        */
/*       portion of the format. Any varying length field will        */
/*       have to be defined by the user.                             */
/*********************************************************************/


typedef _Packed struct Qjo_JE_Data_Key_18
{
   Qjo_Num_In_Array_t      Num_In_Array;
   char                    reserved[12];
 /*Qjo_Object_Entry_t      Entry[];*/
} Qjo_JE_Data_Key_18_t;


/*********************************************************************/
/*  Type Definition for the Data for Key 19 (Object File Identifier),*/
/*  for the Retrieve Journal Entry (QjoRetrieveJournalEntries) API   */
/*  input.                                                       @AJA*/
/*********************************************************************/
/* NOTE: The following type definition only defines the fixed        */
/*       portion of the format. Any varying length field will        */
/*       have to be defined by the user.                             */
/*********************************************************************/


typedef _Packed struct Qjo_JE_Data_Key_19
{
   Qjo_Num_In_Array_t      Num_In_Array;
 /*Qp0lFID_t               Entry[];*/
} Qjo_JE_Data_Key_19_t;


/*********************************************************************/
/*  Type Definition for the Data for Key 20 (Directory Subtree), for */
/*  the Retrieve Journal Entry (QjoRetrieveJournalEntries) API input.*/
/*                                                               @AJA*/
/*********************************************************************/

typedef _Packed struct Qjo_JE_Data_Key_20
{
   Qjo_Subtree_t    Subtree;
} Qjo_JE_Data_Key_20_t;


/*********************************************************************/
/*  Type Definition for the Data for Key 21 (Name Pattern), for the  */
/*  Retrieve Journal Entry (QjoRetrieveJournalEntries) API input.@AJA*/
/*********************************************************************/
/* NOTE: The following type definition only defines the fixed        */
/*       portion of the format. Any varying length field will        */
/*       have to be defined by the user.                             */
/*********************************************************************/


typedef _Packed struct Qjo_JE_Data_Key_21
{
   Qjo_Num_In_Array_t      Num_In_Array;
   char                    reserved[12];
 /*Qjo_Object_Entry_t      Entry[];*/
} Qjo_JE_Data_Key_21_t;


/*********************************************************************/
/*  Type Definition for the Data for Key 22, for the Retrieve        */
/*   Journal Entry (QjoRetrieveJournalEntries) API input.        @ALA*/
/*********************************************************************/


typedef _Packed struct Qjo_JE_Data_Key_22
{
   Qjo_Format_Min_Data_t    Format_Min_Data;
} Qjo_JE_Data_Key_22_t;


/*********************************************************************/
/*  Type Definition for the RJNE0100 Format Header, for the Retrieve */
/*   Journal Entry (QjoRetrieveJournalEntries) API                   */
/*   receiver variable.                                              */
/*********************************************************************/

typedef _Packed struct Qjo_RJNE0100_Hdr
{
   Qjo_Bytes_Returned_t           Bytes_Returned;
   Qjo_Offset_First_Jrn_Entry_t   Offset_First_Jrn_Entry;
   Qjo_Number_Entries_t           Number_Entries_Retreived;
   Qjo_Continuation_Handle_t      Continuation_Handle;
} Qjo_RJNE0100_Hdr_t;


/****************************************************************/ /* @AGA*/
/*  Type Definition for the RJNE0200 receiver info, for the Rtv */ /* @AGA*/
/*   Journal Entry (QjoRetrieveJournalEntries) API              */ /* @AGA*/
/*   receiver variable.                                         */ /* @AGA*/
/****************************************************************/ /* @AGA*/
                                                                   /* @AGA*/
typedef _Packed struct Qjo_RJNE0200_Receiver_Information           /* @AGA*/
{                                                                  /* @AGA*/
   Qjo_Name_t                     Receiver;                        /* @AGA*/
   Qjo_Name_t                     Receiver_Library;                /* @AGA*/
   Qjo_Name_t                     Receiver_ASP_Device_Name;        /* @AGA*/
   Qjo_ASP_t                      Receiver_ASP;                    /* @AGA*/
} Qjo_RJNE0200_Receiver_Information_t;                             /* @AGA*/

/****************************************************************/ /* @ACA*/
/*  Type Definition for the RJNE0200 Format Header, for the Rtv */ /* @ACA*/
/*   Journal Entry (QjoRetrieveJournalEntries) API              */ /* @ACA*/
/*   receiver variable.                                         */ /* @ACA*/
/****************************************************************/ /* @ACA*/
                                                                   /* @ACA*/
typedef _Packed struct Qjo_RJNE0200_Hdr                            /* @ACA*/
{                                                                  /* @ACA*/
   Qjo_Bytes_Returned_t           Bytes_Returned;                  /* @ACA*/
   Qjo_Offset_First_Jrn_Entry_t   Offset_First_Jrn_Entry;          /* @ACA*/
   Qjo_Number_Entries_t           Number_Entries_Retreived;        /* @ACA*/
   Qjo_Continuation_Indicator_t   Continuation_Indicator;          /* @AGC*/
   Qjo_Name_t                     Continuation_Starting_Receiver;  /* @AGC*/
   Qjo_Name_t                     Continuation_Starting_Receiver_Library;
                                                                   /* @AGC*/
   Qjo_Seq_Num_t                  Continuation_Starting_Sequence_Number;
                                                                   /* @AGA*/
   char                           Reserved[11];       /* 16 byte bdy  @AGC*/
} Qjo_RJNE0200_Hdr_t;                                              /* @ACA*/


/*********************************************************************/
/*  Type Definition for the RJNE0100 Format for the                  */
/*   Journal Entry Header, for the Retrieve                          */
/*   Journal Entry (QjoRetrieveJournalEntries) API                   */
/*   receiver variable.                                              */
/*********************************************************************/


typedef _Packed struct Qjo_RJNE0100_JE_Hdr
{
   Qjo_Dsp_Next_Jrn_Entry_Hdr_t     Dsp_Next_Jrn_Hdr;
   Qjo_Dsp_NVI_t                    Dsp_NVI;
   Qjo_Dsp_Entry_Specific_Data_t    Dsp_Entry_Specific_Data;
   Qjo_Ptr_Handle_t                 Ptr_Handle;
   Qjo_Seq_Num_t                    Seq_Number;
   Qjo_Jrn_Code_t                   Jrn_Code;
   Qjo_Entry_Type_t                 Entry_Type;
   Qjo_Time_Stamp_t                 Time_Stamp;
   Qjo_Job_Name_t                   Job_Name;
   Qjo_User_Name_t                  User_Name;
   Qjo_Job_Number_t                 Job_Number;
   Qjo_Program_Name_t               Program_Name;
   Qjo_Object_t                     Object;
/**************************************************************************/
/*NOTE: The Count_Rel_Rec_Num field can exceed 10 digits when used as
        a count of number of entries applied (APYJRNCHG) or removed
       (RMVJRNCHG. In that case it will be set to -1. For those entries
       the correct count will be at position 162 in the entry specific
       data (ESD).                                                    @AIA*/
/**************************************************************************/
   Qjo_Count_Rel_Rec_Num_t          Count_Rel_Rec_Num;
   Qjo_Indicator_Flag_t             Indicator_Flag;
   Qjo_Commit_Cycle_Id_t            Commit_Cycle_Id;
   Qjo_User_Profile_t               User_Profile;
   Qjo_System_Name_t                System_Name;
   Qjo_Jid_t                        Jid;
   Qjo_Referential_Constraint_t     Referential_Constraint;
   Qjo_Trigger_t                    Trigger;
   Qjo_Incomplete_Data_t            Incomplete_Data;
   Qjo_Object_Name_Indicator_t      Object_Name_Indicator;
   Qjo_Ignore_during_APYRMV_t       Ignore_during_APYRMV;
   Qjo_Min_ESD_t                    Min_ESD;                  /* @A7A*/
} Qjo_RJNE0100_JE_Hdr_t;


/******************************************************************** @ACA*/
/*  Type Definition for the RJNE0200 Format for the                   @ACA*/
/*   Journal Entry Header, for the Retrieve                           @ACA*/
/*   Journal Entry (QjoRetrieveJournalEntries) API                    @ACA*/
/*   receiver variable.                                               @ACA*/
/******************************************************************** @ACA*/
                                                                   /* @ACA*/
typedef _Packed struct Qjo_RJNE0200_JE_Hdr                         /* @ACA*/
{                                                                  /* @ACA*/
   Qjo_Dsp_Next_Jrn_Entry_Hdr_t     Dsp_Next_Jrn_Hdr;              /* @ACA*/
   Qjo_Dsp_NVI_t                    Dsp_NVI;                       /* @ACA*/
   Qjo_Dsp_Entry_Specific_Data_t    Dsp_Entry_Specific_Data;       /* @ACA*/
/******************************************************************** @ACA*/
/*  Dsp_XID leads to a xid_t structure, which is defined in <xa.h>  * @ACA*/
/******************************************************************** @ACA*/
   Qjo_Dsp_XID_t                    Dsp_XID;                       /* @ACA*/
/******************************************************************** @ACA*/
/*  Dsp_LUW leads to a Qjo_LUW_t sruct, which is defined above.     * @ACA*/
/******************************************************************** @ACA*/
   Qjo_Dsp_LUW_t                    Dsp_LUW;                       /* @ACA*/
   Qjo_Dsp_Receiver_Information_t   Dsp_Receiver_Information;      /* @AGA*/
   Qjo_Unformatted_Seq_Num_t        Seq_Number;                    /* @ACA*/
   Qjo_Unformatted_Time_Stamp_t     Unformatted_Time_Stamp;        /* @ACA*/
   Qjo_Thread_ID_t                  Thread_ID;                     /* @ACA*/
   Qjo_System_Sequence_Number_t     System_Sequence_Number;        /* @ACA*/
   Qjo_Unformatted_Count_RRN_t      Count_Rel_Rec_Num;             /* @ACA*/
   Qjo_Unformatted_CCID_t           Commit_Cycle_Id;               /* @ACA*/
   Qjo_Ptr_Handle_t                 Ptr_Handle;                    /* @ACA*/
   Qjo_Remote_Port_t                Remote_Port;                   /* @ACA*/
   Qjo_Arm_Number_t                 Arm_Number;                    /* @ACA*/
   Qjo_ASP_t                        Program_ASP;                   /* @ACA*/
   Qjo_Remote_Address_t             Remote_Address;                /* @ACA*/
   Qjo_Jrn_Code_t                   Jrn_Code;                      /* @ACA*/
   Qjo_Entry_Type_t                 Entry_Type;                    /* @ACA*/
   Qjo_Name_t                       Job_Name;                      /* @ACA*/
   Qjo_Name_t                       User_Name;                     /* @ACA*/
   Qjo_Job_Number_t                 Job_Number;                    /* @ACA*/
   Qjo_Name_t                       Program_Name;                  /* @ACA*/
   Qjo_Name_t                       Program_Library_Name;          /* @ACA*/
   Qjo_Name_t                       Program_ASP_Device_Name;       /* @ACA*/
   Qjo_Object_t                     Object;                        /* @ACA*/
   Qjo_Name_t                       User_Profile;                  /* @ACA*/
   Qjo_Jid_t                        Jid;                           /* @ACA*/
   Qjo_Address_Family_t             Address_Family;                /* @ACA*/
   Qjo_System_Name_t                System_Name;                   /* @ACA*/
   Qjo_Indicator_Flag_t             Indicator_Flag;                /* @ACA*/
   Qjo_Object_Name_Indicator_t      Object_Name_Indicator;         /* @ACA*/
   unsigned int                     Referential_Constraint:1; /* @ACA @AGC*/
   unsigned int                     Trigger:1;                /* @ACA @AGC*/
   unsigned int                     Incomplete_Data:1;        /* @ACA @AGC*/
   unsigned int                     Ignore_during_APYRMV:1;   /* @ACA @AGC*/
   unsigned int                     Min_ESD:1;                /* @ACA @AGC*/
   unsigned int                     File_Type_Indicator:1;         /* @AJA*/
   unsigned int                     Min_Field_Boundaries:1;        /* @ALA*/
   unsigned int                     Reserved1:1;    /* @ACA @AGC @AKA @ALC*/
   Qjo_Object_Type_t                Object_Type;                   /* @AJA*/
   char                             Reserved2[3];        /* @AFC @AJC @ALC*/
   Qjo_Nested_Commit_Level          Nested_Commit_Level;           /* @ALA*/
} Qjo_RJNE0200_JE_Hdr_t;                                           /* @ACA*/


/*********************************************************************/
/*  Type Definition for the RJNE0100 and RJNE0200 Formats for the    */
/*   Journal Entry's Null Value Indicators (if *VARLEN Null Value    */
/*   Indicators specified) for the Retrieve Journal Entry            */
/*   (QjoRetrieveJournalEntries) API receiver variable.              */
/*********************************************************************/


typedef _Packed struct Qjo_RJNE0100_JE_NVI_Varlen
{
   Qjo_Length_NVI_t               Length_NVI;
   Qjo_NVI_t                      NVI;
} Qjo_RJNE0100_JE_NVI_Varlen_t;


/*********************************************************************/
/*  Type Definition for the RJNE0100 and RJNE0200 Formats for the    */
/*   Journal Entry's Null Value Indicators (if Field Length Null     */
/*   Value Indicators specified) for the Retrieve Journal Entry      */
/*   (QjoRetrieveJournalEntries) API receiver variable.              */
/*********************************************************************/


typedef _Packed struct Qjo_RJNE0100_JE_NVI_Fld_Len
{
   Qjo_NVI_t                      NVI;
} Qjo_RJNE0100_JE_NVI_Fld_Len_t;


/*********************************************************************/
/*  Type Definition for the RJNE0100 and RJNE0200 Formats for the    */
/*   Journal Entry's Entry Specific Data for the Retrieve Journal    */
/*   Entry (QjoRetrieveJournalEntries) API receiver variable.        */
/*********************************************************************/


typedef _Packed struct Qjo_RJNE0100_JE_ESD
{
  Qjo_Len_ESD_t                      Len_ESD;
  char                               Reserved[11];
  Qjo_ESD_t                          ESD;
} Qjo_RJNE0100_JE_ESD_t;


/*********************************************************************/
/*********************************************************************/
/* Start OF Function Prototypes.                                     */
/*********************************************************************/
/*********************************************************************/


/*********************************************************************/
/* Prototype for calling Add Remote Journal(QjoAddRemoteJournal) API.*/
/*********************************************************************/

#ifdef __ILEC400__
#pragma argument(QjoAddRemoteJournal, OS, nowiden)
      extern
#else
      extern "C"
#endif

void QjoAddRemoteJournal(
                                              /* Required parameters */
                             char     *,      /* Qualified journal   */
                                              /*  name               */
                             char     *,      /* Relational database */
                                              /*  directory entry    */
                                              /* Omissible parameters*/
                             void     *,      /* Request variable    */
                             long int *,      /* Length of request   */
                                              /*  variable           */
                             char     *,      /* Format name of      */
                                              /*  request variable   */
                             void     *       /* Error code          */
                               );


/*********************************************************************/
/* Prototype for calling Change Journal State (QjoChangeJournalState)*/
/*  API.                                                             */
/*********************************************************************/


#ifdef __ILEC400__
#pragma argument(QjoChangeJournalState, OS, nowiden)
      extern
#else
      extern "C"
#endif

void QjoChangeJournalState(
                                              /* Required parameters */
                             char     *,      /* Qualified journal   */
                                              /*  name               */
                             void     *,      /* Request variable    */
                             long int *,      /* Length of request   */
                                              /*  variable           */
                             char     *,      /* Format name of      */
                                              /*  request variable   */
                                              /* Omissible parameters*/
                             void     *,      /* Receiver variable   */
                             long int *,      /* Length of receiver  */
                                              /*  variable           */
                             void     *       /* Error code          */
                                 );


/*********************************************************************/
/* Prototype for calling Remove Remote Journal                       */
/*  (QjoRemoveRemoteJournal) API.                                    */
/*********************************************************************/

#ifdef __ILEC400__
#pragma argument(QjoRemoveRemoteJournal, OS, nowiden)
      extern
#else
      extern "C"
#endif

void QjoRemoveRemoteJournal(
                                              /* Required parameters */
                             char     *,      /* Qualified journal   */
                                              /*  name               */
                             char     *,      /* Relational database */
                                              /*  directory entry    */
                                              /* Omissible parameters*/
                             void     *,      /* Request variable    */
                             long int *,      /* Length of request   */
                                              /*  variable           */
                             char     *,      /* Format name of      */
                                              /*  request variable   */
                             void     *       /* Error code          */
                               );


/*********************************************************************/
/* Prototype for calling Retrieve Journal Information                */
/*  (QjoRetrieveJournalInformation) API.                             */
/*********************************************************************/

#ifdef __ILEC400__
#pragma argument(QjoRetrieveJournalInformation, OS, nowiden)
      extern
#else
      extern "C"
#endif

void QjoRetrieveJournalInformation(
                                              /* Required parameters */
                             void     *,      /* Receiver variable   */
                             long int *,      /* Length of receiver  */
                                              /*  variable           */
                             char     *,      /* Qualified journal   */
                                              /*  name               */
                             char     *,      /* Format name         */
                             void     *,      /* Journal information */
                                              /*  to retrieve        */
                                              /* Omissible parameters*/
                             void     *       /* Error code          */
                                         );


/*********************************************************************/
/* Prototype for calling Retrieve Journal Receiver Information       */
/*  (QjoRtvJrnReceiverInformation) API.                              */
/*********************************************************************/

#ifdef __ILEC400__
#pragma argument(QjoRtvJrnReceiverInformation, OS, nowiden)
      extern
#else
      extern "C"
#endif

void QjoRtvJrnReceiverInformation(
                                              /* Required parameters */
                             void     *,      /* Receiver variable   */
                             long int *,      /* Length of receiver  */
                                              /*  variable           */
                             char     *,      /* Qualified journal   */
                                              /*  receiver name      */
                             char     *,      /* Format name         */
                                              /* Omissible parameters*/
                             void     *       /* Error code          */
                                        );

/*********************************************************************/
/* Prototype for calling Retrieve Journal Entries                    */
/*  (QjoRetrieveJournalEntries) API.                                 */
/*********************************************************************/

#ifdef __ILEC400__
#pragma argument(QjoRetrieveJournalEntries, OS, nowiden)
      extern
#else
      extern "C"
#endif

void QjoRetrieveJournalEntries(
                                              /* Required parameters */
                             void     *,      /* Receiver variable   */
                             long int *,      /* Length of receiver  */
                                              /*  variable           */
                             char     *,      /* Qualified journal   */
                                              /*  name               */
                             char     *,      /* Format name         */
                                              /* Omissible parameters*/
                             void     *,      /* Journal Entries to  */
                                              /*  retrieve           */
                             void     *       /* Error code          */
                                      );


/*********************************************************************/
/* Prototype for calling Delete Pointer Handle                       */
/*  (QjoDeletePointerHandle) API.                                    */
/*********************************************************************/

#ifdef __ILEC400__
#pragma argument(QjoDeletePointerHandle, OS, nowiden)
      extern
#else
      extern "C"
#endif

void QjoDeletePointerHandle(
                                              /* Required parameters */
                         unsigned long int *, /* Pointer Handle      */
                                              /* Omissible parameters*/
                         void              *  /* Error code          */
                                  );



/*********************************************************************/
/* Prototype for calling Start Journal                               */
/*  (QjoStartJournal) API.                                           */
/*********************************************************************/

QBFC_EXTERN void QjoStartJournal(Qjo_Object_Entry_Array_t *,
				 Qjo_File_ID_Entry_Array_t *,
				 Qlg_Path_Name_T *,
                                              /* Omissible parameters*/
				 Qjo_Journal_Options_t *,
				 Qus_EC_t *);

/*********************************************************************/
/* Prototype for calling End Journal                                 */
/*  (QjoEndJournal) API.                                             */
/*********************************************************************/

QBFC_EXTERN void QjoEndJournal(Qjo_Object_Entry_Array_t *,
			       Qjo_File_ID_Entry_Array_t *,
                                              /* Omissible parameters*/
			       Qlg_Path_Name_T *,
			       Qjo_Journal_Options_t *,
			       Qus_EC_t *);


#if (__OS400_TGTVRM__>=510)                                   /* @A5A*/
#pragma datamodel(pop)                                    /* @A5A*/
#endif                                                        /* @A5A*/

#endif /*_QJOURNAL_H*/
