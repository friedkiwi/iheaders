/*** START HEADER FILE SPECIFICATIONS ********************************/
/*                                                                   */
/*  Header File Name:   pwd.h                                        */
/*                                                                   */
/*  Descriptive Name:   User database related definitions.           */
/*                                                                   */
/*  5763-SS1, 5722-SS1 (C) Copyright IBM Corp. 1994, 2000            */
/*  All rights reserved.                                             */
/*  US Government Users Restricted Rights -                          */
/*  Use, duplication or disclosure restricted                        */
/*  by GSA ADP Schedule Contract with IBM Corp.                      */
/*                                                                   */
/*  Licensed Materials-Property of IBM                               */
/*                                                                   */
/*                                                                   */
/* Description:  This header file contains structures and function   */
/*               prototypes for user database access.                */
/*                                                                   */
/*  Change Activity:                                                 */
/*                                                                   */
/*  CFD List:                                                        */
/*                                                                   */
/*    FLAG&REASON   VERS DATE   PGMR COMMENTS                        */
/*    ____ ________ ____ ______ ____ _______________________________ */
/*    $A0= D2875000 3D10 940130 ROCH: New.                           */
/*    $A1= D9705910 4D40 981020 ROCH: Add _r routines                */
/*    $A2= P3681951 4D40 981022 ROCH: Add struct to passwd           */
/*    $A3= P3683864 4D40 981118 ROCH: Use size_t instead of int for  */
/*                                    size of work buffer.           */
/*    $A4= D9765800 5D10 990530 ROCH: Add qlg_passwd struct and Qlg  */
/*                                    routines.                      */
/*    $A5= D9776715 5D10 991205 ROCH: Add teraspace code.            */
/*                                                                   */
/*  End CFD List.                                                    */
/*                                                                   */
/*  End Change Activity.                                             */
/*** END HEADER FILE SPECIFICATIONS **********************************/

#ifndef _PWD_H
#define _PWD_H


#ifndef __QBFC_EXTERN
    #ifdef __ILEC400__
        #define QBFC_EXTERN extern
    #else
        #define QBFC_EXTERN extern "C"
    #endif

    #define __QBFC_EXTERN
#endif

#include <sys/types.h>
#include <qlg.h>

#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(P128)      /* @B1A*/
#endif                       /* @B1A*/

struct passwd {
        char    *pw_name;            /* User name.                   */
        uid_t   pw_uid;              /* User ID number.              */
        gid_t   pw_gid;              /* Group ID number.             */
        char    *pw_dir;             /* Initial working directory.   */
        char    *pw_shell;           /* Initial user program.        */
};

struct qlg_passwd {
        char               *pw_name; /* User name.                   */
        uid_t              pw_uid;   /* User ID number.              */
        gid_t              pw_gid;   /* Group ID number.             */
        Qlg_Path_Name_T    *pw_dir;  /* Initial working directory.   */
        char               *pw_shell;/* Initial user program.        */
};                                   /*                          @A4A*/

/* Routines that are not teraspace enabled.                      @A5A*/
QBFC_EXTERN struct passwd *getpwuid(uid_t uid);
QBFC_EXTERN struct passwd *getpwnam(const char *name);
QBFC_EXTERN struct qlg_passwd *QlgGetpwuid(uid_t uid);        /* @A4A*/
QBFC_EXTERN struct qlg_passwd *QlgGetpwnam(const char *name); /* @A4A*/
QBFC_EXTERN int QlgGetpwuid_r(uid_t           uid,
                      struct qlg_passwd *  passwdarea,
                      char              *  workbuffer,
                      size_t               workbuffer_size,
                      struct qlg_passwd ** passwdreturnptr); /*  @A4A*/

QBFC_EXTERN int QlgGetpwnam_r(const char   *  name,
		      struct qlg_passwd *  passwdarea,
                      char              *  workbuffer,
                      size_t               workbuffer_size,
                      struct qlg_passwd ** passwdreturnptr); /*  @A4A*/



#if (__OS400_TGTVRM__ < 510) || \
   ((__OS400_TGTVRM__ >= 510) && !defined(__LLP64_IFC__))  /*    @A5A*/
   /* Not in Teraspace environment.                              @A5A*/

   /* Non-teraspace _r routines.                                 @A5A*/
   QBFC_EXTERN  int getpwuid_r( uid_t    uid,
                           struct passwd * passwdarea,
                           char          * workbuffer,
                           size_t        workbuffer_size,
                           struct passwd ** passwdreturnptr); /* @A3C*/

   QBFC_EXTERN  int getpwnam_r( const char * name,
                           struct passwd  * passwdarea,
                           char           * workbuffer,
                           size_t           workbuffer_size,
                           struct passwd ** passwdreturnptr); /* @A3C*/

#else  /* In Teraspace environment.                              @A5A*/

   /* Teraspace _r routines.                                     @A5A*/
   QBFC_EXTERN  int getpwuid_r( uid_t  uid,
        struct passwd  * __ptr64 passwdarea,
        char           * __ptr64 workbuffer,
        size_t         workbuffer_size,
        struct passwd  * __ptr64 * __ptr64 passwdreturnptr); /*  @A5A*/
    #pragma map(getpwuid_r, "getpwuid_r_ts64")
    QBFC_EXTERN  int getpwnam_r( const char * __ptr64 name,
        struct passwd  * __ptr64 passwdarea,
        char           * __ptr64 workbuffer,
        size_t         workbuffer_size,
        struct passwd  * __ptr64 * __ptr64 passwdreturnptr); /*  @A5A*/
    #pragma map(getpwnam_r, "getpwnam_r_ts64")
#endif /* End Teraspace environment path.                        @A5A*/


#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(pop)       /* @B1A*/
#endif                       /* @B1A*/

#endif /* _PWD_H */
