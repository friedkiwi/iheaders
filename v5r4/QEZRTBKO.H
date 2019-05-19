/*** START HEADER FILE SPECIFICATIONS ********************************/
/*                                                                   */
/* Header File Name: H/QEZRTBKO                                      */
/*                                                                   */
/* Descriptive Name: Retrieve OA Backup Options API.                 */
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
/* Description: The Retrieve OA Backup Options API retrieves the     */
/*              information about the backup options as defined      */
/*              through Operational Assist.                          */
/*                                                                   */
/* Header Files Included: None.                                      */
/*                                                                   */
/* Macros List: None.                                                */
/*                                                                   */
/* Structure List: Qez_RBKO_0100_t                                   */
/*                                                                   */
/* Function Prototype List: QEZRTBKO.                                */
/*                                                                   */
/* Change Activity:                                                  */
/*                                                                   */
/* CFD List:                                                         */
/*                                                                   */
/* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION       */
/* ---- ------------ ----- ------ --------- ------------------------ */
/* $A0= D9453100     3D70  960304 ROCH:     New Include              */
/* $A1= D98212.2    v5r1m0 010300 gchaney: Teraspace stage 2         */
/*                                                                   */
/* End CFD List.                                                     */
/*                                                                   */
/*  Additional notes about the Change Activity                       */
/* End Change Activity.                                              */
/*** END HEADER FILE SPECIFICATIONS **********************************/

#ifndef QEZRTBKO_h
 #define QEZRTBKO_h

 #if (__OS400_TGTVRM__>=510)                                  /* @A1A*/
     #pragma datamodel(P128)                                  /* @A1A*/
 #endif                                                       /* @A1A*/


 /********************************************************************/
 /*  Prototype for QEZRTBKO API                                      */
 /********************************************************************/
 #ifdef __ILEC400__
    #pragma linkage (QEZRTBKO,OS,nowiden)
 #else
    extern "OS"
 #endif
 void QEZRTBKO (void *,           /* Receiver Variable               */
                int,              /* Length of Reciever Variable     */
                char *,           /* Format Name                     */
                char *,           /* Backup option                   */
                void *);          /* Error Code                      */

 /********************************************************************/
 /* Type Definition for the format.                                  */
 /********************************************************************/
 typedef _Packed struct Qez_RBOH_0100 {
      int    Bytes_Returned;
      int    Bytes_Available;
      int    Offset_Daily;
      int    Offset_Weekly;
      int    Offset_Monthly;
 } Qez_RBOH_0100_t;

 typedef _Packed struct Qez_RBKO_0100 {
      int    Offset_Backup_Devices;
      int    Number_Backup_Devices;
      int    Offset_Tape_Sets;
      int    Number_Tape_Sets;
      char   Last_Set_Used[4];
      char   Next_Set[4];
      char   Erase_Tape[1];
      char   Backup_User_Libs[1];
      char   Backup_Folders[1];
      char   Backup_User_Dirs[1];
      char   Backup_Security_Data[1];
      char   Backup_Config_Data[1];
      char   Backup_OV_Mail[1];
      char   Backup_OV_Cals[1];
      char   Submit_To_Batch[1];
      char   Changed_Objs_Only[1];
      char   Print_Report[1];
      char   User_Exit_Name[10];
      char   User_Exit_Lib[10];
      char   reservedRBKO100[1];
      int    Offset_AddInfo;
  /*  char   Backup_Devs;   */
  /*  char   Tape_Sets;     */
 } Qez_RBKO_0100_t;

 typedef _Packed struct Qez_RBKO_0200 {
      int    Offset_Backup_Devices;
      int    Number_Backup_Devices;
      int    Offset_Tape_Sets;
      int    Number_Tape_Sets;
      char   Last_Set_Used[4];
      char   Next_Set[4];
      char   Erase_Tape[1];
      char   Backup_User_Libs[1];
      char   Backup_Folders[1];
      char   Backup_User_Dirs[1];
      char   Backup_Security_Data[1];
      char   Backup_Config_Data[1];
      char   Backup_OV_Mail[1];
      char   Backup_OV_Cals[1];
      char   Submit_To_Batch[1];
      char   Changed_Objs_Only[1];
      char   Print_Report[1];
      char   User_Exit_Name[10];
      char   User_Exit_Lib[10];
      char   Rrvd2[1];
      int    Offset_AddInfo;
  /*  char   Backup_Devs;   */
  /*  char   Tape_Sets;     */
  /*  char   Last_Backup_Date[7]; */
  /*  char   Last_Backup_Time[6]; */
  /*  char   Next_Backup_Date[7]; */
  /*  char   Next_Backup_Time[6]; */
 } Qez_RBKO_0200_t;

 #if (__OS400_TGTVRM__>=510)                                  /* @A1A*/
     #pragma datamodel(pop)                                   /* @A1A*/
 #endif                                                       /* @A1A*/

#endif
