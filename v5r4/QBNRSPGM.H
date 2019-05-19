/*** START HEADER FILE SPECIFICATIONS *****************************/
/*                                                                */
/* Header File Name: H/QBNRSPGM                                   */
/*                                                                */
/* Descriptive Name: Retrieve Service Program Information API.    */
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
/* Description: The Retrieve Service Program Information API      */
/*              lets you retrieve service program information and */
/*              place it into a single variable in the calling    */
/*              program.                                          */
/*                                                                */
/* Header Files Included: None.                                   */
/*                                                                */
/* Macros List: None.                                             */
/*                                                                */
/* Structure List: Qbn_SPGI0100_t                                 */
/*                 Qbn_SPGI0200_t                                 */
/*                                                                */
/* Function Prototype List: QBNRSPGM                              */
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

#ifndef QBNRSPGM_h
#define QBNRSPGM_h

#if (__OS400_TGTVRM__>=510)
    #pragma datamodel(P128)
#endif

/******************************************************************/
/* Prototype for calling QBNRSPGM API                             */
/******************************************************************/
#ifdef  __ILEC400__
      #pragma linkage(QBNRSPGM,OS,nowiden)
#else
      extern "OS"
#endif

void QBNRSPGM (void *,    /* Receiver variable                    */
               int,       /* Length of receiver variable          */
               char *,    /* Format name                          */
               void *,    /* Qualified service program name       */
               void *);   /* Error code                           */

/******************************************************************/
/* Type Definition for the SPGI0100 format.                       */
/******************************************************************/
typedef _Packed struct Qbn_SPGI0100
{
  int  Bytes_Returned;
  int  Bytes_Available;
  char Pgm_Name[10];
  char Pgm_Lib_Name[10];
  char Pgm_Owner[10];
  char Pgm_Attrib[10];
  char Creation_Date_Time[13];
  char Export_File_Name[10];
  char Export_Lib_Name[10];
  char Export_Member_Name[10];
  char Act_Group_Attrib[30];
  char Cur_Export_Sig[16];
  char User_Profile;
  char Observable_Info_Comp;
  char Run_Time_Info_Comp;
  int  Pgm_CCSID;
  int  Num_Modules;
  int  Num_Service_Pgms;
  int  Num_Copyrights;
  char Text[50];
  char Shared_Act_Group;
  char Allow_Update;
  int  Num_Unresolved_Refs;
  char Use_Adopted_Auth;
  char Allow_SRVPGM_Lib_Update;
  char Profiling_Data[10];
  char Teraspace_Storage_Enabled;
  char Storage_Model;
  char Reserved1[80];
  char Pgm_State;
  char Pgm_Domain;
  int  Assoc_Space_Size;
  int  Static_Storage_Size;
  int  Pgm_Size;
  char Rel_Created_On[6];
  char Earliest_Release[6];
  char Rel_Created_For[6];
  char Allow_Rinz;
  char Conversion_Required[1];
  char All_Creation_data;
  char Reserved2[91];
  char Paging_Pool;
  char Paging_Amount;
} Qbn_SPGI0100_t;

/******************************************************************/
/* Type Definition for the SPGI0200 format.                       */
/******************************************************************/
typedef _Packed struct Qbn_SPGI0200
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
  int  Cur_Num_Proc_Exports;
  int  Max_Num_Proc_Exports;
  int  Cur_Num_Data_Exports;
  int  Max_Num_Data_Exports;
  int  Cur_Num_Signatures;
  int  Max_Num_Signatures;
  int  Min_Static_Size;
  int  Max_Static_Size;
  char Reserved3[4];
  unsigned long long Min_Static_Size_Long;
  unsigned long long Max_Static_Size_Long;
} Qbn_SPGI0200_t;

#if (__OS400_TGTVRM__>=510)
    #pragma datamodel(pop)
#endif

#endif
