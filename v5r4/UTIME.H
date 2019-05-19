#ifdef __cplusplus
   #pragma info(none)
#else
   #pragma nomargins nosequence
   #pragma checkout(suspend)
#endif
/*** START HEADER FILE SPECIFICATIONS ********************************/
/*                                                                   */
/*  Header File Name:  utime.h                                       */
/*                                                                   */
/*  Descriptive Name:  File access and modification definition.      */
/*                                                                   */
/*                                                                   */
/*  5763-SS1, 5716-SS1, 5722-SS1                                     */
/*  (C) Copyright IBM Corp. 1993, 2000                               */
/*  All rights reserved.                                             */
/*  US Government Users Restricted Rights -                          */
/*  Use, duplication or disclosure restricted                        */
/*  by GSA ADP Schedule Contract with IBM Corp&period.               */
/*                                                                   */
/*  Licensed Materials-Property of IBM                               */
/*                                                                   */
/*  Description:  Defines type, structure, and prototype             */
/*                for file access and modification API               */
/*                                                                   */
/*                                                                   */
/*  Header Files Included : sys/types.h                              */
/*                          qlg.h                                @A4A*/
/*                                                                   */
/*  Macros List :  None                                              */
/*                                                                   */
/*  Structure List: utimbuf                                          */
/*                                                                   */
/*  Function Prototype List: QlgUtime                                */
/*                           utime                                   */
/*                                                                   */
/*  Change Activity:                                                 */
/*                                                                   */
/*  CFD List :                                                       */
/*                                                                   */
/*  FLAG REASON       LEVEL DATE    PGMR      CHANGE DESCRIPTION     */
/*  ---- ------------ ----- ------- --------- ---------------------- */
/*  $A0= D28418       3D10  940307  ROCH      New Include            */
/*  $A1= P3977661     3D60  950105  ROCH      Changes to             */
/*                                            documentation          */
/*  $A2= P3992252     3D60  950522  ROCH      Add __cplusplus #ifdef */
/*                                            and #pragma info(none) */
/*  $A3= PTH01765     3D60  950804  ROCH      Correct #pragma info   */
/*  $A4= D9765800     5D10  990607  ROCH      Add QlgUtime API and   */
/*                                            qlg.h header file      */
/*  $A5= D98212.05    5D10  000104  ROCH      Datamodel changes      */
/*                                                                   */
/*  End CFD List.                                                    */
/*                                                                   */
/*   Additional notes about the Change Activity                      */
/*  End Change Activity.                                             */
/*** END HEADER FILE SPECIFICATIONS **********************************/

#ifndef __utime_h
  #define __utime_h 1

#ifndef __QBFC_EXTERN
    #ifdef __ILEC400__
        #define QBFC_EXTERN extern
    #else
        #define QBFC_EXTERN extern "C"
    #endif

    #define __QBFC_EXTERN
#endif

#include <sys/types.h>             /* include time_t definition      */

/* Protect POSIX source                                       @A4A*/
#if (!(defined _POSIX_SOURCE) && !(defined _POSIX1_SOURCE))

#include <qlg.h>                      /* For Qlg_Path_Name_T  @A4A*/

/* Protect POSIX source                                       @A4A*/
#endif

#if (__OS400_TGTVRM__>=510)                                   /* @A5A*/
#pragma datamodel(P128)                                       /* @A5A*/
#endif                                                        /* @A5A*/


/* ================================================================= */
/* utimbuf structure definition                                      */
/* ================================================================= */

struct utimbuf {
   time_t     actime;           /*  access time       */
   time_t     modtime;          /*  modification time */
};

QBFC_EXTERN int utime(const char *, const struct utimbuf *);




/* Protect POSIX source                                        @A4A*/
#if (!(defined _POSIX_SOURCE) && !(defined _POSIX1_SOURCE))
                                                            /* @A4A*/
QBFC_EXTERN int QlgUtime(const Qlg_Path_Name_T *,
			 const struct utimbuf *);

/* Protect POSIX source                                        @A4A*/
#endif

#if (__OS400_TGTVRM__>=510)                                 /* @A5A*/
#pragma datamodel(pop)                                      /* @A5A*/
#endif                                                      /* @A5A*/


#endif   /* __utime_h */

#ifdef __cplusplus
    #pragma info(restore)
#else
    #pragma checkout(resume)
#endif
