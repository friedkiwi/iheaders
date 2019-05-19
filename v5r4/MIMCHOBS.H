#ifndef __ILEC400__
  extern "C" {
#else                                                          /*@02A*/
  #pragma nomargins nosequence
  #pragma checkout(suspend)
#endif

/*** START HEADER FILE SPECIFICATIONS ********************************/
/*                                                                   */
/*  Header File NAME:   mimchobs.h                                   */
/*                                                                   */
/*  Descriptive: MI Definitions for Machine Observation Instructions */
/*                                                                   */
/*  5716-SS1 (C) Copyright IBM Corp. 1990, 1995                      */
/*  All rights reserved.                                             */
/*  US Government Users Restricted Rights -                          */
/*  Use, duplication or disclosure restricted                        */
/*  by GSA ADP Schedule Contract with IBM Corp.                      */
/*                                                                   */
/*  Licensed Materials-Property of IBM                               */
/*                                                                   */
/*  Description: This header contains the system built-in            */
/*               definitions for the Machine Observation Instructions*/
/*                                                                   */
/*  Header Files Included : milib.h                                  */
/*                          mih/fndrinvn.h                           */
/*                          mih/matinvat.h                           */
/*                          mih/matptr.h                             */
/*                          mih/matptrl.h                            */
/*                          mih/matptrif.h                           */
/*                          mih/matsobj.h                            */
/*                                                                   */
/*  Macros List :None                                                */
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
/*  $A0= D91823.1     3D60  941030 ROCH    : Ported from QCLE        */
/*  $02  P3981950     3D60  021595 ROCH    : C++ enable/MI reviews   */
/*                                                                   */
/*  End CFD List                                                     */
/*                                                                   */
/*   Additional notes about the Change Activity                      */
/*  End Change Activity                                              */
/*** END HEADER FILE SPECIFICATIONS **********************************/

#ifndef __mimchobs_h
#define __mimchobs_h 1

    #include <milib.h>
    #include <mih/fndrinvn.h>
    #include <mih/matinvat.h>
    #include <mih/matptr.h>
    #include <mih/matptrl.h>
    #include <mih/matptrif.h>
    #include <mih/matsobj.h>

#endif                                 /* #ifndef __mimchobs_h      */

#ifndef __ILEC400__
  }
#else                                                          /*@02A*/
  #pragma checkout(resume)
#endif
