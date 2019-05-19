#ifndef __ILEC400__
  extern "C" {
#else                                                          /*@02A*/
  #pragma nomargins nosequence
  #pragma checkout(suspend)
#endif

/*** START HEADER FILE SPECIFICATIONS ********************************/
/*                                                                   */
/*  Header File NAME:   mispcobj.h                                   */
/*                                                                   */
/*  Descriptive: Space Object Addressing Instructions                */
/*                                                                   */
/*  5716-SS1 (C) Copyright IBM Corp. 1990, 1995                      */
/*  All rights reserved.                                             */
/*  US Government Users Restricted Rights -                          */
/*  Use, duplication or disclosure restricted                        */
/*  by GSA ADP Schedule Contract with IBM Corp.                      */
/*                                                                   */
/*  Licensed Materials-Property of IBM                               */
/*                                                                   */
/*  Description: This header contains the system built-in functions  */
/*               for the space object addressing MI instructions     */
/*                                                                   */
/*  Header Files Included : milib.h                                  */
/*                          mih/lspco.h                              */
/*                          mih/setspfp.h                            */
/*                          mih/setsppfp.h                           */
/*                          mih/cmppspad.h                           */
/*                          mih/setsppo.h                            */
/*                          mih/stsppo.h                             */
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
/*  $A0= D91823.1     3D60  941030 ROCH    : Ported from QCLE        */
/*  $02  P3981950     3D60  021595 ROCH    : C++ enable/MI reviews   */
/*                                                                   */
/*  End CFD List                                                     */
/*                                                                   */
/*   Additional notes about the Change Activity                      */
/*  End Change Activity                                              */
/*** END HEADER FILE SPECIFICATIONS **********************************/

#ifndef __mispcobj_h
#define __miscpobj_h 1

    #include <milib.h>
    #include <mih/lspco.h>
    #include <mih/setsppo.h>
    #include <mih/stsppo.h>
    #include <mih/setspfp.h>
    #include <mih/setsppfp.h>
    #include <mih/cmppspad.h>

#endif /* #ifndef __mispobj_h                                         */

#ifndef __ILEC400__
  }
#else                                                          /*@02A*/
  #pragma checkout(resume)
#endif
