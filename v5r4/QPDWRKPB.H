/*** START HEADER FILE SPECIFICATIONS ********************************/
/*                                                                   */
/* Header File Name: H/QPDWRKPB                                      */
/*                                                                   */
/* Descriptive Name: Work With Problem.                              */
/*                                                                   */
/* 5763-SS1  (C) Copyright IBM Corp. 1994,1994                       */
/* All rights reserved.                                              */
/* US Government Users Restricted Rights -                           */
/* Use, duplication or disclosure restricted                         */
/* by GSA ADP Schedule Contract with IBM Corp.                       */
/*                                                                   */
/* Licensed Materials-Property of IBM                                */
/*                                                                   */
/*                                                                   */
/* Description: The Work with Problem PAI uses a problem log entry   */
/*              to analyze and prepare a machine-detected hardware   */
/*              problem for reporting.                               */
/*                                                                   */
/* Header Files Included: None.                                      */
/*                                                                   */
/* Macros List: None.                                                */
/*                                                                   */
/* Structure List: None.                                             */
/*                                                                   */
/* Function Prototype List: QPDWRKPB.                                */
/*                                                                   */
/* Change Activity:                                                  */
/*                                                                   */
/* CFD List:                                                         */
/*                                                                   */
/* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION       */
/* ---- ------------ ----- ------ --------- ------------------------ */
/* $A0= D2862000     3D10  940227 LUPA:     New Include              */
/*                                                                   */
/* End CFD List.                                                     */
/*                                                                   */
/*  Additional notes about the Change Activity                       */
/* End Change Activity.                                              */
/*** END HEADER FILE SPECIFICATIONS **********************************/

#ifndef QPDWRKPB_h
#define QPDWRKPB_h
#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(P128)      /* @B1A*/
#endif                       /* @B1A*/

/********************************************************************/
/*  Prototype for QPDWRKPB API                                      */
/********************************************************************/
  #ifdef __ILEC400__
       #pragma linkage (QPDWRKPB,OS,nowiden)
  #else
       extern "OS"
  #endif
void QPDWRKPB (char *,           /* Display Panels                  */
               char *,           /* Problem Id Number               */
               void *,           /* Origin System                   */
               char *,           /* Current Problem Status          */
               void *,           /* Requested Problem Statuses      */
               int   ,           /* Number of Requested Problem S.  */
               char *,           /* Service Provider Network Id     */
               char *,           /* Service Provider control Pt Name*/
               char *,           /* Problem Severity                */
               void *,           /* Error Code                      */
               ...);             /* Optional Parameters:
                                      Note text
                                      Length of Note Text           */
#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(pop)       /* @B1A*/
#endif                       /* @B1A*/
#endif
