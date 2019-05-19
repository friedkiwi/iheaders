/* begin_generated_IBM_copyright_prolog                              */
/* This is an automatically generated copyright prolog.              */
/* After initializing,  DO NOT MODIFY OR MOVE                        */
/* ----------------------------------------------------------------- */
/*                                                                   */
/* Product(s):                                                       */
/*     5769-SS1                                                      */
/*     5722-SS1                                                      */
/*                                                                   */
/* (C)Copyright IBM Corp.  1997, 2005                                */
/*                                                                   */
/* All rights reserved.                                              */
/* US Government Users Restricted Rights -                           */
/* Use, duplication or disclosure restricted                         */
/* by GSA ADP Schedule Contract with IBM Corp.                       */
/*                                                                   */
/* Licensed Materials-Property of IBM                                */
/*                                                                   */
/*  ---------------------------------------------------------------  */
/*                                                                   */
/* end_generated_IBM_copyright_prolog                                */
 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QWCRIPLA                                   */
 /*                                                                */
 /* Descriptive Name: Retrieve IPL Attributes API                  */
 /*                                                                */
 /*                                                                */
 /* Description: The Retrieve IPL Attributes API retrieves the     */
 /*              IPL attributes and places them into a single      */
 /*              variable in the calling program.                  */
 /*                                                                */
 /* Header Files Included: None.                                   */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List:  Qwc_IPLA0100_t                                */
 /*                                                                */
 /* Function Prototype List: QWCRIPLA                              */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR  CHANGE DESCRIPTION        */
 /* ---- ----------- ------ ------ ----  ------------------------- */
 /* $A0= D9491600     4D20  970423 ROCH: New Include               */
 /* $A1= D95920       4D40  980522 ROCH: Add display status        */
 /* $A2= D97932      v5r1m0 000411 ROCH: Add start TCP/IP          */
 /* $A3= D93314      v5r4m0 050404 ROCH: Add Spooled file recovery */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

 #ifndef QWCRIPLA_h
 #define QWCRIPLA_h
#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(P128)      /* @B1A*/
#endif                       /* @B1A*/

 /******************************************************************/
 /*  Prototype for QWCRIPLA API                                    */
 /******************************************************************/
 #ifdef  __ILEC400__
       #pragma linkage(QWCRIPLA,OS,nowiden)
 #else
       extern "OS"
 #endif
 void QWCRIPLA(void *,           /* Receiver variable              */
               int,              /* Length of receiver variable    */
               char *,           /* Format name                    */
               void *);          /* Error code                     */

 /******************************************************************/
 /* Type Definition for the IPLA0100 format.                       */
 /******************************************************************/
 typedef _Packed struct Qwc_IPLA0100
    {
       int  Bytes_Returned;
       int  Bytes_Available;
       char Restart_Type;
       char Keylock_Position;
       char Hardware_Diagnostics;
       char Compress_Job_Tables;
       char Check_Job_Tables;
       char Rebuild_Product_Directory;
       char Mail_Server_Framework_Recovery;
       char Clear_Job_Queues;
       char Clear_Output_Queues;
       char Clear_Incomplete_Joblogs;
       char Start_Print_Writers;
       char Start_To_Restricted_State;
       char Display_Status;
       char Start_TCP;
       char Spooled_File_Recovery;
    } Qwc_IPLA0100_t;

#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(pop)       /* @B1A*/
#endif                       /* @B1A*/
 #endif
