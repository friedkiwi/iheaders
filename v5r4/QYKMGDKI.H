/* begin_generated_IBM_copyright_prolog                              */
/* This is an automatically generated copyright prolog.              */
/* After initializing,  DO NOT MODIFY OR MOVE                        */
/* ----------------------------------------------------------------- */
/*                                                                   */
/* Product(s):                                                       */
/*     5722-SS1                                                      */
/*                                                                   */
/* (C)Copyright IBM Corp.  2005, 2005                                */
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
/*********************************************************************/
/*                                                                   */
/* Header File Name: H/QYKMGDKI                                      */
/*                                                                   */
/* Descriptive Name:  Get Default Key Item                           */
/*                                                                   */
/* Description: The Get Default Key Item API returns the label       */
/*              of the default certificate for a given               */
/*              certificate store.  If a default has not been        */
/*              designated, a NULL label is returned.  If the        */
/*              length of the certificate label is longer than       */
/*              the length provided, no label is returned and        */
/*              the length of the label returned indicates how       */
/*              big the length of the label provided must be in      */
/*              order for the label to be returned.                  */
/*                                                                   */
/* Header Files Included:                                            */
/*        qusec.h       Error code structure                         */
/*                                                                   */
/* Macros List: None.                                                */
/*                                                                   */
/* Structure List: None.                                             */
/*                                                                   */
/* Function Prototype List: QYKMGDKI                                 */
/*                                                                   */
/* Change Activity:                                                  */
/* FLAG REASON   LEVEL  DATE       PGMR   COMMENTS                   */
/* ---- -------- ------ ---------- ------ -------------------------- */
/* $A0= D93233.1 v5r4m0 041202     ROCH:  New Part                   */
/* End CFD List.                                                     */
/*                                                                   */
/*  Additional notes about the Change Activity                       */
/* End Change Activity.                                              */
/*** END HEADER FILE SPECIFICATIONS **********************************/
#ifndef QYKMGDKI_h
#define QYKMGDKI_h

#include <qusec.h>                 /* Error code structure           */
#if (__OS400_TGTVRM__>=510)
#pragma datamodel(P128)
#endif

/*********************************************************************/
/*  Prototype for calling Get Default Key Item API QYKMGDKI          */
/*********************************************************************/
#ifdef __ILEC400__
#pragma linkage (QYKMGDKI,OS,nowiden)
#else
   extern "OS nowiden"
#endif

     void  QYKMGDKI (
                  void *,          /* Certificate store path and
                                      file name                      */
                  int *,           /* Length of certificate store
                                      path and file name             */
                  char *,          /* Format of certificate store
                                      path and file name             */
                  char *,          /* default certificate label      */
                  int *,           /* Length of default certificate
                                      label provided                 */
                  int *,           /* Length of default certificate
                                      label returned                 */
                  void *);         /* Error code                     */

#if (__OS400_TGTVRM__>=510)
   #pragma datamodel(pop)
#endif
#endif
