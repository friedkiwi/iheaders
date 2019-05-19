#ifdef __cplusplus
   #pragma info(none)
#else
   #pragma nomargins nosequence
   #pragma checkout(suspend)
#endif
/*** START HEADER FILE SPECIFICATIONS ********************************/
/*                                                                   */
/* Header File Name:   dirent.h                                      */
/*                                                                   */
/* Descriptive Name: File system directory API definition.           */
/*                                                                   */
/* 5763-SS1, 5716-SS1, 5769-SS1, 5722-SS1                            */
/* (C) Copyright IBM Corp. 1993, 2000                                */
/* All rights reserved.                                              */
/* US Government Users Restricted Rights -                           */
/* Use, duplication or disclosure restricted                         */
/* by GSA ADP Schedule Contract with IBM Corp.                       */
/*                                                                   */
/* Licensed Materials-Property of IBM                                */
/*                                                                   */
/* Description: Defines the dirent structure, the DIR type,          */
/*              and directory function prototypes.                   */
/*                                                                   */
/* Header Files Included: unistd.h                                   */
/*                                                                   */
/* Macros List: _QP0L_DIR_NAME                                       */
/*                                                                   */
/* Structure List: DIR                                               */
/*                 dirent                                            */
/*                 dirent_lg                                     @A6A*/
/*                                                                   */
/* Function Prototype List:   closedir                               */
/*                            opendir                                */
/*                            QlgOpendir                         @A6A*/
/*                            QlgReaddir                         @A6A*/
/*                            QlgReaddir_r                       @A6A*/
/*                            readdir                                */
/*                            readdir_r                          @A5A*/
/*                            readdir_r_ts64                     @A8A*/
/*                            rewinddir                              */
/*                                                                   */
/* Change Activity:                                                  */
/*                                                                   */
/* CFD List:                                                         */
/*                                                                   */
/* FLAG REASON       LEVEL DATE   PGMR       CHANGE DESCRIPTION      */
/* ---- ------------ ----- ------ ---------- ------------------------*/
/* $A0= D28418       3D10  940307 ROCH       New Include             */
/* $A1= D91979       3D60  941219 ROCH       File Generation ID      */
/*                                           added to structs        */
/* $A2= P3977661     3D60  950105 ROCH       Changes to              */
/*                                           documentation           */
/* $A3= P3992252     3D60  950522 ROCH       Add __cplusplus #ifdef  */
/*                                           and #pragma info(none)  */
/* $A4= PTH01765     3D60  950804 ROCH       Correct #pragma info    */
/* $A5= D9477905     4D20  960830 ROCH       Add readdir_r() API     */
/*                                           prototype               */
/* $A6= D9765808     5D10  990607 ROCH       Add 'Qlg' API support   */
/* $A7= D9821200     5D10  000111 ROCH       Datamodel changes       */
/* $A8= D9776700     5D10  000203 ROCH       Add readdir_r_ts64      */
/* End CFD List.                                                     */
/*                                                                   */
/*  Additional notes about the Change Activity                       */
/*                                                                   */
/* End Change Activity.                                              */
/*** END HEADER FILE SPECIFICATIONS **********************************/

#ifndef __dirent_h
#define __dirent_h

#ifndef __QBFC_EXTERN
    #ifdef __ILEC400__
        #define QBFC_EXTERN extern
    #else
        #define QBFC_EXTERN extern "C"
    #endif

    #define __QBFC_EXTERN
#endif

#include <unistd.h>                /* include NULL definition and
                                      types used dirent structure   */

#if (__OS400_TGTVRM__>=510)                                  /* @A7A*/
#pragma datamodel(P128)                                      /* @A7A*/
#endif                                                       /* @A7A*/


/*********************************************************************/
/*  Type Definitions                                                 */
/*********************************************************************/

typedef struct _DIR DIR;  /* Directory Stream.  This is an incomplete
                             type.                                   */

#define _QP0L_DIR_NAME 640 /* size of d_name field of dirent
                              structure                              */

#define _QP0L_DIR_NAME_LG 2550 /* size of d_name field of dirent_lg
                                                       structure @A6A*/


/*********************************************************************/
/* Structures                                                        */
/*********************************************************************/
#define d_reserved2 d_fileno_gen_id

struct dirent {
  char           d_reserved1[16];  /* Reserved                       */
  unsigned int   d_fileno_gen_id;  /* File number generation ID  @A1C*/
  ino_t          d_fileno;         /* The file number of the file    */
  unsigned int   d_reclen;         /* Length of this directory entry
                                      in bytes                       */
  int            d_reserved3;      /* Reserved                       */
  char           d_reserved4[8];   /* Reserved                       */
  qlg_nls_t      d_nlsinfo;        /* National Language Information
                                      about d_name                   */
  unsigned int   d_namelen;        /* Length of the name, in bytes
                                      excluding NULL terminator      */
  char           d_name[_QP0L_DIR_NAME]; /* Name...null terminated   */

};


#if ((!(defined _POSIX_SOURCE) && !(defined _POSIX1_SOURCE)) \
   || ((defined _POSIX1_SOURCE) && (_POSIX1_SOURCE != 1)))    /* @A6A*/

struct dirent_lg {
 char            d_lg_reserved1[16]; /* Reserved                 @A6A*/
 unsigned int    d_lg_fileno_gen_id; /*File number generation ID @A6A*/
 ino_t           d_lg_fileno;        /*File number of the file   @A6A*/
 unsigned int    d_lg_reclen;        /* Length of this directory
                                            entry in bytes       @A6A*/
 int             d_lg_reserved3;     /* Reserved                 @A6A*/
 char            d_lg_reserved4[8];  /* Reserved                 @A6A*/
 Qlg_Path_Name_T d_lg_qlg;           /* Qlg structure            @A6A*/
 char            d_lg_name[_QP0L_DIR_NAME_LG]; /* Name...not
                                            null-terminated      @A6A*/
};

#endif  /* _POSIX_SOURCE  */


/*********************************************************************/
/*  Function Prototypes                                              */
/*********************************************************************/

QBFC_EXTERN DIR *opendir(const char *);
QBFC_EXTERN struct dirent *readdir(DIR *);
QBFC_EXTERN void rewinddir(DIR *);
QBFC_EXTERN int closedir(DIR *);

#if (__OS400_TGTVRM__ < 510) || \
  ((__OS400_TGTVRM__ >= 510) && !defined(__LLP64_IFC__))
  QBFC_EXTERN int readdir_r(DIR *, struct dirent *, struct dirent **);
                                                              /* @A5A*/
#else
  QBFC_EXTERN int readdir_r(DIR * __ptr64,
      struct dirent * __ptr64, struct dirent * __ptr64 * __ptr64);
                                                              /* @A8A*/
    #pragma map(readdir_r,"readdir_r_ts64")                   /* @A8A*/
#endif                                                        /* @A8A*/




#if ((!(defined _POSIX_SOURCE) && !(defined _POSIX1_SOURCE)) \
   || ((defined _POSIX1_SOURCE) && (_POSIX1_SOURCE != 1)))    /* @A6A*/

QBFC_EXTERN DIR *QlgOpendir(const Qlg_Path_Name_T *);        /* @A6A*/
QBFC_EXTERN int QlgReaddir_r
           (DIR *, struct dirent_lg *, struct dirent_lg **);  /* @A6A*/
QBFC_EXTERN struct dirent_lg *QlgReaddir(DIR *);             /* @A6A*/

#endif  /* _POSIX_SOURCE  */

#if (__OS400_TGTVRM__>=510)                                   /* @A7A*/
#pragma datamodel(pop)                                        /* @A7A*/
#endif                                                        /* @A7A*/

#endif /* __dirent_h */
#ifdef __cplusplus
    #pragma info(restore)
#else
    #pragma checkout(resume)
#endif
