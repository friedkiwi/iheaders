/*** START HEADER FILE SPECIFICATIONS ********************************/
/*                                                                   */
/* Header File Name       : H/QP2TERM                                */
/*                                                                   */
/* Descriptive Name       : Run an AS/400 PASE terminal session      */
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
/*                          QSYS/QP2TERM                             */
/*                                                                   */
/* Header Files Included  : None.                                    */
/*                                                                   */
/* Macros List            : None.                                    */
/*                                                                   */
/* Structure List         : None.                                    */
/*                                                                   */
/* Function Prototype List: QP2TERM                                  */
/*                                                                   */
/* Change Activity        :                                          */
/*                                                                   */
/* CFD List               :                                          */
/*                                                                   */
/* Flag Reason   Level   Date   Pgmr      Change Description         */
/* ---- -------- ------- ------ --------- -------------------------  */
/* $01= D97972   v5r1m0  000505 timms     New file                   */
/* $02= P9A16946 v5r3m0  020816 wrmadden  C does not allow only      */
/*                                        optional arguments         */
/*                                                                   */
/* End CFD List.                                                     */
/*********************************************************************/

#ifndef _QP2TERM_H
#define _QP2TERM_H

#if (__OS400_TGTVRM__>=510)
#pragma datamodel(P128)
#endif

/*********************************************************************
 * Run an AS/400 PASE terminal session
 *
 * Note when the QP2TERM API is used in ILE C you will receive a "no
 * function prototype given for QP2TERM" message because there is no
 * way to prototype a function with only optional arguments in ILE C.
 * However the pragma linkage OS will cause the correct code to be
 * generated for a call to QP2TERM using 0 or more arguments.
 *
 *********************************************************************/
#ifdef __ILEC400__
   #pragma linkage (QP2TERM,OS,nowiden)
#else
   extern "OS" void QP2TERM(...);     /* Optional path and arguments */
#endif

#if (__OS400_TGTVRM__>=510)
#pragma datamodel(pop)
#endif

#endif /* _QP2TERM_H */
