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
/* Header File Name: QPDETWCH                                     */
/*                                                                */
/* Descriptive Name: Start Watch Exit Program for Service Monitor */
/*                                                                */
/* Licensed Materials-Property of IBM                             */
/*                                                                */
/*                                                                */
/* Description: The Start Watch Command (STRWCH) and Start Watch  */
/*              API call a user exit program specified on the     */
/*              Watch Program parameter.                          */
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
/* Structure List  Qpdet_Watch_For_Msg                            */
/*                 Qpdet_Watch_For_LICLOG                         */
/*                                                                */
/* Function Prototype List: None.                                 */
/*                                                                */
/* Change Activity:                                               */
/* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
/* ---- ----------- -----  ------ --------- ----------------------*/
/* $A0= D93040      v5r4m0 082304           New part              */
/* $A1= P9A96998    v5r4m0 051504           Correct User Exit     */
/*                                          Program structure     */
/* End Change Activity.                                           */
/******************************************************************/

#ifndef QPDETWCH_h
#define QPDETWCH_h

#pragma datamodel(P128)


/******************************************************************/
/* Watch Exit Program called because a message id and any         */
/* associated comparison data is matched.                         */
/* This structure is for the user exit program called by          */
/* STRWCH cmd or Start Watch (QSCSWCH) API                        */
/******************************************************************/
typedef _Packed struct  Qpdet_Watch_For_Msg{
     int    Length_Watch_Information;
     char   Message_ID[7];
     char   Reserved[1];
     char   Message_Queue_Name[10];
     char   Message_Queue_Lib[10];
     char   Job_Name[10];
     char   User_Name[10];
     char   Job_Number[6];
     char   Reserved2[4];
     char   Sending_Program_Name[256];
     char   Sending_Program_Module[10];
     int    Offset_Sending_Procedure;
     int    Length_Of_Sending_Procedure;
     char   Receving_Program_Name[10];
     char   Receiving_Program_Module[10];
     int    Offset_Receiving_Procedure;
     int    Length_Of_Receiving_Procedure;
     int    Msg_Severity;
     char   Msg_Type[10];
     char   Msg_Timestamp[8];
     char   Msg_Key[4];
     char   Msg_File_Name[10];
     char   Msg_File_Library[10];
     char   Reserved3[2];
     int    Offset_Comparison_Data;
     int    Length_Of_Comparison_Data;
     char   Compare_Against[10];
     char   Reserved4[2];
     int    Comparison_Data_CCSID;
     int    Offset_Comparison_Data_Found;
     int    Offset_Replacement_Data;
     int    Length_Of_Replacement_Data;
     int    Replacement_Data_CCSID;
     /*char Sending_Procedure[1]; */    /* variable length data   */
     /*char Receiving_Procedure[1]; */  /* variable length data   */
     /*char Comparision_Data[1]; */  /* variable length data @A1M */
     /*char Replacement_Data[1]; */  /* variable length data @A1M */
} Qpdet_Watch_For_Msg_t;


/******************************************************************/
/* Watch Exit Program called because a LIC log is reached.        */
/* This structure is for the user exit program called by          */
/* STRWCH cmd or Start Watch (QSCSWCH) API                        */
/******************************************************************/
typedef _Packed struct  Qpdet_Watch_For_LICLOG{

     int    Length_Watch_Information;
     char   Liclog_Major_Code[4];
     char   Liclog_Minor_Code[4];
     char   Liclog_Identifier[8];
     char   Liclog_Timestamp[8];
     char   TDE_Number[8];
     char   Task_Name[16];
     char   Server_Type[30];
     char   Exception_ID[2];
     char   Liclog_job_Name[10];
     char   Liclog_User_Name[10];
     char   Liclog_Job_Number[6];
     char   Reserved[4];
     char   Thread_ID[8];
     char   LIC_Module_Compile_Timestamp[8];
     char   LIC_Module_Offset[8];
     char   LIC_Module_RU_Name[8];
     char   LIC_Module_Name[48];
     char   LIC_Module_Entry_Point_Name[128];
     char   Reserved2[2];
     int    Offset_Comparison_Data;
     int    Length_Of_Comparison_Data;
     /*char Comparision_Data[1]; */     /* variable length data   */
} Qpdet_Watch_For_LICLOG_t;

#pragma datamodel(pop)
#endif
