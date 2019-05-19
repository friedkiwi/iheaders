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
/* ----------------------------------------------------------------- */
/*** START HEADER FILE SPECIFICATIONS ********************************/
/*                                                                   */
/* Header File Name: H/QC3EXPKY                                      */
/*                                                                   */
/* Descriptive Name: Include for OPM Export Key API                  */
/*                                                                   */
/* Description: This API decrypts a mater key encrypted key and      */
/*              re-encrypts it under a specified key-encrypteing key.*/
/*                                                                   */
/* Header Files Included:                                            */
/*              qc3cci.h  - Data structures and constants used       */
/*                          with the cryptographic APIs.             */
/*                                                                   */
/* Macros List:             None                                     */
/*                                                                   */
/* Structure List:          None                                     */
/*                                                                   */
/* Function Prototype List: QC3EXPKY                                 */
/*                                                                   */
/* Change Activity:                                                  */
/*                                                                   */
/* CFD List:                                                         */
/*                                                                   */
/* FLAG REASON   LEVEL  DATE   PGMR      CHANGE DESCRIPTION          */
/* ---- -------- -----  ------ --------- ----------------------------*/
/* $A0= D93081   v5r4m0 040720 ROCH      New Include                 */
/*                                                                   */
/* End CFD List.                                                     */
/*                                                                   */
/* Additional notes about the Change Activity                        */
/*                                                                   */
/* End Change Activity.                                              */
/*** END HEADER FILE SPECIFICATIONS **********************************/
#ifndef QC3EXPKY_h
 #define QC3EXPKY_h

 #pragma datamodel(P128)

                                     /* Data structures and          */
                                     /* constants used with the      */
 #include "qc3cci.h"                 /* cryptographic APIs           */

 /********************************************************************/
 /*  Prototype for calling OPM Export Key API                        */
 /********************************************************************/

 #ifdef __ILEC400__
   #pragma linkage (QC3EXPKY,OS,nowiden)
 #else
   extern "OS nowiden"
 #endif

 void  QC3EXPKY (
         char * volatile           , /* Key string                   */
         int  * volatile           , /* Length of key string         */
         char * volatile           , /* Key string format            */
         char * volatile           , /* KEK context token            */
         char * volatile           , /* KEA context token            */
         char * volatile           , /* Exported key                 */
         int  * volatile           , /* Len of area for exported key */
         int  * volatile           , /* Len of exported key returned */
         void * volatile          ); /* Error Code                   */

 #pragma datamodel(pop)

#endif
