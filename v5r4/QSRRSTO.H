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
/*** START HEADER FILE SPECIFICATIONS ********************************/
/*                                                                   */
/* Header File Name: H/QSRRSTO                                       */
/*                                                                   */
/* Descriptive Name: Restore Object List                             */
/*                                                                   */
/* Description: The Restore Object List API restores a list of       */
/*              objects specified by the user.                       */
/*                                                                   */
/* Header Files Included: qsr.h                                      */
/*                                                                   */
/* Macros List: None.                                                */
/*                                                                   */
/* Structure List: Qsr_SPLFDTA_New_Restore_Attrs_t                   */
/*                                                                   */
/* Function Prototype List: QSRRSTO                                  */
/*                                                                   */
/* Change Activity:                                                  */
/*                                                                   */
/* CFD List:                                                         */
/*                                                                   */
/* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION       */
/* ---- ------------ ----- ------ --------- ------------------------ */
/* $A0= D9965404     5D40  040229 ROCH     :New Include              */
/*                                                                   */
/* End CFD List.                                                     */
/*                                                                   */
/*  Additional notes about the Change Activity                       */
/* End Change Activity.                                              */
/*** END HEADER FILE SPECIFICATIONS **********************************/

#ifndef QSRRSTO_h
 #define QSRRSTO_h

#include <qsr.h>

#if (__OS400_TGTVRM__>=510)
#pragma datamodel(P128)
#endif

 /******************************************************************/
 /*  Prototype for calling QSRRSTO                                 */
 /******************************************************************/
 #ifdef __ILEC400__
      #pragma linkage (QSRRSTO,OS,nowiden)
 #else
      extern "OS"
 #endif
 void QSRRSTO(void *,                /* Qualified user space name  */
              void *);               /* Error code                 */

/******************************************************************/
/* Type Definitions                                               */
/*                                                                */
/* NOTE: See header file QSR for shared type definitions.         */
/******************************************************************/
typedef _Packed struct Qsr_SPLFDTA_New_Restore_Attrs {
    int New_Attrs_Length;
    int Expiration_Days;
    char Output_Queue_Name[10];
    char Output_Queue_Library[10];
    int Restore_Existing_File;
} Qsr_SPLFDTA_New_Restore_Attrs_t;                         /* @TJA*/

#if (__OS400_TGTVRM__>=510)
#pragma datamodel(pop)
#endif

#endif
