/*** START HEADER FILE SPECIFICATIONS *****************************/
/*                                                                */
/* Header File Name: H/QBNRMODI                                   */
/*                                                                */
/* Descriptive Name: Retrieve Module Information API.             */
/*                                                                */
/* 5763-SS1, 5769-SS1, 5722-SS1 (C) Copyright IBM Corp. 1994, 2002*/
/* All rights reserved.                                           */
/* US Government Users Restricted Rights -                        */
/* Use, duplication or disclosure restricted                      */
/* by GSA ADP Schedule Contract with IBM Corp.                    */
/*                                                                */
/* Licensed Materials-Property of IBM                             */
/*                                                                */
/*                                                                */
/* Description: The Retrieve Module Information API lets you      */
/*              retrieve module information and place it into     */
/*              a single variable in the calling program.         */
/*              Note that parameters passed to QBNRMODI API       */
/*              must be in uppercase.                             */
/*                                                                */
/* Header Files Included: None.                                   */
/*                                                                */
/* Macros List: None.                                             */
/*                                                                */
/* Structure List: Qbn_MODI0100_t                                 */
/*                 Qbn_MODI0200_t                                 */
/*                                                                */
/* Function Prototype List: QBNRMODI                              */
/*                                                                */
/* Change Activity:                                               */
/*                                                                */
/* CFD List:                                                      */
/*                                                                */
/* LEVEL                                                          */
/* -----                                                          */
/* V3R6M0                                                         */
/* V4R2M0                                                         */
/* V4R4M0                                                         */
/* V4R5M0                                                         */
/* V5R1M0                                                         */
/* V5R2M0                                                         */
/*                                                                */
/* End CFD List.                                                  */
/*                                                                */
/*  Additional notes about the Change Activity                    */
/* End Change Activity.                                           */
/*** END HEADER FILE SPECIFICATIONS *******************************/

#ifndef QBNRMODI_h
#define QBNRMODI_h

#if (__OS400_TGTVRM__>=510)
    #pragma datamodel(P128)
#endif

/******************************************************************/
/* Prototype for calling QBNRMODI API                             */
/******************************************************************/
#ifdef  __ILEC400__
      #pragma linkage(QBNRMODI,OS,nowiden)
#else
      extern "OS"
#endif

void QBNRMODI (void *,    /* Receiver variable                    */
               int,       /* Length of receiver variable          */
               char *,    /* Format name                          */
               void *,    /* Qualified module name                */
               void *);   /* Error code                           */

/******************************************************************/
/* Type Definition for the MODI0100 format.                       */
/******************************************************************/
typedef _Packed struct Qbn_MODI0100
{
  int  Bytes_Returned;
  int  Bytes_Available;
  char Module_Name[10];
  char Module_Lib_Name[10];
  char Module_Attribute[10];
  char Module_Creation_Timestamp[13];
  char Source_File_Name[10];
  char Source_File_Lib_Name[10];
  char Source_File_Member[10];
  char Source_File_Updated_Timestamp[13];
  char Reserved1[10];
  char Module_Owner[10];
  char Reserved2[2];
  int  Module_CCSID;
  char Text[50];
  char Creation_Data;
  char Sort_Sequence_Table[10];
  char Sort_Sequence_Table_Library[10];
  char Language_ID[10];
  char Reserved3[3];
  int  Optimization_Level;
  int  Maximum_Optimization;
  char Debug_Data;
  char Compressed_Module;
  char Reserved4[2];
  int  Min_Parameters;
  int  Max_Parameters;
  char Module_State;
  char Module_Domain;
  char Reserved5[2];
  int  Num_Exported_Symbols;
  int  Num_Unresolved_Refs;
  char Rel_Created_On[6];
  char Rel_Created_For[6];
  char Earliest_Release[6];
  char Performance_Data;
  char Conversion_Required;
  int  Pep_Name_Offset;
  int  Pep_Name_Length;
  char Pep_Name_Indicator;
  char Profiling_Data[10];
  char Intermediate_Language_Data;
  char Teraspace_Storage_Enabled;
  char Storage_Model;
  char Reserved8[2];
  int  Licopt_Name_Offset;
  int  Licopt_Name_Length;
  char Reserved7[68];
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
  char SQL_Package_Name[10];
  char SQL_Package_Library_Name[10];
  char Dynamic_User_Profile[10];
  char SQL_Sort_Sequence_Table[10];
  char SQL_Sort_Sequence_Table_Lib[10];
  char SQL_Language_ID[10];
  char Connection_Method[10];
  int SQL_Path_Offset;
  int SQL_Path_Length;
} Qbn_MODI0100_t;

/******************************************************************/
/* Type Definition for the MODI0200 format.                       */
/******************************************************************/
typedef _Packed struct Qbn_MODI0200
{
  int  Bytes_Returned;
  int  Bytes_Available;
  char Module_Name[10];
  char Module_Lib_Name[10];
  int  Cur_Module_Size;
  int  Max_Module_Size;
  int  Cur_Procedures_Constants_Size;
  int  Max_Procedures_Constants_Size;
  int  Cur_Debug_Space_Size;
  int  Max_Debug_Space_Size;
  int  Cur_Associated_Space_Size;
  int  Max_Associated_Space_Size;
  int  Cur_Module_Constants_Size;
  int  Max_Module_Constants_Size;
  int  Cur_Static_Storage_Size;
  int  Max_Static_Storage_Size;
  int  Cur_Dictionary_Table_Size;
  int  Max_Dictionary_Table_Size;
  int  Cur_Exception_Table_Size;
  int  Max_Exception_Table_Size;
  int  Cur_Exception_List_Area_Size;
  int  Max_Exception_List_Area_Size;
  int  Cur_Binding_Spec_Size;
  int  Max_Binding_Spec_Size;
  int  Cur_String_Dir_Size;
  int  Max_String_Dir_Size;
  int  Cur_Dictionary_Size;
  int  Max_Dictionary_Size;
  int  Cur_Instructions_Size;
  int  Max_Instructions_Size;
  int  Cur_Initialization_Size;
  int  Max_Initialization_Size;
  int  Cur_Alias_Size;
  int  Max_Alias_Size;
  int  Cur_Type_Information_Size;
  int  Max_Type_Information_Size;
  int  Cur_Literal_Pool_Size;
  int  Max_Literal_Pool_Size;
  int  Cur_Static_Work_Area_Size;
  int  Max_Static_Work_Area_Size;
  int  Cur_Binding_Work_Area_Size;
  int  Max_Binding_Work_Area_Size;
  int  Cur_Num_Aux_Segments;
  int  Max_Num_Aux_Segments;
  int  Cur_Num_Static_Storage_Alloc;
  int  Max_Num_Static_Storage_Alloc;
  int  Cur_Num_Procedures;
  int  Max_Num_Procedures;
  int  Cur_Num_Copyrights;
  int  Max_Num_Copyrights;
  char Reserved9[4];                                   /*@v5r2m0A*/
  unsigned long long Cur_Static_Storage_Size_Long;     /*@v5r2m0A*/
  unsigned long long Max_Static_Storage_Size_Long;     /*@v5r2m0A*/
  char Reserved[84];                                   /*@v5r2m0C*/
  int  Cur_Auto_Storage_Alloc_Size;
  int  Max_Auto_Storage_Alloc_Size;
  int  Largest_Auto_Storage_Alloc_Off;
  int  Largest_Auto_Storage_Alloc_Len;
  int  Cur_LIC_Stack_Allocation_Size;
  int  Max_LIC_Stack_Allocation_Size;
  int  Largest_LIC_Stack_Alloc_Offset;
  int  Largest_LIC_Stack_Alloc_Length;
  int  Cur_Debug_Mapping_Table_Size;
  int  Max_Debug_Mapping_Table_Size;
  int  Largest_Debug_Mapping_Offset;
  int  Largest_Debug_Mapping_Length;
  int  Cur_Exception_Stmt_Table_Size;
  int  Max_Exception_Stmt_Table_Size;
  int  Largest_Exception_Stmt_Offset;
  int  Largest_Exception_Stmt_Length;
  int  Cur_MI_Inst_Range_Table_Size;
  int  Max_MI_Inst_Range_Table_Size;
  int  Largest_MI_Instr_Range_Offset;
  int  Largest_MI_Instr_Range_Length;
  int  Cur_Largest_Procedure_Size;
  int  Max_Largest_Procedure_Size;
  int  Largest_Procedure_Name_Offset;
  int  Largest_Procedure_Name_Length;
} Qbn_MODI0200_t;

#if (__OS400_TGTVRM__>=510)
    #pragma datamodel(pop)
#endif

#endif



