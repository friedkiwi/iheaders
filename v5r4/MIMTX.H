#ifndef __ILEC400__
  extern "C" {
#else
  #pragma nomargins nosequence
  #pragma checkout(suspend)
#endif

/*** START HEADER FILE SPECIFICATIONS ********************************/
/*                                                                   */
/*  Header File NAME:   mimtx.h                                      */
/*                                                                   */
/*  Descriptive: Authorization Management MI Instruction definitions */
/*                                                                   */
/*  5716-SS1 (C) Copyright IBM Corp. 1990, 1995                      */
/*  All rights reserved.                                             */
/*  US Government Users Restricted Rights -                          */
/*  Use, duplication or disclosure restricted                        */
/*  by GSA ADP Schedule Contract with IBM Corp.                      */
/*                                                                   */
/*  Licensed Materials-Property of IBM                               */
/*                                                                   */
/*  Description: This header file provides the definitions and       */
/*               structure to be used with the xxxxxxxx MI           */
/*               instruction.                                        */
/*                                                                   */
/*  Header Files Included : milib.h                                  */
/*                          mih/crtmtx.h                             */
/*                          mih/desmtx.h                             */
/*                          mih/lockmtx.h                            */
/*                          mih/unlkmtx.h                            */
/*                          mih/matmtx.h                             */
/*                          mih/matprmtx.h                           */
/*                                                                   */
/*  Macros List :                                                    */
/*                                                                   */
/*  Structure List : None                                            */
/*                                                                   */
/*  Function Prototype List :                                        */
/*                                                                   */
/*  Change Activity :                                                */
/*                                                                   */
/*  CFD List:                                                        */
/*                                                                   */
/*  FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION      */
/*  ---- ------------ ----- ------ --------- ----------------------- */
/*  $A0= D91823.1     3D60  941030 ROCH    : Ported from QCLE        */
/*                                                                   */
/*  End CFD List                                                     */
/*                                                                   */
/*   Additional notes about the Change Activity                      */
/*  End Change Activity                                              */
/*** END HEADER FILE SPECIFICATIONS **********************************/

#ifndef  __mimtx_h
 #define __mimtx_h

  #include <milib.h>

  /* Instructions for manipulating mutexes */

  #include <mih/crtmtx.h>
  #include <mih/desmtx.h>
  #include <mih/lockmtx.h>
  #include <mih/unlkmtx.h>
  #include <mih/matmtx.h>
  #include <mih/matprmtx.h>

#endif     /* #ifndef __mimtx_h                                       */

#ifndef __ILEC400__
  }
#else
  #pragma checkout(resume)
#endif
