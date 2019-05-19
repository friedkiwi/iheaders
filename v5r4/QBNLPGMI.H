 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QBNLPGMI                                   */
 /*                                                                */
 /* Descriptive Name: List ILE Program Information Header.         */
 /*                                                                */
 /* 5763-SS1, 5769-SS1, 5722-SS1 (C) Copyright IBM Corp. 1994, 2001*/
 /* All rights reserved.                                           */
 /* US Government Users Restricted Rights -                        */
 /* Use, duplication or disclosure restricted                      */
 /* by GSA ADP Schedule Contract with IBM Corp.                    */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /* Description: The List ILE Program Information API gives        */
 /*              information about ILE programs, similar to the    */
 /*              Display Program command.                          */
 /*                                                                */
 /* Header Files Included: None.                                   */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: Qbn_Header_Section_t                           */
 /*                 Qbn_Input_Section_t                            */
 /*                 Qbn_LPGMI_PGML0100_t                           */
 /*                 Qbn_LPGMI_PGML0110_t                           */
 /*                 Qbn_LPGMI_PGML0200_t                           */
 /*                 Qbn_LPGMI_PGML0300_t                           */
 /*                 Qbn_LPGMI_PGML0400_t                           */
 /*                 Qbn_LPGMI_PGML0500_t                           */
 /*                                                                */
 /* Function Prototype List: QBNLPGMI                              */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* LEVEL                                                          */
 /* -----                                                          */
 /* V3R1M0                                                         */
 /* V3R6M0                                                         */
 /* V4R4M0                                                         */
 /* V4R5M0                                                         */
 /* V5R1M0                                                         */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /* End Change Activity                                            */
 /*** END HEADER FILE SPECIFICATIONS *******************************/
 #ifndef QBNLPGMI_h
 #define QBNLPGMI_h

 #if (__OS400_TGTVRM__>=510)
     #pragma datamodel(P128)
 #endif

 /******************************************************************/
 /* Prototype for calling Binder API QBNLPGMI                      */
 /******************************************************************/
 #ifdef  __ILEC400__
       #pragma linkage(QBNLPGMI,OS,nowiden)
 #else
       extern "OS"
 #endif
 void QBNLPGMI (void *,          /* Qualified user space name      */
                char *,          /* Format name                    */
                void *,          /* Qualified ILE program name     */
                void *);         /* Error code                     */

 /******************************************************************/
 /* User Space Input Section                                       */
 /******************************************************************/
 typedef _Packed struct Qbn_LPGMI_Input_Section
    {
       char User_Space[10];
       char User_Space_Lib[10];
       char Format[8];
       char Program_Name[10];
       char Program_Library[10];
    }  Qbn_LPGMI_Input_Section_t;

 /******************************************************************/
 /* User Space Header Section                                      */
 /******************************************************************/
 typedef _Packed struct Qbn_LPGMI_Header_Section
    {
       char User_Space[10];
       char User_Space_Lib[10];
    }  Qbn_LPGMI_Header_Section_t;

 /******************************************************************/
 /* Type definition for the PGML0100                               */
 /* @01  Added new field Performance_data                          */
 /* @04  Added new Teraspace_Storage_Enabled                       */
 /* @05  Added new SQL Path                                        */
 /* @C9  Added Storage_Model                                       */
 /* @CA  Extended SQL Path                                         */
 /******************************************************************/
 typedef _Packed struct Qbn_LPGMI_PGML0100
    {
       char Program_Name[10];
       char Program_Library_Name[10];
       char Bound_Module_Name[10];
       char Bound_Module_Library_Name[10];
       char Source_File_Name[10];
       char Source_File_Library_Name[10];
       char Source_File_Member[10];
       char Module_Attribute[10];
       char Module_Creation_Timestamp[13];
       char Source_File_Updated_Timestamp[13];
       char Sort_Sequence_Table[10];
       char Sort_Sequence_Table_Library[10];
       char Language_ID[10];
       int  Optimization_Level;
       int  Maximum_Optimization;
       char Debug_Data[10];
       char Module_Created_On[6];
       char Module_Created_For[6];
       char Reserved1[20];
       char User_Modified;
       char Licensed_Program[13];
       char PTF_Number[5];
       char APAR_ID[6];
       char Module_Creation_data;
       int  Module_CCSID;
       char Object_Control_Level[8];
       char Performance_Data;
       char Profiling_Data[10];
       char Reserved4[1];
       int  Number_Proc;
       int  Number_Proc_Blk_Reordered;
       int  Number_Proc_Blk_Order_Measured;
       char Teraspace_Storage_Enabled;
       char Storage_Model;
       char Reserved3[74];
       int  Number_SQL_Inst;
       char Relational_Database[18];
       char Commitment_Control[10];
       char Allow_Copy_Data[10];
       char Close_SQL_Cursors[10];
       char Naming_Convention[10];
       char Date_Format[10];
       char Date_Separator;
       char Time_Format[10];
       char Time_Separator;
       char Delay_PREPARE[10];
       char Allow_Blocking[10];
       char Default_Collection_Name[10];
       char SQL_Package[10];
       char SQL_Package_Library[10];
       char Dynamic_User_Profile[10];
       char SQL_Sort_Seq_Table[10];
       char SQL_Sort_Seq_Table_Lib[10];
       char SQL_Language_ID[10];
       char Connection_Method[10];
       int  SQL_Path_Length;
       char SQL_Path[3483];
    }  Qbn_LPGMI_PGML0100_t;

 /******************************************************************/
 /* Type definition for the PGML0110                               */
 /******************************************************************/
 typedef _Packed struct Qbn_LPGMI_PGML0110
    {
       int  Entry_Size;
       char Program_Name[10];
       char Program_Library_Name[10];
       char Bound_Module_Name[10];
       char Bound_Module_Library_Name[10];
       char Source_File_Name[10];
       char Source_File_Library_Name[10];
       char Source_File_Member[10];
       char Module_Attribute[10];
       char Module_Creation_Timestamp[13];
       char Source_File_Updated_Timestamp[13];
       char Sort_Sequence_Table[10];
       char Sort_Sequence_Table_Library[10];
       char Language_ID[10];
       int  Optimization_Level;
       int  Maximum_Optimization;
       char Debug_Data[10];
       char Module_Created_On[6];
       char Module_Created_For[6];
       char Reserved1[20];
       char User_Modified;
       char Licensed_Program[13];
       char PTF_Number[5];
       char APAR_ID[6];
       char Module_Creation_data;
       int  Module_CCSID;
       char Object_Control_Level[8];
       char Performance_Data;
       char Profiling_Data[10];
       char Reserved4[1];
       int  Number_Proc;
       int  Number_Proc_Blk_Reordered;
       int  Number_Proc_Blk_Order_Measured;
       char Teraspace_Storage_Enabled;
       char Storage_Model;
       char Reserved5[2];
       int  Licopt_Name_Offset;
       int  Licopt_Name_Length;
       char Reserved3[64];
       int  Number_SQL_Inst;
       char Relational_Database[18];
       char Commitment_Control[10];
       char Allow_Copy_Data[10];
       char Close_SQL_Cursors[10];
       char Naming_Convention[10];
       char Date_Format[10];
       char Date_Separator;
       char Time_Format[10];
       char Time_Separator;
       char Delay_PREPARE[10];
       char Allow_Blocking[10];
       char Default_Collection_Name[10];
       char SQL_Package[10];
       char SQL_Package_Library[10];
       char Dynamic_User_Profile[10];
       char SQL_Sort_Seq_Table[10];
       char SQL_Sort_Seq_Table_Lib[10];
       char SQL_Language_ID[10];
       char Connection_Method[10];
       int  SQL_Path_Length;
       char SQL_Path[3483];
    }  Qbn_LPGMI_PGML0110_t;

 /******************************************************************/
 /* Type definition for the PGML0200                               */
 /******************************************************************/
 typedef _Packed struct Qbn_LPGMI_PGML0200
    {
       char Program_Name[10];
       char Program_Library_Name[10];
       char Bound_Service_Program[10];
       char Bound_Service_Library_Name[10];
       char Bound_Service_Signature[16];
    }  Qbn_LPGMI_PGML0200_t;

 /******************************************************************/
 /* Type definition for the PGML0300                               */
 /******************************************************************/
 typedef _Packed struct Qbn_LPGMI_PGML0300
    {
       char Program_Name[10];
       char Program_Library_Name[10];
       int  Size_Data_Item_Export;
       int  Data_Item_Export_Name_CCSID;
       int  Data_Item_Export_Name_Length;
       char Data_Item_Export_Name[256];
    }  Qbn_LPGMI_PGML0300_t;

 /******************************************************************/
 /* Type definition for the PGML0400                               */
 /******************************************************************/
 typedef _Packed struct Qbn_LPGMI_PGML0400
    {
       char Program_Name[10];
       char Program_Library_Name[10];
       int  Data_Item_Import_Name_CCSID;
       int  Data_Item_Import_Name_Length;
       char Data_Item_Import_Name[256];
    }  Qbn_LPGMI_PGML0400_t;

 /******************************************************************/
 /* Type definition for the PGML0500                               */
 /******************************************************************/
 typedef _Packed struct Qbn_LPGMI_PGML0500
    {
       char Program_Name[10];
       char Program_Library_Name[10];
       char Reserved[4];
       int  Copyright_Length;
       char Copyright[256];
    }  Qbn_LPGMI_PGML0500_t;


 #if (__OS400_TGTVRM__>=510)
     #pragma datamodel(pop)
 #endif

 #endif
