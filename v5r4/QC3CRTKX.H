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
/* Header File Name: H/QC3CRTKX                                      */
/*                                                                   */
/* Descriptive Name: Include for OPM Create Key Context API          */
/*                                                                   */
/* Description: The Create Key Context API creates a temporary       */
/*              object for holding the key information for a         */
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
/* Function Prototype List: QC3CRTKX                                 */
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
#ifndef QC3CRTKX_h
 #define QC3CRTKX_h

 #pragma datamodel(P128)

                                     /* Data structures and          */
                                     /* constants used with the      */
 #include "qc3cci.h"                 /* cryptographic APIs           */

 /********************************************************************/
 /*  Prototype for calling OPM Create Key Context API                */
 /********************************************************************/

 #ifdef __ILEC400__
   #pragma linkage (QC3CRTKX,OS,nowiden)
 #else
   extern "OS nowiden"
 #endif

 void  QC3CRTKX (
         char * volatile           , /* Key string                   */
         int  * volatile           , /* Length of key string         */
	 char * volatile           , /* Key format                   */
         int  * volatile           , /* Key type                     */
	 char * volatile           , /* Key form                     */
	 char * volatile           , /* Key-encrypt key ctx token    */
	 char * volatile           , /* Key-encrypt alg ctx token    */
	 char * volatile           , /* Key context token            */
         void * volatile          ); /* Error code                   */

 #pragma datamodel(pop)

#endif
