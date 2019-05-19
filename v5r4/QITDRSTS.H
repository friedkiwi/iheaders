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
/***   START OF SPECIFICATIONS   *************************************/
/*                                                                   */
/* Header File Name:  qitdrsts                                       */
/*                                                                   */
/* Descriptive Name: Retrieve Remote Network Server Status           */
/*                                                                   */
/* Description: The Retrieve Remote Network Server Status (QITDRSTS) */
/*              API retrieves the operational status of a remote     */
/*              network server.                                      */
/*                                                                   */
/*********************************************************************/
/*                                                                   */
/* Header Files Included: None.                                      */
/*                                                                   */
/* Macros List: None.                                                */
/*                                                                   */
/* Structure List: Qitd_RSTS0100_t          (Basic status)           */
/*                                                                   */
/*********************************************************************/
/* Change Activity:                                                  */
/* CFD List:                                                         */
/* FLAG REASON   VERS DATE   PGMR     COMMENTS                       */
/* ____ ________ ____ ______ ________ _______________________________*/
/* $A0= D93227.x 5W40 040914 ROCH     New include                    */
/* End CFD List.                                                     */
/* End Change Activity.                                              */
/***   END OF SPECIFICATIONS   ***************************************/
#ifndef _QITDRSTS_H
#define _QITDRSTS_H

 #if (__OS400_TGTVRM__>=510)
     #pragma datamodel(P128)
 #endif

/*********************************************************************/
/* Prototype for calling Retrieve Remote System Server Status        */
/* API (QITDRSTS)                                                    */
/*********************************************************************/
 #ifdef  __ILEC400__
       #pragma linkage(QITDRSTS,OS,nowiden)
 #else
       extern "OS"
 #endif

 void QITDRSTS (void *,        /* Receiver variable              */
                int,             /* Length of receiver variable    */
                char *,          /* Format name                    */
                char *,          /* NWS configuration name         */
                int,             /* Timeout variable               */
                void *);         /* Error code                     */


 /******************************************************************/
 /* Type Definition for the RSTS0100 format - Basic Server Status  */
 /******************************************************************/

 typedef _Packed struct Qitd_RSTS0100
    {
       int   Bytes_Returned;
       int   Bytes_Available;
       int   Server_StatusCode;
    } Qitd_RSTS0100_t;


 #if (__OS400_TGTVRM__>=510)
     #pragma datamodel(pop)
 #endif

#endif /* _QITDRSTS_H */

