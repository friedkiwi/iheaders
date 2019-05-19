/* begin_generated_IBM_copyright_prolog                              */
/* This is an automatically generated copyright prolog.              */
/* After initializing,  DO NOT MODIFY OR MOVE                        */
/* ----------------------------------------------------------------- */
/*                                                                   */
/* Product(s):                                                       */
/*     5716-CX2                                                      */
/*     5716-CX4                                                      */
/*     5716-CX5                                                      */
/*     5722-SS1                                                      */
/*                                                                   */
/* (C)Copyright IBM Corp.  1991, 2005                                */
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
#ifndef   __stdlib_h
  #define __stdlib_h

#ifdef __cplusplus
 extern "C" {
 #pragma info(none)
#else
 #pragma nomargins nosequence
 #pragma checkout(suspend)
#endif

/* ================================================================= */
/* Header File Name: stdlib.h                                        */
/*                                                                   */
/* This header contains standard C library definitions and           */
/* function declarations.                                            */
/*                                                                   */
/* ================================================================= */

  #pragma datamodel(P128)

  #ifndef   __size_t
    #define __size_t
    typedef unsigned int size_t;
  #endif

  #ifndef   __wchar_t
    #define __wchar_t
    #ifdef __UTF32__
      typedef unsigned int wchar_t;
    #else
      typedef unsigned short wchar_t;
    #endif
  #endif

  #ifndef   NULL
    #ifdef __cplusplus
      #define NULL 0
    #else
      #define NULL ((void *)0)
    #endif
  #endif

  #ifndef __QBFC_EXTERN
    #ifdef __ILEC400__
         #define QBFC_EXTERN extern
    #else
         #define QBFC_EXTERN extern "C"
    #endif

    #define __QBFC_EXTERN
  #endif

  typedef struct div_t {
    int quot;                  /* quotient of integer division        */
    int rem;                   /* remainder of integer division       */
  } div_t;

  typedef struct ldiv_t {
    long int quot;             /* quotient of long integer division   */
    long int rem;              /* remainder of long integer division  */
  } ldiv_t;

  extern   int      _C_div_n, _C_div_d;
  extern   div_t    _C_div_r;
  extern   long int _C_ldiv_n, _C_ldiv_d;
  extern   ldiv_t   _C_ldiv_r;

  #if !defined(__LLP64_IFC__) || (__OS400_TGTVRM__ < 530)
      /* the 128-bit pointer interface                     */
      int      atoi     ( const char * );
      long int atol     ( const char * );
      double   atof     ( const char * );
  #endif
  #if  !defined(__LLP64_IFC__)
      double   strtod   ( const char *, char ** );
      #if (__OS400_TGTVRM__ >= 540)
         long double   strtold  ( const char *, char ** );
         float   strtof  ( const char *, char ** );
      #endif
      long int strtol   ( const char *, char **, int );
      unsigned long int strtoul ( const char *, char **, int );
      void    *bsearch  ( const void *, const void *, size_t, size_t,
                          int (*)( const void *, const void * ) );
      void     qsort    ( void *, size_t, size_t,
                          int (*)( const void *, const void * ) );
      #if defined(__UTF32__) || defined(__CCSID_NEUTRAL__)
        #pragma map(atoi, "_C_NEU_atoi")
        #pragma map(atol, "_C_NEU_atol")
        #pragma map(atof, "_C_NEU_atof")
        #pragma map(strtod, "_C_NEU_strtod")
        #if (__OS400_TGTVRM__ >= 540)
          #pragma map(strtold, "_C_NEU_strtod")
          #pragma map(strtof, "_C_NEU_strtof")
        #endif
        #pragma map(strtol, "_C_NEU_strtol")
        #pragma map(strtoul, "_C_NEU_strtoul")
      #elif defined(__POSIX_LOCALE__) && (__OS400_TGTVRM__ >= 530)
        #pragma map(atoi, "_C_PSX_atoi")
        #pragma map(atol, "_C_PSX_atol")
        #pragma map(atof, "_C_PSX_atof")
        #pragma map(strtod, "_C_PSX_strtod")
        #if (__OS400_TGTVRM__ >= 540)
          #pragma map(strtold, "_C_PSX_strtod")
          #pragma map(strtof, "_C_PSX_strtof")
        #endif
        #pragma map(strtol, "_C_PSX_strtol")
        #pragma map(strtoul, "_C_PSX_strtoul")
      #elif (__OS400_TGTVRM__ >= 540)
          #pragma map(strtold, "strtod")
      #endif
  #else
      /* the 64-bit pointer interface                      */
       #if (__OS400_TGTVRM__ >= 530)
         int      atoi ( const char *__ptr64 );
         long int atol ( const char *__ptr64 );
         double atof ( const char *__ptr64 );
       #endif
       double strtod( const char *__ptr64, char *__ptr64 *__ptr64);
    #if (__OS400_TGTVRM__ >= 540)
       float strtof( const char *__ptr64, char *__ptr64 *__ptr64);
       long double strtold( const char *__ptr64, char *__ptr64 *__ptr64);
    #endif
       long int strtol (const char *__ptr64,
                        char *__ptr64 *__ptr64, int);
       unsigned long int strtoul (const char *__ptr64,
                                  char *__ptr64 *__ptr64, int);

       void *__ptr64 bsearch(const void *__ptr64,
                             const void *__ptr64, size_t, size_t,
                             int (*__ptr64)( const void *__ptr64,
                             const void *__ptr64));
       void qsort( void *__ptr64, size_t, size_t,
                   int (*__ptr64)( const void *__ptr64,
                   const void *__ptr64));

       #if defined(__UTF32__) || defined(__CCSID_NEUTRAL__)
         #pragma map(atoi, "_C_NEU_atoi_ts64")
         #pragma map(atol, "_C_NEU_atol_ts64")
         #pragma map(atof, "_C_NEU_atof_ts64")
         #pragma map(strtod, "_C_NEU_strtod_ts64")
         #if (__OS400_TGTVRM__ >= 540)
           #pragma map(strtold, "_C_NEU_strtod_ts64")
           #pragma map(strtof, "_C_NEU_strtof_ts64")
         #endif
         #pragma map(strtol, "_C_NEU_strtol_ts64")
         #pragma map(strtoul, "_C_NEU_strtoul_ts64")
       #elif defined(__POSIX_LOCALE__) && (__OS400_TGTVRM__ >= 530)
         #pragma map(atoi, "_C_PSX_atoi_ts64")
         #pragma map(atol, "_C_PSX_atol_ts64")
         #pragma map(atof, "_C_PSX_atof_ts64")
         #pragma map(strtod, "_C_PSX_strtod_ts64")
         #if (__OS400_TGTVRM__ >= 540)
           #pragma map(strtold, "_C_PSX_strtod_ts64")
           #pragma map(strtof, "_C_PSX_strtof_ts64")
         #endif
         #pragma map(strtol, "_C_PSX_strtol_ts64")
         #pragma map(strtoul, "_C_PSX_strtoul_ts64")
       #else
         #if (__OS400_TGTVRM__ >= 530)
           #pragma map(atoi, "_C_atoi_ts64")
           #pragma map(atol, "_C_atol_ts64")
           #pragma map(atof, "_C_atof_ts64")
         #endif
         #pragma map(strtod, "_C_strtod_ts64")
         #if (__OS400_TGTVRM__ >= 540)
           #pragma map(strtold, "_C_strtod_ts64")
           #pragma map(strtof, "_C_strtof_ts64")
         #endif
         #pragma map(strtol, "_C_strtol_ts64")
         #pragma map(strtoul, "_C_strtoul_ts64")
       #endif
       #pragma map(qsort,   "_C_qsort_ts64")
       #pragma map(bsearch, "_C_bsearch_ts64")

  #endif /* !defined(__LLP64_IFC__) */

  int      rand     ( void );
  int      rand_r   ( unsigned int *);
  void     srand    ( unsigned int );

  void    *calloc   ( size_t, size_t );
  void     free     ( void * );
  void    *malloc   ( size_t );
  void    *realloc  ( void *, size_t );

  void    *_C_TS_calloc   ( size_t , size_t);
  void     _C_TS_free     ( void *);
  void    *_C_TS_malloc   ( size_t );
  void    *_C_TS_realloc  ( void *, size_t );
  #ifdef  __TERASPACE__
     #pragma map ( malloc, "_C_TS_malloc")
     #pragma map ( calloc, "_C_TS_calloc")
     #pragma map ( free, "_C_TS_free")
     #pragma map ( realloc, "_C_TS_realloc")
  #endif

#if (__OS400_TGTVRM__ >= 540)
  typedef struct _C_Quickpool_Debug_T {
    unsigned int  flags;
    unsigned char malloc_val;
    unsigned char free_val;
  } _C_Quickpool_Debug_T;
  int  _C_Quickpool_Init(unsigned int, unsigned int *, unsigned int *);
  void _C_Quickpool_Report(void);
  _C_Quickpool_Debug_T _C_Quickpool_Debug (_C_Quickpool_Debug_T *);
  int  _C_TS_Quickpool_Init(unsigned int, unsigned int *, unsigned int *);
  void _C_TS_Quickpool_Report(void);
  _C_Quickpool_Debug_T _C_TS_Quickpool_Debug (_C_Quickpool_Debug_T *);
  #define _C_INIT_MALLOC    1
  #define _C_INIT_FREE      2
  #define _C_COLLECT_STATS  4
  #ifdef __TERASPACE__
    #pragma map(_C_Quickpool_Init, "_C_TS_Quickpool_Init")
    #pragma map(_C_Quickpool_Report, "_C_TS_Quickpool_Report")
    #pragma map(_C_Quickpool_Debug, "_C_TS_Quickpool_Debug")
  #endif
#endif

  void     abort    ( void );
  int      atexit   ( void (*)(void) );
  void     exit     ( int );
  #if defined(__LLP64_IFC__)
     extern char *__ptr64 *__ptr64 environ;
     #pragma map(environ,"environ_ts64")
  #endif /* defined(__LLP64_IFC__) */

  char    *getenv   ( const char * );
  int      putenv   ( const char *string);

  int      system   ( const char * );
  #if defined(__UTF32__) || defined(__CCSID_NEUTRAL__)
    #pragma map(system, "_C_NEU_system")
  #endif
  int      abs      ( int );
  long int labs     ( long int );

  #if defined(__LLP64_IFC__) && (__OS400_TGTVRM__ >= 530)
    int      mblen    ( const char *__ptr64, size_t );
    int      mbtowc   ( wchar_t *__ptr64, const char *__ptr64, size_t );
    int      wctomb   ( char *__ptr64, wchar_t );
    size_t   mbstowcs ( wchar_t *__ptr64, const char *__ptr64, size_t );
    size_t   wcstombs ( char *__ptr64, const wchar_t *__ptr64, size_t );
    #ifdef __UTF32__
      #pragma map (mblen,    "_C_UTF_mblen_ts64" )
      #pragma map (mbtowc,   "_C_UTF_mbtowc_ts64" )
      #pragma map (wctomb,   "_C_UTF_wctomb_ts64" )
      #pragma map (mbstowcs, "_C_UTF_mbstowcs_ts64" )
      #pragma map (wcstombs, "_C_UTF_wcstombs_ts64" )
    #elif !defined(__UCS2__) && !defined(__POSIX_LOCALE__)
      #pragma map (mblen,    "_C_mblen_ts64" )
      #pragma map (mbtowc,   "_C_mbtowc_ts64" )
      #pragma map (wctomb,   "_C_wctomb_ts64" )
      #pragma map (mbstowcs, "_C_mbstowcs_ts64" )
      #pragma map (wcstombs, "_C_wcstombs_ts64" )
    #endif
  #else
    int      mblen    ( const char *, size_t );
    int      mbtowc   ( wchar_t *, const char *, size_t );
    int      wctomb   ( char *, wchar_t );
    size_t   mbstowcs ( wchar_t *, const char *, size_t );
    size_t   wcstombs ( char *, const wchar_t *, size_t );
    #ifdef __UTF32__
      #pragma map (mblen,    "_C_UTF_mblen" )
      #pragma map (mbtowc,   "_C_UTF_mbtowc" )
      #pragma map (wctomb,   "_C_UTF_wctomb" )
      #pragma map (mbstowcs, "_C_UTF_mbstowcs" )
      #pragma map (wcstombs, "_C_UTF_wcstombs" )
    #endif
  #endif/*#if defined(__LLP64_IFC__) && (__OS400_TGTVRM__ >= 530)*/

/* If _LONG_LONG  */
#if  defined(_LONG_LONG)
     typedef struct lldiv_t {
       long long int quot;     /* quotient of long long int division  */
       long long int rem;      /* remainder of long long int division */
     } lldiv_t;

     void *_C_TS_malloc64(unsigned long long int);

     #if (__OS400_TGTVRM__>=520)
       #include <mallocinfo.h>
     #endif
     #if !defined(__LLP64_IFC__) || (__OS400_TGTVRM__ < 530)
         /* the 128-bit pointer interface                            */
         long long int atoll ( const char * );
     #endif
     #if !defined(__LLP64_IFC__)
         long long int strtoll ( const char *, char **, int );
         unsigned long long int strtoull ( const char *, char **, int );
       #if defined(__UTF32__) || defined(__CCSID_NEUTRAL__)
         #pragma map(atoll, "_C_NEU_atoll")
         #pragma map(strtoll, "_C_NEU_strtoll")
         #pragma map(strtoull, "_C_NEU_strtoull")
       #elif defined(__POSIX_LOCALE__) && (__OS400_TGTVRM__ >= 530)
         #pragma map(atoll, "_C_PSX_atoll")
         #pragma map(strtoll, "_C_PSX_strtoll")
         #pragma map(strtoull, "_C_PSX_strtoull")
       #endif
     #else
         /* the 64-bit pointer interface                             */
         #if (__OS400_TGTVRM__ >= 530)
           long long int atoll ( const char *__ptr64 );
         #endif
         long long int strtoll ( const char *__ptr64,
                                 char *__ptr64 *__ptr64, int );
         unsigned long long int strtoull ( const char *__ptr64,
                                           char *__ptr64 *__ptr64, int );
         #if defined(__UTF32__) || defined(__CCSID_NEUTRAL__)
           #pragma map(atoll, "_C_NEU_atoll_ts64")
           #pragma map(strtoll, "_C_NEU_strtoll_ts64")
           #pragma map(strtoull, "_C_NEU_strtoull_ts64")
         #elif defined(__POSIX_LOCALE__) && (__OS400_TGTVRM__ >= 530)
           #pragma map(atoll, "_C_PSX_atoll_ts64")
           #pragma map(strtoll, "_C_PSX_strtoll_ts64")
           #pragma map(strtoull, "_C_PSX_strtoull_ts64")
         #else
           #if (__OS400_TGTVRM__ >= 530)
             #pragma map(atoll, "_C_atoll_ts64")
           #endif
           #pragma map(strtoll, "_C_strtoll_ts64")
           #pragma map(strtoull, "_C_strtoull_ts64")
         #endif
     #endif /* !defined(__LLP64_IFC__) */
     long long int llabs  ( long long int );
     lldiv_t  lldiv    ( long long int, long long int );
#endif /* If _LONG_LONG*/

  #ifndef __cplusplus_nomacro__
    div_t    div      ( int, int );
    ldiv_t   ldiv     ( long int, long int );
  #endif

  #ifdef __cplusplus
    extern "builtin"
  #else
    #pragma linkage( __abs, builtin )
  #endif
  int      __abs    ( int );

  /* Language Levels - IBM Extensions only                            */
  #if defined (__EXTENDED__)


    extern int _C_heap_size; /* Initial heap size is 64K - 592 bytes.
                              This can be changed by modifying this
                              variable prior to the first call to malloc,
                              realloc, or calloc. The maximum allowable
                              value is 16711600.   */

  #define _HEAP_SIZE     _C_heap_size

  #ifdef __cplusplus
    #ifndef __ANSI_NAMES_ONLY__
      char *_gcvt(double, int, char *);
      char *_itoa(int, char *, int);
      char *_ltoa(long int, char *, int);
      char *_ultoa(unsigned long int, char *, int);

      #if defined(__UTF32__) || defined(__CCSID_NEUTRAL__)
        #pragma map(_gcvt, "_C_NEU_gcvt")
        #pragma map(_itoa, "_C_NEU_itoa")
        #pragma map(_ltoa, "_C_NEU_ltoa")
        #pragma map(_ultoa, "_C_NEU_ultoa")
      #else
        #pragma map(_gcvt, "__gcvt")
        #pragma map(_itoa, "__itoa")
        #pragma map(_ltoa, "__ltoa")
        #pragma map(_ultoa, "__ultoa")
      #endif
    #endif /* non-ansi extensions                                     */
  #endif /* C++ Extensions only                                       */

  #endif /* Language Levels - IBM Extensions only                     */

  #define _NO_DEFAULT_HEAP   0

  #define EXIT_FAILURE       8
  #define EXIT_SUCCESS       0

  #define RAND_MAX           32767


  #if defined(__UTF32__) || defined(__CCSID_NEUTRAL__)
    extern int                 _C_NEU_mb_cur_max;
    #define MB_CUR_MAX         _C_NEU_mb_cur_max
  #elif defined(__POSIX_LOCALE__)
    extern int                 _C_PSX_mb_cur_max;
    #define MB_CUR_MAX         _C_PSX_mb_cur_max
  #else
    #define MB_CUR_MAX         4
  #endif

  #ifdef __cplusplus
    inline int abs ( int x ) { return __abs ( x ); }
    inline long int labs( long int x ) { return __abs( (int)x ); }
  #else
    #define  abs(__i)   (__abs(__i))
    #define  labs(__l)  ((long)__abs((int) __l))
  #endif

  #ifndef __cplusplus_nomacro__

  #define div(__n, __d)                                                   \
  ( _C_div_r.quot = ( _C_div_n = (__n) ) / ( _C_div_d = (__d) ),          \
    _C_div_r.rem  = _C_div_n  - _C_div_r.quot * _C_div_d,                 \
   _C_div_r )

  #define ldiv(__n, __d)                                                  \
  ( _C_ldiv_r.quot = ( _C_ldiv_n = (__n) ) / ( _C_ldiv_d = (__d) ),       \
    _C_ldiv_r.rem  = _C_ldiv_n  - _C_ldiv_r.quot * _C_ldiv_d,             \
    _C_ldiv_r )

  #else

    inline div_t div(int __n,int __d) {
      return ( _C_div_r.quot = ( _C_div_n = (__n) ) / ( _C_div_d = (__d) ),
               _C_div_r.rem  = _C_div_n  - _C_div_r.quot * _C_div_d,
              _C_div_r );
      }

    inline ldiv_t ldiv(long int __n, long int __d) {
      return ( _C_ldiv_r.quot = ( _C_ldiv_n = (__n) )/( _C_ldiv_d = (__d) ),
               _C_ldiv_r.rem  = _C_ldiv_n  - _C_ldiv_r.quot * _C_ldiv_d,
              _C_ldiv_r );
      }

  #endif /* __cplusplus_nomacro__ */

  #if !defined(__UCS2__) && !defined(__UTF32__)
    #ifdef __POSIX_LOCALE__
      #include <p_stdlib.h>
    #endif
  #elif defined(__UCS2__)
    #include <u_stdlib.h>
  #endif

  #pragma datamodel(pop)

#ifdef __cplusplus
 #pragma info(restore)
 }
#else
 #pragma checkout(resume)
#endif

#endif /* #ifndef __stdlib_h                                          */
