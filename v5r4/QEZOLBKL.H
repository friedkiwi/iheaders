/*** START HEADER FILE SPECIFICATIONS ********************************/
/*                                                                   */
/* Header File Name: H/QEZOLBKL                                      */
/*                                                                   */
/* Descriptive Name: Retrieve Backup List API                        */
/*                                                                   */
/* 5716-SS1,5722-SS1  (C) Copyright IBM Corp. 1996,1996,2001         */
/* All rights reserved.                                              */
/* US Government Users Restricted Rights -                           */
/* Use, duplication or disclosure restricted                         */
/* by GSA ADP Schedule Contract with IBM Corp.                       */
/*                                                                   */
/* Licensed Materials-Property of IBM                                */
/*                                                                   */
/*                                                                   */
/* Description: The Retrieve Backup List API retrieves a list of     */
/*              libraries or folders that are to be backed up through*/
/*              Operational Assist backup function.                  */
/*                                                                   */
/* Header Files Included: None.                                      */
/*                                                                   */
/* Macros List: None.                                                */
/*                                                                   */
/* Structure List: Qez_OBKL_0100_t                                   */
/*                 Qez_OBKL_0200_t                                   */
/*                 Qez_OBKL_0600_t                                   */
/*                                                                   */
/* Function Prototype List: QEZOLBKL.                                */
/*                                                                   */
/* Change Activity:                                                  */
/*                                                                   */
/* CFD List:                                                         */
/*                                                                   */
/* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION       */
/* ---- ------------ ----- ------ --------- ------------------------ */
/* $A0= D9453100     3D70  960401 ROCH:     New Include              */
/* $A1= D98212.2    v5r1m0 010300 gchaney: Teraspace stage 2         */
/*                                                                   */
/* End CFD List.                                                     */
/*                                                                   */
/*  Additional notes about the Change Activity                       */
/* End Change Activity.                                              */
/*** END HEADER FILE SPECIFICATIONS **********************************/

#ifndef QEZOLBKL_h
 #define QEZOLBKL_h

 #if (__OS400_TGTVRM__>=510)                                  /* @A1A*/
     #pragma datamodel(P128)                                  /* @A1A*/
 #endif                                                       /* @A1A*/

 /********************************************************************/
 /*  Prototype for QEZOLBKL API                                      */
 /********************************************************************/
 #ifdef __ILEC400__
    #pragma linkage (QEZOLBKL,OS,nowiden)
 #else
    extern "OS"
 #endif
 void QEZOLBKL (void *,           /* Receiver variable               */
                int,              /* Length of receiver variable     */
                void *,           /* List information structure      */
                int,              /* Number of entries to return     */
                char *,           /* Format name                     */
                char *,           /* List type                       */
                char *,           /* Type of backup to select        */
                void *);          /* Error Code                      */

 /********************************************************************/
 /* Type Definition for the formats.                                 */
 /********************************************************************/
 typedef _Packed struct Qez_OBKL_0100 {
      char   Backup_Option[10];
      char   Library_Name[10];
      char   Reserved100[2];
 } Qez_OBKL_0100_t;

 typedef _Packed struct Qez_OBKL_0200 {
      char   Backup_Option[10];
      char   Folder_Name[12];
 } Qez_OBKL_0200_t;

 typedef _Packed struct Qez_OBKL_0600 {
   /* Qez_OBKL_0100 Format_100_Info;              */
   /*               OR                            */
   /* Qez_OBKL_0200 Format_200_Info;              */
      char   Last_Backup_Date[7];
      char   Last_Backup_Time[6];
      char   Obj_Desc[50];
      char   Changed[1];
      char   Reserved600[21];
 } Qez_OBKL_0600_t;

 typedef _Packed struct Qez_List_Info {
      int    Total_Records;
      int    Records_Returned;
      char   Request_Handle[4];
      int    Record_Length;
      char   Info_Complete[1];
      char   Date_Time_Created[13];
      char   List_Status[1];
      char   Reserved[1];
      int    Length;
      int    First_Record;
      int    Authority_Reason_Code;
      char   Reserved2[36];
 } Qez_List_Info_t;

 #if (__OS400_TGTVRM__>=510)                                  /* @A1A*/
     #pragma datamodel(pop)                                   /* @A1A*/
 #endif                                                       /* @A1A*/

#endif
