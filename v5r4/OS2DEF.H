#ifdef __cplusplus
   #pragma info(none)
#else
   #pragma nomargins nosequence
   #pragma checkout(suspend)
#endif
/*** START HEADER FILE SPECIFICATIONS ********************************/
/*                                                                   */
/*  Header File Name: os2def.h                                       */
/*                                                                   */
/*  Descriptive Name: Common Definitions for Applications that use   */
/*                    OS/2-like APIs                                 */
/*                                                                   */
/*  Copyright (c) International Business Machines Corporation        */
/*                1981, 1988-1992                                    */
/*                                                                   */
/*  5716-SS1, 5769-SS1, 5722-SS1                                     */
/*  (C) Copyright IBM Corp. 1996, 2000                               */
/*  All rights reserved.                                             */
/*  US Government Users Restricted Rights -                          */
/*  Use, duplication or disclosure restricted                        */
/*  by GSA ADP Schedule Contract with IBM Corp.                      */
/*                                                                   */
/*  Licensed Materials-Property of IBM                               */
/*                                                                   */
/*  Description: Includes common definitions necessary for writing   */
/*               applications that use OS/2-like APIs.               */
/*                                                                   */
/*  Header Files Included: None                                      */
/*                                                                   */
/*  Macros list: APIENTRY                                            */
/*               APIRET                                              */
/*               LHANDLE                                             */
/*               OS2DEF_INCLUDED                                     */
/*               PLONG                                               */
/*               PULONG                                              */
/*               QP0L_DOSSETFILELOCKS_ATOMIC                         */
/*               QP0L_DOSSETFILELOCKS_SHARE                          */
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
/*  $A1= D94974       4D20  960924 ROCH     Changes to support       */
/*                                          DosSetFileLocks() API:   */
/*                                          LHANDLE                  */
/*                                        QP0L_DOSSETFILELOCKS_ATOMIC*/
/*                                        QP0L_DOSSETFILELOCKS_SHARE */
/*  $A2= D98212.05    5D10  000104 ROCH     Datamodel changes        */
/*                                                                   */
/*  End CFD List.                                                    */
/*                                                                   */
/*   Additional notes about the Change Activity                      */
/*                                                                   */
/*  End Change Activity.                                             */
/*** END HEADER FILE SPECIFICATIONS **********************************/

#ifndef __OS2DEF_H
#define __OS2DEF_H

#if (__OS400_TGTVRM__>=510)                                   /* @A2A*/
#pragma datamodel(P128)                                       /* @A2A*/
#endif                                                        /* @A2A*/

#define OS2DEF_INCLUDED

#define APIENTRY

typedef unsigned long  APIRET;

typedef long *PLONG;
typedef unsigned long *PULONG;

typedef unsigned long *LHANDLE;      /*type for file handles         */

/* Constants needed for the ulFlags parameter of the */
/* DosSetFileLocks API - not defined in 0S/2        */
#define QP0L_DOSSETFILELOCKS_ATOMIC 0x0001
#define QP0L_DOSSETFILELOCKS_SHARE  0x0002

#if (__OS400_TGTVRM__>=510)                                   /* @A2A*/
#pragma datamodel(pop)                                        /* @A2A*/
#endif                                                        /* @A2A*/

#endif /* __OS2DEF_H */

#ifdef __cplusplus
    #pragma info(restore)
#else
    #pragma checkout(resume)
#endif
