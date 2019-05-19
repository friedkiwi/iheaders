/*** START HEADER FILE SPECIFICATIONS ********************************/
/*                                                                   */
/* Header File Name: H/QEZRTBKS                                      */
/*                                                                   */
/* Descriptive Name: Retrieve OA Backup Schedule API.                */
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
/* Description: The Retrieve OA Backup Schedule API retrieves the    */
/*              information about the backup schedule as scheduled   */
/*              through Operational Assist.                          */
/*                                                                   */
/* Header Files Included: None.                                      */
/*                                                                   */
/* Macros List: None.                                                */
/*                                                                   */
/* Structure List: Qez_RBKS_0100_t                                   */
/*                                                                   */
/* Function Prototype List: QEZRTBKS.                                */
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

#ifndef QEZRTBKS_h
 #define QEZRTBKS_h

 #if (__OS400_TGTVRM__>=510)                                  /* @A1A*/
     #pragma datamodel(P128)                                  /* @A1A*/
 #endif                                                       /* @A1A*/

 /********************************************************************/
 /*  Prototype for QEZRTBKS API                                      */
 /********************************************************************/
 #ifdef __ILEC400__
    #pragma linkage (QEZRTBKS,OS,nowiden)
 #else
    extern "OS"
 #endif
 void QEZRTBKS (void *,           /* Receiver Variable               */
                int,              /* Length of Reciever Variable     */
                char *,           /* Format Name                     */
                void *);          /* Error Code                      */

 /********************************************************************/
 /* Type Definition for the format.                                  */
 /********************************************************************/
 typedef _Packed struct Qez_RBKS_0100 {
      int    Bytes_Returned;
      int    Bytes_Available;
      int    Tape_Msg_Hours_Before_Backup;
      int    Monthly_Backup_Run_Occurrence;
      char   Use_This_Schedule[1];
      char   Sunday_Backup[1];
      char   Sunday_BackupTime[6];
      char   Monday_Backup[1];
      char   Monday_BackupTime[6];
      char   Tuesday_Backup[1];
      char   Tuesday_BackupTime[6];
      char   Wednesday_Backup[1];
      char   Wednesday_BackupTime[6];
      char   Thursday_Backup[1];
      char   Thursday_BackupTime[6];
      char   Friday_Backup[1];
      char   Friday_BackupTime[6];
      char   Saturday_Backup[1];
      char   Saturday_BackupTime[6];
 } Qez_RBKS_0100_t;

 #if (__OS400_TGTVRM__>=510)                                  /* @A1A*/
     #pragma datamodel(pop)                                   /* @A1A*/
 #endif                                                       /* @A1A*/

#endif
