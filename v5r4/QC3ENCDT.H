/* begin_generated_IBM_copyright_prolog                              */
/* This is an automatically generated copyright prolog.              */
/* After initializing,  DO NOT MODIFY OR MOVE                        */
/* ----------------------------------------------------------------- */
/*                                                                   */
/* Product(s):                                                       */
/*     5722-SS1                                                      */
/*                                                                   */
/* (C)Copyright IBM Corp.  2004, 2003                                */
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
/* Header File Name: H/QC3ENCDT                                      */
/*                                                                   */
/* Descriptive Name: Include for OPM Encrypt Data API                */
/*                                                                   */
/* Description: This API protects data privacy by scrambling         */
/*              clear data into an unintelligible form.              */
/*                                                                   */
/* Header Files Included:                                            */
/*              qc3cci.h  - Data structures and constants used       */
/*                          with the cryptographic APIs.             */
/*                                                                   */
/* Macros List:             None                                     */
/*                                                                   */
/* Structure List:          None                                     */
/*                                                                   */
/* Function Prototype List: QC3ENCDT                                 */
/*                                                                   */
/* Change Activity:                                                  */
/*                                                                   */
/* CFD List:                                                         */
/*                                                                   */
/* FLAG REASON   LEVEL  DATE   PGMR      CHANGE DESCRIPTION          */
/* ---- -------- -----  ------ --------- ----------------------------*/
/* $A0= D99296   v5r3m0 020709 ROCH      New Include                 */
/*                                                                   */
/* End CFD List.                                                     */
/*                                                                   */
/* Additional notes about the Change Activity                        */
/*                                                                   */
/* End Change Activity.                                              */
/*** END HEADER FILE SPECIFICATIONS **********************************/
#ifndef QC3ENCDT_h
 #define QC3ENCDT_h

 #pragma datamodel(P128)

                                     /* Data structures and          */
                                     /* constants used with the      */
 #include "qc3cci.h"                 /* cryptographic APIs           */

 /********************************************************************/
 /*  Prototype for calling OPM Encrypt Data API                      */
 /********************************************************************/

 #ifdef __ILEC400__
   #pragma linkage (QC3ENCDT,OS,nowiden)
 #else
   extern "OS nowiden"
 #endif

 void  QC3ENCDT (
         char * volatile           , /* Clear data                   */
         int  * volatile           , /* Length of clear data         */
         char * volatile           , /* Clear data format name       */
         char * volatile           , /* Algorithm description        */
         char * volatile           , /* Algorithm desc format name   */
         char * volatile           , /* Key description              */
         char * volatile           , /* Key desc format name         */
         char * volatile           , /* Crypto Service Provider      */
         char * volatile           , /* Crypto Device Name           */
         char * volatile           , /* Encrypted data               */
         int  * volatile           , /* Length of encrypted data     */
         int  * volatile           , /* Len of enc data returned     */
         void * volatile          ); /* Error Code                   */

 #pragma datamodel(pop)

#endif
