#ifndef __ILEC400__
  extern "C" {
#else                                                          /*@02A*/
  #pragma nomargins nosequence
  #pragma checkout(suspend)
#endif

/*** START HEADER FILE SPECIFICATIONS ********************************/
/*                                                                   */
/*  Header File NAME:   milib.h                                      */
/*                                                                   */
/*  Descriptive: MI Header File for Standard Definitions             */
/*                                                                   */
/*  5716-SS1 (C) Copyright IBM Corp. 1990, 1995, 2001                */
/*  All rights reserved.                                             */
/*  US Government Users Restricted Rights -                          */
/*  Use, duplication or disclosure restricted                        */
/*  by GSA ADP Schedule Contract with IBM Corp.                      */
/*                                                                   */
/*  Licensed Materials-Property of IBM                               */
/*                                                                   */
/*  Description: This header file contains standard definitions      */
/*               for using the MI instructions                       */
/*                                                                   */
/*  Header Files Included : mih/micommon.h                           */
/*                                                                   */
/*  Macros List : _QTEMP_POINTER                                     */
/*                _LU_WORK_AREA                                      */
/*                _LANGUAGE_RETURN_CODE                              */
/*                _JOB_CANCEL_PENDING                                */
/*                _JOB_DATE                                          */
/*                _JOB_SWITCHES                                      */
/*                                                                   */
/*  Structure List : _LU_Work_Area_T                                 */
/*                                                                   */
/*  Function Prototype List : _QTEMPPTR                              */
/*                            _LUWRKA                                */
/*                            _INVP                                  */
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
#ifndef   __milib_h
  #define __milib_h

    #include <mih/micommon.h>

    #if (__OS400_TGTVRM__>=510)                               /* @03A*/
        #pragma datamodel(P128)                               /* @03A*/
    #endif                                                    /* @03A*/


    /*  Job Information Builtins                                     */
    #ifdef __ILEC400__
      #pragma linkage( _QTEMPPTR, builtin )
    #else
      extern "builtin"
    #endif
      _SYSPTR  _QTEMPPTR  ( void );

    #ifdef __ILEC400__
      #pragma linkage( _LUWRKA, builtin )
    #else
      extern "builtin"
    #endif
      _SPCPTR  _LUWRKA    ( void );

    #ifdef __ILEC400__
      #pragma linkage( _INVP, builtin )
    #else
      extern "builtin"
    #endif
      _INVPTR  _INVP  ( unsigned );   /* Returns caller's invocation */
                                      /* pointer.  Note: the argument*/
                                      /* must be the literal 0.      */
    #ifndef __ILEC400__
      #define volatile
    #endif

    typedef volatile struct _LU_Work_Area_T {
      short LU_RC;                    /* Language/Utility return code.*/
                                      /* 0 = Normal.                  */
                                      /* 1 = Last Record 'LR' set on. */
                                      /* 2 = Error, no halt indicator */
                                      /*     set.                     */
                                      /* 3 = Error, halt indicator set*/
                                      /*     on.                      */
      char  reserved1[2];
      int   Invocation_Mark;          /* Invocation mark count of     */
                                      /* program with which files are */
                                      /* associated.                  */
      int   Product_RC;               /* ILE Product Return Code      */
      int   User_RC;                  /* ILE User Return Code         */
      char  Controlled_Cancel;        /* controlled cancel indicator. */
                                      /* '0' = Cancel not pending.    */
                                      /* '1' = Cancel pending.        */
      struct {
        char Guard_Digit;             /* Guard digit for century.     */

        struct {                      /* Date without guard digit.    */
          char Year[2];
          char Month[2];
          char Day[2];
        } Date;

      } Job_Date;

      char Upsi_Switches[8];          /* UPSI SWITCHES - JOB SWITCHES.*/
    } _LU_Work_Area_T;

    #ifndef __ILEC400__
      #undef volatile
    #endif

    /* Define JOB information macros                                  */

    #define _QTEMP_POINTER  (_QTEMPPTR())

    #define _LU_WORK_AREA  ((_LU_Work_Area_T *)_LUWRKA())

    #define _LANGUAGE_RETURN_CODE  ( \
                   ((_LU_Work_Area_T *)_LUWRKA())->User_RC)

    #define _JOB_CANCEL_PENDING  (   \
                  ((_LU_Work_Area_T *)_LUWRKA())->Controlled_Cancel)

    #define _JOB_DATE  (             \
                  ((_LU_Work_Area_T *)_LUWRKA())->Job_Date)

    #define _JOB_SWITCHES  (         \
                  ((_LU_Work_Area_T *)_LUWRKA())->Upsi_Switches)

    #if (__OS400_TGTVRM__>=510)                               /* @03A*/
        #pragma datamodel(pop)                                /* @03A*/
    #endif                                                    /* @03A*/

#endif /* #ifndef __milib_h                                          */

#ifndef __ILEC400__
  }
#else                                                          /*@02A*/
  #pragma checkout(resume)
#endif
