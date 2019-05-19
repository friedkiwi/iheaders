#ifndef __ILEC400__
  extern "C" {
#else                                                          /*@02A*/
  #pragma nomargins nosequence
  #pragma checkout(suspend)
#endif

/*** START HEADER FILE SPECIFICATIONS ********************************/
/*                                                                   */
/*  Header File NAME:   mipgexec.h                                   */
/*                                                                   */
/*  Descriptive: Machine Execution MI Instructions                   */
/*                                                                   */
/*  5716-SS1 (C) Copyright IBM Corp. 1990, 1995, 2001                */
/*  All rights reserved.                                             */
/*  US Government Users Restricted Rights -                          */
/*  Use, duplication or disclosure restricted                        */
/*  by GSA ADP Schedule Contract with IBM Corp.                      */
/*                                                                   */
/*  Licensed Materials-Property of IBM                               */
/*                                                                   */
/*  Description: This header file provides the definitions and       */
/*               structure to be used the machine execution          */
/*               instructions                                        */
/*                                                                   */
/*  Header Files Included : milib.h                                  */
/*                          mih/matactat.h                           */
/*                          mih/matagpat.h                           */
/*                          mih/modasa.h                             */
/*                                                                   */
/*  Macros List : None                                               */
/*                                                                   */
/*  Structure List : _OS_func_t                                      */
/*                                                                   */
/*  Function Prototype List : atiexit                                */
/*                                                                   */
/*  Change Activity :                                                */
/*                                                                   */
/*  CFD List:                                                        */
/*                                                                   */
/*  FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION      */
/*  ---- ------------ ----- ------ --------- ----------------------- */
/*  $A0= D91823.1     3D60  941030 ROCH    : Ported from QCLE        */
/*  $02  P3981950     3D60  021595 ROCH    : C++ enable/MI reviews   */
/*  $03= D98212.2    v5r1m0 112199 gchaney : Teraspace stage 2       */
/*                                                                   */
/*  End CFD List                                                     */
/*                                                                   */
/*   Additional notes about the Change Activity                      */
/*  End Change Activity                                              */
/*** END HEADER FILE SPECIFICATIONS **********************************/

#ifndef __mipgexec_h
#define __mipgexec_h

  #include <milib.h>

  /*  Machine Execution Instructions                                 */
  #include <mih/matactat.h>
  #include <mih/matagpat.h>
  #include <mih/modasa.h>

  #if (__OS400_TGTVRM__>=510)                                 /* @03A*/
      #pragma datamodel(P128)                                 /* @03A*/
  #endif                                                      /* @03A*/

  /* At Invocation Exit                                              */
  #ifdef __ILEC400__
    typedef void (_OS_func_t)(void *);
    #pragma linkage(_OS_func_t, OS)
    int atiexit(_OS_func_t *, void *);
  #else
    int atiexit(_SYSPTR, void *);
  #endif  /*  #ifdef __ILEC400__                                     */

  #if (__OS400_TGTVRM__>=510)                                 /* @03A*/
      #pragma datamodel(pop)                                  /* @03A*/
  #endif                                                      /* @03A*/

#endif /* #ifndef __mipgexec_h                                       */

#ifndef __ILEC400__
  }
#else                                                          /*@02A*/
  #pragma checkout(resume)
#endif
