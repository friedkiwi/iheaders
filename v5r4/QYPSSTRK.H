/* begin_generated_IBM_copyright_prolog                              */
/* This is an automatically generated copyright prolog.              */
/* After initializing,  DO NOT MODIFY OR MOVE                        */
/* ----------------------------------------------------------------- */
/*                                                                   */
/* Product(s):                                                       */
/*     5722-SS1                                                      */
/*                                                                   */
/* (C)Copyright IBM Corp.  1998, 2003                                */
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

/* ----------------------------------------------------------------- */

 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /* Description: Describe your function here.                      */
 /*                                                                */
 /* Header Files Included: H/OPM-API-name or Service-pgm-name      */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: None.                                          */
 /*                                                                */
 /* Function Prototype List: QYPSSTRK.                             */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= D            5D10  021001 ROCH:     New Include           */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/
#ifndef  QYPSSTRK_h
#define  QYPSSTRK_h
#if (__OS400_TGTVRM__>=510)
#pragma datamodel(P128)
#endif

/*******************************************************************/
/*  Prototype for calling Start Task API (QYPSSTRK).               */
/*******************************************************************/
#ifdef __ILEC400__
#pragma linkage (QYPSSTRK,OS,nowiden)
#elif  __AIXxiCC__
#pragma linkage (QYPSSTRK,OS,nowiden)
extern "OS"
#else
extern "OS"
#endif

void QYPSSTRK(char *,            /* Task Information  */
              char *,            /* Format */
              void *);           /* Error code */


#if (__OS400_TGTVRM__>=510)
#pragma datamodel(pop)
#endif
#endif
