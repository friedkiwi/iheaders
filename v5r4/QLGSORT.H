/*** START HEADER FILE SPECIFICATIONS *****************************/
/*                                                                */
/* Header File Name: H/QLGSORT                                    */
/*                                                                */
/* Descriptive Name: QLGSORT API.                                 */
/*                                                                */
/* 5763-SS1  (C) Copyright IBM Corp. 1994,1994                    */
/* All rights reserved.                                           */
/* US Government Users Restricted Rights -                        */
/* Use, duplication or disclosure restricted                      */
/* by GSA ADP Schedule Contract with IBM Corp.                    */
/*                                                                */
/* Licensed Materials-Property of IBM                             */
/*                                                                */
/*                                                                */
/* Description: The Sort API provides a generalized sor function  */
/*              that can be directly called by any application    */
/*              program.                                          */
/*                                                                */
/* Header Files Included: None.                                   */
/*                                                                */
/* Macros List: None.                                             */
/*                                                                */
/* Structure List: Qlg_Sort_Key_List_t                            */
/*                 Qlg_Sort_Lang_Info_t                           */
/*                 Qlg_Sort_File_List_t                           */
/*                 Qlg_Sort_Feedback_Info_t                       */
/*                 Qlg_Sort_Control_Block_t                       */
/*                                                                */
/* Function Prototype List: QLGSORT                               */
/*                                                                */
/* Change Activity:                                               */
/*                                                                */
/* CFD List:                                                      */
/*                                                                */
/* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
/* ---- ------------ ----- ------ --------- ----------------------*/
/* $A0= D2862000     3D10  940415 BRINKER   New Include           */
/*                                                                */
/* End CFD List.                                                  */
/*                                                                */
/*  Additional notes about the Change Activity                    */
/* End Change Activity.                                           */
/*** END HEADER FILE SPECIFICATIONS *******************************/

#ifndef QLGSORT_h
#define QLGSORT_h
#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(P128)      /* @B1A*/
#endif                       /* @B1A*/

/******************************************************************/
/* Prototype for calling QLGSORT API                             */
/******************************************************************/
#ifdef  __ILEC400__
      #pragma linkage(QLGSORT,OS,nowiden)
#else
      extern "OS"
#endif
void QLGSORT (void *,            /* Request control block         */
              void *,            /* Input data buffer             */
              void *,            /* Output data buffer            */
              int,               /* Length of output data buffer  */
              int *,             /* Length of returned data       */
              void *,            /* Error code                    */
              ...);              /* Optionals:
                                      Returned records feedback
                                      Length of returned records
                                        feedback                  */

/******************************************************************/
/* Type Definition for the QLGSORT key list.                      */
/******************************************************************/
typedef _Packed struct Qlg_Sort_Key_List
{
  int Start_Position;
  int String_Size;
  int Data_Type;
  int Sort_Order;
  int Ordinal_Position;
} Qlg_Sort_Key_List_t;

/******************************************************************/
/* Type Definition for the QLGSORT national language sort         */
/* information.                                                   */
/******************************************************************/
typedef _Packed struct Qlg_Sort_Lang_Info
{
  char Table_Name[20];
  int  CCSID;
  char Language_Id[10];
  char Table[256];
} Qlg_Sort_Lang_Info_t;

/******************************************************************/
/* Type Definition for the QLGSORT entries in either the input or */
/* output file list.                                              */
/******************************************************************/
typedef _Packed struct Qlg_Sort_File_List
{
  char File_Name[20];
  char Member_Name[10];
  int  Record_Access;
  int  Null_Fields;
} Qlg_Sort_File_List_t;

/******************************************************************/
/* Type Definition for the QLGSORT Returned Records Feedback      */
/* Information.                                                   */
/****                                                          ****/
/* NOTE: The following type definition only defines the fixed     */
/*       portion of the format.  Any varying length field will    */
/*       have to be defined by the user.                          */
/******************************************************************/
typedef _Packed struct Qlg_Sort_Feedback_Info
{
  int Bytes_Available;
  int Bytes_Returned;
  int Offset_Records_Array;
  int Number_Files;
/*int Returned_Records[];*/              /* varying length        */
} Qlg_Sort_Feedback_Info_t;

/******************************************************************/
/* Type Definition for the QLGSORT Request Control Block.         */
/****                                                          ****/
/* NOTE: The following type definition only defines the fixed     */
/*       portion of the format.  Any varying length field will    */
/*       have to be defined by the user.                          */
/******************************************************************/
typedef _Packed struct Qlg_Sort_Control_Block
{
  int  Length_Block;
  int  Request_Type;
  int  Reserved1;
  int  Options;
  int  Record_Length;
  int  Record_Count;
  int  Offset_Key_List;
  int  Number_Keys;
  int  Offset_Lang_Info;
  int  Offset_Input_List;
  int  Number_Input_Files;
  int  Offset_Output_List;
  int  Number_Output_Files;
  int  Length_Key_Entry;
  int  Length_Sort_Seq;
  int  Length_Infile_Entry;
  int  Length_Outfile_Entry;
  int  Offset_Null_Map;
  int  Offset_Record_Info;
  int  Reserved2;
/*Qlg_Sort_Key_List_t  Key_List[];*/       /* varying length      */
/*Qlg_Sort_Lang_Info_t Lang_Info[];*/      /* varying length      */
/*Qlg_Sort_File_List_t Input_List[];*/     /* varying length      */
/*Qlg_Sort_File_List_t Output_List[];*/    /* varying length      */
} Qlg_Sort_Control_Block_t;

#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(pop)       /* @B1A*/
#endif                       /* @B1A*/
#endif
