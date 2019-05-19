/*** START HEADER FILE SPECIFICATIONS ********************************/
/*                                                                   */
/*  Header File Name:   grp.h                                        */
/*                                                                   */
/*  Descriptive Name:   Group database related definitions.          */
/*                                                                   */
/*  5763-SS1, 5722-SS1 (C) Copyright IBM Corp. 1994, 2000            */
/*  All rights reserved.                                             */
/*  US Government Users Restricted Rights -                          */
/*  Use, duplication or disclosure restricted                        */
/*  by GSA ADP Schedule Contract with IBM Corp.                      */
/*                                                                   */
/*  Licensed Materials-Property of IBM                               */
/*                                                                   */
/*  Description: This header file contains structures and function   */
/*               prototypes for group database access.               */
/*                                                                   */
/*  Change Activity:                                                 */
/*                                                                   */
/*  CFD List:                                                        */
/*                                                                   */
/*    FLAG REASON   VERS DATE   PGMR COMMENTS                        */
/*    _____________ ____ ______ ____ _______________________________ */
/*    $A0= D2875000 3D10 940130 ROCH: New.                           */
/*    $A1= D9705910 4D40 981020 ROCH: Add _r routines                */
/*    $A2= P3681951 4D40 981022 ROCH: Add struct to group            */
/*    $A3= P3683864 4D40 981118 ROCH: Use size_t instead of int for  */
/*                                    size of work buffer.           */
/*    $A4= D9776715 5D10 991205 ROCH: Teraspace changes.             */
/*                                                                   */
/*  End CFD List.                                                    */
/*                                                                   */
/*  End Change Activity.                                             */
/*** END HEADER FILE SPECIFICATIONS **********************************/

#ifndef _GRP_H
#define _GRP_H


#ifndef __QBFC_EXTERN
    #ifdef __ILEC400__
        #define QBFC_EXTERN extern
    #else
        #define QBFC_EXTERN extern "C"
    #endif

    #define __QBFC_EXTERN
#endif

#include <sys/types.h>

#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(P128)      /* @B1A*/
#endif                       /* @B1A*/

struct group {
        char    *gr_name;        /* Group name.                      */
        gid_t   gr_gid;          /* Group id.                        */
        char    **gr_mem;        /* A null-terminated list of pointers
                                    to the individual member names.  */
};

QBFC_EXTERN struct group *getgrgid( gid_t gid );
QBFC_EXTERN struct group *getgrnam( const char *name );

#if (__OS400_TGTVRM__ < 510) || \
   ((__OS400_TGTVRM__ >= 510) && !defined(__LLP64_IFC__))  /*   @A4A*/
   /* Not in Teraspace environment.                             @A4A*/

   /* Non-teraspace _r routines.                                @A4A*/
   QBFC_EXTERN  int getgrgid_r( gid_t           gid,
                           struct group  * grouparea,
                           char          * workbuffer,
                           size_t          workbuffer_size,
                           struct group ** groupreturnptr); /*  @A3C*/

   QBFC_EXTERN  int getgrnam_r( const char    * name,
                           struct group  * grouparea,
                           char          * workbuffer,
                           size_t          workbuffer_size,
                           struct group ** groupreturnptr); /*  @A3C*/

#else   /* In Teraspace environment.                            @A4A*/

   /* Teraspace _r routines.                                    @A4A*/
   QBFC_EXTERN  int getgrgid_r( gid_t    gid,
        struct group  * __ptr64 grouparea,
        char          * __ptr64 workbuffer,
        size_t          workbuffer_size,
        struct group  * __ptr64 * __ptr64 groupreturnptr); /*   @A4A*/
   #pragma map(getgrgid_r, "getgrgid_r_ts64")
   QBFC_EXTERN  int getgrnam_r( const char * __ptr64 name,
        struct group  * __ptr64 grouparea,
        char          * __ptr64 workbuffer,
        size_t          workbuffer_size,
        struct group  * __ptr64 * __ptr64 groupreturnptr); /*   @A4A*/
   #pragma map(getgrnam_r, "getgrnam_r_ts64")
#endif  /* End Teraspace environment path.                      @A4A*/

#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(pop)       /* @B1A*/
#endif                       /* @B1A*/

#endif /* _GRP_H */
