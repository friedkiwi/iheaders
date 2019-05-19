#ifndef __ILEC400__
  extern "C" {
#else
  #pragma nomargins nosequence
  #pragma checkout(suspend)
#endif

/*** START HEADER FILE SPECIFICATIONS ********************************/
/*                                                                   */
/*  Header File NAME:   miindex.h                                    */
/*                                                                   */
/*  Descriptive: MI Independent Index Common Definitions             */
/*                                                                   */
/*  5716-SS1 (C) Copyright IBM Corp. 1990, 1995                      */
/*  All rights reserved.                                             */
/*  US Government Users Restricted Rights -                          */
/*  Use, duplication or disclosure restricted                        */
/*  by GSA ADP Schedule Contract with IBM Corp.                      */
/*                                                                   */
/*  Licensed Materials-Property of IBM                               */
/*                                                                   */
/*  Description: This header file provides definition that are       */
/*               common across the MI independent index instructions.*/
/*                                                                   */
/*  Header Files Included : milib.h                                  */
/*                          mih/fndinxen.h                           */
/*                          mih/insinxen.h                           */
/*                          mih/matinxat.h                           */
/*                          mih/modinx.h                             */
/*                          mih/rmvinxen.h                           */
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

#ifndef   __miindex_h
  #define __miindex_h

    #include <milib.h>

    #include <mih/fndinxen.h>
    #include <mih/insinxen.h>
    #include <mih/matinxat.h>
    #include <mih/modinx.h>
    #include <mih/rmvinxen.h>

#endif /* #ifndef __miindex_h                                         */
#ifndef __ILEC400__
  }
#else
  #pragma checkout(resume)
#endif
