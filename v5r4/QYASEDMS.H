/* begin_generated_IBM_copyright_prolog                              */
/* This is an automatically generated copyright prolog.              */
/* After initializing,  DO NOT MODIFY OR MOVE                        */
/* ----------------------------------------------------------------- */
/*                                                                   */
/* Product(s):                                                       */
/*     5769-SS1                                                      */
/*     5722-SS1                                                      */
/*                                                                   */
/* (C)Copyright IBM Corp.  2000, 2003                                */
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

#ifndef _QYASEDMS_H
#define _QYASEDMS_H

/*** START HEADER FILE SPECIFICATIONS ********************************/
/*                                                                   */
/* Header File Name       : H/QYASEDMS                               */
/*                                                                   */
/* Descriptive Name       : End DASD Management Session              */
/*                                                                   */
/*                                                                   */
/* This header file is an external product interface, all            */
/* modifications must be upward compatible.                          */
/*                                                                   */
/*                                                                   */
/* Description            : Include header file containing the       */
/*                          function prototype for the End DASD      */
/*                          DASD Management Session API.             */
/*                                                                   */
/* Macros List            : None                                     */
/*                                                                   */
/* Structure List         : None                                     */
/*                                                                   */
/* Function Prototype List: QYASEDMS                                 */
/*                                                                   */
/* Restrictions           :                                          */
/*    WARNING: Variables that are declared in this include must be   */
/*             no longer than 30 characters in length!!!!!!!!!!!!!   */
/*                                                                   */
/* Change Activity        :                                          */
/*                                                                   */
/* CFD List               :                                          */
/*                                                                   */
/* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION       */
/* ---- ------------ ----- ------ --------- -----------------------  */
/* $A0= D9753800     4D50  990304 roch      New Include              */
/*                                                                   */
/* End CFD List.                                                     */
/*                                                                   */
/*  Additional notes about the change activity                       */
/* End Change Activity.                                              */
/*                                                                   */
/*** END HEADER FILE SPECIFICATIONS **********************************/
#include <qyasdm.h>
#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(P128)      /* @B1A*/
#endif                       /* @B1A*/

#ifdef __ILEC400__
      #pragma linkage(QYASEDMS, OS, nowiden)
#else
      extern "OS"
#endif

void QYASEDMS
(
   /* Required parameters */
   char     *,      /* Session Handle      */
   void     *       /* Error code          */
);

#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(pop)       /* @B1A*/
#endif                       /* @B1A*/
#endif /*_QYASEDMS_H*/

