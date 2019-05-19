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
/* Header File Name: H/QC3GENRN                                      */
/*                                                                   */
/* Descriptive Name: Include for OPM Gen Pseudorandom Numbers API    */
/*                                                                   */
/* Description: This API generates pseudorandom numbers.             */
/*                                                                   */
/* Header Files Included:                                            */
/*              qc3data.h - Data structures and constants used       */
/*                          with the cryptographic APIs.             */
/*                                                                   */
/* Macros List:             None                                     */
/*                                                                   */
/* Structure List:          None                                     */
/*                                                                   */
/* Function Prototype List: QC3GENRN                                 */
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
#ifndef QC3GENRN_h
 #define QC3GENRN_h

 #pragma datamodel(P128)

                                     /* Data structures and          */
                                     /* constants used with the      */

 /********************************************************************/
 /*  Prototype for calling OPM Calculate HMAC API                    */
 /********************************************************************/

 #ifdef __ILEC400__
   #pragma linkage (QC3GENRN,OS,nowiden)
 #else
   extern "OS nowiden"
 #endif

 void  QC3GENRN (
         char *                    , /* PRN data                     */
         unsigned int              , /* PRN length                   */
         char *                    , /* PRN type                     */
         char *                    , /* PRN parity                   */
         void *                   ); /* Error Code                   */

 #pragma datamodel(pop)

#endif
