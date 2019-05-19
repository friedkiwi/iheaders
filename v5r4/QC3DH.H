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
/* Header File Name: H/QC3DH                                         */
/*                                                                   */
/* Descriptive Name: Generate Diffie-Hellman secret key APIs         */
/*                                                                   */
/* Description: The Diffie-Hellman APIs are used for producing a     */
/*              shared secret key.                                   */
/*                                                                   */
/* Header Files Included:                                            */
/*              qc3cci.h  - Data structures and constants used       */
/*                          with the cryptographic APIs.             */
/*                                                                   */
/* Macros List:             None                                     */
/*                                                                   */
/* Structure List:          None                                     */
/*                                                                   */
/* Function Prototype List: Qc3GenDHParms                            */
/*                          Qc3GenDHKeyPair                          */
/*                          Qc3CalculateDHSecretKey                  */
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


#ifndef _QC3DH_h
 #define _QC3DH_h

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
 /* Prototype for calling Generate Diffie-Hellman Parameters API     */
 /********************************************************************/

 void Qc3GenDHParms (
         int  * volatile           , /* Key size                     */
         char * volatile           , /* Crypto Service Provider      */
         char * volatile           , /* Crypto Device Name           */
         char * volatile           , /* D-H parameters               */
         int  * volatile           , /* Len of area for D-H parms    */
         int  * volatile           , /* Len of D-H parms returned    */
         void * volatile          ); /* Error Code                   */

 /********************************************************************/
 /* Prototype for calling Generate Diffie-Hellman Key Pair API       */
 /********************************************************************/

 void Qc3GenDHKeyPair (
         char * volatile           , /* D-H parameters               */
         int  * volatile           , /* Len of D-H parms             */
         char * volatile           , /* Crypto Service Provider      */
         char * volatile           , /* Crypto Device Name           */
         char * volatile           , /* D-H alg context token        */
         char * volatile           , /* D-H public key               */
         int  * volatile           , /* Len of area for public key   */
         int  * volatile           , /* Len of D-H pub key returned  */
         void * volatile          ); /* Error Code                   */

 /********************************************************************/
 /* Prototype for calling Calculate Diffie-Hellman Secret Key API    */
 /********************************************************************/

 void Qc3CalculateDHSecretKey (
         char * volatile           , /* D-H alg context token        */
         char * volatile           , /* D-H public key               */
         int  * volatile           , /* Length of D-H public key     */
         char * volatile           , /* D-H secret key               */
         int  * volatile           , /* Len of area for secret key   */
         int  * volatile           , /* Len D-H secret key returned  */
         void * volatile          ); /* Error Code                   */

 #ifdef __ILEC400__
    #pragma checkout(resume)
 #else
    }
 #endif

 #pragma datamodel(pop)

#endif                                                   /* _QC3DH_h */

