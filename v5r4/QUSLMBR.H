/*** START HEADER FILE SPECIFICATIONS *******************************/
/*                                                                  */
/* Header File Name: H/QUSLMBR                                      */
/*                                                                  */
/* Descriptive Name: List Database File Members                     */
/*                                                                  */
/* 5716-SS1  (C) Copyright IBM Corp. 1994,1996                      */
/* All rights reserved.                                             */
/* US Government Users Restricted Rights -                          */
/* Use, duplication or disclosure restricted                        */
/* by GSA ADP Schedule Contract with IBM Corp.                      */
/*                                                                  */
/* Licenced Materials-Property of IBM                               */
/*                                                                  */
/* Description: The List Database File Members API generates a list */
/*              of database file members and places the list in a   */
/*              specified user space.                               */
/*                                                                  */
/* Header Files Included: None.                                     */
/*                                                                  */
/* Macros List: None.                                               */
/*                                                                  */
/* Structure List: Qdb_Ldbm_Input_t                                 */
/*                 Qdb_Ldbm_Header_t                                */
/*                 Qdb_Ldbm_MBRL0100_t                              */
/*                 Qdb_Ldbm_MBRL0200_t                              */
/*                 Qdb_Ldbm_MBRL0300_t                              */
/*                                                                  */
/* Function Prototype List: QUSLMBR                                 */
/*                                                                  */
/* Change Activity:                                                 */
/*                                                                  */
/* CFD List:                                                        */
/*                                                                  */
/* FLAG REASON       LEVEL DATE   PGMR     CHANGE DESCRIPTION       */
/* ---- ------------ ----- ------ -------- -------------------------*/
/* $A0= D2862000     3D10  940316 TIRZAMAN:New Include              */
/* $01= P3611191     3D70  960317 45HKRS:  Add MBRL0300             */
/* $02=D98212.1  v5r1m0 991107 gchaney: Teraspace stage 2           */
/*                                                                  */
/* End CFD List.                                                    */
/*                                                                  */
/* Additional notes about the Change Activity                       */
/* End Change Activity                                              */
/*** END HEADER FILE SPECIFICATIONS *********************************/

#ifndef QUSLMBR_h
#define QUSLMBR_h

#if (__OS400_TGTVRM__>=510)                                  /*@02A*/
    #pragma datamodel(P128)                                  /*@02A*/
#endif                                                       /*@02A*/

/********************************************************************/
/* Prototype for calling Message Handler API QUSLMBR                */
/********************************************************************/

#ifdef __ILEC400__
     #pragma linkage(QUSLMBR,OS,nowiden)
#else
     extern "OS"
#endif
void QUSLMBR ( void *,      /* user space and library name          */
               char *,      /* format name                          */
               void *,      /* database file name and library       */
               char *,      /* member name                          */
               char *,      /* override processing                  */
               ...);        /* Optional Parameter:
                                 Error code                         */

/********************************************************************/
/* Type Definition for the Input Parameter Section of the user      */
/* space in the QUSLMBR API.                                        */
/********************************************************************/
typedef _Packed struct Qdb_Ldbm_Input
   {
      char Userspace[10];
      char Userspace_Library[10];
      char Format_Name[8];
      char File_Name[10];
      char File_Library_Name[10];
      char Member_Name[10];
      char Override;
   } Qdb_Ldbm_Input_t;

/********************************************************************/
/* Type Definition for the Header Section of the user space in the  */
/* QUSLMBR API.                                                     */
/********************************************************************/
typedef _Packed struct Qdb_Ldbm_Header
   {
      char   File_Name_Used[10];
      char   Library_Name[10];
      char   File_Attribute[10];
      char   File_Text_Description[50];
      int    Total_Members;
      char   Source_File;
      char   Reserved[3];
      int    File_Description_CCSID;
   } Qdb_Ldbm_Header_t;

/********************************************************************/
/* Type Definition for the MBRL0100 format of the userspace in the  */
/* QUSLMBR API.                                                     */
/********************************************************************/
typedef _Packed struct Qdb_Ldbm_MBRL0100
   {
      char  Member_Name[10];
   } Qdb_Ldbm_MBRL0100_t;

/********************************************************************/
/* Type Definition for the MBRL0200 format of the userspace in the  */
/* QUSLBMR API.                                                     */
/********************************************************************/
typedef _Packed struct Qdb_Ldbm_MBRL0200
   {
      char   Member_Name[10];
      char   Source_Type[10];
      char   Creation_Date_Time[13];
      char   Last_Source_Date_Time[13];
      char   Member_Description[50];
      int    Member_Description_CCSID;
   } Qdb_Ldbm_MBRL0200_t;

/********************************************************************/
/* Type Definition for the MBRL0300 format of the userspace in the  */
/* QUSLMBR API.  This format is returned by the API if either       */
/* MBRL0310, MBRL0320, or MBRL0330 is specified as the format       */
/* name parameter.                                                  */
/********************************************************************/
typedef _Packed struct Qdb_Ldbm_MBRL0300
   {
      char   Member_Name[10];
      char   Reserved_1[2];
      int    Offset_Mbrd;
      char   Reserved_2[16];
   } Qdb_Ldbm_MBRL0300_t;

#if (__OS400_TGTVRM__>=510)                                   /*@02A*/
    #pragma datamodel(pop)                                    /*@02A*/
#endif                                                        /*@02A*/

#endif
