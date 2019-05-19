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
/* (C)Copyright IBM Corp.  1991, 2003                                */
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
#ifndef   __wcstr_h
  #define __wcstr_h

#ifdef __cplusplus
 extern "C" {
 #pragma info(none)
#else
 #pragma nomargins nosequence
 #pragma checkout(suspend)
#endif

/* ================================================================= */
/* Header File Name: wcstr.h                                         */
/*                                                                   */
/* This header contains the declarations used by the multibyte       */
/* string functions.                                                 */
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

    int      wcscmp  ( const wchar_t *, const wchar_t * );
    size_t   wcscspn ( const wchar_t *, const wchar_t * );
    size_t   wcslen  ( const wchar_t * );
    int      wcsncmp ( const wchar_t *, const wchar_t *, size_t );
    size_t   wcsspn  ( const wchar_t *, const wchar_t * );
    wchar_t *wcscat  ( wchar_t *, const wchar_t * );
    wchar_t *wcscpy  ( wchar_t *, const wchar_t * );
    wchar_t *wcsncat ( wchar_t *, const wchar_t *, size_t );
    wchar_t *wcsncpy ( wchar_t *, const wchar_t *, size_t );
    wchar_t *wcswcs  ( const wchar_t *, const wchar_t * );
#if defined(__cplusplus) && defined(__cplusplus98__interface__)
    wchar_t *_C_wcspbrk ( const wchar_t *, const wchar_t * );
    wchar_t *_C_wcschr  ( const wchar_t *, wchar_t );
    wchar_t *_C_wcsrchr ( const wchar_t *, wchar_t );

extern "C++" {
inline const wchar_t *wcspbrk (const wchar_t *__wcs1,
                               const wchar_t *__wcs2) {
  return (const wchar_t *)_C_wcspbrk(__wcs1, __wcs2);
}
inline wchar_t *wcspbrk (wchar_t *__wcs1,
                         const wchar_t *__wcs2) {
  return _C_wcspbrk((const wchar_t *)__wcs1, __wcs2);
}
#ifdef __LLP64_IFC__
inline const wchar_t *wcspbrk (const wchar_t * __ptr64 __wcs1,
                               const wchar_t *__wcs2) {
  return (const wchar_t *)_C_wcspbrk(__wcs1, __wcs2);
}
inline wchar_t *wcspbrk (wchar_t * __ptr64 __wcs1,
                         const wchar_t *__wcs2) {
  return _C_wcspbrk((const wchar_t *)__wcs1, __wcs2);
}
#endif
inline const wchar_t *wcschr (const wchar_t *__wcs,
                              wchar_t __wc) {
  return (const wchar_t *)_C_wcschr(__wcs, __wc);
}
inline wchar_t *wcschr (wchar_t *__wcs, wchar_t __wc) {
  return _C_wcschr((const wchar_t *)__wcs, __wc);
}
#ifdef __LLP64_IFC__
inline const wchar_t *wcschr (const wchar_t * __ptr64 __wcs,
                              wchar_t __wc) {
  return (const wchar_t *)_C_wcschr(__wcs, __wc);
}
inline wchar_t *wcschr (wchar_t * __ptr64 __wcs, wchar_t __wc) {
  return _C_wcschr((const wchar_t *)__wcs, __wc);
}
#endif
inline const wchar_t *wcsrchr (const wchar_t *__wcs,
                               wchar_t __wc) {
  return (const wchar_t *)_C_wcsrchr(__wcs, __wc);
}
inline wchar_t *wcsrchr (wchar_t *__wcs, wchar_t __wc) {
  return _C_wcsrchr((const wchar_t *)__wcs, __wc);
}
#ifdef __LLP64_IFC__
inline const wchar_t *wcsrchr (const wchar_t * __ptr64 __wcs,
                               wchar_t __wc) {
  return (const wchar_t *)_C_wcsrchr(__wcs, __wc);
}
inline wchar_t *wcsrchr (wchar_t * __ptr64 __wcs, wchar_t __wc) {
  return _C_wcsrchr((const wchar_t *)__wcs, __wc);
}
#endif
}  /* End extern "C++" */

#else
    wchar_t *wcspbrk ( const wchar_t *, const wchar_t * );
    wchar_t *wcschr  ( const wchar_t *, wchar_t );
    wchar_t *wcsrchr ( const wchar_t *, wchar_t );
#endif

  #ifdef __UTF32__
    #pragma map( wcscmp, "_C_UTF_wcscmp" )
    #pragma map( wcscspn, "_C_UTF_wcscspn" )
    #pragma map( wcslen, "_C_UTF_wcslen" )
    #pragma map( wcsncmp, "_C_UTF_wcsncmp" )
    #pragma map( wcsspn, "_C_UTF_wcsspn" )
    #pragma map( wcscat, "_C_UTF_wcscat" )
    #pragma map( wcscpy, "_C_UTF_wcscpy" )
    #pragma map( wcsncat, "_C_UTF_wcsncat" )
    #pragma map( wcsncpy, "_C_UTF_wcsncpy" )
    #pragma map( wcswcs, "_C_UTF_wcswcs" )
    #if defined(__cplusplus) && \
        defined(__cplusplus98__interface__)
      #pragma map( _C_wcspbrk, "_C_UTF_wcspbrk" )
      #pragma map( _C_wcschr,  "_C_UTF_wcschr" )
      #pragma map( _C_wcsrchr, "_C_UTF_wcsrchr" )
    #else
      #pragma map( wcspbrk, "_C_UTF_wcspbrk" )
      #pragma map( wcschr,  "_C_UTF_wcschr" )
      #pragma map( wcsrchr, "_C_UTF_wcsrchr" )
    #endif
  #elif defined(__cplusplus) && \
        defined(__cplusplus98__interface__)
    #pragma map( _C_wcspbrk, "wcspbrk" )
    #pragma map( _C_wcschr,  "wcschr" )
    #pragma map( _C_wcsrchr, "wcsrchr" )
  #endif

#pragma datamodel(pop)

#ifdef __cplusplus
 #pragma info(restore)
 }
#else
 #pragma checkout(resume)
#endif

#endif    /* #ifndef __wcstr_h                                        */
