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
/* Header File Name: QSCRXMLI                                     */
/*                                                                */
/* Descriptive Name: Include for Retrieve XML Service Information */
/*                   API                                          */
/*                                                                */
/* Licensed Materials-Property of IBM                             */
/*                                                                */
/*                                                                */
/* Description: Retrieve XML Service Information (QSRXMLI) API    */
/*              retrieves the event information requested and     */
/*              returns it to a receiver variable or saves it     */
/*              into an Integrated File System stream file        */
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
/* Structure List: Qsc_DEST0100                                   */
/*                 Qsc_SIRV0100                                   */
/*                 Qsc_SSIF0100                                   */
/*                 Qsc_SSIF0200                                   */
/*                                                                */
/* Function Prototype List: QSCRXMLI                              */
/*                                                                */
/* Change Activity:                                               */
/* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
/* ---- ----------- -----  ------ --------- ----------------------*/
/* $A0= D99977      v5r4m0 04mmdd           New part              */
/*                                                                */
/* End Change Activity.                                           */
/******************************************************************/

#ifndef QSCRXMLI_h

#define QSCRXMLI_h


#pragma datamodel(P128)

/******************************************************************/
/* Prototype for calling Retrieve XML Service Information API     */
/* QSCRXMLI                                                       */
/******************************************************************/

#ifdef __ILEC400__
     #pragma linkage(QSCRXMLI,OS,nowiden)
#else
     extern "OS"
#endif

void QSCRXMLI (void *,          /* Destination Information        */
               char *,          /* Destination Format Name        */
               void *,          /* Receiver Variable              */
               char *,          /* Receiver Format Name           */
               void *,          /* Service Selection Information  */
               char *,          /* Service Selection Format Name  */
               void *);         /* Error code                     */

/********************************************************************/
/*  Structures to map out the Destination parameter.                */
/********************************************************************/
typedef _Packed struct Qsc_DEST0100 {
   unsigned int Receiver_Variable_Length;
} Qsc_DEST0100_t;             /* DEST0100 Format                    */

/********************************************************************/
/*  Structure for the Receiver Variable when                        */
/*  Destination Format= DEST0100                                    */
/********************************************************************/
typedef _Packed struct Qsc_SIRV0100 {
   unsigned int Bytes_Returned;  /* Bytes returned in receiver      */
   unsigned int Bytes_Available; /* Bytes available from API        */
   unsigned int XML_Data_Length; /* Length of XML data              */
 /*char XMLData[];*/             /* XML data returned               */
} Qsc_SIRV0100_t;



/******************************************************************/
/* Structure for Service Selection Information from a             */
/* Message Queue                                                  */
/******************************************************************/
typedef _Packed struct  Qsc_SSIF0100{
     char   Message_Queue_Name[10];
     char   Message_Queue_Lib[10];
} Qsc_SSIF0100_t;

/******************************************************************/
/* Structure for Service Selection Information from a             */
/* Job Log                                                        */
/******************************************************************/
typedef _Packed struct  Qsc_SSIF0200{
     char   Job_Name[10];
     char   User_Name[10];
     char   Job_Number[6];
} Qsc_SSIF0200_t;

#pragma datamodel(pop)
#endif
