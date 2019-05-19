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
 /* Header File Name: H/QUSLOBJ                                    */
 /*                                                                */
 /* Descriptive Name: List Objects                                 */
 /*                                                                */
 /* Description: The List Objects API lets you generate a list of  */
 /*              object names and descriptive information based on */
 /*              specified selection parameters.                   */
 /*                                                                */
 /* Header Files Included: None.                                   */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: Qus_Lobj_Aut_Control_t                         */
 /*                 Qus_Lobj_Select_Control_t                      */
 /*                 Qus_Lobj_ASP_Control_t                         */
 /*                 Qus_Lobj_Input_t                               */
 /*                 Qus_OBJL0100_t                                 */
 /*                 Qus_OBJL0200_t                                 */
 /*                 Qus_OBJL0300_t                                 */
 /*                 Qus_OBJL0400_t                                 */
 /*                 Qus_OBJL0500_t                                 */
 /*                 Qus_OBJL0600_t                                 */
 /*                 Qus_OBJL0700_t                                 */
 /*                                                                */
 /* Function Prototype List: QUSLOBJ                               */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON      LEVEL  DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ----------- -----  ------ --------- ----------------------*/
 /* $A0= D2862000    3D10   940424 ROCH    : New Include           */
 /* $A1= D97534.3    v5r1m0 000116 RAH     : Add fields to support */
 /*                                          journaling information*/
 /*                                          to structure          */
 /*                                          Qus_OBJL0500.         */
 /* $A2= D97545      v5r1m0 000116 RAH     : Add field to support  */
 /*                                          object digital        */
 /*                                          signatures to struct  */
 /*                                          Qus_OBJL0300.         */
 /* $A3= D98416.47   v5r2m0 010708 LAW     : Add fields for        */
 /*                                          auxiliary storage     */
 /*                                          pool device name      */
 /*                                          support and add       */
 /*                                          fields from A1&A2 to  */
 /*                                          other structures      */
 /* $A4= D98649      v5r2m0 010930 LAW     : Add fields for        */
 /*                                          system-trusted and    */
 /*                                          multiple signatures   */
 /*                                          to Qus_OBJL0300 and   */
 /*                                          above                 */
 /* $A5= D98416.65   v5r2m0 011202 LAW     : Shorten field name    */
 /*                                          Digitally_Signed_More */
 /*                                          _Than_Once to         */
 /*                                          Digitally_Signed_     */
 /*                                          Multiple. Names can't */
 /*                                          exceed 30 characters. */
 /* $B0= D99511.31   v5r3m0 030202 CEM     : Add optimum space     */
 /*                                          alignment and         */
 /*                                          associated space size */
 /*                                          fields to             */
 /*                                          Qus_OBJL0400 and above*/
 /* $B1= P9A52943  v5r3m0fpga 040120 LAW   : Correctly align       */
 /*                                          associated space      */
 /*                                          size field in         */
 /*                                          Qus_OBJL0400 and above*/
 /* $C1= D99834    v5r4m0     040606 LAW   : Add fields for        */
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

 #ifndef QUSLOBJ_h
 #define QUSLOBJ_h
#if (__OS400_TGTVRM__>=510)
#pragma datamodel(P128)
#endif

 /******************************************************************/
 /*  Prototype for QUSLOBJ API                                    */
 /******************************************************************/
 #ifdef  __ILEC400__
       #pragma linkage(QUSLOBJ,OS,nowiden)
 #else
       extern "OS"
 #endif
 void QUSLOBJ(void *,            /* User space name and library    */
              char *,            /* Format name                    */
              void *,            /* Object name and library        */
              char *,            /* Object type                    */
              ...);              /* Optional Parameter Group 1:
                                      void *   Error code
                                    Optional Parameter Group 2:
                                      void *   Authority control
                                      void *   Selection control
                                    Optional Parameter Group 3:
                                      void *   Auxiliary storage
                                        pool (ASP) control     @A3A*/

 /******************************************************************/
 /* Type Definition for the Authority Control Format.              */
 /****                                                          ****/
 /* NOTE: The following type definition only defines the fixed     */
 /*       portion of the format.  Any varying length field will    */
 /*       have to be defined by the user.                          */
 /******************************************************************/

 typedef _Packed struct Qus_Lobj_Aut_Control
    {
       int  Length_Authority_Control_Fmt;
       int  Call_Level;
       int  Offset_Obj_Aut;
       int  Number_Obj_Aut;
       int  Offset_Lib_Aut;
       int  Number_Lib_Aut;
       int  Reserved;
     /*char Obj_Aut[][10];*/               /* Varying length       */
     /*char Lib_Aut[][10];*/               /* Varying length       */
    } Qus_Lobj_Aut_Control_t;

 /******************************************************************/
 /* Type Definition for the Selection Control Format.              */
 /****                                                          ****/
 /* NOTE: The following type definition only defines the fixed     */
 /*       portion of the format.  Any varying length field will    */
 /*       have to be defined by the user.                          */
 /******************************************************************/

 typedef _Packed struct Qus_Lobj_Select_Control
    {
       int  Length_Selection_Control_Fmt;
       int  Select_Omit_Status;
       int  Offset_Status;
       int  Number_Status;
       int  Reserved;
     /*char Status[][1];*/                 /* Varying length       */
    } Qus_Lobj_Select_Control_t;

 /******************************************************************/
 /* Type Definition for the Auxiliary Storage Pool (ASP)           */
 /* Control Format                                             @A3A*/
 /******************************************************************/
 typedef _Packed struct Qus_Lobj_ASP_Control
    {
       int   Length_ASP_Control_Fmt;
       char  ASP_Device_Name[10];
       char  ASP_Search_Type[10];
    } Qus_Lobj_ASP_Control_t;


 /******************************************************************/
 /* Type Definition for the input parameter section                */
 /****                                                          ****/
 /* NOTE: The following type definition only defines the fixed     */
 /*       portion of the format.  Any varying length field will    */
 /*       have to be defined by the user.                          */
 /******************************************************************/

 typedef _Packed struct Qus_Lobj_Input
    {
       char User_Space[10];
       char User_Space_Lib[10];
       char Format[8];
       char Object_Name[10];
       char Object_Lib[10];
       char Object_Type[10];
       char Reserved[2];
       int  Error_Code_Bytes_Provided;
       int  Length_Aut_Control_Fmt;
       int  Call_Level;
       int  Offset_Obj_Aut;
       int  Number_Obj_Aut;
       int  Offset_Lib_Aut;
       int  Number_Lib_Aut;
       int  Length_Select_Control_Fmt;
       int  Select_Omit_Status;
       int  Offset_Status;
       int  Number_Status;
       int  Length_ASP_Control_Fmt;                          /*@A3A*/
       char ASP_Device_Name[10];                             /*@A3A*/
       char ASP_Search_Type[10];                             /*@A3A*/
     /*char Object_Aut[][10]; */           /* Varying length       */
     /*char Library_Aut[][10]; */          /* Varying length       */
     /*char Status[][1]; */                /* Varying length       */
    } Qus_Lobj_Input_t;

 /******************************************************************/
 /* Type Definition for the OBJL0100 format.                       */
 /******************************************************************/

 typedef _Packed struct Qus_OBJL0100
    {
       char Object_Name_Used[10];
       char Object_Lib_Name_Used[10];
       char Object_Type_Used[10];
    } Qus_OBJL0100_t;

 /******************************************************************/
 /* Type Definition for the OBJL0200 format.                       */
 /******************************************************************/

 typedef _Packed struct Qus_OBJL0200
    {
       char Object_Name_Used[10];
       char Object_Lib_Name_Used[10];
       char Object_Type_Used[10];
       char Information_Status;
       char Extended_Obj_Attr[10];
       char Text_Description[50];
       char User_Defined_Attr[10];
       char Reserved[7];
    } Qus_OBJL0200_t;

 /******************************************************************/
 /* Type Definition for the OBJL0300 format.                       */
 /******************************************************************/

 typedef _Packed struct Qus_OBJL0300
    {
       char Object_Name_Used[10];
       char Object_Lib_Name_Used[10];
       char Object_Type_Used[10];
       char Information_Status;
       char Extended_Obj_Attr[10];
       char Text_Description[50];
       char User_Defined_Attr[10];
       char Reserved[7];
       int  Aux_Storage_Pool;
       char Object_Owner[10];
       char Object_Domain[2];
       char Create_Date_Time[8];
       char Change_Date_Time[8];
       char Storage[10];
       char Object_Compress_Status;
       char Allow_Change;
       char Changed_By_Program;
       char Object_Audit_Value[10];
       char Digitally_Signed;                                /*@A2A*/
       char Digitally_Signed_Sys_Trust;                      /*@A4A*/
       char Digitally_Signed_Multiple;                       /*@A5C*/
       char Reserved2[2];                                    /*@A4C*/
       int  Lib_ASP_Number;                                  /*@A3A*/
    } Qus_OBJL0300_t;

 /******************************************************************/
 /* Type Definition for the OBJL0400 format.                       */
 /******************************************************************/

 typedef _Packed struct Qus_OBJL0400
    {
       char Object_Name_Used[10];
       char Object_Lib_Name_Used[10];
       char Object_Type_Used[10];
       char Information_Status;
       char Extended_Obj_Attr[10];
       char Text_Description[50];
       char User_Defined_Attr[10];
       char Reserved[7];
       int  Aux_Storage_Pool;
       char Object_Owner[10];
       char Object_Domain[2];
       char Create_Date_Time[8];
       char Change_Date_Time[8];
       char Storage[10];
       char Object_Compress_Status;
       char Allow_Change;
       char Changed_By_Program;
       char Object_Audit_Value[10];
       char Digitally_Signed;                                /*@A3A*/
       char Digitally_Signed_Sys_Trust;                      /*@A4A*/
       char Digitally_Signed_Multiple;                       /*@A5C*/
       char Reserved2[2];                                    /*@A4C*/
       int  Lib_ASP_Number;                                  /*@A3A*/
       char Source_File_Name[10];
       char Source_File_Lib_Name[10];
       char Source_File_Mbr_Name[10];
       char Source_File_Update_Date_Time[13];
       char Creator_User_Profile[10];
       char System_Object_Creation[8];
       char System_Level[9];
       char Compiler[16];
       char Object_Level[8];
       char User_Changed;
       char Licensed_Program[16];
       char PTF[10];
       char APAR[10];
       char Primary_Group[10];
       char Reserved7[2];                                    /*@B1A*/
       char Optimum_Space_Alignment;                         /*@B1M*/
       int  Associated_Space_Size;                           /*@B0A*/
       char Reserved3[4];                                    /*@B1C*/
    } Qus_OBJL0400_t;

 /******************************************************************/
 /* Type Definition for the OBJL0500 format.                       */
 /******************************************************************/

 typedef _Packed struct Qus_OBJL0500
    {
       char Object_Name_Used[10];
       char Object_Lib_Name_Used[10];
       char Object_Type_Used[10];
       char Information_Status;
       char Extended_Obj_Attr[10];
       char Text_Description[50];
       char User_Defined_Attr[10];
       char Reserved[7];
       int  Aux_Storage_Pool;
       char Object_Owner[10];
       char Object_Domain[2];
       char Create_Date_Time[8];
       char Change_Date_Time[8];
       char Storage[10];
       char Object_Compress_Status;
       char Allow_Change;
       char Changed_By_Program;
       char Object_Audit_Value[10];
       char Digitally_Signed;                                /*@A3A*/
       char Digitally_Signed_Sys_Trust;                      /*@A4A*/
       char Digitally_Signed_Multiple;                       /*@A5C*/
       char Reserved2[2];                                    /*@A4C*/
       int  Lib_ASP_Number;                                  /*@A3A*/
       char Source_File_Name[10];
       char Source_File_Lib_Name[10];
       char Source_File_Mbr_Name[10];
       char Source_File_Update_Date_Time[13];
       char Creator_User_Profile[10];
       char System_Object_Creation[8];
       char System_Level[9];
       char Compiler[16];
       char Object_Level[8];
       char User_Changed;
       char Licensed_Program[16];
       char PTF[10];
       char APAR[10];
       char Primary_Group[10];
       char Reserved7[2];                                    /*@B1A*/
       char Optimum_Space_Alignment;                         /*@B1M*/
       int  Associated_Space_Size;                           /*@B0A*/
       char Reserved3[4];                                    /*@B1C*/
       char Object_Saved_Date_Time[8];
       char Object_Restored_Date_Time[8];
       int  Save_Size;
       int  Save_Size_Multiplier;
       int  Save_Sequence_Number;
       char Save_Command[10];
       char Save_Volume_ID[71];
       char Save_Device[10];
       char Save_File_Name[10];
       char Save_File_Lib_Name[10];
       char Save_Label[17];
       char Save_Active_Date_Time[8];
       char Journal_Status;                                  /*@A1A*/
       char Journal_Name[10];                                /*@A1A*/
       char Journal_Library[10];                             /*@A1A*/
       char Journal_Images;                                  /*@A1A*/
       char Journal_Entries_Omitted;                         /*@A1A*/
       char Journal_Start_Date_Time[8];                      /*@A1A*/
       char Reserved4[13];                                   /*@A1C*/
    } Qus_OBJL0500_t;


 /******************************************************************/
 /* Type Definition for the OBJL0600 format.                       */
 /******************************************************************/

 typedef _Packed struct Qus_OBJL0600
    {
       char Object_Name_Used[10];
       char Object_Lib_Name_Used[10];
       char Object_Type_Used[10];
       char Information_Status;
       char Extended_Obj_Attr[10];
       char Text_Description[50];
       char User_Defined_Attr[10];
       char Reserved[7];
       int  Aux_Storage_Pool;
       char Object_Owner[10];
       char Object_Domain[2];
       char Create_Date_Time[8];
       char Change_Date_Time[8];
       char Storage[10];
       char Object_Compress_Status;
       char Allow_Change;
       char Changed_By_Program;
       char Object_Audit_Value[10];
       char Digitally_Signed;                                /*@A3A*/
       char Digitally_Signed_Sys_Trust;                      /*@A4A*/
       char Digitally_Signed_Multiple;                       /*@A5C*/
       char Reserved2[2];                                    /*@A4C*/
       int  Lib_ASP_Number;                                  /*@A3A*/
       char Source_File_Name[10];
       char Source_File_Lib_Name[10];
       char Source_File_Mbr_Name[10];
       char Source_File_Update_Date_Time[13];
       char Creator_User_Profile[10];
       char System_Object_Creation[8];
       char System_Level[9];
       char Compiler[16];
       char Object_Level[8];
       char User_Changed;
       char Licensed_Program[16];
       char PTF[10];
       char APAR[10];
       char Primary_Group[10];
       char Reserved7[2];                                    /*@B1A*/
       char Optimum_Space_Alignment;                         /*@B1M*/
       int  Associated_Space_Size;                           /*@B0A*/
       char Reserved3[4];                                    /*@B1C*/
       char Object_Saved_Date_Time[8];
       char Object_Restored_Date_Time[8];
       int  Save_Size;
       int  Save_Size_Multiplier;
       int  Save_Sequence_Number;
       char Save_Command[10];
       char Save_Volume_ID[71];
       char Save_Device[10];
       char Save_File_Name[10];
       char Save_File_Lib_Name[10];
       char Save_Label[17];
       char Save_Active_Date_Time[8];
       char Journal_Status;                                  /*@A3A*/
       char Journal_Name[10];                                /*@A3A*/
       char Journal_Library[10];                             /*@A3A*/
       char Journal_Images;                                  /*@A3A*/
       char Journal_Entries_Omitted;                         /*@A3A*/
       char Journal_Start_Date_Time[8];                      /*@A3A*/
       char Reserved4[13];                                   /*@A3C*/
       char Last_Used_Date_Time[8];
       char Reset_Date_Time[8];
       int  Days_Used_Count;
       char Usage_Information_Update;
       char Object_ASP_Device_Name[10];                      /*@A3A*/
       char Lib_ASP_Device_Name[10];                         /*@A3A*/
       char Reserved5[3];                                    /*@A3C*/
    } Qus_OBJL0600_t;


 /******************************************************************/
 /* Type Definition for the OBJL0700 format.                       */
 /******************************************************************/

 typedef _Packed struct Qus_OBJL0700
    {
       char Object_Name_Used[10];
       char Object_Lib_Name_Used[10];
       char Object_Type_Used[10];
       char Information_Status;
       char Extended_Obj_Attr[10];
       char Text_Description[50];
       char User_Defined_Attr[10];
       char Reserved[7];
       int  Aux_Storage_Pool;
       char Object_Owner[10];
       char Object_Domain[2];
       char Create_Date_Time[8];
       char Change_Date_Time[8];
       char Storage[10];
       char Object_Compress_Status;
       char Allow_Change;
       char Changed_By_Program;
       char Object_Audit_Value[10];
       char Digitally_Signed;                                /*@A3A*/
       char Digitally_Signed_Sys_Trust;                      /*@A4A*/
       char Digitally_Signed_Multiple;                       /*@A5C*/
       char Reserved2[2];                                    /*@A4C*/
       int  Lib_ASP_Number;                                  /*@A3A*/
       char Source_File_Name[10];
       char Source_File_Lib_Name[10];
       char Source_File_Mbr_Name[10];
       char Source_File_Update_Date_Time[13];
       char Creator_User_Profile[10];
       char System_Object_Creation[8];
       char System_Level[9];
       char Compiler[16];
       char Object_Level[8];
       char User_Changed;
       char Licensed_Program[16];
       char PTF[10];
       char APAR[10];
       char Primary_Group[10];
       char Reserved7[2];                                    /*@B1A*/
       char Optimum_Space_Alignment;                         /*@B1M*/
       int  Associated_Space_Size;                           /*@B0A*/
       char Reserved3[4];                                    /*@B1C*/
       char Object_Saved_Date_Time[8];
       char Object_Restored_Date_Time[8];
       int  Save_Size;
       int  Save_Size_Multiplier;
       int  Save_Sequence_Number;
       char Save_Command[10];
       char Save_Volume_ID[71];
       char Save_Device[10];
       char Save_File_Name[10];
       char Save_File_Lib_Name[10];
       char Save_Label[17];
       char Save_Active_Date_Time[8];
       char Journal_Status;                                  /*@A3A*/
       char Journal_Name[10];                                /*@A3A*/
       char Journal_Library[10];                             /*@A3A*/
       char Journal_Images;                                  /*@A3A*/
       char Journal_Entries_Omitted;                         /*@A3A*/
       char Journal_Start_Date_Time[8];                      /*@A3A*/
       char Reserved4[13];                                   /*@A3C*/
       char Last_Used_Date_Time[8];
       char Reset_Date_Time[8];
       int  Days_Used_Count;
       char Usage_Information_Update;
       char Object_ASP_Device_Name[10];                      /*@A3A*/
       char Lib_ASP_Device_Name[10];                         /*@A3A*/
       char Reserved5[3];                                    /*@A3C*/
       int  Object_Size;
       int  Object_Size_Multiplier;
       char Overflow_ASP_Indicator;
       char Object_ASP_Group[10];                           /* @C1A*/
       char Library_ASP_Group[10];                          /* @C1A*/
       char Starting_Jrn_Rcv_For_Apply[10];                 /* @C1A*/
       char Starting_Jrn_Rcv_Lib[10];                       /* @C1A*/
       char Starting_Jrn_Rcv_Lib_ASP_Dev[10];               /* @C1A*/
       char Starting_Jrn_Rcv_Lib_ASP_Group[10];             /* @C1A*/
       char Reserved6[3];                                   /* @C1C*/
    } Qus_OBJL0700_t;

#if (__OS400_TGTVRM__>=510)
#pragma datamodel(pop)
#endif
 #endif
