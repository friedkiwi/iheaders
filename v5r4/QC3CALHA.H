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
/* Header File Name: H/QC3CALHA                                      */
/*                                                                   */
/* Descriptive Name: Include for OPM Calculate Hash API              */
/*                                                                   */
/* Description: This API uses a one-way hash function to produce     */
/*              a fixed-length output string from a variable-length  */
/*              input string.                                        */
/*                                                                   */
/* Header Files Included:                                            */
/*              qc3cci.h  - Data structures and constants used       */
/*                          with the cryptographic APIs.             */
/*                                                                   */
/* Macros List:             None                                     */
/*                                                                   */
/* Structure List:          None                                     */
/*                                                                   */
/* Function Prototype List: QC3CALHM                                 */
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
#ifndef QC3CALHA_h
 #define QC3CALHA_h

 #pragma datamodel(P128)

                                     /* Data structures and          */
                                     /* constants used with the      */
 #include "qc3cci.h"                 /* cryptographic APIs           */

 /********************************************************************/
 /*  Prototype for calling OPM Calculate Hash API                    */
 /********************************************************************/

 #ifdef __ILEC400__
   #pragma linkage (QC3CALHA,OS,nowiden)
 #else
   extern "OS nowiden"
 #endif

 void  QC3CALHA (
         char * volatile           , /* Input data                   */
         int  * volatile           , /* Length of input data         */
         char * volatile           , /* Input data format name       */
         char * volatile           , /* Algorithm description        */
         char * volatile           , /* Algorithm desc format name   */
         char * volatile           , /* Crypto Service Provider      */
         char * volatile           , /* Crypto Device Name           */
         char * volatile           , /* Hash                         */
         void * volatile          ); /* Error Code                   */

 #pragma datamodel(pop)

#endif
