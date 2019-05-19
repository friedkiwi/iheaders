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
/* Header File Name: QPDETSND                                     */
/*                                                                */
/* Descriptive Name: Send Service Request                         */
/*                                                                */
/* Description: Send a service request to the Service Control     */
/*              function or the Service Monitor function.         */
/*                                                                */
/* Header Files Included: None                                    */
/*                                                                */
/* Macros List: None                                              */
/*                                                                */
/* Structure List: None                                           */
/*                                                                */
/* Function Prototype List: QPDETSND.                             */
/*                                                                */
/* Change Activity:                                               */
/* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
/* ---- ----------- -----  ------ --------- ----------------------*/
/* $A0= D93040      v5r4m0 052404           New part              */
/* End Change Activity.                                           */
/******************************************************************/
#ifndef QPDETSND_h
#define QPDETSND_h
#if (__OS400_TGTVRM__>=510)
  #pragma datamodel(P128)
#endif

#ifdef  __ILEC400__
  #pragma linkage(QPDETSND,OS,nowiden)
#else
  extern "OS"
#endif

        void QPDETSND (
                        char*, /* Request Data           */
                        int ,  /* Length Of Request Data */
                        char*, /* FormatOfRequestData    */
                        void*  /* Error code             */
                       );

/******************************************************************/
/*Sending the Refresh Policy Request                              */
/******************************************************************/
typedef _Packed struct  Qpdet_SNDR0100{
     int  Type_Of_Policy_Data;
     int  Length_Of_Policy_Data;
   /*char policyData[];*/
 } Qpdet_SNDR0100_t;

 /******************************************************************/
/* Sending the Start function Request                              */
/*******************************************************************/
typedef _Packed struct  Qpdet_SNDR0200{
     int Number_Functions;
   /*int Functions_To_Start[];*/
 } Qpdet_SNDR0200_t;

/******************************************************************/
/* Sending the Stop function Request                              */
/******************************************************************/
typedef _Packed struct  Qpdet_SNDR0300{
     int Number_Functions;
   /*int Functions_To_Stop[];*/
 } Qpdet_SNDR0300_t;

/******************************************************************/
/* Sending the Service Request                                    */
/******************************************************************/
typedef _Packed struct  Qpdet_SNDR0400{
     int  Length_of_Header_Information;
     int  Offset_To_Service_Event;
     int  Length_Of_Service_Event;
     char Service_Event_Type[10];
     char Service_Event_ID[10];
     char Service_Event_Error_Detection[10];
   /*char Service_Event[];*/
 } Qpdet_SNDR0400_t;

/******************************************************************/
/* Sending the Logging Request                                    */
/******************************************************************/
typedef _Packed struct  Qpdet_SNDR0500{
     int Logging_Level;
 } Qpdet_SNDR0500_t;

/******************************************************************/
/* Sending the System Value Changed Request                       */
/******************************************************************/
typedef _Packed struct Qpdet_SNDR0600{
     int Nbr_Of_System_Values_Changed;
   /*char System_Value_Names[];*/
 } Qpdet_SNDR0600_t;

#if (__OS400_TGTVRM__>=510)
 #pragma datamodel(pop)
#endif

#endif
