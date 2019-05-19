/*** START HEADER FILE SPECIFICATIONS ********************************/
/*                                                                   */
/* Header File Name: H/ETEPSEPH                                      */
/*                                                                   */
/* Descriptive Name: Program Service Entry Point Stop Exit Program   */
/*                   Header.                                         */
/*                                                                   */
/* 5763-SS1,5722-SS1 (C) Copyright IBM Corp. 1994,2001               */
/* All rights reserved.                                              */
/* US Government Users Restricted Rights -                           */
/* Use, duplication or disclosure restricted                         */
/* by GSA ADP Schedule Contract with IBM Corp.                       */
/*                                                                   */
/* Licensed Materials-Property of IBM                                */
/*                                                                   */
/*                                                                   */
/* Description: This is the CLE header for the ETEPSEPH Exit Program */
/*                                                                   */
/* Header Files Included: H/QTES                                     */
/*                                                                   */
/* Macros List: none.                                                */
/*                                                                   */
/* Structure List: none.                                             */
/*                                                                   */
/* Function Prototype List: ETEPSEPH.                                */
/*                                                                   */
/* Change Activity:                                                  */
/*                                                                   */
/* CFD List:                                                         */
/*                                                                   */
/* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION       */
/* ---- ------------ ----- ------ --------- ------------------------ */
/* $A0= P9954120     5D20  010916 Urs       New Include              */
/*                                                                   */
/* End CFD List.                                                     */
/*                                                                   */
/*  Additional notes about the Change Activity                       */
/* End Change Activity.                                              */
/*** END HEADER FILE SPECIFICATIONS **********************************/

#ifndef ETEPSEPH_h
 #define ETEPSEPH_h

#include <qtes.h>                   /* Common names include          */

#if (__OS400_TGTVRM__>=510)
  #pragma datamodel(P128)
#endif

 /********************************************************************/
 /*  Typedefs for Stop Information                                   */
 /********************************************************************/
 typedef _Packed struct Qte_SrvEntPnt_StopInfo {
       _TE_THREADID_T ThreadID;
       long int     OffsetToIntLocs;
       long int     NumberOfIntLocs;
       long int     StopLineNumber[3];
 } Qte_SrvEntPnt_StopInfo;

 typedef _Packed struct Qte_SrvEntPnt_JobName {
       char         JobUser[10];
       char         JobID[10];
       char         JobNumber[10];
 } Qte_SrvEntPnt_JobName;

#if (__OS400_TGTVRM__>=510)
  #pragma datamodel(pop)
#endif

#endif
