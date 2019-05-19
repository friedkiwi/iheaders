/*** START HEADER FILE SPECIFICATIONS ********************************/
/*                                                                   */
/* Header File Name       : H/QP2SHELL2                              */
/*                                                                   */
/* Descriptive Name       : Run an OS/400 PASE program               */
/*                                                                   */
/*    5722-SS1                                                       */
/*    (C) Copyright IBM Corp. 2001, 2002                             */
/*    All rights reserved.                                           */
/*    US Government Users Restricted Rights -                        */
/*    Use, duplication or disclosure restricted                      */
/*    by GSA ADP Schedule Contract with IBM Corp.                    */
/*                                                                   */
/* Licensed Materials-Property of IBM                                */
/*                                                                   */
/* Description            : Defines the interface to API program     */
/*                          QSYS/QP2SHELL2                           */
/*                                                                   */
/* Change Activity        :                                          */
/*                                                                   */
/* CFD List               :                                          */
/*                                                                   */
/* Flag Reason   Level   Date   Pgmr      Change Description         */
/* ---- -------- ------- ------ --------- -------------------------  */
/* $01= P9958473 v5r2m0  011215 timms     New file                   */
/*                                                                   */
/* End CFD List.                                                     */
/*********************************************************************/

#ifndef _QP2SHELL2_H
#define _QP2SHELL2_H

#if (__OS400_TGTVRM__>=510)
#pragma datamodel(P128)
#endif

/*********************************************************************
 * Run an OS/400 PASE program in ACTGRP(*CALLER)
 *********************************************************************/
#ifdef __ILEC400__
   #pragma linkage (QP2SHELL2,OS,nowiden)
#else
   extern "OS"
#endif
void QP2SHELL2(const char *pathName, /* Path/name (in IFS) of program */
               ...);                 /* Optional argument strings     */

#if (__OS400_TGTVRM__>=510)
#pragma datamodel(pop)
#endif

#endif /* _QP2SHELL2_H */
