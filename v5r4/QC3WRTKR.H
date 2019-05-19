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
/* Header File Name: H/QC3WRTKR                                      */
/*                                                                   */
/* Descriptive Name: Include for OPM Write Key Record API            */
/*                                                                   */
/* Description: This API securely stores a key value in a key store  */
/*              file.                                                */
/*                                                                   */
/* Header Files Included:                                            */
/*              qc3cci.h  - Data structures and constants used       */
/*                          with the cryptographic APIs.             */
/*                                                                   */
/* Macros List:             None                                     */
/*                                                                   */
/* Structure List:          None                                     */
/*                                                                   */
/* Function Prototype List: QC3WRTKR                                 */
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
#ifndef QC3WRTKR_h
 #define QC3WRTKR_h

 #pragma datamodel(P128)

                                     /* Data structures and          */
                                     /* constants used with the      */
 #include "qc3cci.h"                 /* cryptographic APIs           */

 /********************************************************************/
 /*  Prototype for calling OPM Write Key Record API                  */
 /********************************************************************/

 #ifdef __ILEC400__
   #pragma linkage (QC3WRTKR,OS,nowiden)
 #else
   extern "OS nowiden"
 #endif

 void  QC3WRTKR (
         char * volatile           , /* Qualified key store file name*/
         char * volatile           , /* Record label                 */
         char * volatile           , /* Key string                   */
         int  * volatile           , /* Length of key string         */
         char * volatile           , /* Key format                   */
         int  * volatile           , /* Key type                     */
         int  * volatile           , /* Disallowed function          */
         char * volatile           , /* Key form                     */
         char * volatile           , /* Key-encrypt key ctx token    */
         char * volatile           , /* Key-encrypt alg ctx token    */
         void * volatile          ); /* Error Code                   */

 #pragma datamodel(pop)

#endif
