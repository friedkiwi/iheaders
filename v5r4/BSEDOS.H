#ifdef __cplusplus
   #pragma info(none)
#else
   #pragma nomargins nosequence
   #pragma checkout(suspend)
#endif
/*** START HEADER FILE SPECIFICATIONS ********************************/
/*                                                                   */
/*  Header File Name: bsedos.h                                       */
/*                                                                   */
/*  Descriptive Name: Base Definitions for Applications using        */
/*                    OS/2-like APIs                                 */
/*                                                                   */
/*  Copyright (c) 1987 - 1992  IBM Corporation                       */
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
/*  Description: Includes base definitions necessary for writing     */
/*               applications that use OS/2-like APIs.               */
/*                                                                   */
/*  Header Files Included: None                                      */
/*                                                                   */
/*  Macros list: INCL_DOSINCLUDED                                    */
/*                                                                   */
/*  Structure List: FILELOCK                                         */
/*                  PFILELOCK                                        */
/*                  FILELOCK64                                   @A3A*/
/*                  PFILELOCK64                                  @A3A*/
/*                                                                   */
/*  Types List:     HFILE                                            */
/*                  PHFILE                                           */
/*                                                                   */
/*                                                                   */
/*  Function prototype list :  DosSetRelMaxFH                        */
/*                             DosSetFileLocks                       */
/*                                                                   */
/*  Change Activity:                                                 */
/*                                                                   */
/*  CFD List:                                                        */
/*                                                                   */
/*  FLAG REASON       LEVEL DATE   PGMR     CHANGE DESCRIPTION       */
/*  ---- ------------ ----- ------ -------- ------------------------ */
/*  $A0= D94111.1     3D70  960124 ROCH     New Include              */
/*  $A1= D94974       4D20  960923 ROCH     Add DosSetFileLocks()    */
/*                                          FILELOCK and PFILELOCK   */
/*  $A2= P3654445     4D20  970805 ROCH     include types.h for ulong*/
/*  $A3= D9588102     4D40  980603 ROCH     Add DosSetFileLocks64(), */
/*                                          FILELOCK64, PFILELOCK64  */
/*  $A4= D9588102     4D40  980626 ROCH     Add DosSetFileLocks64(), */
/*  $A5= P3682997     4D40  981102 ROCH     Large Files support for  */
/*                                          *IFS64IO                 */
/*  $A6= D98212.05    5D10  000104 ROCH     Datamodel changes        */
/*                                                                   */
/*  End CFD List.                                                    */
/*                                                                   */
/*   Additional notes about the Change Activity                      */
/*                                                                   */
/*  End Change Activity.                                             */
/*** END HEADER FILE SPECIFICATIONS **********************************/

#ifndef __BSEDOS_H
#define __BSEDOS_H

#if (__OS400_TGTVRM__>=510)                                   /* @A6A*/
#pragma datamodel(P128)                                       /* @A6A*/
#endif                                                        /* @A6A*/

#define INCL_DOSINCLUDED

#ifndef __QBFC_EXTERN
    #ifdef __ILEC400__
        #define QBFC_EXTERN extern
    #else
        #define QBFC_EXTERN extern "C"
    #endif

    #define __QBFC_EXTERN
#endif

#if (defined(INCL_DOSFILEMGR) || !defined(INCL_NOCOMMON))

#include <sys/types.h>

QBFC_EXTERN APIRET APIENTRY DosSetRelMaxFH(PLONG pcbReqCount,
                                           PULONG pcbCurMaxFH);

/********************************************************************/
/*  Turn on the Large File Support when *IFS64IO is specified   @A5A*/
/*  as C compiler option.                                       @A5A*/
/********************************************************************/
#ifdef __IFS64_IO__                                          /* @A5A*/
   #ifndef _LARGE_FILES                                      /* @A5A*/
      #define _LARGE_FILES                                   /* @A5A*/
   #endif                                                    /* @A5A*/
   #ifndef _LARGE_FILE_API                                   /* @A5A*/
      #define _LARGE_FILE_API                                /* @A5A*/
   #endif                                                    /* @A5A*/
#endif                                                       /* @A5A*/


typedef struct _FILELOCK
{
  off_t lOffset;                                             /* @A3C*/
  off_t lRange;                                              /* @A3C*/
} FILELOCK;
typedef FILELOCK *PFILELOCK;

/********************************************************************/
/* Define FILELOCK64 structure for _LARGE_FILE_API flag.        @A3A*/
/********************************************************************/

#ifdef _LARGE_FILE_API                /* Large File Support     @A3A*/
typedef struct _FILELOCK64
{
  off64_t lOffset;
  off64_t lRange;
} FILELOCK64;
typedef FILELOCK64 *PFILELOCK64;
#endif                                                       /* @A3A*/

typedef LHANDLE HFILE;
typedef HFILE *PHFILE;

#ifdef _LARGE_FILES         /* Mapping for Large File Support   @A3A*/
  #pragma map (DosSetFileLocks, "DosSetFileLocks64")    /* @A3A @A4C*/
#endif

QBFC_EXTERN APIRET APIENTRY DosSetFileLocks(HFILE hFile,
                                            PFILELOCK pflUnlock,
                                            PFILELOCK pflLock,
                                            ulong timeout,
                                            ulong flags);

#ifdef _LARGE_FILE_API    /* New API for Large File Support     @A3A*/
  QBFC_EXTERN APIRET APIENTRY DosSetFileLocks64(HFILE hFile,
                                                PFILELOCK64 pflUnlock,
                                                PFILELOCK64 pflLock,
                                                ulong timeout,
                                                ulong flags);
#endif

#endif /* INCL_DOSFILEMGR or not INCL_NOCOMMON */

#if (__OS400_TGTVRM__>=510)                                  /* @A6A*/
#pragma datamodel(pop)                                       /* @A6A*/
#endif                                                       /* @A6A*/

#endif /* __BSEDOS_H */

#ifdef __cplusplus
    #pragma info(restore)
#else
    #pragma checkout(resume)
#endif
