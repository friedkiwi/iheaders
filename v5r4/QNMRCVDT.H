/*** START HEADER FILE SPECIFICATIONS ********************************/
/*                                                                   */
/* Header File Name: H/QNMRCVDT                                      */
/*                                                                   */
/* Descriptive Name: Receive Data                                    */
/*                                                                   */
/* 5763-SS1  (C) Copyright IBM Corp. 1994,1994                       */
/* All rights reserved.                                              */
/* US Government Users Restricted Rights -                           */
/* Use, duplication or disclosure restricted                         */
/* by GSA ADP Schedule Contract with IBM Corp.                       */
/*                                                                   */
/* Licensed Materials-Property of IBM                                */
/*                                                                   */
/* Description: The Receive Data API, an SNA management services     */
/*              transport API, receives a particular request, reply  */
/*              or error message.                                    */
/*                                                                   */
/* Header Files Included: None.                                      */
/*                                                                   */
/* Macros List: None.                                                */
/*                                                                   */
/* Structure List: Qnm_Rcvdt_Rec_Var_t                               */
/*                                                                   */
/* Function Prototype List: QNMRCVDT.                                */
/*                                                                   */
/* Change Activity:                                                  */
/*                                                                   */
/* CFD List:                                                         */
/*                                                                   */
/* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION       */
/* ---- ------------ ----- ------ --------- ------------------------ */
/* $A0= D2862000     3D10  940410 ROCH:     New Include              */
/*                                                                   */
/* End CFD List.                                                     */
/*                                                                   */
/*  Additional notes about the Change Activity                       */
/* End Change Activity.                                              */
/*** END HEADER FILE SPECIFICATIONS **********************************/

#ifndef QNMRCVDT_h
 #define QNMRCVDT_h
#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(P128)      /* @B1A*/
#endif                       /* @B1A*/

 /********************************************************************/
 /*  Prototype for QNMRCVDT API                                      */
 /********************************************************************/
 #ifdef __ILEC400__
    #pragma linkage (QNMRCVDT,OS,nowiden)
 #else
    extern "OS"
 #endif
 void QNMRCVDT (int   ,           /* Handle                          */
                void *,           /* Receiver Variable               */
                int   ,           /* Receiver Variable Length        */
                void *,           /* Request Identifier              */
                void *,           /* Remote Application Name         */
                char *,           /* Data Type                       */
                int   ,           /* Wait Time                       */
                void *);          /* Error Code                      */

 /********************************************************************/
 /* Type definition for the receiver variable.                       */
 /********************************************************************/
 typedef _Packed struct Qnm_Rcvdt_Rec_Var {
            int  Bytes_Returned;
            int  Bytes_Available;
          /*char Received_Data[]; */  /* Varying length Data. */
 } Qnm_Rcvdt_Rec_Var_t;

#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(pop)       /* @B1A*/
#endif                       /* @B1A*/
#endif
