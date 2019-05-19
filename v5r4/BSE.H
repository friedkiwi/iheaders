#ifdef __cplusplus
   #pragma info(none)
#else
   #pragma nomargins nosequence
   #pragma checkout(suspend)
#endif
/*** START HEADER FILE SPECIFICATIONS ********************************/
/*                                                                   */
/*  Header File Name: bse.h                                          */
/*                                                                   */
/*  Descriptive Name: Base Definitions for Applications using        */
/*                    OS/2-like APIs                                 */
/*                                                                   */
/*  Copyright (c) 1987, 1992  IBM Corporation                        */
/*                                                                   */
/*  5716-SS1,5722-SS1                                                */
/*  (C) Copyright IBM Corp. 1996, 2000                               */
/*  All rights reserved.                                             */
/*  US Government Users Restricted Rights -                          */
/*  Use, duplication or disclosure restricted                        */
/*  by GSA ADP Schedule Contract with IBM Corp.                      */
/*                                                                   */
/*  Licensed Materials-Property of IBM                               */
/*                                                                   */
/*  Description: Includes base definitions necessary for writing     */
/*               applications that use OS/2-like APIs.               */
/*                                                                   */
/*  Header Files Included: bsedos.h                                  */
/*                         bseerr.h                                  */
/*                                                                   */
/*  Macros list: INCL_BASEINCLUDED                                   */
/*               INCL_DOS            defined if INCL_BASE is defined */
/*               INCL_DOSERRORS      defined if INCL_BASE is defined */
/*               INCL_SUB            defined if INCL_BASE is defined */
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

#ifndef __BSE_H
#define __BSE_H

#if (__OS400_TGTVRM__>=510)                                   /* @A1A*/
#pragma datamodel(P128)                                       /* @A1A*/
#endif                                                        /* @A1A*/

#define INCL_BASEINCLUDED

#ifdef INCL_BASE
   #define INCL_DOS
   #define INCL_SUB
   #define INCL_DOSERRORS
#endif /* INCL_BASE */

#include <bsedos.h>       /* Base definitions */

#include <bseerr.h>       /* Base error code definitions */

#if (__OS400_TGTVRM__>=510)                                   /* @A1A*/
#pragma datamodel(pop)                                        /* @A1A*/
#endif                                                        /* @A1A*/

#endif /* __BSE_H */

#ifdef __cplusplus
    #pragma info(restore)
#else
    #pragma checkout(resume)
#endif
