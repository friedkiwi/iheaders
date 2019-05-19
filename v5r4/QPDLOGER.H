/* begin_generated_IBM_copyright_prolog                              */
/* This is an automatically generated copyright prolog.              */
/* After initializing,  DO NOT MODIFY OR MOVE                        */
/* ----------------------------------------------------------------- */
/*                                                                   */
/* Product(s):                                                       */
/*     1994-2005                                                     */
/*     5722-SS1                                                      */
/*                                                                   */
/* (C)Copyright IBM Corp.  1994, 2005                                */
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
 /* Header File Name: H/QPDLOGER                                   */
 /*                                                                */
 /* Descriptive Name: Log Software Error.                          */
 /*                                                                */
 /*                                                                */
 /* Description: The Log Software Error API allows a program to    */
 /*              report a software problem to the local AS/400     */
 /*              system and provide the data needed to resolve     */
 /*              the problem.                                      */
 /*                                                                */
 /* Header Files Included: H/QPDLOGER                              */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: None.                                          */
 /*                                                                */
 /* Function Prototype List: QPDLOGER                              */
 /*                                                                */
 /*                                                                */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= D28620       3D10  940327 THANSON:  New Include           */
 /* $A1= D9934931    v5r1m0 001009 ROCH   :  Teraspace Stage II    */
 /* $B0= D93040.3    v5r4m0 041003 CAMARENA: Add problem log entry */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

#ifndef QPDLOGER_h
#define QPDLOGER_h

/********************************************************************/
/*  Prototype for calling Log Software Error API QPDLOGER           */
/********************************************************************/
#ifdef __ILEC400__
  #pragma linkage (QPDLOGER, OS,nowiden)
#else
  extern "OS"
#endif

 #if(__OS400_TGTVRM__>=510)                                  /*@A1A*/
     #pragma datamodel(P128)                                 /*@A1A*/
 #endif                                                      /*@A1A*/
void QPDLOGER (char *,          /* Suspected program name         */
               void *,            /* Detection ID                   */
               char *,            /* Message reference key          */
               int,               /* Point of failure               */
               char *,            /* Print job log                  */
               void *,            /* Data items                     */
               void *,            /* Data item offset and length    */
               int,               /* Number of data items           */
               void *,            /* Object name                    */
               int,               /* Number of object names         */
               void *,            /* Error code                     */
               ...);              /* Optional Parameter:
                                     ILE module name
                                     Problem log entry creation @B0A*/

 #if (__OS400_TGTVRM__>=510)                                 /*@A1A*/
     #pragma datamodel(pop)                                  /*@A1A*/
 #endif                                                      /*@A1A*/

#endif
