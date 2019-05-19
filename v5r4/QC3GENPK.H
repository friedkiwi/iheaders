/* begin_generated_IBM_copyright_prolog                              */
/* This is an automatically generated copyright prolog.              */
/* After initializing,  DO NOT MODIFY OR MOVE                        */
/* ----------------------------------------------------------------- */
/*                                                                   */
/* Product(s):                                                       */
/*     5722-SS1                                                      */
/*                                                                   */
/* (C)Copyright IBM Corp.  2003, 2003                                */
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

/* ----------------------------------------------------------------- */

/*** START HEADER FILE SPECIFICATIONS ********************************/
/*                                                                   */
/* Header File Name: H/QC3GENPK                                      */
/*                                                                   */
/* Descriptive Name: Include for OPM Generate PKA Key Pair API       */
/*                                                                   */
/* Description: This API generates a key pair that can be used       */
/*              with a PKA cipher algorithm (e.g. RSA).              */
/*                                                                   */
/* Header Files Included:                                            */
/*              qc3cci.h  - Data structures and constants used       */
/*                          with the cryptographic APIs.             */
/*                                                                   */
/* Macros List:             None                                     */
/*                                                                   */
/* Structure List:          None                                     */
/*                                                                   */
/* Function Prototype List: QC3GENPK                                 */
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
#ifndef QC3GENPK_h
 #define QC3GENPK_h

 #pragma datamodel(P128)

                                     /* Data structures and          */
                                     /* constants used with the      */
 #include "qc3cci.h"                 /* cryptographic APIs           */

 /********************************************************************/
 /*  Prototype for calling OPM Generate PKA Key Pair API             */
 /********************************************************************/

 #ifdef __ILEC400__
   #pragma linkage (QC3GENPK,OS,nowiden)
 #else
   extern "OS nowiden"
 #endif

 void  QC3GENPK (
         int  * volatile           , /* Key type                     */
         int  * volatile           , /* Key size                     */
         int  * volatile           , /* Public key exponent          */
         char * volatile           , /* Key format                   */
         char * volatile           , /* Key form                     */
         char * volatile           , /* Key-encrypt key ctx token    */
         char * volatile           , /* Key-encrypt alg ctx token    */
         char * volatile           , /* Crypto Service Provider      */
         char * volatile           , /* Crypto Device Name           */
         char * volatile           , /* Private key string           */
         int  * volatile           , /* Len of area for private key  */
         int  * volatile           , /* Len of private key returned  */
         char * volatile           , /* Public key string            */
         int  * volatile           , /* Len of area for public key   */
         int  * volatile           , /* Len of public key returned   */
         void * volatile          ); /* Error Code                   */

 #pragma datamodel(pop)

#endif
