/* begin_generated_IBM_copyright_prolog                              */
/* This is an automatically generated copyright prolog.              */
/* After initializing,  DO NOT MODIFY OR MOVE                        */
/* ----------------------------------------------------------------- */
/*                                                                   */
/* Product(s):                                                       */
/*     5763-SS1                                                      */
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
 /* Header File Name: H/QUSROBJD                                   */
 /*                                                                */
 /* Descriptive Name: Retrieve Object Description API              */
 /*                                                                */
 /* Description: The Retrieve Object Description API lets you      */
 /*              retrieve object information about a specific      */
 /*              object.                                           */
 /*                                                                */
 /* Header Files Included: None.                                   */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List:  Qus_Robj_ASP_Control_t                        */
 /*                  Qus_OBJD0100                                  */
 /*                  Qus_OBJD0200                                  */
 /*                  Qus_OBJD0300                                  */
 /*                  Qus_OBJD0400                                  */
 /*                                                                */
 /* Function Prototype List: QUSROBJD                              */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL  DATE   PGMR   CHANGE DESCRIPTION      */
 /* ---- ------------ -----  ------ ------ ------------------------*/
 /* $A0= D2862000     3D10   940424 ROCH   : New Include           */
 /* $A1= D97534.3     v5r1m0 000116 RAH    : Add fields to         */
 /*                                          support journaling    */
 /*                                          information to struct */
 /*                                          Qus_OBJD0400.         */
 /* $A2= D97545       v5r1m0 000116 RAH    : Add field for object  */
 /*                                          digital signature to  */
 /*                                          struct Qus_OBJD0400.  */
 /* $A3= D97223       v5r1m0 000116 RAH    : Add fields for        */
 /*                                          additional save size  */
 /*                                          information to struct */
 /*                                          Qus_OBJD0400.         */
 /* $C0= D98416.58    v5r2m0 010819 LAW    : Add fields for        */
 /*                                          auxiliary storage     */
 /*                                          pool device name      */
 /*                                          support               */
 /* $C1= D98649       v5r2m0 011202 BWT    : Add fields for signed */
 /*                                          by system-trusted     */
 /*                                          source and whether    */
 /*                                          signed more than once.*/
 /* $C2= D98416.65    v5r2m0 011202 BWT    : Add structure         */
 /*                                          Qus_Robj_ASP_Control. */
 /* $E1= D99834       v5r4m0 040606 LAW    : Add fields for        */
 /*                                          - Primary associated  */
 /*                                            space size          */
 /*                                          - Optimum space       */
 /*                                            alignment           */
 /*                                          - Object ASP group    */
 /*                                          - Library ASP group   */
 /*                                          - Starting journal    */
 /*                                            receiver for apply  */
 /*                                          - Starting journal    */
 /*                                            receiver library    */
 /*                                          - Starting journal    */
 /*                                            receiver library    */
 /*                                            ASP device name     */
 /*                                          - Starting journal    */
 /*                                            receiver library    */
 /*                                            ASP group name      */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

 #ifndef QUSROBJD_h
 #define QUSROBJD_h
#if (__OS400_TGTVRM__>=510)
#pragma datamodel(P128)
#endif

 /******************************************************************/
 /*  Prototype for QUSROBJD API                                    */
 /******************************************************************/
 #ifdef  __ILEC400__
       #pragma linkage(QUSROBJD,OS,nowiden)
 #else
       extern "OS"
 #endif
 void QUSROBJD(void *,           /* Receiver variable              */
               int,              /* Length of receiver variable    */
               char *,           /* Format name                    */
               void *,           /* Object and library name        */
               char *,           /* Object type                    */
               ...);             /* Optional Parameter Group 1:
                                      void *   Error code          */
                                 /* Optional Parameter Group 2:
				      void *   Auxiliary storage
				        pool (ASP) control     @C0A*/

 /******************************************************************/
 /* Type Definition for the Auxiliary Storage Pool (ASP)           */
 /* Control Format                                             @C2A*/
 /******************************************************************/
 typedef _Packed struct Qus_Robj_ASP_Control
    {
       int   Length_ASP_Control_Fmt;
       char  ASP_Device_Name[10];
       char  ASP_Search_Type[10];
    } Qus_Robj_ASP_Control_t;


 /******************************************************************/
 /* Type Definition for the OBJD0100 format.                       */
 /******************************************************************/
 typedef _Packed struct Qus_OBJD0100
    {
       int  Bytes_Returned;
       int  Bytes_Available;
       char Object_Name[10];
       char Object_Lib_Name[10];
       char Object_Type[10];
       char Return_Lib[10];
       int  Aux_Storage_Pool;
       char Object_Owner[10];
       char Object_Domain[2];
       char Create_Date_Time[13];
       char Change_Date_Time[13];
    } Qus_OBJD0100_t;

 /******************************************************************/
 /* Type Definition for the OBJD0200 format.                       */
 /******************************************************************/
 typedef _Packed struct Qus_OBJD0200
    {
       int  Bytes_Returned;
       int  Bytes_Available;
       char Object_Name[10];
       char Object_Lib_Name[10];
       char Object_Type[10];
       char Return_Lib[10];
       int  Aux_Storage_Pool;
       char Object_Owner[10];
       char Object_Domain[2];
       char Create_Date_Time[13];
       char Change_Date_Time[13];
       char Extended_Obj_Attr[10];
       char Text_Description[50];
       char Source_File_Name[10];
       char Source_File_Lib_Name[10];
       char Source_File_Mbr_Name[10];
    } Qus_OBJD0200_t;

 /******************************************************************/
 /* Type Definition for the OBJD0300 format.                       */
 /******************************************************************/
 typedef _Packed struct Qus_OBJD0300
    {
       int  Bytes_Returned;
       int  Bytes_Available;
       char Object_Name[10];
       char Object_Lib_Name[10];
       char Object_Type[10];
       char Return_Lib[10];
       int  Aux_Storage_Pool;
       char Object_Owner[10];
       char Object_Domain[2];
       char Create_Date_Time[13];
       char Change_Date_Time[13];
       char Extended_Obj_Attr[10];
       char Text_Description[50];
       char Source_File_Name[10];
       char Source_File_Lib_Name[10];
       char Source_File_Mbr_Name[10];
       char Source_File_Update_Date_Time[13];
       char Object_Saved_Date_Time[13];
       char Object_Restored_Date_Time[13];
       char Creator_User_Profile[10];
       char System_Object_Creation[8];
       char Reset_Date[7];
       int  Save_Size;
       int  Save_Sequence_Number;
       char Storage[10];
       char Save_Command[10];
       char Save_Volume_ID[71];
       char Save_Device[10];
       char Save_File_Name[10];
       char Save_File_Lib_Name[10];
       char Save_Label[17];
       char System_Level[9];
       char Compiler[16];
       char Object_Level[8];
       char User_Changed;
       char Licensed_Program[16];
       char PTF[10];
       char APAR[10];
    } Qus_OBJD0300_t;

 /******************************************************************/
 /* Type Definition for the OBJD0400 format.                       */
 /******************************************************************/
 typedef _Packed struct Qus_OBJD0400
    {
       int  Bytes_Returned;
       int  Bytes_Available;
       char Object_Name[10];
       char Object_Lib_Name[10];
       char Object_Type[10];
       char Return_Lib[10];
       int  Aux_Storage_Pool;
       char Object_Owner[10];
       char Object_Domain[2];
       char Create_Date_Time[13];
       char Change_Date_Time[13];
       char Extended_Obj_Attr[10];
       char Text_Description[50];
       char Source_File_Name[10];
       char Source_File_Lib_Name[10];
       char Source_File_Mbr_Name[10];
       char Source_File_Update_Date_Time[13];
       char Object_Saved_Date_Time[13];
       char Object_Restored_Date_Time[13];
       char Creator_User_Profile[10];
       char System_Object_Creation[8];
       char Reset_Date[7];
       int  Save_Size;
       int  Save_Sequence_Number;
       char Storage[10];
       char Save_Command[10];
       char Save_Volume_ID[71];
       char Save_Device[10];
       char Save_File_Name[10];
       char Save_File_Lib_Name[10];
       char Save_Label[17];
       char System_Level[9];
       char Compiler[16];
       char Object_Level[8];
       char User_Changed;
       char Licensed_Program[16];
       char PTF[10];
       char APAR[10];
       char Last_Used_Date[7];
       char Usage_Information_Update;
       int  Days_Used_Count;
       int  Object_Size;
       int  Object_Size_Multiplier;
       char Object_Compress_Status;
       char Allow_Change;
       char Changed_By_Program;
       char User_Defined_Attr[10];
       char Overflow_ASP_Indicator;
       char Save_Active_Date_Time[13];
       char Object_Audit_Value[10];
       char Primary_Group[10];
       char Journal_Status;                                 /* @A1A*/
       char Journal_Name[10];                               /* @A1A*/
       char Journal_Library[10];                            /* @A1A*/
       char Journal_Images;                                 /* @A1A*/
       char Journal_Entries_Omitted;                        /* @A1A*/
       char Journal_Start_Date_Time[13];                    /* @A1A*/
       char Digitally_Signed;                               /* @A2A*/
       int  Save_Size_In_Units;                             /* @A3A*/
       int  Save_Size_Multiplier;                           /* @A3A*/
       int  Lib_Aux_Storage_Pool_Number;                    /* @C0A*/
       char Object_Aux_Storage_Pool_Device[10];             /* @C0A*/
       char Lib_Aux_Storage_Pool_Device[10];                /* @C0A*/
       char Digitally_Signed_Sys_Trust;                     /* @C1A*/
       char Digitally_Signed_Multiple;                      /* @C1A*/
       char Reserved1[2];                                   /* @E1A*/
       int  Associated_Space_Size;                          /* @E1A*/
       char Optimum_Space_Alignment;                        /* @E1A*/
       char Object_ASP_Group[10];                           /* @E1A*/
       char Library_ASP_Group[10];                          /* @E1A*/
       char Starting_Jrn_Rcv_For_Apply[10];                 /* @E1A*/
       char Starting_Jrn_Rcv_Lib[10];                       /* @E1A*/
       char Starting_Jrn_Rcv_Lib_ASP_Dev[10];               /* @E1A*/
       char Starting_Jrn_Rcv_Lib_ASP_Group[10];             /* @E1A*/
       char Reserved;                                       /* @E1A*/
    } Qus_OBJD0400_t;

#if (__OS400_TGTVRM__>=510)
#pragma datamodel(pop)
#endif
 #endif
