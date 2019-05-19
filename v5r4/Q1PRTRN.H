/* begin_generated_IBM_copyright_prolog                              */
/* This is an automatically generated copyright prolog.              */
/* After initializing,  DO NOT MODIFY OR MOVE                        */
/* ----------------------------------------------------------------- */
/*                                                                   */
/* Product(s):                                                       */
/*     5769-PM1                                                      */
/*     5722-SS1                                                      */
/*                                                                   */
/* (C)Copyright IBM Corp.  2000, 2005                                */
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
/*** START HEADER FILE SPECIFICATIONS ********************************/
/*                                                                   */
/* Header File Name:   H/Q1PRTRN                                     */
/*                                                                   */
/* Descriptive Name: Retransmit PM/400 data API                      */
/*                                                                   */
/* 5722-SS1  (C) Copyright IBM Corp. 2000                            */
/* All rights reserved.                                              */
/* US Government Users Restricted Rights -                           */
/* Use, duplication or disclosure restricted                         */
/* by GSA ADP Schedule Contract with IBM Corp.                       */
/*                                                                   */
/* Licensed Materials-Property of IBM                                */
/*                                                                   */
/*                                                                   */
/* Description: The Retransmit PM/400 data (Q1PRTRN) API marks       */
/*              already transmitted data for retransmission.         */
/*                                                                   */
/*                                                                   */
/* Header Files Included: None.                                      */
/*                                                                   */
/* Macros List: None.                                                */
/*                                                                   */
/* Structure List: None.                                             */
/*                                                                   */
/* Function Prototype List: Q1PRTRN                                  */
/*                                                                   */
/* Change Activity:                                                  */
/*                                                                   */
/* CFD List:                                                         */
/*                                                                   */
/* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION       */
/* ---- ------------ ----- ------ --------- ------------------------ */
/* $A0= D9829200     5D10  000829 RHB       New Include              */
/*                                                                   */
/* End CFD List.                                                     */
/*                                                                   */
/*  Additional notes about the Change Activity                       */
/* End Change Activity.                                              */
/*** END HEADER FILE SPECIFICATIONS **********************************/


#ifndef Q1PRTRN_h
 #define Q1PRTRN_h

#if (__OS400_TGTVRM__>=510)
#pragma datamodel(P128)
#endif

 /******************************************************************/
 /*  Prototype for Q1PRTRN API                                     */
 /******************************************************************/

 #ifdef __ILEC400__
    #pragma linkage (Q1PRTRN,OS,nowiden)
 #else
    extern "OS"
 #endif
 void Q1PRTRN (char *);   /* Start Date                   */

#if (__OS400_TGTVRM__>=510)
#pragma datamodel(pop)
#endif
#endif

