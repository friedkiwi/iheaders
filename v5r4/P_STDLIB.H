#ifndef __p_stdlib_h
  #define __p_stdlib_h

#ifdef __cplusplus
 extern "C" {
 #pragma info(none)
#else
 #pragma nomargins nosequence
 #pragma checkout(suspend)
#endif

/* ================================================================= */
/* Header File Name: p_stdlib.h                                      */
/*                                                                   */
/* This header contains standard C library definitions and           */
/* function declarations.                                            */
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
#ifdef __POSIX_LOCALE__

#ifndef   __stdlib_h
  #include <stdlib.h>
#endif
  size_t _C_PSX_wcstombs(char *, const wchar_t *, size_t);
  size_t _C_PSX_mbstowcs(wchar_t *, const char *, size_t);
  int _C_PSX_mbtowc(wchar_t *, const char *, size_t);
  int _C_PSX_wctomb(char *, wchar_t);
  int _C_PSX_mblen(const char *, size_t);

  #if !defined(__LLP64_IFC__) || (__OS400_TGTVRM__ <= 520)
    #pragma map(mblen,    "_C_PSX_mblen")
    #pragma map(mbtowc,   "_C_PSX_mbtowc")
    #pragma map(wctomb,   "_C_PSX_wctomb")
    #pragma map(mbstowcs, "_C_PSX_mbstowcs")
    #pragma map(wcstombs, "_C_PSX_wcstombs")
  #else
    #pragma map(mblen,    "_C_PSX_mblen_ts64")
    #pragma map(mbtowc,   "_C_PSX_mbtowc_ts64")
    #pragma map(wctomb,   "_C_PSX_wctomb_ts64")
    #pragma map(mbstowcs, "_C_PSX_mbstowcs_ts64")
    #pragma map(wcstombs, "_C_PSX_wcstombs_ts64")
  #endif
#endif /* #ifdef __POSIX_LOCALE__ */

#ifdef __cplusplus
 #pragma info(restore)
 }
#else
 #pragma checkout(resume)
#endif

#endif  /* ifndef __p_stdlib_h */
