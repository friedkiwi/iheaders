/*** START HEADER FILE SPECIFICATIONS ********************************/
/*                                                                   */
/* Header File Name       : H/QP2SHELL                               */
/*                                                                   */
/* Descriptive Name       : Run an OS/400 PASE program               */
/*                                                                   */
/*    5769-SS1, 5722-SS1                                             */
/*    (C) Copyright IBM Corp. 2000, 2000                             */
/*    All rights reserved.                                           */
/*    US Government Users Restricted Rights -                        */
/*    Use, duplication or disclosure restricted                      */
/*    by GSA ADP Schedule Contract with IBM Corp.                    */
/*                                                                   */
/* Licensed Materials-Property of IBM                                */
/*                                                                   */
/* Description            : Defines the interface to API program     */
/*                          QSYS/QP2SHELL                            */
/*                                                                   */
/* Change Activity        :                                          */
/*                                                                   */
/* CFD List               :                                          */
/*                                                                   */
/* Flag Reason   Level   Date   Pgmr      Change Description         */
/* ---- -------- ------- ------ --------- -------------------------  */
/* $01= D97972   v5r1m0  000505 timms     New file                   */
/*                                                                   */
/* End CFD List.                                                     */
/*********************************************************************/

#ifndef _QP2SHELL_H
#define _QP2SHELL_H

#if (__OS400_TGTVRM__>=510)
#pragma datamodel(P128)
#endif

/*********************************************************************
 * Run an OS/400 PASE program in ACTGRP(*NEW)
 *********************************************************************/
#ifdef __ILEC400__
   #pragma linkage (QP2SHELL,OS,nowiden)
#else
   extern "OS"
#endif
void QP2SHELL(const char *pathName, /* Path/name (in IFS) of program */
              ...);                 /* Optional argument strings     */

#if (__OS400_TGTVRM__>=510)
#pragma datamodel(pop)
#endif

#endif /* _QP2SHELL_H */
