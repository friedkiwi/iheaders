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
#ifndef __wchar_h
  #define __wchar_h

#ifdef __cplusplus
 extern "C" {
 #pragma info(none)
#else
 #pragma nomargins nosequence
 #pragma checkout(suspend)
#endif
/* ================================================================= */
/*  Header File Name: wchar.h                                        */
/*                                                                   */
/*  This header contains the declarations used by the C multibyte    */
/*    character manipulation routines.                               */
/*                                                                   */
/* ================================================================= */

  #ifndef __stdio_h
    #include <stdio.h>
  #endif

  /* Wide Character String handling */
  #ifndef __wcstr_h
    #include <wcstr.h>
  #endif

  #ifndef __mbstate_t
    #define __mbstate_t
    #ifdef __UTF32__
      typedef int        mbstate_t;
    #else
      typedef short      mbstate_t;
    #endif
  #endif

  #ifndef __wint_t
    #define __wint_t
    typedef int        wint_t;
  #endif

  #ifdef __UTF32__
    #define WCHAR_MAX     (4294967295U)
    #define WCHAR_MIN     (0)
  #else
    #define WCHAR_MAX     (65535U)
    #define WCHAR_MIN     (0)
  #endif

  #pragma datamodel(P128)

  #ifndef WEOF
    #define WEOF -1
  #endif

  struct tm;

#if defined(__cplusplus) && defined(__cplusplus98__interface__)
  wchar_t *_C_wmemchr ( const wchar_t *, wchar_t, size_t );

extern "C++" {
inline const wchar_t *wmemchr ( const wchar_t *__wcs,
                                wchar_t __wc, size_t __sz) {
  return (const wchar_t *)_C_wmemchr(__wcs, __wc, __sz);
}
inline wchar_t *wmemchr ( wchar_t *__wcs, wchar_t __wc, size_t __sz) {
  return _C_wmemchr((const wchar_t *)__wcs, __wc, __sz);
}
#ifdef __LLP64_IFC__
inline const wchar_t *wmemchr ( const wchar_t * __ptr64 __wcs,
                                wchar_t __wc, size_t __sz) {
  return (const wchar_t *)_C_wmemchr(__wcs, __wc, __sz);
}
inline wchar_t *wmemchr ( wchar_t * __ptr64 __wcs,
                          wchar_t __wc, size_t __sz) {
  return _C_wmemchr((const wchar_t *)__wcs, __wc, __sz);
}
#endif
} /* End extern "C++" */
#else
  wchar_t *wmemchr ( const wchar_t *, wchar_t, size_t );
#endif
  int      wmemcmp ( const wchar_t *, const wchar_t *, size_t );
  wchar_t *wmemcpy ( wchar_t *, const wchar_t *, size_t );
  wchar_t *wmemmove ( wchar_t *, const wchar_t *, size_t );
  wchar_t *wmemset ( wchar_t *, wchar_t, size_t );

  #ifdef __UTF32__
    #if defined(__cplusplus) && defined(__cplusplus98__interface__)
      #pragma map(_C_wmemchr, "_C_UTF_wmemchr")
    #else
      #pragma map(wmemchr, "_C_UTF_wmemchr")
    #endif
    #pragma map(wmemcmp, "_C_UTF_wmemcmp")
    #pragma map(wmemcpy, "_C_UTF_wmemcpy")
    #pragma map(wmemmove, "_C_UTF_wmemmove")
    #pragma map(wmemset, "_C_UTF_wmemset")
  #elif defined(__cplusplus) && defined(__cplusplus98__interface__)
    #pragma map(_C_wmemchr, "wmemchr")
  #endif

  #ifndef __LLP64_IFC__
    /* 128-bit pointer interface                                */
    wchar_t *wcstok ( wchar_t *, const wchar_t *, wchar_t ** );
    #ifdef __UTF32__
      #pragma map(wcstok, "_C_UTF_wcstok")
    #endif
  #else
    /* the 64-bit pointer interface                             */
    wchar_t *__ptr64 wcstok ( wchar_t *__ptr64, const wchar_t *__ptr64,
                              wchar_t *__ptr64 *__ptr64 );
    #ifdef __UTF32__
      #pragma map(wcstok, "_C_UTF_wcstok_ts64")
    #else
      #pragma map(wcstok, "_C_wcstok_ts64")
    #endif
  #endif /* #ifndef __LLP64_IFC__ ... #else ... */

  #if defined(__LLP64_IFC__) && (__OS400_TGTVRM__ >= 530)
    #if defined(__cplusplus) && \
        defined(__cplusplus98__interface__)
      wchar_t *__ptr64 _C_wcsstr( const wchar_t *__ptr64,
                                  const wchar_t *__ptr64);
extern "C++" {
inline const wchar_t *__ptr64 wcsstr ( const wchar_t *__ptr64 __wcs1,
                                       const wchar_t *__ptr64 __wcs2) {
  return (const wchar_t *__ptr64)_C_wcsstr(__wcs1, __wcs2);
}
inline wchar_t *__ptr64 wcsstr ( wchar_t *__ptr64 __wcs1,
                                 const wchar_t *__ptr64 __wcs2) {
  return _C_wcsstr((const wchar_t *__ptr64)__wcs1, __wcs2);
}
} /* End extern "C++" */
    #else
      wchar_t *__ptr64 wcsstr ( const wchar_t *__ptr64 ,
                                const wchar_t *__ptr64 );
    #endif
    #ifdef __UTF32__
      #if defined(__cplusplus) && \
          defined(__cplusplus98__interface__)
        #pragma map(_C_wcsstr, "_C_UTF_wcsstr_ts64")
      #else
        #pragma map(wcsstr, "_C_UTF_wcsstr_ts64")
      #endif
    #else
      #if defined(__cplusplus) && \
          defined(__cplusplus98__interface__)
        #pragma map(_C_wcsstr, "_C_wcsstr_ts64")
      #else
        #pragma map(wcsstr, "_C_wcsstr_ts64")
      #endif
    #endif
  #else
    /* 128-bit pointer interface                                */
    #if defined(__cplusplus) && \
        defined(__cplusplus98__interface__)
    wchar_t *_C_wcsstr ( const wchar_t *, const wchar_t * );

extern "C++" {
inline const wchar_t *wcsstr ( const wchar_t *__wcs1,
                               const wchar_t *__wcs2) {
  return (const wchar_t *)_C_wcsstr(__wcs1, __wcs2);
}
inline wchar_t *wcsstr ( wchar_t *__wcs1, const wchar_t *__wcs2) {
  return _C_wcsstr((const wchar_t *)__wcs1, __wcs2);
}
#ifdef __LLP64_IFC__
inline const wchar_t *wcsstr ( const wchar_t * __ptr64 __wcs1,
                               const wchar_t *__wcs2) {
  return (const wchar_t *)_C_wcsstr(__wcs1, __wcs2);
}
inline wchar_t *wcsstr ( wchar_t * __ptr64 __wcs1,
                         const wchar_t *__wcs2) {
  return _C_wcsstr((const wchar_t *)__wcs1, __wcs2);
}
#endif
} /* End extern "C++" */

    #else
      wchar_t *wcsstr ( const wchar_t *, const wchar_t * );
    #endif
    #ifdef __UTF32__
      #if defined(__cplusplus) && \
          defined(__cplusplus98__interface__)
        #pragma map(_C_wcsstr, "_C_UTF_wcsstr")
      #else
        #pragma map(wcsstr, "_C_UTF_wcsstr")
      #endif
    #elif defined(__cplusplus) && \
          defined(__cplusplus98__interface__)
      #pragma map(_C_wcsstr, "wcsstr")
    #endif
  #endif /* #ifndef __LLP64_IFC__ ... #else ... */

  #ifdef __POSIX_LOCALE__
    int     wcscoll  ( const wchar_t *, const wchar_t * );
    size_t  wcsxfrm  ( wchar_t *, const wchar_t *, size_t );
    int     wcswidth ( const wchar_t *, size_t );
    int     wcwidth  ( const wint_t );
    size_t  wcsftime ( wchar_t *, size_t, const wchar_t *,
                       const struct tm * );
    #if (__OS400_TGTVRM__ >= 530)
      #if defined(__LLP64_IFC__)
        int   vswscanf ( const wchar_t *__ptr64, const wchar_t *__ptr64,
                          va_list );
      #else
        int   vswscanf ( const wchar_t *, const wchar_t *, va_list );
      #endif
    #endif
    #if ( defined(__LLP64_IFC__) && defined(__FORMAT64__) && \
        (__OS400_TGTVRM__ >= 540))
       #pragma datamodel(LLP64)
    #endif
       int swprintf(wchar_t *, size_t, const wchar_t *, ... );
       int swscanf(const wchar_t *, const wchar_t *, ... );
    #if ( defined(__LLP64_IFC__) && defined(__FORMAT64__) && \
     (__OS400_TGTVRM__ >= 540))
       #pragma datamodel(pop)
    #endif
    #if ( defined(__LLP64_IFC__) && \
          ( defined(__VALIST64__)  || (__OS400_TGTVRM__ >= 530)))
      int  vswprintf ( wchar_t *__ptr64, size_t, const wchar_t *__ptr64,
                       va_list );
    #else
      int  vswprintf ( wchar_t *, size_t, const wchar_t *, va_list );
    #endif

    #ifdef __UTF32__
      #pragma map(wcscoll, "_C_UTF_wcscoll")
      #pragma map(wcsxfrm, "_C_UTF_wcsxfrm")
      #pragma map(wcswidth, "_C_UTF_wcswidth")
      #pragma map(wcwidth, "_C_UTF_wcwidth")
      #pragma map(wcsftime, "_C_UTF_wcsftime")
      #if defined(__LLP64_IFC__)
        #pragma map(vswprintf, "_C_UTF_vswprintf_ts64")
        #pragma map(vswscanf, "_C_UTF_vswscanf_ts64")
      #else
        #pragma map(vswprintf, "_C_UTF_vswprintf")
        #pragma map(vswscanf, "_C_UTF_vswscanf")
      #endif
      #if ( defined(__LLP64_IFC__) && defined(__FORMAT64__) && \
          (__OS400_TGTVRM__ >= 540))
        #pragma map(swprintf, "_C_UTF_swprintf_ts64")
        #pragma map(swscanf,  "_C_UTF_swscanf_ts64")
      #else
        #pragma map(swprintf, "_C_UTF_swprintf")
        #pragma map(swscanf, "_C_UTF_swscanf")
      #endif
    #elif defined(__UCS2__)
      #pragma map(wcswidth, "_UCS2_wcswidth")
      #pragma map(wcwidth,  "_UCS2_wcwidth")
      #pragma map(wcsftime, "_C_UCS2_wcsftime")
      #if (__OS400_TGTVRM__ >= 530)
        #if defined(__LLP64_IFC__)
          #pragma map(vswscanf, "_C_UCS2_vswscanf_ts64")
        #else
          #pragma map(vswscanf, "_C_UCS2_vswscanf")
        #endif
      #endif
      #if ( defined(__LLP64_IFC__) && defined(__FORMAT64__) && \
          (__OS400_TGTVRM__ >= 540))
        #pragma map(swprintf, "_C_UCS2_swprintf_ts64")
        #pragma map(swscanf, "_C_UCS2_swscanf_ts64")
      #else
        #pragma map(swprintf, "_C_UCS2_swprintf")
        #pragma map(swscanf, "_C_UCS2_swscanf")
      #endif
      #if ( defined(__LLP64_IFC__) && \
          ( defined(__VALIST64__)  || (__OS400_TGTVRM__ >= 530)))
        #pragma map(vswprintf, "_C_UCS2_vswprintf_ts64")
      #else
        #pragma map(vswprintf, "_C_UCS2_vswprintf")
      #endif
    #else  /* Not UCS2 or UTF32  */
      #if ( defined(__LLP64_IFC__) && \
          ( defined(__VALIST64__)  || (__OS400_TGTVRM__ >= 530)))
        #pragma map(vswprintf, "_C_vswprintf_ts64")
      #endif
      #if (__OS400_TGTVRM__ >= 530) && defined(__LLP64_IFC__)
          #pragma map(vswscanf, "_C_vswscanf_ts64")
      #endif
      #if ( defined(__LLP64_IFC__) && defined(__FORMAT64__) && \
          (__OS400_TGTVRM__ >= 540))
        #pragma map(swprintf, "_C_swprintf_ts64")
        #pragma map(swscanf, "_C_swscanf_ts64")
      #endif

    #endif /* Not UCS2 or UTF32  */

    #if defined(__UTF32__) && defined(__EXTENDED__)
      wchar_t *wcsptime ( const wchar_t *, const wchar_t *, struct tm * );
      #pragma map(wcsptime, "_C_UTF_wcsptime")
    #endif

    #if (__OS400_TGTVRM__ >= 520) && defined(__EXTENDED__)
      #if defined(__LLP64_IFC__) && (__OS400_TGTVRM__ >= 530)
        int     __wcsicmp  ( const wchar_t *__ptr64, const wchar_t *__ptr64);
        int     __wcsnicmp ( const wchar_t *__ptr64, const wchar_t *__ptr64,
                             size_t );
        #ifdef __UTF32__
          #pragma map(__wcsicmp, "_C_UTF_wcsicmp_ts64")
          #pragma map(__wcsnicmp, "_C_UTF_wcsnicmp_ts64")
        #elif defined(__UCS2__)
          #pragma map(__wcsicmp, "_C_UCS2_wcsicmp_ts64")
          #pragma map(__wcsnicmp, "_C_UCS2_wcsnicmp_ts64")
        #else
          #pragma map(__wcsicmp, "_C_wcsicmp_ts64")
          #pragma map(__wcsnicmp, "_C_wcsnicmp_ts64")
        #endif
      #else
        int     __wcsicmp  ( const wchar_t *, const wchar_t *);
        int     __wcsnicmp ( const wchar_t *, const wchar_t *, size_t );
        #if defined(__UTF32__)
          #pragma map(__wcsicmp, "_C_UTF_wcsicmp")
          #pragma map(__wcsnicmp, "_C_UTF_wcsnicmp")
        #elif defined(__UCS2__) && (__OS400_TGTVRM__ >= 530)
          #pragma map(__wcsicmp, "_C_UCS2_wcsicmp")
          #pragma map(__wcsnicmp, "_C_UCS2_wcsnicmp")
        #endif
      #endif
    #endif

    #ifndef __LLP64_IFC__
      /* 128-bit pointer interface   */
      size_t  mbsrtowcs ( wchar_t *, const char **, size_t, mbstate_t * );
      size_t  wcsrtombs ( char *, const wchar_t **, size_t, mbstate_t * );
      int     mbsinit   ( const mbstate_t * );
      size_t  mbrlen    ( const char *, size_t, mbstate_t * );
      size_t  mbrtowc   ( wchar_t *, const char *, size_t, mbstate_t * );
      size_t  wcrtomb   ( char *, wchar_t, mbstate_t * );
      wint_t  btowc ( int );
      int     wctob ( wint_t );

      /* If _LONG_LONG  */
      #if defined(_LONG_LONG)
        long long int wcstoll ( const wchar_t *, wchar_t **, int );
        unsigned long long int wcstoull ( const wchar_t *,
                                             wchar_t **, int );
        #ifdef __UTF32__
          #pragma map(wcstoll, "_C_UTF_wcstoll")
          #pragma map(wcstoull, "_C_UTF_wcstoull")
        #elif defined(__UCS2__) && (__OS400_TGTVRM__ >= 520)
          #pragma map(wcstoll, "_UCS2_wcstoll")
          #pragma map(wcstoull, "_UCS2_wcstoull")
        #endif
      #endif  /* Long long  */
      double   wcstod ( const wchar_t *, wchar_t ** );
      long int wcstol ( const wchar_t *, wchar_t **, int );
      unsigned long int wcstoul ( const wchar_t *, wchar_t **, int );
      #ifdef __UTF32__
        #pragma map(mbsrtowcs, "_C_UTF_mbsrtowcs")
        #pragma map(wcsrtombs, "_C_UTF_wcsrtombs")
        #pragma map(mbsinit,   "_C_UTF_mbsinit")
        #pragma map(mbrlen,    "_C_UTF_mbrlen")
        #pragma map(mbrtowc,   "_C_UTF_mbrtowc")
        #pragma map(wcrtomb,   "_C_UTF_wcrtomb")
        #pragma map(btowc,     "_C_UTF_btowc")
        #pragma map(wctob,     "_C_UTF_wctob")
        #pragma map(wcstod,    "_C_UTF_wcstod")
        #pragma map(wcstol,    "_C_UTF_wcstol")
        #pragma map(wcstoul,   "_C_UTF_wcstoul")
      #elif defined(__UCS2__)
        #if (__OS400_TGTVRM__ >= 530)
          #pragma map(mbsrtowcs, "_C_UCS2_mbsrtowcs")
          #pragma map(wcsrtombs, "_C_UCS2_wcsrtombs")
          #pragma map(mbsinit,   "_C_UCS2_mbsinit")
          #pragma map(mbrlen,    "_C_UCS2_mbrlen")
          #pragma map(mbrtowc,   "_C_UCS2_mbrtowc")
          #pragma map(btowc,     "_C_UCS2_btowc")
          #pragma map(wctob,     "_C_UCS2_wctob")
        #elif defined(__ENABLE_UCS2_MB_FIXES__)
          #pragma map(btowc,     "_C_UCS2_btowc")
          #pragma map(wctob,     "_C_UCS2_wctob")
        #endif
        #pragma map(wcrtomb,  "_UCS2_wcrtomb")
        #pragma map(wcstod,   "_UCS2_wcstod")
        #pragma map(wcstoul,  "_UCS2_wcstoul")
        #pragma map(wcstol,   "_UCS2_wcstol")
      #endif    /* __UCS2__  */
    #else       /* #ifndef __LLP64_IFC__ */
      /* 64-bit pointer interface    */
      size_t  mbsrtowcs ( wchar_t *__ptr64,
                          const char *__ptr64 *__ptr64,
                          size_t, mbstate_t *__ptr64 );
      size_t  wcsrtombs ( char *__ptr64,
                          const wchar_t *__ptr64 *__ptr64,
                          size_t, mbstate_t *__ptr64);
      #if (__OS400_TGTVRM__ >= 530)
        int     mbsinit   ( const mbstate_t *__ptr64 );
        size_t  mbrlen    ( const char *__ptr64, size_t,
                            mbstate_t *__ptr64 );
        size_t  mbrtowc   ( wchar_t *__ptr64, const char *__ptr64,
                            size_t, mbstate_t *__ptr64 );
        size_t  wcrtomb   ( char *__ptr64, wchar_t, mbstate_t *__ptr64 );
      #else
        int     mbsinit   ( const mbstate_t * );
        size_t  mbrlen    ( const char *, size_t, mbstate_t * );
        size_t  mbrtowc   ( wchar_t *, const char *, size_t, mbstate_t * );
        size_t  wcrtomb   ( char *, wchar_t, mbstate_t * );
      #endif
      wint_t  btowc ( int );
      int     wctob ( wint_t );

      /* If _LONG_LONG  */
      #if defined(_LONG_LONG)
        long long int wcstoll ( const wchar_t *__ptr64,
                                wchar_t *__ptr64 *__ptr64, int );
        unsigned long long int wcstoull ( const wchar_t *__ptr64,
                                          wchar_t *__ptr64 *__ptr64, int );
        #ifdef __UTF32__
          #pragma map(wcstoll, "_C_UTF_wcstoll_ts64")
          #pragma map(wcstoull, "_C_UTF_wcstoull_ts64")
        #elif defined(__UCS2__) && (__OS400_TGTVRM__ >= 520)
          #pragma map(wcstoll, "_C_UCS2_wcstoll_ts64")
          #pragma map(wcstoull, "_C_UCS2_wcstoull_ts64")
        #else
          #pragma map(wcstoll, "_C_wcstoll_ts64")
          #pragma map(wcstoull, "_C_wcstoull_ts64")
        #endif
      #endif  /* Long Long  */
      double   wcstod ( const wchar_t *__ptr64,
                        wchar_t *__ptr64 *__ptr64 );
      long int wcstol ( const wchar_t *__ptr64,
                        wchar_t *__ptr64 *__ptr64, int );
      unsigned long int wcstoul ( const wchar_t *__ptr64,
                                  wchar_t *__ptr64 *__ptr64, int );

      #ifdef __UTF32__
        #pragma map(mbsrtowcs, "_C_UTF_mbsrtowcs_ts64")
        #pragma map(wcsrtombs, "_C_UTF_wcsrtombs_ts64")
        #pragma map(mbsinit,   "_C_UTF_mbsinit_ts64")
        #pragma map(mbrlen,    "_C_UTF_mbrlen_ts64")
        #pragma map(mbrtowc,   "_C_UTF_mbrtowc_ts64")
        #pragma map(wcrtomb,   "_C_UTF_wcrtomb_ts64")
        #pragma map(btowc,     "_C_UTF_btowc_ts64")
        #pragma map(wctob,     "_C_UTF_wctob_ts64")
        #pragma map(wcstod,    "_C_UTF_wcstod_ts64")
        #pragma map(wcstol,    "_C_UTF_wcstol_ts64")
        #pragma map(wcstoul,   "_C_UTF_wcstoul_ts64")
      #elif defined(__UCS2__)
        #if (__OS400_TGTVRM__ >= 530)
          #pragma map(mbsrtowcs, "_C_UCS2_mbsrtowcs_ts64")
          #pragma map(wcsrtombs, "_C_UCS2_wcsrtombs_ts64")
          #pragma map(mbsinit,   "_C_UCS2_mbsinit_ts64")
          #pragma map(mbrlen,    "_C_UCS2_mbrlen_ts64")
          #pragma map(mbrtowc,   "_C_UCS2_mbrtowc_ts64")
          #pragma map(wcrtomb,   "_C_UCS2_wcrtomb_ts64")
          #pragma map(btowc,     "_C_UCS2_btowc_ts64")
          #pragma map(wctob,     "_C_UCS2_wctob_ts64")
        #elif defined(__ENABLE_UCS2_MB_FIXES__)
          #pragma map(btowc,     "_C_UCS2_btowc")
          #pragma map(wctob,     "_C_UCS2_wctob")
        #else
          #pragma map(mbsrtowcs, "_C_mbsrtowcs_ts64")
          #pragma map(wcsrtombs, "_C_wcsrtombs_ts64")
          #pragma map(wcrtomb,   "_UCS2_wcrtomb")
        #endif
        #pragma map(wcstod,   "_C_UCS2_wcstod_ts64")
        #pragma map(wcstol,   "_C_UCS2_wcstol_ts64")
        #pragma map(wcstoul,  "_C_UCS2_wcstoul_ts64")
      #else  /* Not UCS2 or UTF32  */
        #pragma map(mbsrtowcs, "_C_mbsrtowcs_ts64")
        #pragma map(wcsrtombs, "_C_wcsrtombs_ts64")
        #if (__OS400_TGTVRM__ >= 530)
          #pragma map(mbsinit,   "_C_mbsinit_ts64")
          #pragma map(mbrlen,    "_C_mbrlen_ts64")
          #pragma map(mbrtowc,   "_C_mbrtowc_ts64")
          #pragma map(wcrtomb,   "_C_wcrtomb_ts64")
          #pragma map(btowc,     "_C_btowc_ts64")
          #pragma map(wctob,     "_C_wctob_ts64")
        #endif
        #pragma map(wcstod, "_C_wcstod_ts64")
        #pragma map(wcstol, "_C_wcstol_ts64")
        #pragma map(wcstoul, "_C_wcstoul_ts64")
      #endif   /* UCS2 or UTF32  */
    #endif /* #ifndef __LLP64_IFC__ ... else ... */

  #endif    /* ifdef __POSIX_LOCALE__                                 */

  #pragma datamodel(pop)

#ifdef __cplusplus
 #pragma info(restore)
 }
#else
 #pragma checkout(resume)
#endif

#endif   /* ifndef __wchar_h                                        */
