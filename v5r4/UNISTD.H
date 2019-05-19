#ifdef __cplusplus
  #pragma info(none)
#else
  #pragma nomargins nosequence
  #pragma checkout(suspend)
#endif

/*** START HEADER FILE SPECIFICATION *********************************/
/*                                                                   */
/*  Header File Name:   unistd.h                                     */
/*                                                                   */
/*  Descriptive Name:   File system API definition.                  */
/*                                                                   */
/*  5763-SS1, 5716-SS1, 5769-SS1, 5722-SS1                           */
/*  (C) Copyright IBM Corp. 1993, 2003                               */
/*  All rights reserved.                                             */
/*  US Government Users Restricted Rights -                          */
/*  Use, duplication or disclosure restricted                        */
/*  by GSA ADP Schedule Contract with IBM Corp.                      */
/*                                                                   */
/*  Licensed Materials-Property of IBM                               */
/*                                                                   */
/*  Description: Defines prototypes, macros, variables, and          */
/*               data types to be used with the File System API.     */
/*                                                                   */
/*                                                                   */
/*  Header Files Included: sys/types.h                               */
/*                         qlg.h                                 @C8A*/
/*                                                                   */
/*  Macros List:                                                     */
/*               _PC_CHOWN_RESTRICTED                                */
/*               _PC_LINK_MAX                                        */
/*               _PC_MAX_CANON                                       */
/*               _PC_MAX_INPUT                                       */
/*               _PC_NAME_MAX                                        */
/*               _PC_NO_TRUNC                                        */
/*               _PC_PATH_MAX                                        */
/*               _PC_PIPE_BUF                                        */
/*               _PC_THREAD_SAFE                                 @C1A*/
/*               _PC_VDISABLE                                        */
/*               _SC_ARG_MAX                                         */
/*               _SC_CHILD_MAX                                       */
/*               _SC_CLK_TCK                                         */
/*               _SC_JOB_CONTROL                                     */
/*               _SC_NGROUPS_MAX                                     */
/*               _SC_OPEN_MAX                                        */
/*               _SC_PAGESIZE                                        */
/*               _SC_PAGE_SIZE                                       */
/*               _SC_SAVED_IDS                                       */
/*               _SC_STREAM_MAX                                      */
/*               _SC_TZNAME_MAX                                      */
/*               _SC_VERSION                                         */
/*               ACC_ALL                                         @D4A*/
/*               ACC_INVOKER                                     @D4A*/
/*               ACC_OTHERS                                      @D4A*/
/*               ACC_SELF                                        @D4A*/
/*               F_OK                                                */
/*               NULL                                                */
/*               R_OK                                                */
/*               SEEK_CUR                                            */
/*               SEEK_END                                            */
/*               SEEK_SET                                            */
/*               STDERR_FILENO                                   @C3A*/
/*               STDIN_FILENO                                    @C3A*/
/*               STDOUT_FILENO                                   @C3A*/
/*               W_OK                                                */
/*               X_OK                                                */
/*                                                                   */
/*  Structure List : None                                            */
/*                                                                   */
/*  Function Prototype List :                                        */
/*           access                                                  */
/*           accessx                                             @D4A*/
/*           alarm                                                   */
/*           chdir                                                   */
/*           chown                                                   */
/*           close                                                   */
/*           dup                                                     */
/*           dup2                                                    */
/*           faccessx                                            @D4A*/
/*           fchdir                                              @D5A*/
/*           fchown                                                  */
/*           fclear                                              @D7A*/
/*           fclear64                                            @D7A*/
/*           fpathconf                                               */
/*           fsync                                                   */
/*           ftruncate                                               */
/*           ftruncate64                                         @C4A*/
/*           getcwd                                                  */
/*           getdomainname                                           */
/*           getegid                                                 */
/*           geteuid                                                 */
/*           getgid                                                  */
/*           getgroups                                               */
/*           gethostid                                               */
/*           gethostname                                             */
/*           getopt                                              @B4A*/
/*           getpgrp                                                 */
/*           getpid                                                  */
/*           getppid                                                 */
/*           getuid                                                  */
/*           lchown                                              @C7A*/
/*           link                                                    */
/*           lseek                                                   */
/*           lseek64                                             @C4A*/
/*           pathconf                                                */
/*           pause                                                   */
/*           pipe                                                @D3A*/
/*           pread                                               @D6A*/
/*           pread64                                             @D6A*/
/*           pwrite                                              @D6A*/
/*           pwrite64                                            @D6A*/
/*           QlgAccess                                           @C8A*/
/*           QlgAccessx                                          @D4A*/
/*           QlgChdir                                            @C8A*/
/*           QlgChown                                            @C8A*/
/*           QlgGetcwd                                           @C8A*/
/*           QlgLchown                                           @C8A*/
/*           QlgLink                                             @C8A*/
/*           QlgPathconf                                         @C8A*/
/*           QlgReadlink                                         @C8A*/
/*           QlgRmdir                                            @C8A*/
/*           QlgSymlink                                          @C8A*/
/*           read                                                    */
/*           readlink                                                */
/*           rmdir                                                   */
/*           setdomainname                                           */
/*           sethostid                                               */
/*           sethostname                                             */
/*           setpgid                                                 */
/*           sleep                                                   */
/*           symlink                                                 */
/*           sysconf                                                 */
/*           unlink                                                  */
/*           usleep                                                  */
/*           write                                                   */
/*                                                                   */
/*  Change Activity :                                                */
/*                                                                   */
/*  CFD List:                                                        */
/*                                                                   */
/*  FLAG REASON       LEVEL DATE    PGMR      CHANGE DESCRIPTION     */
/*  ---- ------------ ----- ------- --------- ---------------------- */
/*  $A0= D28418       3D10  940307  ROCH      New Include            */
/*  $B0= P3977661     3D60  950105  ROCH      Changes to             */
/*                                            documentation          */
/*  $B1= P3985331     3D60  950427  ROCH      Add alarm(), getpgrp() */
/*                                            getpid(), getppid(),   */
/*                                            pause(), setpgid()     */
/*                                            and sleep() function   */
/*                                            prototypes             */
/*  $B2= P3992252     3D60  950522  ROCH      Add __cplusplus #ifdef */
/*                                            and #pragma info(none) */
/*  $B3= P3995957     3D60  950717  ROCH      Fix __cplusplus #ifdef */
/*  $B4= P3996475     3D60  950717  ROCH      Add getopt()           */
/*  $B5= PTH01765     3D60  950804  ROCH      Correct #pragma info   */
/*  $C1= D9477905     4D20  961203  ROCH      Add _PC_THREAD_SAFE    */
/*  $C2= D9477900     4D20  970604  ROCH      Add usleep() function  */
/*  $C3= P3649745     4D20  970709  ROCH      Add std stm fileno     */
/*  $C4= D9588102     4D40  980603  ROCH      Add 64 bit APIs        */
/*  $C5= D9588105     4D40  980626  ROCH      Fix #pragma map        */
/*  $C6= P3682997     4D40  981102  ROCH      Large Files support for*/
/*                                            *IFS64IO               */
/*  $C7= D9780100     4D50  990414  ROCH      Add lchown() API       */
/*  $C8= D9765800     5D10  990607  ROCH      Add 'Qlg' APIs, qlg.h, */
/*                                            and CCSID to sysconf() */
/*  $C9= D98212.05    5D10  000104  ROCH      Datamodel changes      */
/*  $D1= D97767.19    5D10  000125  ROCH      getopt LLP64 support   */
/*  $D2= D9762800     5D10  000411  ROCH      Added _SC_PAGESIZE and */
/*                                            _SC_PAGE_SIZE          */
/*  $D3= D9829001     5D10  000518  ROCH      Add pipe()             */
/*  $D4= D9870501     5D20  010312  ROCH      accessx(), faccessx(), */
/*                                            QlgAccessx()           */
/*  $D5= D9868603     5D20  010515  ROCH      fchdir()               */
/*  $D6= D9868601     5D20  010710  ROCH      pread(), pread64(),    */
/*                                            pwrite(), pwrite64()   */
/*  $D7= D9909601     5D30  020411  ROCH      fclear(), fclear64()   */
/*                                                                   */
/*  End CFD List.                                                    */
/*                                                                   */
/*  Additional notes about the Change Activity                       */
/*                                                                   */
/*  End Change Activity.                                             */
/*                                                                   */
/*** END HEADER FILE SPECIFICATIONS **********************************/

#ifndef __unistd_h
  #define __unistd_h  1

#ifndef __QBFC_EXTERN
    #ifdef __ILEC400__
        #define QBFC_EXTERN extern
    #else
        #define QBFC_EXTERN extern "C"
    #endif

    #define __QBFC_EXTERN
#endif

#ifndef __types_h
  #include <sys/types.h>
#endif

/* Protect POSIX source                                        @C8A*/
#if ((!(defined _POSIX_SOURCE) && !(defined _POSIX1_SOURCE))\
     || ((defined _POSIX1_SOURCE) && (_POSIX1_SOURCE != 1)))

#include <qlg.h>                    /* Include Qlg_Path_Name_T @C8A*/

/* Protect POSIX source                                        @C8A*/
#endif

#if (__OS400_TGTVRM__>=510)                                 /* @C9A*/
#pragma datamodel(P128)                                     /* @C9A*/
#endif                                                      /* @C9A*/

#ifndef NULL
  #define NULL  0            /* NULL definition                    */
#endif

/********************************************************************/
/*  Turn on the Large File Support when *IFS64IO is specified   @C6A*/
/*  as C compiler option.                                       @C6A*/
/********************************************************************/
#ifdef __IFS64_IO__                                          /* @C6A*/
   #ifndef _LARGE_FILES                                      /* @C6A*/
      #define _LARGE_FILES                                   /* @C6A*/
   #endif                                                    /* @C6A*/
   #ifndef _LARGE_FILE_API                                   /* @C6A*/
      #define _LARGE_FILE_API                                /* @C6A*/
   #endif                                                    /* @C6A*/
#endif                                                       /* @C6A*/



/*******************************************************************/
/*   Constants for access()                                        */
/*******************************************************************/

#define R_OK  4                    /* Test for read permission     */
#define W_OK  2                    /* Test for write permission    */
#define X_OK  1                    /* Test for execute or search
                                      permission                   */
#define F_OK  0                    /* Test for existence of a file */

/*******************************************************************/
/*   Constants for accessx() 'Who' parameter                       */
/************************************************************* @D4A*/

#define ACC_SELF	0x00       /* Use effective UID/GID    @D4A*/
#define ACC_INVOKER	0x01       /* Use real UID/GID         @D4A*/
#define ACC_OTHERS	0x08       /* Anyone besides the owner @D4A*/
#define ACC_ALL		0x20       /* Everyone                 @D4A*/

/*******************************************************************/
/*   Constants for lseek()                                         */
/*******************************************************************/

#ifndef SEEK_SET
   #define SEEK_SET    0        /* Seek to given position          */
   #define SEEK_CUR    1        /* Seek relative to current
                                   position                        */
   #define SEEK_END    2        /* Seek relative to end of file    */
#endif


/*******************************************************************/
/*  symbolic constant for use to query system value                */
/*******************************************************************/

/* for pathconf() */
#define  _PC_CHOWN_RESTRICTED   0
#define  _PC_LINK_MAX           1
#define  _PC_MAX_CANON          2
#define  _PC_MAX_INPUT          3
#define  _PC_NAME_MAX           4
#define  _PC_NO_TRUNC           5
#define  _PC_PATH_MAX           6
#define  _PC_PIPE_BUF           7
#define  _PC_VDISABLE           8
/* not POSIX.1 function */
#if (!(defined _POSIX_SOURCE) && !(defined _POSIX1_SOURCE))
#define  _PC_THREAD_SAFE        9                           /* @C1A*/
#endif

/* for sysconf() */
#define  _SC_ARG_MAX            0
#define  _SC_CHILD_MAX          1
#define  _SC_CLK_TCK            2
#define  _SC_NGROUPS_MAX        3
#define  _SC_OPEN_MAX           4
#define  _SC_STREAM_MAX         5
#define  _SC_TZNAME_MAX         6
#define  _SC_JOB_CONTROL        7
#define  _SC_SAVED_IDS          8
#define  _SC_VERSION            9
#define  _SC_CCSID             10                           /* @C8A*/
#define  _SC_PAGE_SIZE         11                           /* @D2A*/
#define  _SC_PAGESIZE          12                           /* @D2A*/

/**************************************************************@C3A*/
/*  Symbolic constants that define the descriptors associated  @C3A*/
/*  with the C language stdin, stdout, and stderr.  Note that  @C3A*/
/*  the descriptors are NOT automatically set up and should    @C3A*/
/*  only be used within certain environments that do set the   @C3A*/
/*  descriptors appropriately.  To enable C-runtime, must      @C3A*/
/*  set environment variable QIBM_USE_DESCRIPTOR_STDIO to 'Y'  @C3A*/
/*  prior to performing I/O to any standard stream.            @C3A*/
/**************************************************************@C3A*/

#define STDIN_FILENO  0                                     /* @C3A*/
#define STDOUT_FILENO 1                                     /* @C3A*/
#define STDERR_FILENO 2                                     /* @C3A*/


/*******************************************************************/
/* File system function prototype                                  */
/*******************************************************************/

QBFC_EXTERN int access(const char *, int);
QBFC_EXTERN unsigned int alarm( unsigned int );
QBFC_EXTERN int chdir(const char *);
QBFC_EXTERN int chown(const char *, uid_t, gid_t);
QBFC_EXTERN int close(int);
QBFC_EXTERN int dup(int);
QBFC_EXTERN int dup2(int, int);
QBFC_EXTERN long fpathconf(int, int);
QBFC_EXTERN int pipe(int fildes[2]);                         /* @D3A*/

/* not POSIX.1 function */
#if (!(defined _POSIX_SOURCE) && !(defined _POSIX1_SOURCE))
  QBFC_EXTERN int fsync(int);

  #ifdef _LARGE_FILES       /* Large File Support                @C4A*/
    #pragma map (ftruncate, "ftruncate64")               /* @C4A @C5C*/
    #pragma map (fclear, "fclear64")                          /* @D7A*/
  #endif                                                      /* @C4A*/

  QBFC_EXTERN int ftruncate(int, off_t);
  QBFC_EXTERN off_t fclear(int, off_t);                       /* @D7A*/

  #ifdef _LARGE_FILE_API    /* Large File Support                @C4A*/
    QBFC_EXTERN int ftruncate64(int, off64_t);                /* @C4A*/
    QBFC_EXTERN off64_t fclear64(int, off64_t);               /* @D7A*/
  #endif                                                      /* @C4A*/

  QBFC_EXTERN int getdomainname(char *, int);
  QBFC_EXTERN int gethostid(void);
  QBFC_EXTERN int gethostname(char *, int);
  QBFC_EXTERN int setdomainname(char *, int);
  QBFC_EXTERN int sethostid(int);
  QBFC_EXTERN int sethostname(char *, int);

  #if (__OS400_TGTVRM__ < 510) || \
    ((__OS400_TGTVRM__ >= 510) && !defined(__LLP64_IFC__))
    QBFC_EXTERN int getopt(int, char * const argv[], const char *); /*@D1C*/
  #else
    /* START __ptr64 declarations                                     @D1A*/
    /* Change datamodel so pointers are declared as __ptr64 types     @D1A*/
    #pragma datamodel(LLP64)
    QBFC_EXTERN int getopt(int, char * const argv[], const char *); /*@D1A*/
    #pragma datamodel(pop)                                          /*@D1A*/
    /* END __ptr64 declarations                                       @D1A*/
    #pragma map(getopt,"getopt_ts64")                               /*@D1A*/
  #endif                                                            /*@D1A*/

  #if (__OS400_TGTVRM__ >= 510) && defined(__LLP64_IFC__)           /*@D1A*/
    extern char *__ptr64 optarg;                                    /*@D1A*/
    #pragma map(optarg,"optarg_ts64")                               /*@D1A*/
  #endif                                                            /*@D1A*/

  QBFC_EXTERN int lchown(const char *, uid_t, gid_t);        /* @C7A */
#endif

QBFC_EXTERN char *getcwd(char *, size_t);
QBFC_EXTERN gid_t getegid(void);
QBFC_EXTERN uid_t geteuid(void);
QBFC_EXTERN gid_t getgid(void);
QBFC_EXTERN pid_t getpgrp( void );
QBFC_EXTERN pid_t getpid( void );
QBFC_EXTERN pid_t getppid( void );
QBFC_EXTERN int getgroups(int, gid_t *);
QBFC_EXTERN uid_t getuid(void);
QBFC_EXTERN int link(const char *, const char *);

#ifdef _LARGE_FILES          /* Large File Support               @C4A*/
  #pragma map (lseek, "lseek64")                         /* @C4A @C5C*/
#endif                                                        /* @C4A*/

QBFC_EXTERN off_t lseek(int, off_t, int);

#ifdef _LARGE_FILE_API       /* Large File Support               @C4A*/
  QBFC_EXTERN off64_t lseek64(int, off64_t, int);             /* @C4A*/
#endif                                                        /* @C4A*/

QBFC_EXTERN long pathconf(const char *, int);
QBFC_EXTERN int pause( void );

#ifdef _LARGE_FILES          /* Large File Support               @D6A*/
  #pragma map (pread, "pread64")                              /* @D6A*/
  #pragma map (pwrite, "pwrite64")                            /* @D6A*/
#endif                                                        /* @D6A*/

QBFC_EXTERN ssize_t pread(int, void *, size_t, off_t);        /* @D6A*/
QBFC_EXTERN ssize_t pwrite(int, const void *, size_t, off_t); /* @D6A*/


#ifdef _LARGE_FILE_API       /* Large File Support               @D6A*/
  QBFC_EXTERN ssize_t pread64(int,  void *, size_t, off64_t); /* @D6A*/
  QBFC_EXTERN ssize_t pwrite64(int, const void *, size_t, off64_t);
                                                              /* @D6A*/
#endif                                                        /* @D6A*/

QBFC_EXTERN ssize_t read(int,  void *, size_t);
QBFC_EXTERN int rmdir(const char *);
QBFC_EXTERN int setpgid( pid_t, pid_t );
QBFC_EXTERN unsigned int sleep( unsigned int );
QBFC_EXTERN long sysconf(int);
QBFC_EXTERN int unlink(const char *);
QBFC_EXTERN int usleep( useconds_t );
QBFC_EXTERN ssize_t write(int, const void *, size_t);

/* POSIX.1a defined API */
#if ((!(defined _POSIX_SOURCE) && !(defined _POSIX1_SOURCE))\
     || ((defined _POSIX1_SOURCE) && (_POSIX1_SOURCE != 1)))
  QBFC_EXTERN int fchdir(int fildes);                             /* @D5A*/
  QBFC_EXTERN int fchown(int, uid_t, gid_t);
  QBFC_EXTERN int readlink(const char *, char *, size_t);
  QBFC_EXTERN int symlink(const char *, const char *);
  QBFC_EXTERN int accessx(const char *path, int amode, int who); /* @D4A*/
  QBFC_EXTERN int faccessx(int fildes, int amode, int who);      /* @D4A*/
  QBFC_EXTERN int QlgAccessx(const Qlg_Path_Name_T *path,
                             int amode, int who);                /* @D4A*/
  QBFC_EXTERN int QlgAccess(const Qlg_Path_Name_T *, int);       /* @C8A*/
  QBFC_EXTERN int QlgChdir(const Qlg_Path_Name_T *);             /* @C8A*/
  QBFC_EXTERN int QlgChown(const Qlg_Path_Name_T *,
			   uid_t, gid_t);                        /* @C8A*/
  QBFC_EXTERN Qlg_Path_Name_T *QlgGetcwd(Qlg_Path_Name_T *,
					 size_t);                /* @C8A*/
  QBFC_EXTERN int QlgLink(const Qlg_Path_Name_T *,
			  const Qlg_Path_Name_T *);              /* @C8A*/
  QBFC_EXTERN long QlgPathconf(const Qlg_Path_Name_T *,
			       int);                             /* @C8A*/
  QBFC_EXTERN int QlgRmdir(const Qlg_Path_Name_T *);             /* @C8A*/
  QBFC_EXTERN int QlgReadlink(const Qlg_Path_Name_T *,
			    const Qlg_Path_Name_T *, size_t);    /* @C8A*/
  QBFC_EXTERN int QlgSymlink(const Qlg_Path_Name_T *,
			     const Qlg_Path_Name_T *);           /* @C8A*/
  QBFC_EXTERN int QlgLchown(const Qlg_Path_Name_T *,
			    uid_t, gid_t);                       /* @C8A*/
#endif

#if (__OS400_TGTVRM__>=510)                                      /* @C9A*/
#pragma datamodel(pop)                                           /* @C9A*/
#endif                                                           /* @C9A*/

#endif        /* #ifndef __unistd_h */

#ifdef __cplusplus
    #pragma info(restore)
#else
    #pragma checkout(resume)
#endif
