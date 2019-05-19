/* begin_generated_IBM_copyright_prolog                              */
/* This is an automatically generated copyright prolog.              */
/* After initializing,  DO NOT MODIFY OR MOVE                        */
/* ----------------------------------------------------------------- */
/*                                                                   */
/* Product(s):                                                       */
/*     5769-SS1                                                      */
/*     5722-SS1                                                      */
/*                                                                   */
/* (C)Copyright IBM Corp.  1998, 2005                                */
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
 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QHSMMOVF                                   */
 /*                                                                */
 /* Descriptive Name: Move Folder to ASP (QHSMMOVF) API.           */
 /*                                                                */
 /* Description: Prototypes for call API QHSMMOVF.                 */
 /*                                                                */
 /* Header Files Included: None                                    */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List:                                                */
 /*                                                                */
 /* Function Prototype: QHSMMOVF                                   */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= P3664493     4D30  980218 KLG       New Include           */
 /* $A1= D98212.6    v5r1m0 010300 gchaney:  Teraspace stage 2     */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

#ifndef QHSMMOVF_h
 #define QHSMMOVF_h

 #if (__OS400_TGTVRM__>=510)                                /* @A1A*/
     #pragma datamodel(P128)                                /* @A1A*/
 #endif                                                     /* @A1A*/


 /******************************************************************/
 /*  Prototype for QHSMMOVL API                                    */
 /******************************************************************/
 #ifdef __ILEC400__
      #pragma linkage (QHSMMOVF,OS,nowiden)
 #else
      extern "OS"
 #endif
 void QHSMMOVF (char *,        /* Folder name                      */
                int  *,        /* Target ASP                       */
                void *);       /* Error code                       */


 #if (__OS400_TGTVRM__>=510)                                /* @A1A*/
     #pragma datamodel(pop)                                 /* @A1A*/
 #endif                                                     /* @A1A*/

#endif
