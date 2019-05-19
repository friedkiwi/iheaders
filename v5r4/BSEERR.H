#ifdef __cplusplus
   #pragma info(none)
#else
   #pragma nomargins nosequence
   #pragma checkout(suspend)
#endif
/*** START HEADER FILE SPECIFICATIONS ********************************/
/*                                                                   */
/*  Header File Name: bseerr.h                                       */
/*                                                                   */
/*  Descriptive Name: Error code definitions for applications using  */
/*                    OS/2-like APIs                                 */
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
/*  Description: Includes error code definitions necessary for       */
/*               writing applications that use OS/2-like APIs.       */
/*                                                                   */
/*  Header Files Included: None                                      */
/*                                                                   */
/*  Macros list:                                                     */
/*               ERROR_ATOMIC_LOCK_NOT_SUPPORTED                     */
/*               ERROR_GEN_FAILURE                                   */
/*               ERROR_INVALID_HANDLE                                */
/*               ERROR_INVALID_PARAMETER                             */
/*               ERROR_LOCK_VIOLATION                                */
/*               ERROR_PROTECTION_VIOLATION                          */
/*               ERROR_TIMER_NOT_SUPPORTED                           */
/*               NO_ERROR                                            */
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
/*  $A1= D94974       4D20  960923 ROCH     Additional errors for    */
/*                                          DosSetFileLocks() API    */
/*  $A2= D98212.05    5D10  000104 ROCH     Datamodel changes        */
/*                                                                   */
/*  End CFD List.                                                    */
/*                                                                   */
/*   Additional notes about the Change Activity                      */
/*                                                                   */
/*  End Change Activity.                                             */
/*** END HEADER FILE SPECIFICATIONS **********************************/

#ifndef __BSEERR_H
#define __BSEERR_H

#if (__OS400_TGTVRM__>=510)                                   /* @A2A*/
#pragma datamodel(P128)                                       /* @A2A*/
#endif                                                        /* @A2A*/

#define NO_ERROR                     0 /* No error occurred.         */
#define ERROR_INVALID_HANDLE         6 /* Invalid file handle        */
#define ERROR_GEN_FAILURE           31 /* General failure.           */
#define ERROR_LOCK_VIOLATION        33 /* Lock violation             */
#define ERROR_INVALID_PARAMETER     87 /* Invalid parameter          */
#define ERROR_PROTECTION_VIOLATION 115 /* Invalid user virtual addr. */
#define ERROR_ATOMIC_LOCK_NOT_SUPPORTED 174 /* Atomic lock notsup    */
#define ERROR_TIMER_NOT_SUPPORTED  16384 /* Timer not supported      */

#if (__OS400_TGTVRM__>=510)                                   /* @A2A*/
#pragma datamodel(pop)                                        /* @A2A*/
#endif                                                        /* @A2A*/

#endif /* __BSEERR_H */

#ifdef __cplusplus
    #pragma info(restore)
#else
    #pragma checkout(resume)
#endif
