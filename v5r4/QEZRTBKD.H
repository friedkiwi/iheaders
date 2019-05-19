/*** START HEADER FILE SPECIFICATIONS ********************************/
/*                                                                   */
/* Header File Name: H/QEZRTBKD                                      */
/*                                                                   */
/* Descriptive Name: Retrieve OA Backup Object Details API           */
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
/* Description: The Retrieve OA Backup Object Details API retrieves  */
/*              detailed information on when the last backup of a    */
/*              particular library/folder/IFS directory was done.    */
/*                                                                   */
/* Header Files Included: None.                                      */
/*                                                                   */
/* Macros List: None.                                                */
/*                                                                   */
/* Structure List: Qez_RBKD_0100_t                                   */
/*                                                                   */
/* Function Prototype List: QEZRTBKD.                                */
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

#ifndef QEZRTBKD_h
 #define QEZRTBKD_h

 #if (__OS400_TGTVRM__>=510)                                  /* @A1A*/
     #pragma datamodel(P128)                                  /* @A1A*/
 #endif                                                       /* @A1A*/

 /********************************************************************/
 /*  Prototype for QEZRTBKS API                                      */
 /********************************************************************/
 #ifdef __ILEC400__
    #pragma linkage (QEZRTBKD,OS,nowiden)
 #else
    extern "OS"
 #endif
 void QEZRTBKD (void *,           /* Receiver variable               */
                int,              /* Length of receiver variable     */
                char *,           /* Object name                     */
                int,              /* Object name length              */
                char *,           /* Format name                     */
                char *,           /* Object type                     */
                void *);          /* Error Code                      */

 /********************************************************************/
 /* Type Definition for the format.                                  */
 /********************************************************************/
 typedef _Packed struct Qez_RBKD_0100 {
      int    Bytes_Available;
      int    Bytes_Returned;
      char   Last_Saved_Date[7];
      char   Last_Saved_Time[6];
      char   Object_Desc[50];
      char   Chgd_Since_Backup[1];
 } Qez_RBKD_0100_t;

 #if (__OS400_TGTVRM__>=510)                                  /* @A1A*/
     #pragma datamodel(pop)                                   /* @A1A*/
 #endif                                                       /* @A1A*/

#endif
