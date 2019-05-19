/* begin_generated_IBM_copyright_prolog                              */
/* This is an automatically generated copyright prolog.              */
/* After initializing,  DO NOT MODIFY OR MOVE                        */
/* ----------------------------------------------------------------- */
/*                                                                   */
/* Product(s):                                                       */
/*     5722-SS1                                                      */
/*                                                                   */
/* (C)Copyright IBM Corp.  2001, 2003                                */
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
/* Header File Name: H/QDBSTRS                                    */
/*                                                                */
/* Descriptive Name: Include for OPM QDBSTRS API                  */
/*                                                                */
/* 5722-SS1  (C) Copyright IBM Corp. 2001,2001                    */
/* All rights reserved.                                           */
/* US Government Users Restricted Rights -                        */
/* Use, duplication or disclosure restricted                      */
/* by GSA ADP Schedule Contract with IBM Corp.                    */
/*                                                                */
/* Licensed Materials-Property of IBM                             */
/*                                                                */
/* Description: Include for OPM QDBSTRS API,                      */
/*              the stub program for the                          */
/*              ILE QdbstRequestStatistics API provided by        */
/*              service program QDBSTMGR.                         */
/*                                                                */
/* Header Files Included:                                         */
/*            qdbst.h - Common structures and constants           */
/*                                                                */
/* Macros List:                                                   */
/*            QDBSTRS_H   - include guard                         */
/*                                                                */
/* Structure List:                                                */
/*                                                                */
/* Function Prototype List:                                       */
/*            QDBSTRS                                             */
/*                                                                */
/* Change Activity:                                               */
/*                                                                */
/* Flag   Reason   Release  Userid    Date      Description       */
/* ----  --------  -------  --------  --------  -----------       */
/*  n/a   D98443   v5r2m0   v2kea395  05/11/01  created           */
/*  n/a   D98443   v5r2m0   v2kea395  11/09/01  changed           */
/*                                                                */
/* Additional Notes About the Change Activity:                    */
/*                                                                */
/* END CHANGE ACTIVITY.                                           */
/*** END HEADER FILE SPECIFICATIONS *******************************/

#ifndef QDBSTRS_H
#define QDBSTRS_H

#if (__OS400_TGTVRM__>=510)
#pragma datamodel(P128)
#endif

/******************************************************************/
/* Common include for statistics manager APIs                     */
/******************************************************************/

#ifndef QDBST_H
#include "qdbst.h"
#endif

/******************************************************************/
/* Prototype for calling OPM QDBSTRS API                          */
/******************************************************************/

#ifdef __ILEC400__
   #pragma linkage (QDBSTRS,OS,nowiden)
#else
   extern "OS"
#endif

int QDBSTRS
(
   void         *pInput,
   QDBST_uint32 *piInputLen,
   char         *pInputFormat,
   void         *pFeedback,
   QDBST_uint32 *piFeedbackLen,
   QDBST_uint32 *piFeedbackKeys,
   QDBST_uint32 *piFeedbackKeysCount,
   void         *pErrorCode
);

#if (__OS400_TGTVRM__>=510)
#pragma datamodel(pop)
#endif

#endif
