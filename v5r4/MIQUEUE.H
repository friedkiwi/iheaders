#ifndef __ILEC400__
  extern "C" {
#else                                                          /*@02A*/
  #pragma nomargins nosequence
  #pragma checkout(suspend)
#endif

/*** START HEADER FILE SPECIFICATIONS ********************************/
/*                                                                   */
/*  Header File NAME:   miqueue.h                                    */
/*                                                                   */
/*  Descriptive: Queue Management MI Instruction definitions         */
/*                                                                   */
/*  5716-SS1 (C) Copyright IBM Corp. 1990, 1995                      */
/*  All rights reserved.                                             */
/*  US Government Users Restricted Rights -                          */
/*  Use, duplication or disclosure restricted                        */
/*  by GSA ADP Schedule Contract with IBM Corp.                      */
/*                                                                   */
/*  Licensed Materials-Proptery of IBM                               */
/*                                                                   */
/*  Description: This header is provided for compatability with      */
/*               existing applications.                              */
/*                                                                   */
/*  Header Files Included : milib.h                                  */
/*                          mih/enq.h                                */
/*                          mih/deq.h                                */
/*                          mih/matqat.h                             */
/*                          mih/matqmsg.h                            */
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

#ifndef __myqueue_h
#define __myqueue_h 1

   #include <milib.h>

   /*  Queue Management Instructions                                 */
   #include <mih/deq.h>
   #include <mih/deqwait.h>
   #include <mih/enq.h>
   #include <mih/matqat.h>
   #include <mih/matqmsg.h>

#endif /* #ifndef __miqueue_h                                        */

#ifndef __ILEC400__
  }
#else                                                          /*@02A*/
  #pragma checkout(resume)
#endif
