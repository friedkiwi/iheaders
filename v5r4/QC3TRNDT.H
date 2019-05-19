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
/* Header File Name: H/QC3TRNDT                                      */
/*                                                                   */
/* Descriptive Name: Include for OPM Translate Data API              */
/*                                                                   */
/* Description: This API translates data from encryption under       */
/*              one key to encryption under another key.             */
/*                                                                   */
/* Header Files Included:                                            */
/*              qc3cci.h  - Data structures and constants used       */
/*                          with the cryptographic APIs.             */
/*                                                                   */
/* Macros List:             None                                     */
/*                                                                   */
/* Structure List:          None                                     */
/*                                                                   */
/* Function Prototype List: QC3TRNDT                                 */
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
#ifndef QC3TRNDT_h
 #define QC3TRNDT_h

 #pragma datamodel(P128)

                                     /* Data structures and          */
                                     /* constants used with the      */
 #include "qc3cci.h"                 /* cryptographic APIs           */

 /********************************************************************/
 /*  Prototype for calling OPM Translate Data API                    */
 /********************************************************************/

 #ifdef __ILEC400__
   #pragma linkage (QC3TRNDT,OS,nowiden)
 #else
   extern "OS nowiden"
 #endif

 void  QC3TRNDT (
         char * volatile           , /* Data to translate            */
         int  * volatile           , /* Length of data to translate  */
         char * volatile           , /* Decrypt alg context token    */
         char * volatile           , /* Decrypt key context token    */
         char * volatile           , /* Encrypt alg context token    */
         char * volatile           , /* Encrypt key context token    */
         char * volatile           , /* Crypto Service Provider      */
         char * volatile           , /* Crypto Device Name           */
         char * volatile           , /* Translated data              */
         int  * volatile           , /* Length of translated data    */
         int  * volatile           , /* Len of trns data returned    */
         void * volatile          ); /* Error Code                   */

 #pragma datamodel(pop)

#endif
