/* begin_generated_IBM_copyright_prolog                              */
/* This is an automatically generated copyright prolog.              */
/* After initializing,  DO NOT MODIFY OR MOVE                        */
/* ----------------------------------------------------------------- */
/*                                                                   */
/* Product(s):                                                       */
/*     5763-SS1                                                      */
/*     5716-SS1                                                      */
/*     5769-SS1                                                      */
/*     5722-SS1                                                      */
/*                                                                   */
/* (C)Copyright IBM Corp.  1993, 2003                                */
/*                                                                   */
/* All rights reserved.                                              */
/* US Government Users Restricted Rights -                           */
/* Use, duplication or disclosure restricted                         */
/* by GSA ADP Schedule Contract with IBM Corp.                       */
/*                                                                   */
/* Licensed Materials-Property of IBM                                */
/*                                                                   */
/*  ---------------------------------------------------------------  */
/*                                                                   */
/* end_generated_IBM_copyright_prolog                                */
#ifdef __cplusplus
   #pragma info(none)
#else
   #pragma nomargins nosequence
   #pragma checkout(suspend)
#endif
/*** START HEADER FILE SPECIFICATIONS ********************************/
/*                                                                   */
/*  Header File Name: fcntl.h                                        */
/*                                                                   */
/*  Descriptive Name: File system file control definitions.          */
/*                                                                   */
/*  Description: Defines prototypes, macros, and structures to be    */
/*               used with the file system file control API.         */
/*                                                                   */
/*  Header Files Included: sys/stat.h                                */
/*                         unistd.h                                  */
/*                         qlg.h                                 @B6A*/
/*                                                                   */
/*  Macros list: F_DUPFD                                             */
/*               F_GETFD                                         @A9A*/
/*               F_GETFL                                             */
/*               F_GETLK                                             */
/*               F_GETLK64                                       @B1A*/
/*               F_GETOWN                                            */
/*               F_RDLCK                                             */
/*               F_SETFD                                         @A9A*/
/*               F_SETFL                                             */
/*               F_SETLK                                             */
/*               F_SETLKW                                            */
/*               F_SETLKW64                                      @B1A*/
/*               F_SETLK64                                       @B1A*/
/*               F_SETOWN                                            */
/*               F_UNLCK                                             */
/*               F_WRLCK                                             */
/*               FASYNC                                              */
/*               FD_CLOEXEC                                      @A9A*/
/*               FNDELAY                                             */
/*               O_ACCMODE                                           */
/*               O_APPEND                                            */
/*               O_CCSID                                         @B5A*/
/*               O_CODEPAGE                                          */
/*               O_CREAT                                             */
/*               O_DSYNC                                         @B9A*/
/*               O_EXCL                                              */
/*               O_FORCE_SCAN                                    @BBA*/
/*               O_INHERITMODE                                       */
/*               O_LARGEFILE                                     @B1A*/
/*               O_NDELAY                                            */
/*               O_NOCTTY                                        @B8A*/
/*               O_NONBLOCK                                          */
/*               O_RDONLY                                            */
/*               O_RDWR                                              */
/*               O_RSYNC                                         @B9A*/
/*               O_SHARE_NONE                                    @A8A*/
/*               O_SHARE_RDONLY                                  @A8A*/
/*               O_SHARE_RDWR                                    @A8A*/
/*               O_SHARE_WRONLY                                  @A8A*/
/*               O_SYNC                                          @B9A*/
/*               O_TEXTDATA                                          */
/*               O_TEXT_CREAT                                    @BAA*/
/*               O_TRUNC                                             */
/*               O_WRONLY                                            */
/*      The following macros come from the included file sys/stat.h  */
/*               S_IRGRP                                             */
/*               S_IROTH                                             */
/*               S_IRUSR                                             */
/*               S_IRWXG                                             */
/*               S_IRWXO                                             */
/*               S_IRWXU                                             */
/*               S_IWGRP                                             */
/*               S_IWOTH                                             */
/*               S_IWUSR                                             */
/*               S_IXGRP                                             */
/*               S_IXOTH                                             */
/*               S_IXUSR                                             */
/*               SEEK_CUR                                            */
/*               SEEK_END                                            */
/*               SEEK_SET                                            */
/*                                                                   */
/*                                                                   */
/*                                                                   */
/*  Structure List: flock                                            */
/*                  flock64                                      @B1A*/
/*                                                                   */
/*  Function prototype list :  creat()                               */
/*                             creat64()                         @B1A*/
/*                             fcntl()                               */
/*                             open()                                */
/*                             open64()                          @B1A*/
/*                             QlgCreat                          @B6A*/
/*                             QlgCreat64                        @B6A*/
/*                             QlgOpen64                         @B6A*/
/*                                                                   */
/*                                                                   */
/*                                                                   */
/*  Change Activity:                                                 */
/*                                                                   */
/*  CFD List:                                                        */
/*                                                                   */
/*  FLAG REASON       LEVEL DATE   PGMR     CHANGE DESCRIPTION       */
/*  ---- ------------ ----- ------ -------- ------------------------ */
/*  $A0= D28418       3D10  940307 ROCH     New Include              */
/*  $A1= P3964382     3D60  941202 ROCH     Add O_INHERITMODE flag   */
/*  $A3= P3977661     3D60  950105 ROCH     Changes to               */
/*                                          documentation            */
/*  $A4= P3992252     3D60  950522 ROCH     Add __cplusplus #ifdef   */
/*                                          and #pragma info(none)   */
/*  $A5= P3994310     3D60  950615 ROCH     Add O_SET_FILE_SIZE flag */
/*  $A6= PTH01765     3D60  950804 ROCH     Correct #pragma info     */
/*  $A7= P3603776     3Q60  951021 ROCH     Add signals constants:   */
/*                                          F_GETOWN, F_SETOWN       */
/*                                          and FASYNC               */
/*  $A8= D9512801     4D10  961015 ROCH     Add share mode flags:    */
/*                                          O_SHARE_NONE             */
/*                                          O_SHARE_RDONLY           */
/*                                          O_SHARE_RDWR             */
/*                                          O_SHARE_WRONLY           */
/*                                                                   */
/*  $A9= D9497400     4D20  970124 ROCH     Add file descriptor flag */
/*                                          FD_CLOEXEC               */
/*                                          Add fcntl() cmd values   */
/*                                          F_GETFD, F_SETFD         */
/*  $B1= D9588102     4D40  980603 ROCH     Add open64(), creat64()  */
/*                                          APIs.                    */
/*                                          Add O_LARGEFILE value    */
/*                                          for oflag.               */
/*                                          Add flock64 structure.   */
/*                                          Add fcntl flags:         */
/*                                          F_GETLK64, F_SETLK64,    */
/*                                          and F_SETLKW64.          */
/*  $B2= P3670424     4D40  980603 ROCH     Remove O_SET_FILE_SIZE   */
/*  $B3= D9588105     4D40  980626 ROCH     Fix #pragma map          */
/*  $B4= P3682997     4D40  981102 ROCH     Large Files support for  */
/*                                          *IFS64IO                 */
/*  $B5= D97651.1     5D10  990604 ROCH     Add O_CCSID              */
/*  $B6= D9765800     5D10  990607 ROCH     Add 'Qlg' APIs and qlg.h */
/*  $B7= D98212.05    5D10  000104 ROCH     Datamodel changes        */
/*  $B8= D98391.03    5D20  001213 ROCH     Add O_NOCTTY             */
/*  $B9= D9868602     5D20  010309 ROCH     Add O_SYNC, O_DSYNC, and */
/*                                          O_RSYNC                  */
/*  $BA= D9873902     5D20  010309 ROCH     Add O_TEXT_CREAT         */
/*  $BB= P9A61540  v5r3m0f  040309 ROCH     Add O_FORCE_SCAN         */
/*  End CFD List.                                                    */
/*                                                                   */
/*   Additional notes about the Change Activity                      */
/*  End Changed Activity.                                            */
/*** END HEADER FILE SPECIFICATIONS **********************************/


#ifndef __fcntl_h
  #define __fcntl_h  1

#ifndef __QBFC_EXTERN
    #ifdef __ILEC400__
        #define QBFC_EXTERN extern
    #else
        #define QBFC_EXTERN extern "C"
    #endif

    #define __QBFC_EXTERN
#endif


#include <sys/stat.h>           /* Include 'S_' macros              */
#include <unistd.h>             /* Include 'SEEK_' macros
                                   and primitive system data types  */

#if (!(defined _POSIX_SOURCE) && !(defined _POSIX1_SOURCE))  /* @B6A*/
  #include <qlg.h>              /* Qlg_Path_Name_T              @B6A*/
#endif                                                       /* @B6A*/

#if (__OS400_TGTVRM__>=510)                                  /* @B7A*/
#pragma datamodel(P128)                                      /* @B7A*/
#endif                                                       /* @B7A*/

/********************************************************************/
/*  Turn on the Large File Support when *IFS64IO is specified   @B4A*/
/*  as C compiler option.                                       @B4A*/
/********************************************************************/
#ifdef __IFS64_IO__                                          /* @B4A*/
   #ifndef _LARGE_FILES                                      /* @B4A*/
      #define _LARGE_FILES                                   /* @B4A*/
   #endif                                                    /* @B4A*/
   #ifndef _LARGE_FILE_API                                   /* @B4A*/
      #define _LARGE_FILE_API                                /* @B4A*/
   #endif                                                    /* @B4A*/
#endif                                                       /* @B4A*/

/********************************************************************/
/*   cmd Values for fcntl()                                         */
/********************************************************************/
#define F_DUPFD    0            /* Duplicate a file descriptor      */
#define F_GETFD    1            /* Get file descriptor flags    @A9A*/
#define F_SETFD    2            /* Set file descriptor flags    @A9A*/

/********************************************************************/
/* Definitions for applications that use small files.           @B1A*/
/********************************************************************/
#ifndef _LARGE_FILES            /* No Support for Large Files   @B1A*/
#define F_GETLK    3            /* Get locking information          */
#define F_SETLK    4            /* Set locking information          */
#define F_SETLKW   5            /* Set locking information
                                   Wait if blocked                  */
#endif                                                       /* @B1A*/

#define F_GETFL    6            /* Get file status flags            */
#define F_SETFL    7            /* Set file status flags            */

/********************************************************************/
/* Definitions for applications that use large files.           @B1A*/
/********************************************************************/
#define F_GETLK64  12           /* Get locking information      @B1A*/
#define F_SETLK64  13           /* Set locking information      @B1A*/
#define F_SETLKW64 14           /* Set locking information
                                   Wait if blocked              @B1A*/

/********************************************************************/
/* Map definitions for applications that use large files and    @B1A*/
/* are compiled with the _LARGE_FILES flag.                     @B1A*/
/********************************************************************/
#ifdef _LARGE_FILES             /* Support for Large Files      @B1A*/
#define F_GETLK    F_GETLK64    /* Map to the 64 bit version    @B1A*/
#define F_SETLK    F_SETLK64    /* Map to the 64 bit version    @B1A*/
#define F_SETLKW   F_SETLKW64   /* Map to the 64 bit version    @B1A*/
#endif                                                       /* @B1A*/

/* not POSIX.1 defined symbolic constant */
#if (!(defined _POSIX_SOURCE) && !(defined _POSIX1_SOURCE))
#define F_GETOWN   8            /* Get process/group owner      @A7A*/
#define F_SETOWN   9            /* Set process/group owner      @A7A*/
#endif


/********************************************************************/
/*   File Descriptor Flags for fcntl()                          @A9A*/
/********************************************************************/
#define FD_CLOEXEC 00001       /* Close the file descriptor     @A9A*/
                               /* upon execution of a           @A9A*/
                               /* spawn()-family function.      @A9A*/
                               /* spawn()-family functions are
                                  prototyped in spawn.h         @A9A*/

/*******************************************************************/
/*   File Access Modes for open()                                  */
/*******************************************************************/
#define O_RDONLY   00001        /* Open for reading only           */
#define O_WRONLY   00002        /* Open for writing only           */
#define O_RDWR     00004        /* Open for reading and writing    */

/*******************************************************************/
/*   Mask for use with File Access Modes                           */
/*******************************************************************/
#define O_ACCMODE  (O_RDONLY | O_WRONLY | O_RDWR)

/*******************************************************************/
/*   oflag Values for open()                                       */
/*******************************************************************/
#define O_CREAT      00010      /* Create file if it doesn't exist */
#define O_EXCL       00020      /* Exclusive use flag              */
/*                   00040         reserved                        */
#define O_TRUNC      00100      /* Truncate flag                   */
#define O_NOCTTY     000000100000 /* No controlling terminal   @B8A*/

/*******************************************************************/
/*   File Status Flags for open() and fcntl()                      */
/*******************************************************************/
#define O_NONBLOCK   00200      /* No delay...return EAGAIN if it
                                   will block                      */
#define O_APPEND     00400      /* Set append mode                 */
#define O_LARGEFILE  004000000000 /* Large file access         @B1A*/
#define O_SYNC       000000002000 /* Synchronous write option  @B9A*/
#define O_DSYNC      000000004000 /* sync write, data only     @B9A*/
#define O_RSYNC      000000010000 /* Synchronous read option   @B9A*/

/* not POSIX.1 defined symbolic constant */
#if (!(defined _POSIX_SOURCE) && !(defined _POSIX1_SOURCE))

  #define O_NDELAY   O_NONBLOCK   /* return EAGAIN if it will block*/
  #define FNDELAY   O_NDELAY      /* Define FNDELAY and O_NDELAY
                                     to be the same                */
  #define FASYNC 000000001000     /* Asynchronous I/O          @A7A*/
  #define O_CODEPAGE   040000000  /* The O_CODEPAGE flag is used
                                     indicate that the conversion
                                     ID parameter should be
                                     interpreted as a code page and
                                     mixed conversion is not
                                     allowed                   @B5C*/
  #define O_TEXTDATA  0100000000  /* text data flag                */
  #define O_FORCE_SCAN  000400000000 /* Force scan flag - see scan-
                                        related exit point doc
                                        for more information   @BBA*/
  #define O_INHERITMODE 001000000000 /* inherit mode flag      @A1A*/
  #define O_CCSID      000040     /* The O_CCSID flag is used to
                                     indicate that the conversion
                                     ID parameter should be
                                     interpreted as a CCSID and
                                     mixed conversion is
                                     allowed                   @B5A*/
  #define O_TEXT_CREAT 000200000000 /* This flag is used in
                                      conjunction with the following
                                      flags:  O_CREAT,
                                      O_TEXTDATA, and O_CCSID or
                                      O_CODEPAGE. If all of those
                                      flags are not specified, then
                                      the O_TEXT_CREAT flag is
                                      ignored.  This flag provides
                                      for text conversion on a newly
                                      created file without needing
                                      a second open.           @BAA*/

/*******************************************************************/
/*   oflag Share Mode Values for open()                        @A8A*/
/*******************************************************************/
#define O_SHARE_RDONLY 000000200000 /* Share with readers only @A8A*/
#define O_SHARE_WRONLY 000000400000 /* Share with writers only @A8A*/
#define O_SHARE_RDWR   000001000000 /* Share with readers and
                                       writers                 @A8A*/
#define O_SHARE_NONE   000002000000 /* Share with neither readers
                                       nor writers             @A8A*/
#endif


/*******************************************************************/
/*   Constants for l_type in flock structure                       */
/*******************************************************************/
#define F_RDLCK    1            /* Read lock                       */
#define F_WRLCK    2            /* Write lock                      */
#define F_UNLCK    3            /* Remove the lock                 */

/*******************************************************************/
/*   flock structure                                               */
/*******************************************************************/
struct  flock  {
  short       l_type;           /* One of F_RDLCK, F_WRLCK, or
                                   F_UNLCK                         */
  short       l_whence;         /* Flag for starting offset        */
#ifdef _LARGE_FILES             /* Large File support.         @B1A*/
  char        l_reserved2[4];   /* Reserved Space, must be
                                   set to NULL.                @B1A*/
#endif                          /* Large File support.         @B1A*/
  off_t       l_start;          /* Relative offset in bytes        */
  off_t       l_len;            /* Size.  If 0, EOF                */
  pid_t       l_pid;            /* Process id of the process holding
                                   the lock.  Returned with F_GETLK*/
#ifdef _LARGE_FILES             /* Large File support.         @B1A*/
  char        l_reserved3[4];   /* Reserved Space, must be set to
                                   NULL.                       @B1A*/
#endif                          /* Large File support.         @B1A*/
  void       *l_reserved0;      /* Reserved space, must be set to
                                   Null.                           */
  void       *l_reserved1;      /* Reserved space, must be set to
                                   NULL.                           */
};

/*******************************************************************/
/* flock64 structure                                           @B1A*/
/* Available for applications that are compiled with           @B1A*/
/* _LARGE_FILE_API flag.                                       @B1A*/
/*******************************************************************/
#ifdef _LARGE_FILE_API                                      /* @B1A*/
struct  flock64  {                                          /* @B1A*/
  short       l_type;           /* One of F_RDLCK, F_WRLCK, or
                                   F_UNLCK                     @B1A*/
  short       l_whence;         /* Flag for starting offset    @B1A*/
  char        l_reserved2[4];   /* Reserved Space, must be set to
                                   NULL.                       @B1A*/
  off64_t     l_start;          /* Relative offset in bytes    @B1A*/
  off64_t     l_len;            /* Size.  If 0, EOF            @B1A*/
  pid_t       l_pid;            /* Process id of the process holding
                                   the lock.  Returned with F_GETLK
                                                               @B1A*/
  char        l_reserved3[4];   /* Reserved Space, must be set to
                                   NULL.                       @B1A*/
  void       *l_reserved0;      /* Reserved space, must be set to
                                   Null.                       @B1A*/
  void       *l_reserved1;      /* Reserved space, must be set to
                                   NULL.                       @B1A*/
};
#endif                                                      /* @B1A*/

/*******************************************************************/
/* Map Existing APIs to 64 bit version                         @B1A*/
/* Map Qlg APIs based on 64 bit version flag.                  @B6A*/
/*******************************************************************/
#ifdef _LARGE_FILES                                         /* @B1A*/
#pragma map (creat, "creat64")                         /* @B1A @B3C*/
#pragma map (open, "open64")                           /* @B1A @B3C*/
#if (!(defined _POSIX_SOURCE) && !(defined _POSIX1_SOURCE)) /* @B6A*/
QBFC_EXTERN int Qp0lOpen(Qlg_Path_Name_T *, int, ...);     /* @B6A*/
#pragma map (QlgCreat, "QlgCreat64")                        /* @B6A*/
#pragma map (Qp0lOpen, "QlgOpen64")                         /* @B6A*/
#pragma map (QlgOpen, "QlgOpen64")                          /* @B6A*/
#endif                                                      /* @B6A*/
#else                                                       /* @B6A*/
#if (!(defined _POSIX_SOURCE) && !(defined _POSIX1_SOURCE)) /* @B6A*/
QBFC_EXTERN int Qp0lOpen(Qlg_Path_Name_T *, int, ...);     /* @B6A*/
#pragma map (QlgOpen, "Qp0lOpen")                           /* @B6A*/
#endif                                                      /* @B6A*/
#endif                                                      /* @B1A*/

QBFC_EXTERN int creat(const char *, mode_t);
QBFC_EXTERN int open(const char *, int, ...);
QBFC_EXTERN int fcntl(int, int, ...);

/*******************************************************************/
/* New APIs for Large File Support                             @B1A*/
/*******************************************************************/
#ifdef _LARGE_FILE_API                                      /* @B1A*/
QBFC_EXTERN int creat64(const char *, mode_t);              /* @B1A*/
QBFC_EXTERN int open64(const char *, int, ...);             /* @B1A*/
#endif                                                      /* @B1A*/

#if (!(defined _POSIX_SOURCE) && !(defined _POSIX1_SOURCE))   /* @B6A*/

 QBFC_EXTERN int QlgCreat(const Qlg_Path_Name_T *, mode_t);   /* @B6A*/

 #ifdef _LARGE_FILE_API       /* New APIs for Large File Support @B6A*/
  QBFC_EXTERN int QlgCreat64(const Qlg_Path_Name_T *,mode_t); /* @B6A*/
  QBFC_EXTERN int QlgOpen64(const Qlg_Path_Name_T *, int, ...); /*@B6A*/
 #endif                                                       /* @B6A*/

#endif                                                     /* @B6A*/

#if (__OS400_TGTVRM__>=510)                                   /* @B7A*/
#pragma datamodel(pop)                                        /* @B7A*/
#endif                                                        /* @B7A*/

#endif /* __fcntl_h */

#ifdef __cplusplus
    #pragma info(restore)
#else
    #pragma checkout(resume)
#endif
