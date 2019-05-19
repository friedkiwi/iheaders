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
/* Header File Name:  qfprlnws                                       */
/*                                                                   */
/* Descriptive Name: List NWS Configuration                          */
/*                                                                   */
/* Description: The List NWS Configuration (QFPRLNWS) API            */
/*              lists information about network server               */
/*              configurations.                                      */
/*                                                                   */
/*********************************************************************/
/*                                                                   */
/* Header Files Included: None.                                      */
/*                                                                   */
/* Macros List: None.                                                */
/*                                                                   */
/* Structure List: Qfpr_FPRL0100_t          (Basic info)             */
/*                                                                   */
/*********************************************************************/
/* Change Activity:                                                  */
/* CFD List:                                                         */
/* FLAG REASON   VERS DATE   PGMR     COMMENTS                       */
/* ____ ________ ____ ______ ________ _______________________________*/
/* $A0= D93227   5w40 050324 ROCH:    New include                    */
/* End CFD List.                                                     */
/* End Change Activity.                                              */
/***   END OF SPECIFICATIONS   ***************************************/
#ifndef _QFPRLNWS_H
#define _QFPRLNWS_H

 #if (__OS400_TGTVRM__>=510)
     #pragma datamodel(P128)
 #endif

/*********************************************************************/
/* Prototype for calling List NWS Configuration API (QFPRLNWS)       */
/*********************************************************************/
 #ifdef  __ILEC400__
       #pragma linkage(QFPRLNWS,OS,nowiden)
 #else
       extern "OS"
 #endif

 void QFPRLNWS (void *,          /* Qualified user space name      */
                char *,          /* Format name                    */
                char *,          /* NWS configuration name         */
                char *,          /* Configuration type             */
                void *);         /* Error code                     */


 /******************************************************************/
 /* Type Definition for the Input Parameter Section.               */
 /******************************************************************/
 typedef _Packed struct Qfpr_LNWSC_Input
    {
       char User_Space_Specified[10];
       char User_Space_Lib_Specified[10];
       char Format_Name[8];
       char NWS_Config_Name_Specified[10];
       char Configuration_Type_Specified[10];
    } Qfpr_LNWSC_Input_t;

 /******************************************************************/
 /* Type Definition for the FPRL0100 Format.                       */
 /******************************************************************/
 typedef _Packed struct Qfpr_FPRL0100
    {
       char Network_Server_Config_Name[10];
       char Configuration_Type[10];
       char Text_Desc[50];
    } Qfpr_FPRL0100_t;

 #if (__OS400_TGTVRM__>=510)
     #pragma datamodel(pop)
 #endif

#endif /* _QFPRLNWS_H */

