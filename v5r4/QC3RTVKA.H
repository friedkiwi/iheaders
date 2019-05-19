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
/* Header File Name: H/QC3RTVKA                                      */
/*                                                                   */
/* Descriptive Name: Include for OPM Retrieve Key Record Attributes  */
/*                   API                                             */
/*                                                                   */
/* Description: This API returns the key type, key size, master key  */
/*              id under which it is encrypted, and the master key   */
/*              KVV for a key record.                                */
/*                                                                   */
/* Header Files Included:                                            */
/*              qc3cci.h  - Data structures and constants used       */
/*                          with the cryptographic APIs.             */
/*                                                                   */
/* Macros List:             None                                     */
/*                                                                   */
/* Structure List:          None                                     */
/*                                                                   */
/* Function Prototype List: QC3RTVKA                                 */
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
#ifndef QC3RTVKA_h
 #define QC3RTVKA_h

 #pragma datamodel(P128)

                                     /* Data structures and          */
                                     /* constants used with the      */
 #include "qc3cci.h"                 /* cryptographic APIs           */

 /********************************************************************/
 /*  Prototype for calling OPM Retrieve Key Record Attributes API    */
 /********************************************************************/

 #ifdef __ILEC400__
   #pragma linkage (QC3RTVKA,OS,nowiden)
 #else
   extern "OS nowiden"
 #endif

 void  QC3RTVKA (
         char * volatile           , /* Qualified key store file name*/
         char * volatile           , /* Record label                 */
         int  * volatile           , /* Key type                     */
         int  * volatile           , /* Key size                     */
         int  * volatile           , /* Master key ID                */
         char * volatile           , /* Master key verification value*/
         int  * volatile           , /* Disallowed function          */
         void * volatile          ); /* Error Code                   */

 #pragma datamodel(pop)

#endif
