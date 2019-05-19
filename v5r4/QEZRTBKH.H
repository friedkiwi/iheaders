/*** START HEADER FILE SPECIFICATIONS ********************************/
/*                                                                   */
/* Header File Name: H/QEZRTBKH                                      */
/*                                                                   */
/* Descriptive Name: Retrieve OA Backup History API.                 */
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
/* Description: The Retrieve OA Backup History API retrieves the     */
/*              information about the past backups that were         */
/*              performed through Operational Assist.                */
/*                                                                   */
/* Header Files Included: None.                                      */
/*                                                                   */
/* Macros List: None.                                                */
/*                                                                   */
/* Structure List: Qez_RBKH_0100_t                                   */
/*                 Qez_RBKH_0200_t                                   */
/*                                                                   */
/* Function Prototype List: QEZRTBKH.                                */
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

#ifndef QEZRTBKH_h
 #define QEZRTBKH_h

 #if (__OS400_TGTVRM__>=510)                                  /* @A1A*/
     #pragma datamodel(P128)                                  /* @A1A*/
 #endif                                                       /* @A1A*/

 /********************************************************************/
 /*  Prototype for QEZRTBKH API                                      */
 /********************************************************************/
 #ifdef __ILEC400__
    #pragma linkage (QEZRTBKH,OS,nowiden)
 #else
    extern "OS"
 #endif
 void QEZRTBKH (void *,           /* Receiver Variable               */
                int,              /* Length of Receiver Variable     */
                char *,           /* Format Name                     */
                void *);          /* Error Code                      */

 /********************************************************************/
 /* Type Definition for the format.                                  */
 /********************************************************************/
 typedef _Packed struct Qez_RBKH_0100 {
      int    Bytes_Returned;
      int    Bytes_Available;
      char   All_User_Libs_Backup_Date[7];
      char   All_User_Libs_Backup_Time[6];
      char   All_User_Libs_Tape_Set[4];
      char   Chgd_User_Libs_Backup_Date[7];
      char   Chgd_User_Libs_Backup_Time[6];
      char   Chgd_User_Libs_Tape_Set[4];
      char   List_User_Libs_Backup_Date[7];
      char   List_User_Libs_Backup_Time[6];
      char   List_User_Libs_Tape_Set[4];
      char   List_Chgd_Libs_Backup_Date[7];
      char   List_Chgd_Libs_Backup_Time[6];
      char   List_Chgd_Libs_Tape_Set[4];
      char   All_Folders_Backup_Date[7];
      char   All_Folders_Backup_Time[6];
      char   All_Folders_Tape_Set[4];
      char   Chgd_Folders_Backup_Date[7];
      char   Chgd_Folders_Backup_Time[6];
      char   Chgd_Folders_Tape_Set[4];
      char   List_Folders_Backup_Date[7];
      char   List_Folders_Backup_Time[6];
      char   List_Folders_Tape_Set[4];
      char   Security_Backup_Date[7];
      char   Security_Backup_Time[6];
      char   Security_Tape_Set[4];
      char   Config_Backup_Date[7];
      char   Config_Backup_Time[6];
      char   Config_Tape_Set[4];
      char   Cals_Backup_Date[7];
      char   Cals_Backup_Time[6];
      char   Cals_Tape_Set[4];
      char   Mail_Backup_Date[7];
      char   Mail_Backup_Time[6];
      char   Mail_Tape_Set[4];
      char   Dirs_Backup_Date[7];
      char   Dirs_Backup_Time[6];
      char   Dirs_Tape_Set[4];
      char   Chgd_Dirs_Backup_Date[7];
      char   Chgd_Dirs_Backup_Time[6];
      char   Chgd_Dirs_Tape_Set[4];
      char   reserved[21];
 } Qez_RBKH_0100_t;

 typedef _Packed struct Qez_RBKH_0200 {
      int    Bytes_Returned;
      int    Bytes_Available;
      char   All_User_Libs_Backup_Date[7];
      char   All_User_Libs_Backup_Time[6];
      char   All_User_Libs_Tape_Set[4];
      char   Chgd_User_Libs_Backup_Date[7];
      char   Chgd_User_Libs_Backup_Time[6];
      char   Chgd_User_Libs_Tape_Set[4];
      char   List_User_Libs_Backup_Date[7];
      char   List_User_Libs_Backup_Time[6];
      char   List_User_Libs_Tape_Set[4];
      char   List_Chgd_Libs_Backup_Date[7];
      char   List_Chgd_Libs_Backup_Time[6];
      char   List_Chgd_Libs_Tape_Set[4];
      char   All_Folders_Backup_Date[7];
      char   All_Folders_Backup_Time[6];
      char   All_Folders_Tape_Set[4];
      char   Chgd_Folders_Backup_Date[7];
      char   Chgd_Folders_Backup_Time[6];
      char   Chgd_Folders_Tape_Set[4];
      char   List_Folders_Backup_Date[7];
      char   List_Folders_Backup_Time[6];
      char   List_Folders_Tape_Set[4];
      char   Security_Backup_Date[7];
      char   Security_Backup_Time[6];
      char   Security_Tape_Set[4];
      char   Config_Backup_Date[7];
      char   Config_Backup_Time[6];
      char   Config_Tape_Set[4];
      char   Cals_Backup_Date[7];
      char   Cals_Backup_Time[6];
      char   Cals_Tape_Set[4];
      char   Mail_Backup_Date[7];
      char   Mail_Backup_Time[6];
      char   Mail_Tape_Set[4];
      char   All_Dirs_Backup_Date[7];
      char   All_Dirs_Backup_Time[6];
      char   All_Dirs_Tape_Set[4];
      char   Chgd_Dirs_Backup_Date[7];
      char   Chgd_Dirs_Backup_Time[6];
      char   Chgd_Dirs_Tape_Set[4];
      char   reserved[21];
      int    Number_Backup_Entries;
      int    Length_Backup_Entry;
   /* Qez_List_Backup_Entries Backup_Ents;*/      /* Varying length */
 } Qez_RBKH_0200_t;

 typedef _Packed struct Qez_List_Backup_Entries
    {
     char Backup_Date[7];
     char Backup_Time[6];
     char Backup_Options[10];
     char Tape_Set[4];
     char Changes_Only[1];
     char User_Libs_Saved[1];
     char Folders_Saved[1];
     char User_Dirs_Saved[1];
     char Security_Saved[1];
     char Configuration_Saved[1];
     char Calendars_Saved[1];
     char Mail_Saved[1];
    } Qez_List_Backup_Entries_t;

 #if (__OS400_TGTVRM__>=510)                                  /* @A1A*/
     #pragma datamodel(pop)                                   /* @A1A*/
 #endif                                                       /* @A1A*/

#endif
