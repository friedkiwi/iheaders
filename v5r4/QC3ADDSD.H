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
/* Header File Name: H/QC3ADDSD                                      */
/*                                                                   */
/* Descriptive Name: Include for OPM Add Seed for Pseudorandom       */
/*                   Number Generator API                            */
/*                                                                   */
/* Description: This API allows the user to add seed into the        */
/*              server's pseudorandom number generator.              */
/*                                                                   */
/* Header Files Included:                                            */
/*              qc3data.h - Data structures and constants used       */
/*                          with the cryptographic APIs.             */
/*                                                                   */
/* Macros List:             None                                     */
/*                                                                   */
/* Structure List:          None                                     */
/*                                                                   */
/* Function Prototype List: QC3ADDSD                                 */
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
#ifndef QC3ADDSD_h
 #define QC3ADDSD_h

 #pragma datamodel(P128)

                                     /* Data structures and          */
                                     /* constants used with the      */

 /********************************************************************/
 /*  Prototype for calling OPM Add Seed for PRNG API                 */
 /********************************************************************/

 #ifdef __ILEC400__
   #pragma linkage (QC3ADDSD,OS,nowiden)
 #else
   extern "OS nowiden"
 #endif

 void  QC3ADDSD (
         char *                    , /* Seed data                    */
         unsigned int              , /* Seed length                  */
         void *                   ); /* Error Code                   */

 #pragma datamodel(pop)

#endif
