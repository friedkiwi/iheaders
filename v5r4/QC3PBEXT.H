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
/* Header File Name: H/QC3PBEXT                                      */
/*                                                                   */
/* Descriptive Name: Extract Public Key API                          */
/*                                                                   */
/* Description: This API extracts a public key from either a PKCS #8 */
/*               encoded private key or from key store.              */
/*                                                                   */
/* Header Files Included:                                            */
/*              qc3cci.h  - Data structures and constants used       */
/*                          with the cryptographic APIs.             */
/*                                                                   */
/* Macros List:             None                                     */
/*                                                                   */
/* Structure List:          None                                     */
/*                                                                   */
/* Function Prototype List: Qc3ExtractPublicKey                      */
/*                                                                   */
/* Change Activity:                                                  */
/*                                                                   */
/* CFD List:                                                         */
/*                                                                   */
/* FLAG REASON   LEVEL  DATE   PGMR      CHANGE DESCRIPTION          */
/* ---- -------- -----  ------ --------- ----------------------------*/
/* $A0= D93081   v5r4m0 050328 ROCH      New Include                 */
/*                                                                   */
/* End CFD List.                                                     */
/*                                                                   */
/* Additional notes about the Change Activity                        */
/*                                                                   */
/* End Change Activity.                                              */
/*** END HEADER FILE SPECIFICATIONS **********************************/


#ifndef _QC3PBEXT_h
 #define _QC3PBEXT_h

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
 /* Prototype for calling Extract Public Key API                     */
 /********************************************************************/

 void Qc3ExtractPublicKey (
         char * volatile           , /* Key string                   */
         int  * volatile           , /* Length of key string         */
         char * volatile           , /* Key format                   */
         char * volatile           , /* Key form                     */
         char * volatile           , /* KEK context token            */
         char * volatile           , /* KEA context token            */
         char * volatile           , /* Public key                   */
         int  * volatile           , /* Len of area for public key   */
         int  * volatile           , /* Len of public key returned   */
         void * volatile          ); /* Error Code                   */

 #ifdef __ILEC400__
    #pragma checkout(resume)
 #else
    }
 #endif

 #pragma datamodel(pop)

#endif                                                /* _QC3PBEXT_h */

