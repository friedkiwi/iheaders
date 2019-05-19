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
/* Header File Name: H/QC3GENSK                                      */
/*                                                                   */
/* Descriptive Name: Include for OPM Generate Symmetric Key API      */
/*                                                                   */
/* Description: This API generates a random key that can be used     */
/*              with symmetric cipher algorithms (e.g. DES, AES)     */
/*                                                                   */
/* Header Files Included:                                            */
/*              qc3cci.h  - Data structures and constants used       */
/*                          with the cryptographic APIs.             */
/*                                                                   */
/* Macros List:             None                                     */
/*                                                                   */
/* Structure List:          None                                     */
/*                                                                   */
/* Function Prototype List: QC3GENSK                                 */
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
#ifndef QC3GENSK_h
 #define QC3GENSK_h

 #pragma datamodel(P128)

                                     /* Data structures and          */
                                     /* constants used with the      */
 #include "qc3cci.h"                 /* cryptographic APIs           */

 /********************************************************************/
 /*  Prototype for calling OPM Generate Symmetric Key API            */
 /********************************************************************/

 #ifdef __ILEC400__
   #pragma linkage (QC3GENSK,OS,nowiden)
 #else
   extern "OS nowiden"
 #endif

 void  QC3GENSK (
         int  * volatile           , /* Key type                     */
         int  * volatile           , /* Key length                   */
         char * volatile           , /* Key format                   */
         char * volatile           , /* Key form                     */
         char * volatile           , /* Key-encrypt key ctx token    */
         char * volatile           , /* Key-encrypt alg ctx token    */
         char * volatile           , /* Crypto Service Provider      */
         char * volatile           , /* Crypto Device Name           */
         char * volatile           , /* Key string                   */
         int  * volatile           , /* Len of area for key          */
         int  * volatile           , /* Len of key returned          */
         void * volatile          ); /* Error Code                   */

 #pragma datamodel(pop)

#endif
