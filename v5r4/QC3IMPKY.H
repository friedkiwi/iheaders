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
/* Header File Name: H/QC3IMPKY                                      */
/*                                                                   */
/* Descriptive Name: Include for OPM Import Key API                  */
/*                                                                   */
/* Description: This API encrypts a key under a master key.          */
/*                                                                   */
/* Header Files Included:                                            */
/*              qc3cci.h  - Data structures and constants used       */
/*                          with the cryptographic APIs.             */
/*                                                                   */
/* Macros List:             None                                     */
/*                                                                   */
/* Structure List:          None                                     */
/*                                                                   */
/* Function Prototype List: QC3IMPKY                                 */
/*                                                                   */
/* Change Activity:                                                  */
/*                                                                   */
/* CFD List:                                                         */
/*                                                                   */
/* FLAG REASON   LEVEL  DATE   PGMR      CHANGE DESCRIPTION          */
/* ---- -------- -----  ------ --------- ----------------------------*/
/* $A0= D93081   v5r4m0 040825 ROCH      New Include                 */
/*                                                                   */
/* End CFD List.                                                     */
/*                                                                   */
/* Additional notes about the Change Activity                        */
/*                                                                   */
/* End Change Activity.                                              */
/*** END HEADER FILE SPECIFICATIONS **********************************/
#ifndef QC3IMPKY_h
 #define QC3IMPKY_h

 #pragma datamodel(P128)

                                     /* Data structures and          */
                                     /* constants used with the      */
 #include "qc3cci.h"                 /* cryptographic APIs           */

 /********************************************************************/
 /*  Prototype for calling OPM Import Key API                        */
 /********************************************************************/

 #ifdef __ILEC400__
   #pragma linkage (QC3IMPKY,OS,nowiden)
 #else
   extern "OS nowiden"
 #endif

 void  QC3IMPKY (
         char * volatile           , /* Key string                   */
         int  * volatile           , /* Length of key string         */
         char * volatile           , /* Key form                     */
         char * volatile           , /* KEK context token            */
         char * volatile           , /* KEA context token            */
         int  * volatile           , /* Master key ID                */
         int  * volatile           , /* Disallowed function          */
         char * volatile           , /* Master key KVV               */	
         char * volatile           , /* Imported key                 */
         int  * volatile           , /* Len of area for imported key */
         int  * volatile           , /* Len of imported key returned */
         void * volatile          ); /* Error Code                   */

 #pragma datamodel(pop)

#endif
