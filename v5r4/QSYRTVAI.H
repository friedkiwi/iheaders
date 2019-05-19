/* begin_generated_IBM_copyright_prolog                              */
/* This is an automatically generated copyright prolog.              */
/* After initializing,  DO NOT MODIFY OR MOVE                        */
/* ----------------------------------------------------------------- */
/*                                                                   */
/* Product(s):                                                       */
/*     5722-SS1                                                      */
/*                                                                   */
/* (C)Copyright IBM Corp.  2005, 2005                                */
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
 /* Header File Name: H/QSYRTVAI                                   */
 /*                                                                */
 /* Descriptive Name: List Objects Secured by Authorization List.  */
 /*                                                                */
 /* 5722-SS1  (C) Copyright IBM Corp. 2005, 2005                   */
 /* All rights reserved.                                           */
 /* US Government Users Restricted Rights -                        */
 /* Use, duplication or disclosure restricted                      */
 /* by GSA ADP Schedule Contract with IBM Corp.                    */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /*                                                                */
 /* Description: The Retrieve Authorization List Information       */
 /*              API returns authorization list entry usage        */
 /*              information into a receiver variable.             */
 /*                                                                */
 /* Header Files Included: None                                    */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: Qsy_RTAI0100_Info_T                            */
 /*                 Qsy_RTVAI_Header_T                             */
 /*                 Qsy_RTVAI_ASPset_T                             */
 /*                                                                */
 /* Function Prototype List: QSYRTVAI                              */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON      LEVEL  DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ----------- -----  ------ --------- ----------------------*/
 /* $A0= D9332300    v5r4m0 050510 ROCH:     New Include.          */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

 #ifndef QSYRTVAI_h
 #define QSYRTVAI_h

#if (__OS400_TGTVRM__>=510)
#pragma datamodel(P128)
#endif

 /******************************************************************/
 /* Prototype for calling Security API QSYRTVAI                    */
 /******************************************************************/
  #ifdef __ILEC400__
       #pragma linkage (QSYRTVAI,OS,nowiden)
  #else
       extern "OS"
  #endif
 void QSYRTVAI (void *,          /* Receiver variable              */
                int *,           /* Receiver variable length       */
                char *,          /* Format name                    */
                char *,          /* Authorization list name        */
                void *);         /* Error code                     */

 /******************************************************************/
 /* Header structure for QSYRTVAI                                  */
 /******************************************************************/
 typedef _Packed struct Qsy_RTVAI_Header
    {
       int  Bytes_Returned;
       int  Bytes_Available;
       long long  Total_Count;
       int  Offset_To_ASPsets;
       int  ASPset_Count;
       int  Length_Of_ASPset;
    } Qsy_RTVAI_Header_T;

 /******************************************************************/
 /* ASP information set structure for QSYRTVAI                     */
 /******************************************************************/
 typedef _Packed struct Qsy_RTVAI_ASPset
    {
       char  ASP_Name[10];
       char  Extension_Flag;
       char  Reserved;
       int   Entries_Used;
       int   Entries_Avail;
    } Qsy_RTVAI_ASPset_T;

 /******************************************************************/
 /* Receiver variable structure for RTAI0100 format                */
 /******************************************************************/
 typedef _Packed struct Qsy_RTAI0100_Info
    {
       Qsy_RTVAI_Header_T  Header;
     /*Qsy_RTVAI_ASPset_T  ASP_Set[1];*/ /* varying length         */
    } Qsy_RTAI0100_Info_T;

#if (__OS400_TGTVRM__>=510)
#pragma datamodel(pop)
#endif
 #endif
