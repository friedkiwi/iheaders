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
/* Header File Name: H/QC3GENKR                                      */
/*                                                                   */
/* Descriptive Name: Include for OPM Generate Key Record API         */
/*                                                                   */
/* Description: This API generates a random key value and securely   */
/*              stores it in a key store file.                       */
/*                                                                   */
/* Header Files Included:                                            */
/*              qc3cci.h  - Data structures and constants used       */
/*                          with the cryptographic APIs.             */
/*                                                                   */
/* Macros List:             None                                     */
/*                                                                   */
/* Structure List:          None                                     */
/*                                                                   */
/* Function Prototype List: QC3GENKR                                 */
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
#ifndef QC3GENKR_h
 #define QC3GENKR_h

 #pragma datamodel(P128)

                                     /* Data structures and          */
                                     /* constants used with the      */
 #include "qc3cci.h"                 /* cryptographic APIs           */

 /********************************************************************/
 /*  Prototype for calling OPM Generate Key Record API               */
 /********************************************************************/

 #ifdef __ILEC400__
   #pragma linkage (QC3GENKR,OS,nowiden)
 #else
   extern "OS nowiden"
 #endif

 void  QC3GENKR (
         char * volatile           , /* Qualified key store file name*/
         char * volatile           , /* Record label                 */
         int  * volatile           , /* Key type                     */
         int  * volatile           , /* Key size                     */
         int  * volatile           , /* Public key exponent          */
         int  * volatile           , /* Disallowed function          */
         char * volatile           , /* Crypto service provider      */
         char * volatile           , /* Crypto device name           */
         void * volatile          ); /* Error Code                   */
 #pragma datamodel(pop)

#endif
