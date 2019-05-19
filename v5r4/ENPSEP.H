/*** START HEADER FILE SPECIFICATIONS ********************************/
/*                                                                   */
/* Header File Name       :  H/ENPSEP                                */
/*                                                                   */
/* Descriptive Name       :  Network Print Server Exit Program       */
/*                           structures                              */
/*                                                                   */
/* 5763-SS1,5722-SS1  (C) Copyright IBM Corp. 1994,2001              */
/* All rights reserved.                                              */
/* US Government Users Restricted Rights -                           */
/* Use, duplication or disclosure restricted                         */
/* by GSA ADP Schedule Contract with IBM Corp.                       */
/*                                                                   */
/* Licensed Materials-Property of IBM                                */
/*                                                                   */
/* Description: This include defines the parameter structures for    */
/*              the two exit points defined for the Network Print    */
/*              Server.                                              */
/*                                                                   */
/*               1) QIBM_QNPS_ENTRY format ENTR0100                  */
/*                    Called when a conversation is allocated for    */
/*                    the Network Print Server                       */
/*                                                                   */
/*               2) QIBM_QNPS_SPLF format SPLF0100                   */
/*                    Called for a specified spooled file            */
/*                                                                   */
/* Header Files Included: None.                                      */
/*                                                                   */
/* Macros List: None.                                                */
/*                                                                   */
/* Structure List:                                                   */
/*                 Qnps_Server_Info_t                                */
/*                 Qnps_Exit_Pgm_RC_t                                */
/*                 Qnps_Splf_ID_t                                    */
/*                 Qnps_Exit_Pgm_Data_t                              */
/*                                                                   */
/* Function Prototype List: None.                                    */
/*                                                                   */
/* Change Activity:                                                  */
/*                                                                   */
/* CFD List:                                                         */
/*                                                                   */
/* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION       */
/* ---- ------------ ----- ------ --------- ----------------------   */
/* $A0= P3981775     3D60  950208 SUTTER:   New Include              */
/* $R5= P3990459     3D60  950535 RAS:      Add Exit Point Name Defns*/
/* $A1= D98212.1     5D10  991107 SPM:      Teraspace stage 2        */
/* $A2= D97260       5D20  010723 SPM:      Decouple spooled files   */
/*                                                                   */
/* End CFD List.                                                     */
/*                                                                   */
/*  Additional notes about the Change Activity                       */
/* End Change Activity.                                              */
/*** END HEADER FILE SPECIFICATIONS **********************************/

#ifndef ENPSEP_h
#define ENPSEP_h

#if (__OS400_TGTVRM__>=510)                                    /*@A1A*/
     #pragma datamodel(P128)                                   /*@A1A*/
#endif                                                         /*@A1A*/

 /* Server ID constants */

#define QNPS_NETWORK_PRINT_SERVER_ID "QNPSERVR  " /* Network Prt ID */

 /* Format name constants */

#define QNPS_ENTRY_FORMAT  "ENTR0100"    /* Entry exit point        */
#define QNPS_SPLF_FORMAT   "SPLF0100"    /* Spooled file exit point */

 /* Exit Point names       */
#define QNPS_QIBM_QNPS_ENTRY "QIBM_QNPS_ENTRY     "
#define QNPS_QIBM_QNPS_SPLF  "QIBM_QNPS_SPLF      "

 /* Function ID constants */

#define QNPS_ENTRY_FUNCTION 0x0802       /* Entry function ID       */
#define QNPS_SPLF_FUNCTION  0x010D       /* Spooled file function ID*/

 /********************************************************************/
 /*  Typedef for Entry exit point format and                         */
 /*  Typedef for Spooled File exit point format                      */
 /********************************************************************/

 typedef _Packed struct Qnps_Server_Info {
       char  User_Profile[10];         /* User profile name          */
       char  Server_ID[10];            /* Server identifier          */
       char  Format_Name[8];           /* User exit format name      */
       int   Function_ID;              /* Requested function id      */
 } Qnps_Server_Info_t;

 /********************************************************************/
 /*  Typedef for Spooled File return code format                     */
 /*  Common to all NPS Exit Points                                   */
 /********************************************************************/

 typedef _Packed struct Qnps_Exit_Pgm_RC {
       char   Value;
 } Qnps_Exit_Pgm_RC_t;

 /********************************************************************/
 /*  Typedef for Spooled File ID                                     */
 /*  Specific to QIBM_QNPS_SPLF                                      */
 /********************************************************************/

 typedef _Packed struct Qnps_Splf_ID {           /* Spooled File ID  */
       char   Job_Name [10];
       char   User_Name [10];
       char   Job_Number [6];
       char   Splf_Name [10];
       int    Splf_Number;
       char   Job_Sys_Name[8]; /* opt fields for splf decoupling @A2*/
       char   Crt_Date[7];                                     /*@A2*/
       char   Crt_Time[6];                                     /*@A2*/
 } Qnps_Splf_ID_t;

 /********************************************************************/
 /*  Typedef for Exit Program Data                                   */
 /*  Specific to QIBM_QNPS_SPLF                                      */
 /********************************************************************/

 typedef _Packed struct Qnps_Exit_Pgm_Data {
       int    Len;
       char   Data[1];     /* Data[1] is intended to be a variable   */
                           /* length array, however, it can not be   */
                           /* easily defined to faciliate variable   */
 } Qnps_Exit_Pgm_Data_t;   /* length via a C language struct.        */

#if (__OS400_TGTVRM__>=510)                                    /*@A1A*/
     #pragma datamodel(pop)                                    /*@A1A*/
#endif                                                         /*@A1A*/

#endif
