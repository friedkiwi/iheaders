#ifndef __ILEC400__
  extern "C" {
#else
  #pragma nomargins nosequence
  #pragma checkout(suspend)
#endif

/*** START HEADER FILE SPECIFICATIONS ********************************/
/*                                                                   */
/*  Header File NAME:   milock.h                                     */
/*                                                                   */
/*  Descriptive: Lock Management MI Instruction definitions          */
/*                                                                   */
/*  5716-SS1, 5722-SS1 (C) Copyright IBM Corp. 1990, 2000            */
/*  All rights reserved.                                             */
/*  US Government Users Restricted Rights -                          */
/*  Use, duplication or disclosure restricted                        */
/*  by GSA ADP Schedule Contract with IBM Corp.                      */
/*                                                                   */
/*  Licensed Materials-Property of IBM                               */
/*                                                                   */
/*  Description: This header file provides the definitions and       */
/*               structure to be used with MI lock instructions      */
/*               instruction.                                        */
/*                                                                   */
/*  Header Files Included : milib.h                                  */
/*                          mih/lock.h                               */
/*                          mih/locksl.h                             */
/*                          mih/locktsl.h                        @A1A*/
/*                          mih/mataol.h                             */
/*                          mih/matobjlk.h                           */
/*                          mih/matprlk.h                            */
/*                          mih/matsellk.h                           */
/*                          mih/unlcktsl.h                       @A1A*/
/*                          mih/unlock.h                             */
/*                          mih/unlocksl.h                           */
/*                          mih/xfrlock.h                            */
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
/*  $A1= D97767.16    5D10  991205 ROCH    : Added locktsl, unlcktsl */
/*                                                                   */
/*  End CFD List                                                     */
/*                                                                   */
/*   Additional notes about the Change Activity                      */
/*  End Change Activity                                              */
/*** END HEADER FILE SPECIFICATIONS **********************************/

#ifndef   __milock_h
  #define __milock_h

   #include <milib.h>

   /*  Object Lock Management Instructions                            */

   #include <mih/lock.h>
   #include <mih/locksl.h>
   #include <mih/locktsl.h>         /* @A1A*/
   #include <mih/mataol.h>
   #include <mih/matobjlk.h>
   #include <mih/matprlk.h>
   #include <mih/matsellk.h>
   #include <mih/unlcktsl.h>        /* @A1A*/
   #include <mih/unlock.h>
   #include <mih/unlocksl.h>
   #include <mih/xfrlock.h>

#endif /* #ifndef __milock_h */

#ifndef __ILEC400__
  }
#else
  #pragma checkout(resume)
#endif
