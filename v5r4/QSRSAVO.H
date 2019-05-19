/* begin_generated_IBM_copyright_prolog                              */
/* This is an automatically generated copyright prolog.              */
/* After initializing,  DO NOT MODIFY OR MOVE                        */
/* ----------------------------------------------------------------- */
/*                                                                   */
/* Product(s):                                                       */
/*     5763-SS1                                                      */
/*     5716-SS1                                                      */
/*     5769-SS1                                                      */
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
/*** START HEADER FILE SPECIFICATIONS ********************************/
/*                                                                   */
/* Header File Name: H/QSRSAVO                                       */
/*                                                                   */
/* Descriptive Name: Save Object List                                */
/*                                                                   */
/* Description: The Save Object List API saves a list of objects     */
/*              specified by the user.                               */
/*                                                                   */
/* Header Files Included: qsr.h                                      */
/*                                                                   */
/* Macros List: None.                                                */
/*                                                                   */
/* Structure List: Qsr_SPLFDTA_New_Save_Attrs_t                      */
/*                                                                   */
/* Function Prototype List: QSRSAVO                                  */
/*                                                                   */
/* Change Activity:                                                  */
/*                                                                   */
/* CFD List:                                                         */
/*                                                                   */
/* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION       */
/* ---- ------------ ----- ------ --------- ------------------------ */
/* $A0= D2862000     3D10  940406 ROCH     :New Include              */
/* $TJ= D9965404     5D40  040229 ROCH     :S/R spooled files        */
/*                                                                   */
/* End CFD List.                                                     */
/*                                                                   */
/*  Additional notes about the Change Activity                       */
/* End Change Activity.                                              */
/*** END HEADER FILE SPECIFICATIONS **********************************/

#ifndef QSRSAVO_h
 #define QSRSAVO_h

#include <qsr.h>                                              /* @TJA*/

#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(P128)      /* @B1A*/
#endif                       /* @B1A*/

 /******************************************************************/
 /*  Prototype for calling QSRSAVO                                 */
 /******************************************************************/
 #ifdef __ILEC400__
      #pragma linkage (QSRSAVO,OS,nowiden)
 #else
      extern "OS"
 #endif
 void QSRSAVO(void *,                /* Qualified user space name  */
              void *);               /* Error code                 */

/******************************************************************/
/* Type Definitions                                               */
/*                                                                */
/* NOTE: See header file QSR for shared type definitions.         */
/******************************************************************/
typedef _Packed struct Qsr_SPLFDTA_New_Save_Attrs {
    int New_Attrs_Length;
    int Expiration_Days;
} Qsr_SPLFDTA_New_Save_Attrs_t;                            /* @TJA*/

#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(pop)       /* @B1A*/
#endif                       /* @B1A*/

#endif
