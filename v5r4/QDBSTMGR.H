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
/* Header File Name: H/QDBSTMGR                                   */
/*                                                                */
/* Descriptive Name: Common include for statistics manager APIs   */
/*                                                                */
/* 5722-SS1  (C) Copyright IBM Corp. 2001,2001                    */
/* All rights reserved.                                           */
/* US Government Users Restricted Rights -                        */
/* Use, duplication or disclosure restricted                      */
/* by GSA ADP Schedule Contract with IBM Corp.                    */
/*                                                                */
/* Licensed Materials-Property of IBM                             */
/*                                                                */
/* Description: Common Header File for the statistics manager     */
/*              APIs externalized via service program QDBSTMGR.   */
/*              The API entry point prototypes and predefined     */
/*              structures and constants for possible input and   */
/*              output formats and values of the APIs are provided*/
/*                                                                */
/* Header Files Included:                                         */
/*            H/QDBST - common structures and constants           */
/*                                                                */
/* Macros List:                                                   */
/*            None                                                */
/*                                                                */
/* Structure List:                                                */
/*            None                                                */
/*                                                                */
/* Function Prototype List:                                       */
/*             QdbstRequestStatistics                             */
/*             QdbstCancelRequestedStatistics                     */
/*             QdbstDeleteStatistics                              */
/*             QdbstUpdateStatistics                              */
/*             QdbstListStatistics                                */
/*             QdbstListDetailStatistics                          */
/*             QdbstListRequestStatistics                         */
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

#ifndef QDBSTMGR_H
#define QDBSTMGR_H

#if (__OS400_TGTVRM__>=510)
#pragma datamodel(P128)
#endif

/******************************************************************/
/* Common structures and constants across the API group           */
/******************************************************************/
#ifndef QDBST_H
#include "qdbst.h"
#endif

/******************************************************************/
/* Prototype for calling QdbstRequestStatistics API               */
/* in service program QDBSTMGR.                                   */
/******************************************************************/

#ifdef __ILEC400__
  #pragma argument (QdbstRequestStatistics,OS,nowiden)
#else
  extern "C"
#endif

int QdbstRequestStatistics
(
  void            *pInput,
  QDBST_uint32    *piInputLen,
  char            *pInputFormat,
  void            *pFeedback,
  QDBST_uint32    *piFeedbackLen,
  QDBST_uint32    *piFeedbackKeys,
  QDBST_uint32    *piFeedbackKeysCount,
  void            *pErrorCode
);

/******************************************************************/
/* Prototype for calling QdbstCancelRequestedStatistics API       */
/* in service program QDBSTMGR.                                   */
/******************************************************************/

#ifdef __ILEC400__
  #pragma argument (QdbstCancelRequestedStatistics,OS,nowiden)
#else
  extern "C"
#endif

int QdbstCancelRequestedStatistics
(
  void            *pInput,
  QDBST_uint32    *piInputLen,
  char            *pInputFormat,
  void            *pFeedback,
  QDBST_uint32    *piFeedbackLen,
  QDBST_uint32    *piFeedbackKeys,
  QDBST_uint32    *piFeedbackKeysCount,
  void            *pErrorCode
);

/******************************************************************/
/* Prototype for calling QdbstDeleteStatistics API                */
/* in service program QDBSTMGR.                                   */
/******************************************************************/

#ifdef __ILEC400__
  #pragma argument (QdbstDeleteStatistics,OS,nowiden)
#else
  extern "C"
#endif

int QdbstDeleteStatistics
(
  void            *pInput,
  QDBST_uint32    *piInputLen,
  char            *pInputFormat,
  void            *pFeedback,
  QDBST_uint32    *piFeedbackLen,
  QDBST_uint32    *piFeedbackKeys,
  QDBST_uint32    *piFeedbackKeysCount,
  void            *pErrorCode
);

/******************************************************************/
/* Prototype for calling QdbstUpdateStatistics API                */
/* in service program QDBSTMGR.                                   */
/******************************************************************/

#ifdef __ILEC400__
  #pragma argument (QdbstUpdateStatistics,OS,nowiden)
#else
  extern "C"
#endif

int QdbstUpdateStatistics
(
  void            *pInput,
  QDBST_uint32    *piInputLen,
  char            *pInputFormat,
  void            *pFeedback,
  QDBST_uint32    *piFeedbackLen,
  QDBST_uint32    *piFeedbackKeys,
  QDBST_uint32    *piFeedbackKeysCount,
  void            *pErrorCode
);

/******************************************************************/
/* Prototype for calling QdbstListStatistics API                  */
/* in service program QDBSTMGR.                                   */
/******************************************************************/

#ifdef __ILEC400__
  #pragma argument (QdbstListStatistics,OS,nowiden)
#else
  extern "C"
#endif

int QdbstListStatistics
(
  char            *pUserSpaceName,
  char            *pOutputFormat,
  void            *pInput,
  QDBST_uint32    *piInputLen,
  char            *pInputFormat,
  void            *pErrorCode
);

/******************************************************************/
/* Prototype for calling QdbstListDetailStatistics API            */
/* in service program QDBSTMGR.                                   */
/******************************************************************/

#ifdef __ILEC400__
   #pragma argument (QdbstListDetailStatistics,OS,nowiden)
#else
   extern "C"
#endif

int QdbstListDetailStatistics
(
   char            *pUserSpaceName,
   char            *pOutputFormat,
   void            *pInput,
   QDBST_uint32    *piInputLen,
   char            *pInputFormat,
   void            *pErrorCode
);

/******************************************************************/
/* Prototype for calling QdbstListRequestedStatistics API         */
/* in service program QDBSTMGR.                                   */
/******************************************************************/

#ifdef __ILEC400__
   #pragma argument (QdbstListRequestedStatistics,OS,nowiden)
#else
   extern "C"
#endif

int QdbstListRequestedStatistics
(
   char            *pUserSpaceName,
   char            *pOutputFormat,
   void            *pInput,
   QDBST_uint32    *piInputLen,
   char            *pInputFormat,
   void            *pErrorCode
);

/******************************************************************/

#if (__OS400_TGTVRM__>=510)
#pragma datamodel(pop)
#endif

#endif
