/*** START HEADER FILE SPECIFICATIONS *****************************/
/*                                                                */
/* Header File Name: H/QCLRPGMI                                   */
/*                                                                */
/* Descriptive Name: Retrieve Program Information API.            */
/*                                                                */
/* 5763-SS1, 5722-SS1 (C) Copyright IBM Corp. 1994,2002           */
/* All rights reserved.                                           */
/* US Government Users Restricted Rights -                        */
/* Use, duplication or disclosure restricted                      */
/* by GSA ADP Schedule Contract with IBM Corp.                    */
/*                                                                */
/* Licensed Materials-Property of IBM                             */
/*                                                                */
/*                                                                */
/* Description: The Retrieve Program Information API lets you     */
/*              retrieve program information and place it into a  */
/*              single variable in the calling program.           */
/*                                                                */
/* Header Files Included: None.                                   */
/*                                                                */
/* Macros List: None.                                             */
/*                                                                */
/* Structure List: Qcl_PGMI0100_t                                 */
/*                 Qcl_PGMI0200_t                                 */
/*                 Qcl_PGMI0300_t                                 */
/*                                                                */
/* Function Prototype List: QCLRPGMI                              */
/*                                                                */
/*                                                                */
/* Change Activity:                                               */
/*                                                                */
/* CFD List:                                                      */
/*                                                                */
/* LEVEL                                                          */
/* -----                                                          */
/* V4R4M0                                                         */
/* V5R1M0                                                         */
/* V5R2M0                                                         */
/*                                                                */
/* End CFD List.                                                  */
/*                                                                */
/* End Change Activity                                            */
/*** END HEADER FILE SPECIFICATIONS *******************************/

#ifndef QCLRPGMI_h
#define QCLRPGMI_h

#if (__OS400_TGTVRM__>=510)
    #pragma datamodel(P128)
#endif

/******************************************************************/
/* Prototype for calling QCLRPGMI API                             */
/******************************************************************/
#ifdef  __ILEC400__
      #pragma linkage(QCLRPGMI,OS,nowiden)
#else
      extern "OS"
#endif

void QCLRPGMI (void *,    /* Receiver variable                    */
               int,       /* Length of receiver variable          */
               char *,    /* Format name                          */
               void *,    /* Qualified program name               */
               void *);   /* Error code                           */


/******************************************************************/
/* Type Definition for the PGMI0100 format.                       */
/******************************************************************/
typedef _Packed struct Qcl_PGMI0100
{
  int  Bytes_Returned;
  int  Bytes_Available;
  char Pgm_Name[10];
  char Pgm_Lib_Name[10];
  char Pgm_Owner[10];
  char Pgm_Attribute[10];
  char Creation_Date_Time[13];
  char Source_File_Name[10];
  char Source_Lib_Name[10];
  char Source_Member_Name[10];
  char Source_Date_Time[13];
  char Observable_Info[1];
  char User_Profile_Option[1];
  char Use_Adopted_Auth[1];
  char Log_Commands[1];
  char Allow_RTVCLSRC[1];
  char Ignore_Dec_Data[1];
  char Text[50];
  char Type_Of_Pgm[1];
  char Teraspace_Storage_Enabled_Pgm[1];
  char Reserved1[58];
  int  Min_Parameters;
  int  Max_Parameters;
  int  Pgm_Size;
  int  Assoc_Space_Size;
  int  Static_Size;
  int  Automatic_Size;
  int  Num_MI_Instructions;
  int  Num_MI_ODT_Entries;
  char Pgm_State[1];
  char Compiler_Id[14];
  char Earliest_Release[6];
  char Sort_Seq_Table_Name[10];
  char Sort_Seq_Table_Lib[10];
  char Language_Id[10];
  char Pgm_Domain[1];
  char Conversion_Required[1];
  char Reserved2[20];
  char Optimization[1];
  char Paging_Pool[1];
  char Update_PASA[1];
  char Clear_PASA[1];
  char Paging_Amount[1];
  char Reserved3[18];
  char Pep_Module[10];
  char Pep_Lib[10];
  char Act_Group_Attribute[30];
  char Observable_Info_Comp[1];
  char Run_Time_Info_Comp[1];
  char Release_Pgm_Created_On[6];
  char Shared_Act_Group[1];
  char Allow_Update[1];
  int  Pgm_CCSID;
  int  Num_Modules;
  int  Num_Service_Pgms;
  int  Num_Copyrights;
  int  Num_Unresolved_Refs;
  char Release_Pgm_Created_For[6];
  char Allow_Rinz[1];
  char All_Creation_data;
  char Allow_SRVPGM_Lib_Update;
  char Profiling_Data[10];
  char Teraspace_Storage_Enabled;
  char Storage_Model;
  char Reserved4[87];
} Qcl_PGMI0100_t;

/******************************************************************/
/* Type Definition for the PGMI0200 format.                       */
/******************************************************************/
typedef _Packed struct Qcl_PGMI0200
{
  int  Bytes_Returned;
  int  Bytes_Available;
  char Pgm_Name[10];
  char Pgm_Lib_Name[10];
  char Pgm_Owner[10];
  char Pgm_Attribute[10];
  char Creation_Date_Time[13];
  char Source_File_Name[10];
  char Source_Lib_Name[10];
  char Source_Member_Name[10];
  char Source_Date_Time[13];
  char Observable_Info[1];
  char User_Profile_Option[1];
  char Use_Adopted_Auth[1];
  char Log_Commands[1];
  char Allow_RTVCLSRC[1];
  char Ignore_Dec_Data[1];
  char Text[50];
  char Type_Of_Pgm[1];
  char Teraspace_Storage_Enabled_Pgm[1];
  char Reserved1[58];
  int  Min_Parameters;
  int  Max_Parameters;
  int  Pgm_Size;
  int  Assoc_Space_Size;
  int  Static_Size;
  int  Automatic_Size;
  int  Num_MI_Instructions;
  int  Num_MI_ODT_Entries;
  char Pgm_State[1];
  char Compiler_Id[14];
  char Earliest_Release[6];
  char Sort_Seq_Table_Name[10];
  char Sort_Seq_Table_Lib[10];
  char Language_Id[10];
  char Pgm_Domain[1];
  char Conversion_Required[1];
  char Reserved2[20];
  char Optimization[1];
  char Paging_Pool[1];
  char Update_PASA[1];
  char Clear_PASA[1];
  char Paging_Amount[1];
  char Reserved3[18];
  int  Num_SQL_Statements;
  char Relational_Database[18];
  char Commitment_Ctrl[10];
  char Allow_Copy_Data[10];
  char Close_SQL_Cursor[10];
  char Naming_Convention[10];
  char Date_Format[10];
  char Date_Separator[1];
  char Time_Format[10];
  char Time_Separator[1];
  char Delay_PREPARE[10];
  char Allow_Blocking[10];
  char Pep_Module[10];
  char Pep_Lib[10];
  char Act_Group_Attribute[30];
  char Observable_Info_Comp[1];
  char Run_Time_Info_Comp[1];
  char Release_Pgm_Created_On[6];
  char Shared_Act_Group[1];
  char Allow_Update[1];
  int  Pgm_CCSID;
  int  Num_Modules;
  int  Num_Service_Pgms;
  int  Num_Copyrights;
  int  Num_Unresolved_Refs;
  char Release_Pgm_Created_For[6];
  char Allow_Rinz[1];
  char Default_Col_Name[10];
  char SQL_Pkg_Name[10];
  char SQL_Pkg_Lib_Name[10];
  char Dynamic_User_Profile[10];
  char SQL_Sort_Seq_Table[10];
  char SQL_Sort_Seq_Table_Lib[10];
  char SQL_Sort_Seq_Lang_Id[10];
  char Connection_Method[10];
  char Reserved6[1];
  int  SQL_Path_Offset;
  int  SQL_Path_Length;
  char Reserved4[91];
  char All_Creation_data;
  char Allow_SRVPGM_Lib_Update;
  char Profiling_Data[10];
  char Teraspace_Storage_Enabled;
  char Storage_Model;
  char Reserved5[87];
} Qcl_PGMI0200_t;

/******************************************************************/
/* Type Definition for the PGMI0300 format.                       */
/******************************************************************/
typedef _Packed struct Qcl_PGMI0300
{
  int  Bytes_Returned;
  int  Bytes_Available;
  char Pgm_Name[10];
  char Pgm_Lib_Name[10];
  int  Cur_Pgm_Size;
  int  Max_Pgm_Size;
  int  Cur_Num_Modules;
  int  Max_Num_Modules;
  int  Cur_Num_Service_Pgms;
  int  Max_Num_Service_Pgms;
  int  Cur_String_Dir_Size;
  int  Max_String_Dir_Size;
  int  Cur_Copyright_Size;
  int  Max_Copyright_Size;
  int  Cur_Num_Aux_Segments;
  int  Max_Num_Aux_Segments;
  int  Min_Static_Size;
  int  Max_Static_Size;
  char Reserved7[4];
  unsigned long long Min_Static_Size_Long;
  unsigned long long Max_Static_Size_Long;
} Qcl_PGMI0300_t;

#if (__OS400_TGTVRM__>=510)
    #pragma datamodel(pop)
#endif

#endif
