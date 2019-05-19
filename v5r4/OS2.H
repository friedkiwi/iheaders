#ifdef __cplusplus
   #pragma info(none)
#else
   #pragma nomargins nosequence
   #pragma checkout(suspend)
#endif
/*** START HEADER FILE SPECIFICATIONS ********************************/
/*                                                                   */
/*  Header File Name: os2.h                                          */
/*                                                                   */
/*  Descriptive Name: Top-level header file for Applications that    */
/*                    use OS/2-like APIs                             */
/*                                                                   */
/*  Copyright (c) 1987  - 1992 IBM Corporation                       */
/*                                                                   */
/*  5716-SS1, 5722-SS1                                               */
/*  (C) Copyright IBM Corp. 1996, 2000                               */
/*  All rights reserved.                                             */
/*  US Government Users Restricted Rights -                          */
/*  Use, duplication or disclosure restricted                        */
/*  by GSA ADP Schedule Contract with IBM Corp.                      */
/*                                                                   */
/*  Licensed Materials-Property of IBM                               */
/*                                                                   */
/*  Description: Includes header files necessary for writing         */
/*               applications that use OS/2-like APIs.               */
/*                                                                   */
/*  Header Files Included: os2def.h                                  */
/*                         bse.h    (included if INCL_NOBASEAPI      */
/*                                   is not defined)                 */
/*                                                                   */
/*  Macros list: OS2_INCLUDED                                        */
/*                                                                   */
/*  Structure List: None                                             */
/*                                                                   */
/*  Function prototype list :  None                                  */
/*                                                                   */
/*  Change Activity:                                                 */
/*                                                                   */
/*  CFD List:                                                        */
/*                                                                   */
/*  FLAG REASON       LEVEL DATE   PGMR     CHANGE DESCRIPTION       */
/*  ---- ------------ ----- ------ -------- ------------------------ */
/*  $A0= D94111.1     3D70  960124 ROCH     New Include              */
/*  $A1= D98212.05    5D10  000104 ROCH     Datamodel changes        */
/*                                                                   */
/*  End CFD List.                                                    */
/*                                                                   */
/*   Additional notes about the Change Activity                      */
/*                                                                   */
/*  End Change Activity.                                             */
/*** END HEADER FILE SPECIFICATIONS **********************************/

#ifndef __OS2_H
  #define __OS2_H  1

#if (__OS400_TGTVRM__>=510)                                   /* @A1A*/
#pragma datamodel(P128)                                       /* @A1A*/
#endif                                                        /* @A1A*/

#define OS2_INCLUDED

/* Common definitions */
#include <os2def.h>

/* OS/2 Base Include File */
#ifndef INCL_NOBASEAPI
   #include <bse.h>
#endif /* INCL_NOBASEAPI */

#if (__OS400_TGTVRM__>=510)                                   /* @A1A*/
#pragma datamodel(pop)                                        /* @A1A*/
#endif                                                        /* @A1A*/

#endif /* __OS2_H */

#ifdef __cplusplus
    #pragma info(restore)
#else
    #pragma checkout(resume)
#endif
