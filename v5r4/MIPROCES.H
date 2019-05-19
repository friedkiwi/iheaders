#ifndef __ILEC400__
  extern "C" {
#else                                                          /*@02A*/
  #pragma nomargins nosequence
  #pragma checkout(suspend)
#endif

#ifndef __miproces_h
  #define __miproces_h

/*** START HEADER FILE SPECIFICATIONS ********************************/
/*                                                                   */
/*  Header File NAME:   miproces.h                                   */
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
/*               structure to be used with the process management    */
/*               MI instructions.                                    */
/*                                                                   */
/*  Header Files Included   : milib.h                                */
/*                            mih/matpragp.h                         */
/*                            mih/matpratr.h                         */
/*                            mih/waittime.h                         */
/*                                                                   */
/*  Macros List             : None                                   */
/*                                                                   */
/*  Structure List          : None                                   */
/*                                                                   */
/*  Function Prototype List : None                                   */
/*                                                                   */
/*  Change Activity :                                                */
/*                                                                   */
/*  CFD List:                                                        */
/*                                                                   */
/*  FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION      */
/*  ---- ------------ ----- ------ --------- ----------------------- */
/*  $A0= D91823.1     3D60  941030 ROCH    : Ported from QCLE        */
/*  $02  P3981950     3D60  021595 ROCH    : C++ enable/MI reviews   */
/*                                                                   */
/*  End CFD List                                                     */
/*                                                                   */
/*   Additional notes about the Change Activity                      */
/*  End Change Activity                                              */
/*** END HEADER FILE SPECIFICATIONS **********************************/

  #ifndef __milib_h
    #include <milib.h>
  #endif

  #ifndef __matpragp_h
    #include <mih/matpragp.h>
  #endif

  #ifndef __mih_matpratr_h
    #include <mih/matpratr.h>
  #endif

  #ifndef __mih_waittime_h
    #include <mih/waittime.h>
  #endif


#endif                              /* #ifndef __miproces_h           */

#ifndef __ILEC400__
  }
#else                                                          /*@02A*/
  #pragma checkout(resume)
#endif
