/*** START HEADER FILE SPECIFICATIONS ********************************/
/*                                                                   */
/* Header File Name: H/QEZCHBKS                                      */
/*                                                                   */
/* Descriptive Name: Change OA Backup Schedule API.                  */
/*                                                                   */
/* 5716-SS1,,5722-SS1  (C) Copyright IBM Corp. 1996,1996,2001        */
/* All rights reserved.                                              */
/* US Government Users Restricted Rights -                           */
/* Use, duplication or disclosure restricted                         */
/* by GSA ADP Schedule Contract with IBM Corp.                       */
/*                                                                   */
/* Licensed Materials-Property of IBM                                */
/*                                                                   */
/*                                                                   */
/* Description: The Change OA Backup Schedule API allows the user    */
/*              to change the Operational Assist backup schedule.    */
/*                                                                   */
/* Header Files Included: None.                                      */
/*                                                                   */
/* Macros List: None.                                                */
/*                                                                   */
/* Structure List: Qez_CBKS_0100_t                                   */
/*                                                                   */
/* Function Prototype List: QEZCHBKS.                                */
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

#ifndef QEZCHBKS_h
 #define QEZCHBKS_h

 #if (__OS400_TGTVRM__>=510)                                  /* @A1A*/
     #pragma datamodel(P128)                                  /* @A1A*/
 #endif                                                       /* @A1A*/

 /********************************************************************/
 /*  Prototype for QEZCHBKS API                                      */
 /********************************************************************/
 #ifdef __ILEC400__
    #pragma linkage (QEZCHBKS,OS,nowiden)
 #else
    extern "OS"
 #endif
 void QEZCHBKS (void *,           /* Input parm structure            */
                int,              /* Size of input parm structure    */
                char *,           /* Format Name                     */
                void *);          /* Error Code                      */

 /********************************************************************/
 /* Type Definition for the format.                                  */
 /********************************************************************/
 typedef _Packed struct Qez_CBKS_0100 {
      int    Hours_To_Send_Msg;
      int    Monthly_Occur;
      char   Backup_With_This_Scd[1];
      char   Sunday_Backup[1];
      char   Sunday_Time[6];
      char   Monday_Backup[1];
      char   Monday_Time[6];
      char   Tuesday_Backup[1];
      char   Tuesday_Time[6];
      char   Wednesday_Backup[1];
      char   Wednesday_Time[6];
      char   Thursday_Backup[1];
      char   Thursday_Time[6];
      char   Friday_Backup[1];
      char   Friday_Time[6];
      char   Saturday_Backup[1];
      char   Saturday_Time[6];
 } Qez_CBKS_0100_t;

 #if (__OS400_TGTVRM__>=510)                                  /* @A1A*/
     #pragma datamodel(pop)                                   /* @A1A*/
 #endif                                                       /* @A1A*/

#endif
