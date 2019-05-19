#ifdef __ILEC400__
  #pragma nomargins nosequence
  #pragma checkout(suspend)
#endif

#ifndef __QP0ZTRC_H
#define __QP0ZTRC_H

/*** START HEADER FILE SPECIFICATIONS *********************************/
/*                                                                    */
/* Header File Name:        qp0ztrc.h                                 */
/*                                                                    */
/* Descriptive Name:        XPF Threads Trace Functions Header File   */
/*                                                                    */
/* 5769-SS1        (C) Copyright IBM Corp. 1997,1998                  */
/* All rights reserved.                                               */
/* US Government Users Restricted Rights -                            */
/* Use, duplication, or disclosure restricted                         */
/* by GSA ADP Schedule Contract with IBM Corp.                        */
/*                                                                    */
/* Licensed Materials-Property of IBM                                 */
/*                                                                    */
/* This header file is an external product interface, all             */
/* modifications must be upward compatible.                           */
/*                                                                    */
/* Description:             This header file contains the prototypes  */
/*                          for functions that can be used by         */
/*                          applications to write trace information   */
/*                          to the User Trace. See the CHGUSRTRC,     */
/*                          DMPUSRTRC, DLTUSRTRC commands for more    */
/*                          information.                              */
/*                                                                    */
/* Macros List:             None                                      */
/*                                                                    */
/* Structure List:          None                                      */
/*                                                                    */
/* Function Prototype List: Qp0zDump                                  */
/*                          Qp0zDumpStack                             */
/*                          Qp0zDumpTargetStack                       */
/*                          Qp0zLprintf                               */
/*                          Qp0zUprintf                               */
/*                                                                    */
/* Change Activity:                                                   */
/*                                                                    */
/* FLAG REASON       LEVEL      DATE        CHANGE DESCRIPTION        */
/* ---- ------------ ---------- ----------  --------------------      */
/* $A0= D95599       v3r6m0.xpf 10/30/1997  New include moved from    */
/*      CPA Toolkit QCPA/H to base OS/400.                            */
/*                                                                    */
/* End Change Activity                                                */
/*                                                                    */
/*** END HEADER FILE SPECIFICATIONS ***********************************/

/**********************************************************************/
/* Function Prototypes and Descriptions                               */
/**********************************************************************/

#ifndef __QBFC_EXTERN
    #ifdef __ILEC400__
         #define QBFC_EXTERN extern
    #else
         #define QBFC_EXTERN extern "C"
    #endif

    #define __QBFC_EXTERN
#endif
#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(P128)      /* @B1A*/
#endif                       /* @B1A*/

QBFC_EXTERN int  Qp0zUprintf(char *format, ...);
QBFC_EXTERN void Qp0zDump (const char *id, void *area, int len);
QBFC_EXTERN int  Qp0zLprintf (char *format, ...);
QBFC_EXTERN void Qp0zDumpStack (const char *label);
QBFC_EXTERN int  Qp0zDumpTargetStack (int threadHandle,
                                      const char *label);
#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(pop)       /* @B1A*/
#endif                       /* @B1A*/
#endif /* __QP0ZTRC_H */

#ifdef __ILEC400__
  #pragma checkout(resume)
#endif
