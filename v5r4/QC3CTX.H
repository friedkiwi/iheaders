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
/* Header File Name: H/QC3CTX                                        */
/*                                                                   */
/* Descriptive Name: Cryptographic Context APIs                      */
/*                                                                   */
/* Description: These APIs are used for creating and destroying      */
/*              cryptographic contexts.   The cryptographic          */
/*              contexts are used to temporarily hold keys,          */
/*              algorithms, parameters, and state of the             */
/*              cryptographic operation.                             */
/*                                                                   */
/* Header Files Included:                                            */
/*              qc3cci.h  - Data structures and constants used       */
/*                          with the cryptographic APIs.             */
/*                                                                   */
/* Macros List:             None                                     */
/*                                                                   */
/* Structure List:          None                                     */
/*                                                                   */
/* Function Prototype List: Qc3CreateAlgorithmContext                */
/*                          Qc3DestroyAlgorithmContext               */
/*                          Qc3CreateKeyContext                      */
/*                          Qc3DestroyKeyContext                     */
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


#ifndef _QC3CTX_h
 #define _QC3CTX_h

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
 /* Prototype for calling Create Algorithm Context API               */
 /********************************************************************/

 void Qc3CreateAlgorithmContext (
       char * volatile             , /* Algorithm description        */
       char * volatile             , /* Algorithm desc format name   */
       char * volatile             , /* Algorithm context token      */
       void * volatile            ); /* Error code                   */

 /********************************************************************/
 /* Prototype for calling Destroy Algorithm Context API              */
 /********************************************************************/

 void Qc3DestroyAlgorithmContext (
       char * volatile             , /* Algorithm context token      */
       void * volatile            ); /* Error code                   */

 /********************************************************************/
 /* Prototype for calling Create Key Context API                     */
 /********************************************************************/

 void Qc3CreateKeyContext (
       char * volatile             , /* Key string                   */
       int  * volatile             , /* Length of key string         */
       char * volatile             , /* Key format                   */
       int  * volatile             , /* Key type                     */
       char * volatile             , /* Key form                     */
       char * volatile             , /* Key-encrypt key ctx token    */
       char * volatile             , /* Key-encrypt alg ctx token    */
       char * volatile             , /* Key context token            */
       void * volatile            ); /* Error code                   */

 /********************************************************************/
 /* Prototype for calling Destroy Key Context API                    */
 /********************************************************************/

 void Qc3DestroyKeyContext (
       char * volatile             , /* Key context token            */
       void * volatile            ); /* Error code                   */

 #ifdef __ILEC400__
    #pragma checkout(resume)
 #else
    }
 #endif

 #pragma datamodel(pop)

#endif                                                /* _QC3CTX_h */

