#ifndef __ILEC400__
  extern "C" {
#else
  #pragma nomargins nosequence
  #pragma checkout(suspend)
#endif

/*** START HEADER FILE SPECIFICATIONS ********************************/
/*                                                                   */
/*  Header File NAME:   miauth.h                                     */
/*                                                                   */
/*  Descriptive: Authorization Management MI Instruction definitions */
/*                                                                   */
/*  5716-SS1 (C) Copyright IBM Corp. 1994, 1994                      */
/*  All rights reserved.                                             */
/*  US Government Users Restricted Rights -                          */
/*  Use, duplication or disclosure restricted                        */
/*  by GSA ADP Schedule Contract with IBM Corp.                      */
/*                                                                   */
/*  Licensed Materials-Property of IBM                               */
/*                                                                   */
/*  Description: This header contains the system built-in definitions*/
/*               for the Authorization Management commands.          */
/*                                                                   */
/*  Header Files Included : milib.h                                  */
/*                          mih/testau.h                             */
/*                                                                   */
/*  Macros List : None                                               */
/*                                                                   */
/*  Structure List : None                                            */
/*                                                                   */
/*  Function Prototype List : None                                   */
/*                                                                   */
/*  Change Activity :                                                */
/*                                                                   */
/*  CFD List:                                                        */
/*                                                                   */
/*  FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION      */
/*  ---- ------------ ----- ------ --------- ----------------------- */
/*  $A0= D91823.1     3D60  941019 ROCH      Ported from QCLE        */
/*  $02  P3981950     3D60  021595 ROCH    : C++ enable/MI reviews   */
/*                                                                   */
/* $03=P3983168     3D60     950407 ROCH     :Review MI header files */
/*  End CFD List                                                     */
/*                                                                   */
/*   Additional notes about the Change Activity                      */
/*  End Change Activity                                              */
/*** END HEADER FILE SPECIFICATIONS **********************************/

#ifndef __myauth_h
#define __myauth_h 1

  #include <milib.h>
  #include <mih/testau.h>

#endif /* #ifndef __miauth_h                                         */

#ifndef __ILEC400__
  }
#else
  #pragma checkout(resume)
#endif
