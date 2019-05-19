#ifndef __ILEC400__
  extern "C" {
#else                                                          /*@02A*/
  #pragma nomargins nosequence
  #pragma checkout(suspend)
#endif

/*** START HEADER FILE SPECIFICATIONS ********************************/
/*                                                                   */
/*  Header File NAME:   pointer.h                                    */
/*                                                                   */
/*  Descriptive: MI Pointer header file.                             */
/*                                                                   */
/*  5716-SS1 (C) Copyright IBM Corp. 1990, 1995, 2001                */
/*  All rights reserved.                                             */
/*  US Government Users Restricted Rights -                          */
/*  Use, duplication or disclosure restricted                        */
/*  by GSA ADP Schedule Contract with IBM Corp.                      */
/*                                                                   */
/*  Licensed Materials-Property of IBM                               */
/*                                                                   */
/*  Description: This header file contains pragmas for the different */
/*               MI pointer types.                                   */
/*                                                                   */
/*  Header Files Included : None                                     */
/*                                                                   */
/*  Macros List : __pointer_h                                        */
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
/*  $A0= P3979923     3D60  950210 ROCH    : V3R6M0 updates          */
/*  $02  P3981950     3D60  021595 ROCH    : C++ enable/MI reviews   */
/*  $03= D98212.2    v5r1m0 112199 gchaney : Teraspace stage 2       */
/*                                                                   */
/*  End CFD List                                                     */
/*                                                                   */
/*   Additional notes about the Change Activity                      */
/*  End Change Activity                                              */
/*** END HEADER FILE SPECIFICATIONS **********************************/

#ifndef   __pointer_h
  #define __pointer_h

  #if (__OS400_TGTVRM__>=510)                                 /* @03A*/
      #pragma datamodel(P128)                                 /* @03A*/
  #endif                                                      /* @03A*/

  typedef void *_SPCPTR;
  typedef void *_SYSPTR;
  typedef void *_OPENPTR;
  typedef void *_INVPTR;
  typedef void *_LBLPTR;
  typedef void *_SUSPENDPTR;
  typedef const void *_SPCPTRCN;                               /*@A0A*/

  #pragma pointer(_SPCPTR,SPCPTR)
  #pragma pointer(_SYSPTR,SYSPTR)
  #pragma pointer(_OPENPTR,OPENPTR)
  #pragma pointer(_INVPTR,INVPTR)
  #pragma pointer(_LBLPTR,LBLPTR)
  #pragma pointer(_SUSPENDPTR,SUSPENDPTR)
  #pragma pointer(_SPCPTRCN,SPCPTR)                            /*@A0A*/

  typedef _OPENPTR  _ANYPTR;

  #if (__OS400_TGTVRM__>=510)                                 /* @03A*/
      #pragma datamodel(pop)                                  /* @03A*/
  #endif                                                      /* @03A*/

#endif /* #ifndef __pointer_h                                        */

#ifndef __ILEC400__
  }
#else                                                          /*@02A*/
  #pragma checkout(resume)
#endif
