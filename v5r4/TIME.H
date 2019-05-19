#ifdef __cplusplus
 extern "C" {
 #pragma info(none)
#else
 #pragma nomargins nosequence
 #pragma checkout(suspend)
#endif

/* ================================================================= */
/* Header File Name: time.h                                          */
/*                                                                   */
/* This header contains the declarations used by the time            */
/* manipulation routines.                                            */
/*                                                                   */
/* Licensed Materials-Property of IBM                                */
/*                                                                   */
/* 5716-CX2, 5716-CX4, 5716-CX5, 5722-SS1                            */
/* (C) Copyright IBM Corp. 1991,2003                                 */
/*                                                                   */
/* US Government Users Restricted Rights -                           */
/* Use, duplication or disclosure restricted                         */
/* by GSA ADP Schedule Contract with IBM Corp.                       */
/* ================================================================= */

#ifndef   __time_h
  #define __time_h

  #pragma datamodel(P128)

  #ifndef   __size_t
    #define __size_t
    typedef unsigned int  size_t;
  #endif

  #ifndef   NULL
    #ifdef __cplusplus
      #define NULL 0
    #else
      #define NULL ((void *)0)
    #endif
  #endif

  #ifndef __clock_t
    typedef long int        clock_t;
    #define __clock_t 1
  #endif

  #ifndef __time_t
    typedef long int        time_t;
    #define __time_t 1
  #endif

  struct tm {
    int tm_sec;             /* seconds after the minute (0-61)        */
    int tm_min;             /* minutes after the hour (0-59)          */
    int tm_hour;            /* hours since midnight (0-23)            */
    int tm_mday;            /* day of the month (1-31)                */
    int tm_mon;             /* months since January (0-11)            */
    int tm_year;            /* years since 1900                       */
    int tm_wday;            /* days since Sunday (0-6)                */
    int tm_yday;            /* days since January 1 (0-365)           */
    int tm_isdst;           /* Daylight Saving Time flag              */
  };

  char      *asctime   ( const struct tm * );
  clock_t    clock     ( void );
  char      *ctime     ( const time_t * );
  double     difftime  ( time_t, time_t );
  struct tm *gmtime    ( const time_t * );
  struct tm *localtime ( const time_t * );
  time_t     mktime    ( struct tm * );
  size_t     strftime  ( char *, size_t, const char *,
                         const struct tm * );
  time_t     time      ( time_t * );

  char      *asctime_r   ( const struct tm *, char * );
  char      *ctime_r     ( const time_t *, char * );
  struct tm *gmtime_r    ( const time_t *, struct tm * );
  struct tm *localtime_r ( const time_t *, struct tm * );

  #ifndef _TIMESPEC_T_
  #define _TIMESPEC_T_
  struct timespec {     /* timer value */
    time_t tv_sec;      /* seconds     */
    long   tv_nsec;     /* nanoseconds */
  };
  #endif /* _TIMESPEC_T_ */

  #pragma datamodel(pop)

#endif /* #ifndef __time_h                                            */

#define CLOCKS_PER_SEC  1000

#ifndef __ANSI__
  #define CLK_TCK       CLOCKS_PER_SEC
#endif

#ifdef __POSIX_LOCALE__
  #include <p_time.h>
#endif

#if (__OS400_TGTVRM__ >= 530) \
    && !defined(__POSIX_LOCALE__) && defined(__IFS_IO__)
   #pragma map(strftime, "_C_IFS_strftime" )
#endif

#ifdef __cplusplus
 #pragma info(restore)
 }
#else
 #pragma checkout(resume)
#endif
