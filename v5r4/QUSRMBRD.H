/* begin_generated_IBM_copyright_prolog                              */
/* This is an automatically generated copyright prolog.              */
/* After initializing,  DO NOT MODIFY OR MOVE                        */
/* ----------------------------------------------------------------- */
/*                                                                   */
/* Product(s):                                                       */
/*     5769-SS1                                                      */
/*     5722-XE1                                                      */
/*     5722-SS1                                                       */
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
 /* Header File Name: H/QUSRMBRD                                   */
 /*                                                                */
 /* Descriptive Name: Retrieve Member Description API              */
 /*                                                                */
 /* Description: The Retrieve Member Description API retrieves  n  */
 /*              specific information about a single database file */
 /*              member and returns the information to the calling */
 /*              program in a receiver variable.                   */
 /*                                                                */
 /* Header Files Included: None.                                   */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: Qdb_Mbrd0100_t                                 */
 /*                 Qdb_Mbrd0200_t                                 */
 /*                 Qdb_Mbrd0300_t                                 */
 /*                 Qdb_Mbrd0400_t                                 */
 /*                 Qdb_File_List_t                                */
 /*                 Qdb_Cst_Indexs_t                               */
 /*                 Qdb_Dsas_t                                     */
 /*                 Qdb_Dsias_t                                    */
 /*                 Qdb_Mbrd0200a_t                                */
 /*                 Qdb_DS_Index_List_t                            */
 /*                 Qdb_MQT_List_t                                 */
 /*                 Qdb_Mbrd0500_t                                 */
 /*                                                                */
 /* Function Prototype List: QUSRMBRD                              */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= D2862000     3D10  940102 ROCH:     New Include           */
 /* $A1= D9197100     3D60  941104 ROCH:     Add data space        */
 /*                                           activity statistics  */
 /*                                           support.             */
 /* $A2= D9491500     4D30  971215 45HDMK:   Add evi support.      */
 /* $A3= D9772500     4D50  990401 ROCH:     Double record capacity*/
 /* $A4= D9781600     4D50  990516 ROCH:     Additional info for   */
 /*                                          DS and DSI statistics.*/
 /* $A5=D98212.1  v5r1m0 991107 gchaney: Teraspace stage 2         */
 /* $A6=D9920700      5D30  030124 45HRLN:   Ragged Save While     */
 /*                                          Active, SWA, support. */
 /* $A7=P9A44247      5D30  031024 ISAMJA:   New Index structures  */
 /* $A8=D9311301      5D40  041113 VPZMJA:   New MQT structures    */
 /* $A9=P9A93025      5D40  050406 VPZMJA:   Add Last use info for */
 /*                                          indexes and MQTs      */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /******************************************************************/

#ifndef QUSRMBRD_h
#define QUSRMBRD_h

#if (__OS400_TGTVRM__>=510)                                  /*@A5A*/
    #pragma datamodel(P128)                                  /*@A5A*/
#endif                                                       /*@A5A*/

/*********************************************************************/
/* Prototypes for calling Retrieve Member Description API QUSRMBRD   */
/*********************************************************************/
#ifdef __ILEC400__
     #pragma linkage (QUSRMBRD,OS,nowiden)
#else
     extern "OS"
#endif

void QUSRMBRD(void *,               /* Receiver Variable             */
              long,                 /* Receiver Variable Length      */
              char *,               /* Format name                   */
              void *,               /* File and library name         */
              char *,               /* Member name                   */
              char *,               /* Override processing           */
              ...);                 /* Optional Parameters:
                                         Error code
                                         Find member processing      */

/*******************************************************************/
/* Record structure for QUSRMBRD MBRD0100 format                   */
/*******************************************************************/
typedef _Packed struct Qdb_Mbrd0100 {
     int  Bytes_Returned;
     int  Bytes_Available;
     char Db_File_Name[10];
     char Db_File_Lib[10];
     char Member_Name[10];
     char File_Attr[10];
     char Src_Type[10];
     char Crt_Date[13];
     char Change_Date[13];
     char Text_Desc[50];
     char Src_File;
} Qdb_Mbrd0100_t;

/*******************************************************************/
/* Record structure for QUSRMBRD MBRD0200 format                   */
/*******************************************************************/
typedef _Packed struct Qdb_Mbrd0200 {
     int  Bytes_Returned;
     int  Bytes_Available;
     char Db_File_Name[10];
     char Db_File_Lib[10];
     char Member_Name[10];
     char File_Attr[10];
     char Src_Type[10];
     char Crt_Date[13];
     char Src_Change_Date[13];
     char Text_Desc[50];
     char Src_File;
     char Ext_File;
     char Log_File;
     char Odp_Share;
     char Reserved[2];
     int  Num_Cur_Rec;
     int  Num_Dlt_Rec;
     int  Dat_Spc_Size;
     int  Acc_Pth_Size;
     int  Num_Dat_Mbr;
     char Change_Date[13];
     char Save_Date[13];
     char Rest_Date[13];
     char Exp_Date[13];
     int  Nbr_Days_Used;
     char Date_Lst_Used[7];
     char Use_Reset_Date[7];
     char Reserved1[2];
     int  Data_Spc_Sz_Mlt;
     int  Acc_Pth_Sz_Mlt;
     int  Member_Text_Ccsid;
     long Offset_Add_Info;
     long Length_Add_Info;
     unsigned int  Num_Cur_Rec_U;
     unsigned int  Num_Dlt_Rec_U;
     char Reserved2[6];
} Qdb_Mbrd0200_t;

/*******************************************************************/
/* Structure for record format and based-on file                   */
/*******************************************************************/
typedef _Packed struct Qdb_File_List{
     char File_Name[10];
     char File_Lib[10];
     char Member_Name[10];
     char Format_Name[10];
     int  Lgl_File_Rcd_Frmt_Num;
     int  Cur_Num_Rcds;
     int  Num_Dlt_Rcds;
     int  Acc_Pth_Sz;
     int  Acc_Pth_Sz_Mlt;
     char Acc_Pth_Shrd;
     char Acc_Pth_Vld;
     char Acc_Pth_Hld;
     char Acc_Pth_Owner_File[10];
     char Acc_Pth_Owner_Lib[10];
     char Acc_Pth_Owner_Mbr[10];
     char Acc_Pth_Jrn;
     char Reserved1[2];
     unsigned int  Cur_Num_Rcds_U;
     unsigned int  Num_Dlt_Rcds_U;
     char Reserved2[8];
} Qdb_File_List_t;

/*******************************************************************/
/* Structure for constraint index information                      */
/*******************************************************************/
typedef _Packed struct Qdb_Cst_Indexs {
     char  Cst_Lib_Name[10];
     short Cst_Name_Length;
     char  Cst_Name[258];
     long  Cst_Acc_Pth_Sz;
     long  Cst_Acc_Pth_Sz_Mlt;
     char  Cst_Pth_Shrd;
     char  Cst_Pth_Vld;
     char  Cst_Pth_Hld;
     char  Cst_Num_Lrd[8];
     char  Cst_Num_Prd[8];
     char  Reserved1[24];
} Qdb_Cst_Indexs_t;

/*******************************************************************/
/* Record structure for QUSRMBRD MBRD0300 format                   */
/*******************************************************************/
typedef _Packed struct Qdb_Mbrd0300 {
     long Bytes_Returned;
     long Bytes_Available;
     char Db_File_Name[10];
     char Db_File_Lib[10];
     char Member_Name[10];
     char File_Attr[10];
     char Src_Type[10];
     char Crt_Date[13];
     char Src_Change_Date[13];
     char Text_desc[50];
     char Src_File;
     char Ext_File;
     char Log_File;
     char Odp_Share;
     char Reserved[2];
     long Num_Cur_Rec;
     long Num_Dlt_Rec;
     long Dat_Spc_Size;
     long Acc_Pth_Size;
     long Num_Dat_Mbr;
     char Change_Date[13];
     char Save_Date[13];
     char Rest_Date[13];
     char Exp_Date[13];
     long Nbr_Days_Used;
     char Date_Lst_Used[7];
     char Use_Reset_Date[7];
     char Reserved1[2];
     long Data_Spc_Sz_Mlt;
     long Acc_Pth_Sz_Mlt;
     long Member_Text_Ccsid;
     long Offset_Add_Info;
     long Length_Add_Info;
     unsigned long Num_Cur_Rec_U;
     unsigned long Num_Dlt_Rec_U;
     char Reserved2[6];
     char Join_Member;
     char Acc_Pth_Maint;
     char SQL_File_Type[10];
     char Reserved3;
     char Allow_Read;
     char Allow_Write;
     char Allow_Update;
     char Allow_Delete;
     char Reserved4;
     long Rcds_Force_Write;
     long Max_Prct_Dlt_Rcd;
     long Init_Num_Rcd;
     long Incr_Num_Rcd;
     long Max_Num_Incr;
     unsigned long Cur_Num_Incr;
     unsigned long Rcd_Capacity;
     char Rcd_Format_Slct_Name[10];
     char Rcd_Format_Slct_Lib[10];
     short Num_Cst_Indexs;
     long  Offset_Cst_Indexs;
     char Reserved5[46];
   /*Qdb_File_List_t Based_On[];*//* Varying length                */
   /*Qdb_Cst_Indexs_t Constraint_Info[];*//* Varying length        */
} Qdb_Mbrd0300_t;

/*******************************************************************/
/* Record structure for data space activity statistics             */
/*******************************************************************/
typedef _Packed struct Qdb_Dsas {
     char Num_Act_Ops[8];
     char Num_Deact_Ops[8];
     char Num_Ins_Ops[8];
     char Num_Upd_Ops[8];
     char Num_Del_Ops[8];
     char Num_Reset_Ops[8];
     char Num_Cpy_Ops[8];
     char Num_Reorg_Ops[8];
     char Num_APBld_Ops[8];
     char Num_Lrd_Ops[8];
     char Num_Prd_Ops[8];
     char Num_Rej_Ksel[8];
     char Num_Rej_NKsel[8];
     char Num_Rej_Grp_By[8];
     unsigned long Num_Index_Val;
     unsigned long Num_Index_Ival;
     unsigned long Var_Data_Size;
     char Roll_Ended_State[1];
     char Rstd_Part_Trns_State[1];
     char Jrnl_Rcvr_Name[10];
     char Jrnl_Rcvr_Library[10];
     char Jrnl_Rcvr_ASP_DDName[10];
     char Reserved_1[36];
} Qdb_Dsas_t;

/*******************************************************************/
/* Record structure for data space index activity statistics       */
/*******************************************************************/
typedef _Packed struct Qdb_Dsias {
     char Num_Acc_Pth_Lrd[8];
     char Num_Acc_Pth_Prd[8];
     char Num_Unq_Keyf_One[8];
     char Num_Unq_Keyf_Two[8];
     char Num_Unq_Keyf_Three[8];
     char Num_Unq_Keyf_Four[8];
     unsigned long Num_Ovflow_Val;
     unsigned long Num_Delay_Keys;
     unsigned long Log_Page_Size;
     long Est_Rebuild;
     unsigned short Code_Size;
     char Last_Rebuild[13];
     char Reserved_1[13];
} Qdb_Dsias_t;

/*******************************************************************/
/* Record structure for Additional Mbrd0200 format Information     */
/*******************************************************************/
typedef _Packed struct Qdb_Mbrd0200a {
     Qdb_Dsas_t   Qdb_Dsas;
     Qdb_Dsias_t   Qdb_Dsias;
} Qdb_Mbrd0200a_t;


/*******************************************************************/
/* Data Space Index List Entry                            @A9C @A7A*/
/*******************************************************************/
typedef _Packed struct Qdb_DS_Index_List{
     _Packed struct { short int File_Cst_Lib_Len;
                      char File_Cst_Lib_Name[258];
                    } File_Cst_Lib;
     _Packed struct { short int File_Cst_Len;
                      char File_Cst_Name[258];
                    } File_Cst;
     _Packed struct { short int File_Mbr_Len;
                      char File_Mbr_Name[258];
                    } File_Mbr;
     char File_Cst_Type[11];
     char Reserved1[9];
     char DS_Index_Valid;
     char DS_Index_Held;
     char Reserved2[6];
     char DS_Index_Crt_Datetime[14];
     char DS_Index_Last_Rbd_Datetime[14];
     char DS_Index_Last_Qry_Datetime[14];
     char DS_Index_Last_Stats_Datetime[14];
     long long DS_Index_Last_Qry_Count;
     long long DS_Index_Last_Stats_Count;
     long long DS_Index_Last_Stats2_Count;
     long long Num_DS_Index_Keys;
     long long DS_Index_Size;
     long long Num_Unq_Keyf_One;
     long long Num_Unq_Keyf_Two;
     long long Num_Unq_Keyf_Three;
     long long Num_Unq_Keyf_Four;
     long Est_Rebuild;
     long Num_Delay_Keys;
     long Num_Ovflow_Val;
     long Code_Size;
     long long Num_Acc_Pth_Lrd;
     long long Num_Acc_Pth_Prd;
     long File_Num_Days_Used;
     char File_Last_Use_Datetime[14];
     char File_Reset_Datetime[8];
     char Reserved3[30];
     char DS_Index_Sparse;
     char DS_Index_Derived;
     char DS_Index_Partitioned;
     char DS_Index_Maint;
     char DS_Index_Recover;
     char DS_Index_Type;
     char DS_Index_Unique;
     char DS_Index_Srtseq;
     char DS_Index_Srtseq_Lib[10];
     char DS_Index_Srtseq_Table[10];
     char DS_Index_Srtseq_LangID[3];
     char DS_Index_Srtseq_Weight;
     long Log_Page_Size;
     long DS_Index_Key_Len;
     long DS_Index_Key_Flds;
     char Reserved4[82];
     _Packed struct { short int DS_Index_Key_Fld_Len;
                      char DS_Index_Key_Fld_Names[1024];
                    } DS_Index_Key_Fld;
} Qdb_DS_Index_List_t;


/*******************************************************************/
/* Record structure for QUSRMBRD MBRD0400 format               @A7A*/
/*******************************************************************/
typedef _Packed struct Qdb_Mbrd0400 {
     long Bytes_Returned;
     long Bytes_Available;
     long Num_DS_Indexes;
     long Offset_DS_Indexes;
   /*Qdb_DS_Index_List_t Based_On[];*//* Varying length            */
} Qdb_Mbrd0400_t;


/*******************************************************************/
/* Materialized Query Table List Entry                    @A9C @A8A*/
/*******************************************************************/
typedef _Packed struct Qdb_MQT_List{
     _Packed struct { short int File_Lib_Len;
                      char File_Lib_Name[258];
                    } File_Lib;
     _Packed struct { short int File_Len;
                      char File_Name[258];
                    } File;
     _Packed struct { short int File_Mbr_Len;
                      char File_Mbr_Name[258];
                    } File_Mbr;
     char Reserved1[20];
     char Enabled;
     char Reserved2[7];
     char MQT_Crt_Datetime[14];
     char MQT_Last_Refresh_Datetime[14];
     char MQT_Last_Qry_Datetime[14];
     char MQT_Last_Stats_Datetime[14];
     long long MQT_Last_Qry_Count;
     long long MQT_Last_Stats_Count;
     long long Num_MQT_Rows;
     long long MQT_Size;
     char MQT_Last_Change_Datetime[14];
     char MQT_Last_Use_Datetime[14];
     long MQT_Num_Days_Used;
     char MQT_Reset_Datetime[8];
     char Reserved3[40];
     char MQT_Maintenance;
     char MQT_Initial;
     char MQT_Refresh_Mode;
     char MQT_Isolation_Level[2];
     char MQT_Srtseq_Type;
     char MQT_Srtseq_Lib[10];
     char MQT_Srtseq_Table[10];
     char MQT_Srtseq_LangID[3];
     char MQT_Srtseq_Weight;
     char Reserved4[48];
     long MQT_SELECT_CCSID;
     _Packed struct { short int MQT_SELECT_Len;
                      char MQT_SELECT_Text[5000];
                    } MQT_SELECT;
} Qdb_MQT_List_t;


/*******************************************************************/
/* Record structure for QUSRMBRD MBRD0500 format               @A8A*/
/*******************************************************************/
typedef _Packed struct Qdb_Mbrd0500 {
     long Bytes_Returned;
     long Bytes_Available;
     long Num_MQTs;
     long Offset_MQTs;
   /*Qdb_MQT_List_t Based_On[];*//* Varying length            */
} Qdb_Mbrd0500_t;

#if (__OS400_TGTVRM__>=510)                                  /*@A5A*/
    #pragma datamodel(pop)                                   /*@A5A*/
#endif                                                       /*@A5A*/

#endif
