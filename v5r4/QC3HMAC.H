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
/* Header File Name: H/QC3HMAC                                       */
/*                                                                   */
/* Descriptive Name: Calculate HMAC API                              */
/*                                                                   */
/* Description: This API uses a one-way hash function and a secret   */
/*              shared key to produce an authentication value.       */
/*                                                                   */
/* Header Files Included:                                            */
/*              qc3cci.h  - Data structures and constants used       */
/*                          with the cryptographic APIs.             */
/*                                                                   */
/* Macros List:             None                                     */
/*                                                                   */
/* Structure List:          None                                     */
/*                                                                   */
/* Function Prototype List: Qc3CalculateHMAC                         */
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


#ifndef _QC3HMAC_h
 #define _QC3HMAC_h

 #pragma datamodel(P128)

                                     /* Data structures and          */
                                     /* constants used with the      */
 #include "qc3cci.h"                 /* cryptographic APIs           */

 #ifdef __ILEC400__
    #pragma nomargins nosequence
    #pragma checkout(suspend)
 #else
    extern "C" {
 #endif

 /********************************************************************/
 /* Prototype for calling Calculate HMAC API                         */
 /********************************************************************/

 void Qc3CalculateHMAC (
         char * volatile           , /* Input data                   */
         int  * volatile           , /* Length of input data         */
         char * volatile           , /* Input data format name       */
         char * volatile           , /* Algorithm description        */
         char * volatile           , /* Algorithm desc format name   */
         char * volatile           , /* Key description              */
         char * volatile           , /* Key desc format name         */
         char * volatile           , /* Crypto Service Provider      */
         char * volatile           , /* Crypto Device Name           */
         char * volatile           , /* HMAC                         */
         void * volatile          ); /* Error Code                   */

 #ifdef __ILEC400__
    #pragma checkout(resume)
 #else
    }
 #endif

 #pragma datamodel(pop)

#endif                                                 /* _QC3HMAC_h */

