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
/*** START HEADER FILE SPECIFICATIONS ********************************/
/*                                                                   */
/* Header File Name: H/QUSRSPLA                                      */
/*                                                                   */
/* Descriptive Name: Retrieve spool file attributes.                 */
/*                                                                   */
/*                                                                   */
/*                                                                   */
/* Description: The Retrieve Spooled File Attributes APi             */
/*              returns specific information about a spooled         */
/*              file into a receiver variable.                       */
/*                                                                   */
/* Header Files Included: h/decimal                                  */
/*                                                                   */
/* Macros List: None.                                                */
/*                                                                   */
/* Structure List: Qus_SPLA0100_t                                    */
/*                 Qus_SPLA0200_t                                    */
/*                 Qus_UDOPTENT_t                                    */
/*                 Qus_Usr_Lib_E_t                                   */
/*                 Qus_Edge_Stitch_Stpl_Pos_E_t                      */
/*                 Qus_Sadl_Stitch_Stpl_Off_E_t                      */
/*                 Qsp_Splf_Libl_E_t                                 */
/*                 Qsp_IPP_Splf_Attrs_t                              */
/*                 Qsp_SR_Splf_Attrs_t                               */
/*                                                                   */
/* Function Prototype List: QUSRSPLA                                 */
/*                                                                   */
/* Change Activity:                                                  */
/*                                                                   */
/* CFD List:                                                         */
/*                                                                   */
/* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION       */
/* ---- ------------ ----- ------ --------- ------------------------ */
/* $A0= D2862000     3D10  940213 LUPA:     New Include              */
/* $A1= D9171000     3D60  950117 AGLENSKI: Print openness.          */
/* $A3= D94979       4D20  970111 DWIGHT:   Decimal Format           */
/*                                          support.                 */
/* $A4= D95075       4D20  970205 DWIGHT:   Support for Point        */
/*                                          Sizes on DBCS            */
/*                                          Coded Font, Coded        */
/*                                          Font, and Font           */
/*                                          Character Set            */
/* $A5= D94929       4D30  970722 DWIGHT:   Support for Date         */
/*                                          file was last            */
/*                                          accessed, Spooled        */
/*                                          file size, and           */
/*                                          ASP number.              */
/* $A6= D95677       4D30  970722 DWIGHT:   Support for              */
/*                                          IPDS pass through,       */
/*                                          User resource            */
/*                                          library list,            */
/*                                          Corner stapling,         */
/*                                          Edge stitching and       */
/*                                          Font resolution.         */
/* $A7= D95712       4D30  971105           Support ACIF             */
/*                                          attributes               */
/* $A8= D95966       4D40  980326 RJOHNSON: Add total number         */
/*                                          of bytes of data         */
/*                                          stream for spooled       */
/*                                          file.                    */
/* $A9= D95864       4D40  980514           Support for Saddle       */
/*                                          stitching and            */
/*                                          Constant Back OVL        */
/* $AA= D97433       5D10  991021           Support for record       */
/*                                          format page defs.        */
/*                                          and Line Data to         */
/*                                          AFPDS conversion         */
/* $AB= D97516       5D10  991026           Support for              */
/*                                          increase in              */
/*                                          number of libs in        */
/*                                          a job's library          */
/*                                          list.                    */
/* $AC= D97976       5D10  991026           Support for IPP          */
/* $AD= D98212.4     5D10  991228 GCHANEY:  Compiler directive       */
/*                                          16 byte pointers.        */
/* $AE= D97260       5D20  010105 ROCH:     Decouple Splf from       */
/*                                          Job.                     */
/* $AF= D97259.1     5D30  020403 ROCH:     Support for spool        */
/*                                          files and output         */
/*                                          queues on an IASP.       */
/* FLAG REASON   RLS&LVL    DATE   PGMR  COMMENTS                    */
/* ____ _______  __________ YYMMDD ____  ____________________________*/
/* $AG= D9965401 v5r4m0.xpf 030926 ROCH: Support for save and        */
/*                                       restore of spooled files.   */
/* $AH= D9971600 v5r4m0.xpf 031023 ROCH: Support for spooled file    */
/*                                       expiration.                 */
/*                                                                   */
/* End CFD List.                                                     */
/*                                                                   */
/*  Additional notes about the Change Activity                       */
/* End Change Activity.                                              */
/*** END HEADER FILE SPECIFICATIONS **********************************/

#ifndef QUSRSPLA_h
 #define QUSRSPLA_h

 #include <decimal.h>
#if (__OS400_TGTVRM__>=510)
#pragma datamodel(P128)
#endif
 /*****************************************************************/
 /*  Prototype for calling Spooled File and Print API QUSRSPLA    */
 /*****************************************************************/
 #ifdef __ILEC400__
    #pragma linkage (QUSRSPLA,OS,nowiden)
 #else
    extern "OS"
 #endif

 void QUSRSPLA(void *,           /* Receiver variable            */
               int,              /* Length of receiver variable  */
               char *,           /* Format name                  */
               void *,           /* Qualified job name           */
               void *,           /* Internal job identifier      */
               void *,           /* Internal spooled file id     */
               char *,           /* Spooled file name            */
               int,              /* Spooled file number          */
               ...);             /* Optional Parameter:
                                      Error Code
                                    Optional Parameter Group 2:
                                      Job system name
                                      Spooled file creation date
                                      Spooled file creation time */

/*****************************************************************/

/*****************************************************************/
/* Structure for User Defined Options                            */
/****                                                            */
/*  The following describes the user defined option entries in   */
/*   format SPLA0200 and SPLA0100.                               */
/*                                                               */
/*  Usr_Def_Options_Offset       provides the offset             */
/*  Usr_Def_Option_Number        provides the number of repeated */
/*                               option entries.                 */
/*                                                               */
/*****************************************************************/

typedef _Packed struct Qus_UDOPTENT
{
     char Usr_Def_Option_One[10];
     char Usr_Def_Option_Two[10];
     char Usr_Def_Option_Three[10];
     char Usr_Def_Option_Four[10];
} Qus_UDOPTENT_t;

/*****************************************************************/
/* Structure for User Resource Libraries                         */
/****                                                            */
/*  The following describes the user resource library entries in */
/*   format SPLA0200.                                            */
/*                                                               */
/*  Usr_Rsc_Libl_Off             provides the offset             */
/*  Usr_Rsc_Libl_Nbr             provides the number of repeated */
/*                               library entries.                */
/*                                                               */
/*****************************************************************/

typedef _Packed struct Qus_Usr_Lib_E
{
     char Usr_Resource_Lib_Name[10];
} Qus_Usr_Lib_E_t;

/*****************************************************************/
/* Structure for Edge Stitch Staple Positions                    */
/****                                                            */
/*  The following describes the edge stitch staple position      */
/*   entries in format SPLA0200.                                 */
/*                                                               */
/*  Staple_Position_Offset       provides the offset             */
/*  Nbr_of_Staple_Positions      provides the number of repeated */
/*                               staple position entries.        */
/*                                                               */
/*****************************************************************/

typedef _Packed struct Qus_Edge_Stitch_Stpl_Pos_E
{
     _Decimal(15,5) Staple_Position;
} Qus_Edge_Stitch_Stpl_Pos_E_t;

/*****************************************************************/
/* Structure for Saddle Stitch Staple Offsets                    */
/****                                                            */
/*  The following describes the saddle stitch staple offset      */
/*   entries in format SPLA0200.                                 */
/*                                                               */
/*  Off_Saddle_Staple_Off        provides the offset             */
/*  Nbr_of_Saddle_Stpl_Off       provides the number of repeated */
/*                               staple offset entries.          */
/*                                                               */
/*****************************************************************/

typedef _Packed struct Qus_Sadl_Stitch_Stpl_Off_E
{
     _Decimal(15,5) Staple_Offset;
} Qus_Sadl_Stitch_Stpl_Off_E_t;

/*****************************************************************/
/* Structure for Spooled file library name entries               */
/****                                                            */
/*  The following describes the library name entries in format   */
/*   SPLA0200.                                                   */
/*                                                               */
/*  Off_Splf_Libl                provides the offset             */
/*  Nbr_of_Libraries             provides the number of repeated */
/*                               library name entries.           */
/*                                                               */
/*****************************************************************/

typedef _Packed struct Qsp_Splf_Libl_E
{
     char Library_Name[10];
} Qsp_Splf_Libl_E_t;

/*****************************************************************/
/* Structure for Internet Print Protocol Spooled File Attributes */
/****                                                            */
/*  The following describes the IPP spooled file attributes in   */
/*   format SPLA0200.                                            */
/*                                                               */
/*  Off_IPP_Attrs                provides the offset             */
/*                                                               */
/*****************************************************************/

typedef _Packed struct Qsp_IPP_Splf_Attrs
{
     int Length_of_IPP_Attrs;
     int  CCSID_of_IPP_Attrs;
     char Nat_Lang_of_IPP_Attrs[63];
     char IPP_Printer_Name[127];
     char IPP_Job_Name[255];
     char IPP_Job_Name_Natural_Language[63];
     char IPP_Originating_User_Name[255];
     char IPP_Orig_User_Name_Nat_Lang[63];
     /*char Reserved[]; *//* Reserved             */
} Qsp_IPP_Splf_Attrs_t;

/*****************************************************************/
/* Structure for Save/Restore Spooled File Attributes            */
/****                                                            */
/*  The following describes the SR spooled file attributes in    */
/*   format SPLA0200.                                            */
/*                                                               */
/*  Off_SR_Attrs                provides the offset              */
/*                                                               */
/*****************************************************************/

typedef _Packed struct Qsp_SR_Splf_Attrs
{
     int Length_of_SR_Attrs;
     int Save_Seq_Nbr;
     char Splf_Save_DateTime[13];
     char Splf_Restore_DateTime[13];
     char Save_Vol_Id[71];
     char Save_Command[10];
     char Save_Device[10];
     char Save_File_Name[10];
     char Save_File_Lib[10];
     char Save_Label[17];
     /*char Reserved[]; *//* Reserved             */
} Qsp_SR_Splf_Attrs_t;

/*****************************************************************/
/* Structure for SPLA0100 format                                 */
/****                                                            */
/*  NOTE:  The following type definition only defines the fixed  */
/*         portion of the format.  Any varying length fields must*/
/*         be defined by the user.                               */
/*****************************************************************/
typedef _Packed struct Qus_SPLA0100
{
     int  Bytes_Return;
     int  Bytes_Avail;
     char Int_Job_ID[16];
     char Int_Splf_ID[16];
     char Job_Name[10];
     char Usr_Name[10];
     char Job_Number[6];
     char Splf_Name[10];
     int  Splf_Number;
     char Form_Type[10];
     char Usr_Data[10];
     char Status[10];
     char File_Avail[10];
     char Hold_File[10];
     char Save_File[10];
     int  Total_Pages;
     int  Curr_Page;
     int  Start_Page;
     int  End_Page;
     int  Last_Page_Print;
     int  Rest_Page;
     int  Total_Copies;
     int  Copies_Rem;
     int  Lines_Per_Inch;
     int  Char_Per_Inch;
     char Output_Priority[2];
     char Outq_Name[10];
     char Outq_Lib[10];
     char Date_File_Open[7];
     char Time_File_Open[6];
     char Dev_File_Name[10];
     char Dev_File_Lib[10];
     char Pgm_Name[10];
     char Pgm_Lib[10];
     char Count_Code[15];
     char Print_Text[30];
     int  Record_Length;
     int  Max_Records;
     char Dev_Type[10];
     char Ptr_Dev_Type[10];
     char Doc_Name[12];
     char Folder_Name[64];
     char S36_Proc_Name[8];
     char Print_Fidel[10];
     char Repl_Unprint[1];
     char Repl_Char[1];
     int  Page_Length;
     int  Page_Width;
     int  Number_Separate;
     int  Overflow_Line_Nm;
     char DBCS_Data[10];
     char DBCS_Ext_Chars[10];
     char DBCS_SOSI[10];
     char DBCS_Char_Rotate[10];
     int  DBCS_Cpi;
     char Grph_Char_Set[10];
     char Code_Page[10];
     char Form_Def_Name[10];
     char Form_Def_Lib[10];
     int  Source_Drawer;
     char Print_Font[10];
     char S36_Spl_ID[6];
     int  Page_Rotate;
     int  Justification;
     char Duplex[10];
     char Fold[10];
     char Ctrl_Char[10];
     char Align_Forms[10];
     char Print_Quality[10];
     char Form_Feed[10];
     char Disk_Volume[71];
     char Disk_Label[17];
     char Exch_Type[10];
     char Char_Code[10];
     int  Nmbr_Disk_Rcrds;
     int  Multiup;
     char Frnt_Ovrly_Name[10];
     char Frnt_Ovrly_Lib_Name[10];
     _Decimal(15,5) Frnt_Ovrly_Off_Dn;
     _Decimal(15,5) Frnt_Ovrly_Off_Across;
     char Bck_Ovrly_Name[10];
     char Bck_Ovrly_Lib_Name[10];
     _Decimal(15,5) Bck_Ovrly_Off_Dn;
     _Decimal(15,5) Bck_Ovrly_Off_Across;
     char Unit_Measure[10];
     char Page_Definition[10];
     char Page_Definition_Lib[10];
     char Line_Spacing[10];
     _Decimal(15,5) Point_Size;
     _Decimal(15,5) Frnt_Margin_Off_Dn;
     _Decimal(15,5) Frnt_Margin_Off_Acr;
     _Decimal(15,5) Back_Margin_Off_Dn;
     _Decimal(15,5) Back_Margin_Off_Acr;
     _Decimal(15,5) Length_Of_Page;
     _Decimal(15,5) Width_Of_Page;
     char Measure_Method[10];
     char Afp_Resource[1];
     char Font_Char_Set[10];
     char Font_Char_Set_Lib[10];
     char Code_Page_Name[10];
     char Code_Page_Lib[10];
     char Coded_Font_Name[10];
     char Coded_Font_Lib[10];
     char DBCS_Coded_Font_Name[10];
     char DBCS_Coded_Font_Lib[10];
     char User_Defined_File[10];
     char Reduce_Output[10];
     char Constant_Back_Overlay[1];
     int  Output_Bin;
     int  CCSID;
     char User_Text[100];
     char Original_System[8];
     char Original_Net_ID[8];
     char Splf_Creator[10];
     char Reserved5[2];
     int  Usr_Def_Options_Offset;
     int  Usr_Def_Options_Number;
     int  Usr_Def_Options_Entry_Length;
     char Usr_Defined_Data[255];
     char Usr_Def_Object_Name[10];
     char Usr_Def_Object_Lib[10];
     char Usr_Def_Object_Type[10];
     char Reserved6[3];
     _Decimal(15,5) Character_Set_Point_Size;
     _Decimal(15,5) Coded_Font_Point_Size;
     _Decimal(15,5) DBCS_Coded_Font_Point_Size;
     int  Spooled_File_ASP;
     int  Spooled_File_Size;
     int  Splf_Size_Multiplier;
     int  IPP_JobId;
     char Splf_Crt_Security_Method;
     char Splf_Authentication_Method;
     char Wtr_Begin_Process_Date[7];
     char Wtr_Begin_Process_Time[6];
     char Wtr_Complete_Proc_Date[7];
     char Wtr_Complete_Proc_Time[6];
     char Job_System_Name[8];
     char Splf_ASP_Device_Name[10];
     char Splf_Expiration_Date[7];
     /*Qus_UDOPTENT_t Option_Data[];*//* Varying length*/
} Qus_SPLA0100_t;

/*****************************************************************/
/* Structure for SPLA0200 format                                 */
/****                                                           **/
/*  NOTE:  The following type definition only defines the fixed  */
/*         portion of the format.  Any varying length fields must*/
/*         be defined by the user.                               */
/*****************************************************************/
typedef _Packed struct Qus_SPLA0200
{
     int  Bytes_Return;
     int  Bytes_Avail;
     char Format_Name[8];
     char Int_Job_ID[16];
     char Int_Splf_ID[16];
     char Job_Name[10];
     char Usr_Name[10];
     char Job_Number[6];
     char Splf_Name[10];
     int  Splf_Number;
     char Form_Type[10];
     char Usr_Data[10];
     char Status[10];
     char File_Avail[10];
     char Hold_File[10];
     char Save_File[10];
     int  Total_Pages;
     int  Curr_Page;
     int  Start_Page;
     int  End_Page;
     int  Last_Page_Print;
     int  Rest_Page;
     int  Total_Copies;
     int  Copies_Rem;
     int  Lines_Per_Inch;
     int  Char_Per_Inch;
     char Output_Priority[2];
     char Outq_Name[10];
     char Outq_Lib[10];
     char Date_File_Open[7];
     char Time_File_Open[6];
     char Dev_File_Name[10];
     char Dev_File_Lib[10];
     char Pgm_Name[10];
     char Pgm_Lib[10];
     char Count_Code[15];
     char Print_Text[30];
     int  Record_Length;
     int  Max_Records;
     char Dev_Type[10];
     char Ptr_Dev_Type[10];
     char Doc_Name[12];
     char Folder_Name[64];
     char S36_Proc_Name[8];
     char Print_Fidel[10];
     char Repl_Unprint[1];
     char Repl_Char[1];
     int  Page_Length;
     int  Page_Width;
     int  Number_Separate;
     int  Overflow_Line_Nm;
     char DBCS_Data[10];
     char DBCS_Ext_Chars[10];
     char DBCS_SOSI[10];
     char DBCS_Char_Rotate[10];
     int  DBCS_Cpi;
     char Grph_Char_Set[10];
     char Code_Page[10];
     char Form_Def_Name[10];
     char Form_Def_Lib[10];
     int  Source_Drawer;
     char Print_Font[10];
     char S36_Spl_ID[6];
     int  Page_Rotate;
     int  Justification;
     char Duplex[10];
     char Fold[10];
     char Ctrl_Char[10];
     char Align_Forms[10];
     char Print_Quality[10];
     char Form_Feed[10];
     char Disk_Volume[71];
     char Disk_Label[17];
     char Exch_Type[10];
     char Char_Code[10];
     int  Nmbr_Disk_Rcrds;
     int  Multiup;
     char Frnt_Ovrly_Name[10];
     char Frnt_Ovrly_Lib_Name[10];
     _Decimal(15,5) Frnt_Ovrly_Off_Dn;
     _Decimal(15,5) Frnt_Ovrly_Off_Across;
     char Bck_Ovrly_Name[10];
     char Bck_Ovrly_Lib_Name[10];
     _Decimal(15,5) Bck_Ovrly_Off_Dn;
     _Decimal(15,5) Bck_Ovrly_Off_Across;
     char Unit_Measure[10];
     char Page_Definition[10];
     char Page_Definition_Lib[10];
     char Line_Spacing[10];
     _Decimal(15,5) Point_Size;
     int  Max_Data_Record_Size;
     int  File_Buffer_Size;
     char File_Level[6];
     char Coded_Font_Array[16];
     char Channel_Mode[10];
     int  Channel_Code1;
     int  Channel_Code2;
     int  Channel_Code3;
     int  Channel_Code4;
     int  Channel_Code5;
     int  Channel_Code6;
     int  Channel_Code7;
     int  Channel_Code8;
     int  Channel_Code9;
     int  Channel_Code10;
     int  Channel_Code11;
     int  Channel_Code12;
     char Graphics_Tokenl[8];
     char Record_Format[10];
     char Reserved1[2];
     _Decimal(15,5) Height_Drawer1;
     _Decimal(15,5) Width_Drawer1;
     _Decimal(15,5) Height_Drawer2;
     _Decimal(15,5) Width_Drawer2;
     int  Number_Buffers;
     int  Max_Form_Width;
     int  Alternate_Form_Width;
     int  Alternate_Form_Length;
     int  Alternate_Lpi;
     char Text_Flags[2];
     char Flg_File_Open[1];
     char Flg_Est_Pge_Cnt[1];
     char Flg_Pge_Boundary[1];
     char Flg_Trc[1];
     char Flg_Def_Char[1];
     char Flg_Cpi[1];
     char Flg_Transparency[1];
     char Flg_Dbl_Wide_Char[1];
     char Flg_Char_Rotate[1];
     char Flg_Code_Page[1];
     char Flg_Fft_Emphasis[1];
     char Flg_Scs3812[1];
     char Flg_Sld[1];
     char Flg_Gea[1];
     char Flg_Cmd5219[1];
     char Flg_Cmd3812[1];
     char Flg_Fld_Outline[1];
     char Flg_Final_Frm_Txt[1];
     char Flg_Barcode[1];
     char Flg_Color[1];
     char Flg_Drawer_Chg[1];
     char Flg_Charid[1];
     char Flg_Lpi[1];
     char Flg_Font[1];
     char Flg_Highlight[1];
     char Flg_Pge_Rotate[1];
     char Flg_Subscript[1];
     char Flg_Superscript[1];
     char Flg_Dds[1];
     char Flg_Form_Feed[1];
     char Flg_Scs_Data[1];
     char Flg_User_Gen_Data[1];
     char Flg_Graphics[1];
     char Flg_Unrecogn_Data[1];
     char Flg_ASCII_Trans[1];
     char Flg_Ipds_Trans[1];
     char Flg_Office_Vis[1];
     char Flg_No_Lpi[1];
     char Flg_Cpa3353[1];
     char Flg_Set_Excp[1];
     char Flg_Carriage_Control[1];
     char Flg_Pge_Pos[1];
     char Flg_Invalid_Char[1];
     char Flg_Lengths[1];
     char Flg_Pres5a[1];
     char Flg_Resrvd[1];
     int  Nbr_Font_Entries;
     int  Nbr_Lib_Entries;
     char Font_Entries[1153];
     char Lib_Entries[631];
     char Native_AFPDS[1];
     char JOBCCSID_For_CHRID[1];
     char S36_Continue_Yes[1];
     char Decimal_Format_Used[10];
     char Date_File_Last_Accessed[7];
     char Page_Groups[1];
     char Group_Level_Index[1];
     char Page_Level_Index[1];
     char IPDS_Pass_Through[1];
     int Off_Usr_Rsc_Libl;
     int Nbr_Usr_Rsc_Libl;
     int Len_Usr_Rsc_Libl_Entry;
     char Reserved8[2];
     char Corner_Stapling[1];
     char Edge_Stitch_Edge_Ref[1];
     _Decimal(15,5) Offset_From_Edge_Ref;
     int Edge_Stitch_Nbr_Staples;
     int Offset_Staple_Positions;
     int Nbr_of_Staple_Positions;
     int Len_Staple_Position_Entry;
     char Font_Resolution[10];
     char Rcd_Fmt_Name_Present;
     char Saddle_Stitch_Edge_Ref[1];
     int Saddle_Stitch_Nbr_Staples;
     int Off_Saddle_Staple_Off;
     int Nbr_of_Saddle_Stpl_Off;
     int Len_Saddle_Staple_Off_Entry;
     _Decimal(15,0) Data_Stream_Size;
     int Off_Splf_Libl;
     int Nbr_of_Libraries;
     int Len_Splf_Libl_Entry;
     int Off_IPP_Attrs;
     int Off_SR_Attrs;
     int CCSID_of_Job;
     char Reserved2[172];
     _Decimal(15,5) Frnt_Margin_Off_Dn;
     _Decimal(15,5) Frnt_Margin_Off_Acr;
     _Decimal(15,5) Back_Margin_Off_Dn;
     _Decimal(15,5) Back_Margin_Off_Acr;
     _Decimal(15,5) Length_Of_Page;
     _Decimal(15,5) Width_Of_Page;
     char Measure_Method[10];
     char Afp_Resource[1];
     char Font_Char_Set[10];
     char Font_Char_Set_Lib[10];
     char Code_Page_Name[10];
     char Code_Page_Lib[10];
     char Coded_Font_Name[10];
     char Coded_Font_Lib[10];
     char DBCS_Coded_Font_Name[10];
     char DBCS_Coded_Font_Lib[10];
     char User_Defined_File[10];
     char Reduce_Output[10];
     char Constant_Back_Overlay[1];
     int  Output_Bin;
     int  CCSID;
     char User_Text[100];
     char Original_System[8];
     char Original_Net_ID[8];
     char Splf_Creator[10];
     char Reserved5[2];
     int  Usr_Def_Options_Offset;
     int  Usr_Def_Options_Number;
     int  Usr_Def_Options_Entry_Length;
     char Usr_Defined_Data[255];
     char Usr_Def_Object_Name[10];
     char Usr_Def_Object_Lib[10];
     char Usr_Def_Object_Type[10];
     char Reserved6[3];
     _Decimal(15,5) Character_Set_Point_Size;
     _Decimal(15,5) Coded_Font_Point_Size;
     _Decimal(15,5) DBCS_Coded_Font_Point_Size;
     int  Spooled_File_ASP;
     int  Spooled_File_Size;
     int  Splf_Size_Multiplier;
     int  IPP_JobId;
     char Splf_Crt_Security_Method;
     char Splf_Authentication_Method;
     char Wtr_Begin_Process_Date[7];
     char Wtr_Begin_Process_Time[6];
     char Wtr_Complete_Proc_Date[7];
     char Wtr_Complete_Proc_Time[6];
     char  Job_System_Name[8];
     char Splf_ASP_Device_Name[10];
     char Splf_Expiration_Date[7];
     /*Qus_UDOPTENT_t Option_Data[];*//*Varying length*/
     /*Qus_Usr_Lib_E_t Usr_Res_Libl[];*//*Varying length*/
     /*Qus_Edge_Stitch_Stpl_Pos_E_t Stpl_Pos_Data[];*//*Varying length*/
     /*Qus_Sadl_Stitch_Stpl_Off_E_t
                             Saddle_Stpl_Off_Data[];*//*Varying length*/
     /*Qsp_Splf_Libl_E_t Splf_Libl_Data[];*//*Varying length*/
     /*Qsp_IPP_Splf_Attrs_t IPP_Splf_Attrs[];*//*Varying length*/
} Qus_SPLA0200_t;

#if (__OS400_TGTVRM__>=510)
#pragma datamodel(pop)
#endif
#endif
