#ifndef __ILEC400__
  extern "C" {
#else
  #pragma nomargins nosequence
  #pragma checkout(suspend)
#endif

/*** START HEADER FILE SPECIFICATIONS ********************************/
/*                                                                   */
/*  Header File NAME:   micomput.h                                   */
/*                                                                   */
/*  Descriptive: MI Computation Instructions Definitions             */
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
/*               structure to be used MI computaion instructions     */
/*                                                                   */
/*  Header Files Included : see below                                */
/*                                                                   */
/*  Macros List : __micomput_h                                       */
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
/*                                                                   */
/*  End CFD List                                                     */
/*                                                                   */
/*   Additional notes about the Change Activity                      */
/*  End Change Activity                                              */
/*** END HEADER FILE SPECIFICATIONS **********************************/

#ifndef   __micomput_h
  #define __micomput_h

    #include <milib.h>
    #include <mih/clrbts.h>
    #include <mih/cprdata.h>
    #include <mih/cvtbc.h>
    #include <mih/cvtcb.h>
    #include <mih/cvtcm.h>
    #include <mih/cvtcs.h>
    #include <mih/cvtsc.h>
    #include <mih/cvtmc.h>
    #include <mih/cvthc.h>
    #include <mih/cvtch.h>
    #include <mih/cvtefn.h>
    #include <mih/dcpdata.h>
    #include <mih/edit.h>
    #include <mih/extrexp.h>
    #include <mih/lbcpynv.h>
    #include <mih/cpynv.h>
    #include <mih/cpybytes.h>
    #include <mih/retca.h>
    #include <mih/setbts.h>
    #include <mih/setca.h>
    #include <mih/tstbts.h>
    #include <mih/xlateb.h>
    #include <mih/scanx.h>
    #include <mih/scanwc.h>
    #include <mih/cpybla.h>
    #include <mih/cpyblap.h>
    #include <mih/cpyhexnn.h>
    #include <mih/cpyhexnz.h>
    #include <mih/cpyhexzn.h>
    #include <mih/cpyhexzz.h>
    #include <mih/triml.h>
    #include <mih/xlatewt.h>

#endif                                  /* #ifndef __micomput_h      */

#ifndef __ILEC400__
  }
#else
  #pragma checkout(resume)
#endif
