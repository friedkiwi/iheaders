/*** START HEADER FILE SPECIFICATIONS *******************************/
/*                                                                  */
/* Header File Name: H/QUSLRCD                                      */
/*                                                                  */
/* Descriptive Name: List Record Formats                            */
/*                                                                  */
/* 5763-SS1  (C) Copyright IBM Corp. 1994,1994                      */
/* All rights reserved.                                             */
/* US Government Users Restricted Rights -                          */
/* Use, duplication or disclosure restricted                        */
/* by GSA ADP Schedule Contract with IBM Corp.                      */
/*                                                                  */
/*                                                                  */
/* Licenced Materials-Property of IBM                               */
/*                                                                  */
/* Description: The List Reocrd Formats API generates a list of     */
/*              record format information contained within the      */
/*              specified file and places the list in a specified   */
/*              user space.                                         */
/*                                                                  */
/* Header Files Included: None.                                     */
/*                                                                  */
/* Macros List: None.                                               */
/*                                                                  */
/* Structure List: Qdb_Lrcd_Input_t                                 */
/*                 Qdb_Lrcd_Header_t                                */
/*                 Qdb_Lrcd_RCDL0100_t                              */
/*                 Qdb_Lrcd_RCDL0200_t                              */
/*                 Qdb_Lrcd_RCDL0300_t                              */
/*                                                                  */
/* Function Prototype List: QUSLRCD                                 */
/*                                                                  */
/* Change Activity:                                                 */
/*                                                                  */
/* CFD List:                                                        */
/*                                                                  */
/* FLAG REASON       LEVEL DATE   PGMR     CHANGE DESCRIPTION       */
/* ---- ------------ ----- ------ -------- -------------------------*/
/* $A0= D2862000     3D10  940317 TIRZAMAN:New Include              */
/* $A1=D98212.1  v5r1m0 991107 gchaney: Teraspace stage 2           */
/*                                                                  */
/* End CFD List.                                                    */
/*                                                                  */
/* Additional notes about the Change Activity                       */
/* End Change Activity                                              */
/*** END HEADER FILE SPECIFICATIONS *********************************/

#ifndef QUSLRCD_h
#define QUSLRCD_h

#if (__OS400_TGTVRM__>=510)                                   /*@A1A*/
    #pragma datamodel(P128)                                   /*@A1A*/
#endif                                                        /*@A1A*/

/********************************************************************/
/* Prototype for calling Message Handler API QUSLRCD                */
/********************************************************************/

#ifdef __ILEC400__
     #pragma linkage(QUSLRCD,OS,nowiden)
#else
     extern "OS"
#endif
void QUSLRCD ( void *,      /* user space and library name          */
               char *,      /* format name                          */
               void *,      /* database file name and library       */
               char *,      /* override processing                  */
               ...);        /* Optional Parameter:
                                 error code                         */

/********************************************************************/
/* Type Definition for the Input Parameter Section of the user      */
/* space in the QUSLRCD API.                                        */
/********************************************************************/
typedef _Packed struct Qdb_Lrcd_Input
   {
      char Userspace[10];
      char Userspace_Library[10];
      char Format_Name[8];
      char File_Name[10];
      char File_Library_Name[10];
      char Override;
   } Qdb_Lrcd_Input_t;

/********************************************************************/
/* Type Definition for the Header Section of the user space in the  */
/* QUSLRCD API.                                                     */
/********************************************************************/
typedef _Packed struct Qdb_Lrcd_Header
   {
      char   File_Name_Used[10];
      char   Library_Name[10];
      char   File_Type[10];
      char   File_Text_Description[50];
      int    File_Description_CCSID_H;
      char   File_Creation_Date[13];
   } Qdb_Lrcd_Header_t;

/********************************************************************/
/* Type Definition for the RCDL0100 format of the userspace in the  */
/* QUSLRCD API.                                                     */
/********************************************************************/
typedef _Packed struct Qdb_Lrcd_RCDL0100
   {
      char  Format_Name[10];
   } Qdb_Lrcd_RCDL0100_t;

/********************************************************************/
/* Type Definition for the RCDL0200 format of the userspace in the  */
/* QUSLRCD API.                                                     */
/********************************************************************/
typedef _Packed struct Qdb_Lrcd_RCDL0200
   {
      char   Format_Name[10];
      char   Format_Id[13];
      char   Reserved_1;
      int    Record_Length;
      int    Number_Fields;
      char   Record_Text_Description[50];
      char   Reserved_2[2];
      int    Record_Description_CCSID;
   } Qdb_Lrcd_RCDL0200_t;

/********************************************************************/
/* Type Definition for the RCDL0300 format of the userspace in the  */
/* QUSLRCD API.                                                     */
/********************************************************************/
typedef _Packed struct Qdb_Lrcd_RCDL0300
   {
      char   Format_Name[10];
      char   Lowest_Response_Ind[2];
      int    Buffer_Size;
      char   Record_Format_Type[20];
      char   Starting_Line_Number;
      char   Sep_Ind_Area_Present;
   } Qdb_Lrcd_RCDL0300_t;

#if (__OS400_TGTVRM__>=510)                                   /*@A1A*/
    #pragma datamodel(pop)                                    /*@A1A*/
#endif                                                        /*@A1A*/

#endif
