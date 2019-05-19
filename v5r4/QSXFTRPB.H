/*** START HEADER FILE SPECIFICATIONS ********************************/
/*                                                                   */
/* Header File Name: H/QSXFTRPB                                      */
/*                                                                   */
/* Descriptive Name: Filter Problem API.                             */
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
/* Description: The Filter Problem API applies the currently active  */
/*              problem log filter to a problem log entry.           */
/*                                                                   */
/* Header Files Included: None.                                      */
/*                                                                   */
/* Macros List: None.                                                */
/*                                                                   */
/* Structure List: Qsx_Problem_Log_Id_t                              */
/*                                                                   */
/* Function Prototype List: QSXFTRPB.                                */
/*                                                                   */
/* Change Activity:                                                  */
/*                                                                   */
/* CFD List:                                                         */
/*                                                                   */
/* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION       */
/* ---- ------------ ----- ------ --------- ------------------------ */
/* $A0= D2862000     3D10  940327 LUPA:     New Include              */
/*                                                                   */
/* End CFD List.                                                     */
/*                                                                   */
/*  Additional notes about the Change Activity                       */
/* End Change Activity.                                              */
/*** END HEADER FILE SPECIFICATIONS **********************************/

#ifndef QSXFTRPB_h
 #define QSXFTRPB_h
#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(P128)      /* @B1A*/
#endif                       /* @B1A*/

 /********************************************************************/
 /*  Prototype for QSXFTRPB API                                      */
 /********************************************************************/
 #ifdef __ILEC400__
    #pragma linkage (QSXFTRPB,OS,nowiden)
 #else
    extern "OS"
 #endif
 void QSXFTRPB (void *,           /* Problem Log Identifier          */
                void *);          /* Error Code                      */

 /********************************************************************/
 /*  Structure for Problem Log Identifier.                           */
 /********************************************************************/
 typedef _Packed struct Qsx_Problem_Log_Id {
      char   Problem_Id[10];
      char   Origin_Sys[20];
 } Qsx_Problem_Log_Id_t;

#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(pop)       /* @B1A*/
#endif                       /* @B1A*/
#endif
