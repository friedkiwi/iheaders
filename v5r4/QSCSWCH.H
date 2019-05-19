/* begin_generated_IBM_copyright_prolog                              */
/* This is an automatically generated copyright prolog.              */
/* After initializing,  DO NOT MODIFY OR MOVE                        */
/* ----------------------------------------------------------------- */
/*                                                                   */
/* Product(s):                                                       */
/*     5722-SS1                                                      */
/*                                                                   */
/* (C)Copyright IBM Corp.  2004, 2005                                */
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
/* Header File Name: H/QSCSWCH                                    */
/*                                                                */
/* Descriptive Name: Include for Start Watch API                  */
/*                                                                */
/* Licensed Materials-Property of IBM                             */
/*                                                                */
/*                                                                */
/* Description: Start Watch (QSCSWCH) API starts the watch for    */
/*              event function, which notifies the user by calling*/
/*              a user specified program when the specified event */
/*              (a message or LIC log) occurred                   */
/*                                                                */
/* Use, duplication or disclosure restricted                      */
/* by GSA ADP Schedule Contract with IBM Corp.                    */
/*                                                                */
/* Licensed Materials-Property of IBM                             */
/*                                                                */
/*                                                                */
/* Header Files Included: None                                    */
/*                                                                */
/* Macros List: None                                              */
/*                                                                */
/* Structure List: Qsc_Watch_For_Msg_Fmt                          */
/*                 Qsc_Watch_For_LIClog_Fmt                       */
/*                                                                */
/* Function Prototype List: QSCSWCH                               */
/*                                                                */
/* Change Activity:                                               */
/* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
/* ---- ----------- -----  ------ --------- ----------------------*/
/* $A0= D99930.1    v5r4m0 040801 STLOMELI  New part              */
/*                                                                */
/* End Change Activity.                                           */
/******************************************************************/

#ifndef QSCSWCH_h

#define QSCSWCH_h


#pragma datamodel(P128)

/******************************************************************/
/* Prototype for calling Start Watch API QSCSWCH                  */
/******************************************************************/

#ifdef __ILEC400__
     #pragma linkage(QSCSWCH,OS,nowiden)
#else
     extern "OS"
#endif

void QSCSWCH  (char *,          /* Session ID                     */
               char *,          /* Started Session ID             */
               void *,          /* Watch program                  */
               void *,          /* Watch for message              */
               void *,          /* Watch for LIC log              */
               void *);         /* Error code                     */

/******************************************************************/
/* Format for message information                                 */
/******************************************************************/
typedef _Packed struct  Qsc_Watch_For_Msg_Fmt{
     int    Length_Message_Information;
     char   Message_ID[7];
     char   Reserved[1];
     char   Message_Queue_Name[10];
     char   Message_Queue_Lib[10];
     char   Job_Name[10];
     char   User_Name[10];
     char   Job_Number[6];
     char   Reserved2[6];
     int    Offset_Comparison_Data;
     int    Length_Of_Comparison_Data;
     char   Compare_Against[10];
     /*char Comparision_Data[1]; */     /* variable length data   */
} Qsc_Watch_For_Msg_Fmt_t;

/******************************************************************/
/* Format for LIClog information                                  */
/******************************************************************/
typedef _Packed struct  Qsc_Watch_For_LICLOG_Fmt{
     int    Length_LIClog_Information;
     char   Liclog_Major_Code[4];
     char   Liclog_Minor_Code[4];
     int    Offset_Comparison_Data;
     int    Length_Of_Comparison_Data;
     /*char Comparision_Data[1]; */     /* variable length data   */
} Qsc_Watch_For_LICLOG_Fmt_t;

#pragma datamodel(pop)
#endif
