#ifndef __u_stdlib_h
  #define __u_stdlib_h

#ifdef __cplusplus
 extern "C" {
 #pragma info(none)
#else
 #pragma nomargins nosequence
 #pragma checkout(suspend)
#endif

/* ================================================================= */
/* Header File Name: u_stdlib.h                                      */
/*                                                                   */
/* This header contains standard C library definitions and           */
/* function declarations.                                            */
/*                                                                   */
/* Licensed Materials-Property of IBM                                */
/*                                                                   */
/* 5769CX2, 5722-SS1                                                 */
/* (C) Copyright IBM Corp. 1997,2003                                 */
/*                                                                   */
/* US Government Users Restricted Rights -                           */
/* Use, duplication or disclosure restricted                         */
/* by GSA ADP Schedule Contract with IBM Corp.                       */
/* ================================================================= */
 #ifdef __UCS2__
   #ifndef   __stdlib_h
     #include <stdlib.h>
   #endif
   size_t _UCS2_wcstombs(char *, const wchar_t *, size_t);
   size_t _UCS2_mbstowcs(wchar_t *, const char *, size_t);
   int _UCS2_mbtowc(wchar_t *, const char *, size_t);
   int _UCS2_wctomb(char *, wchar_t);

   #if defined(__LLP64_IFC__) && (__OS400_TGTVRM__ >= 530)
     #pragma map (mblen,    "_C_UCS2_mblen_ts64" )
     #pragma map (mbtowc,   "_C_UCS2_mbtowc_ts64" )
     #pragma map (wctomb,   "_C_UCS2_wctomb_ts64" )
     #pragma map (mbstowcs, "_C_UCS2_mbstowcs_ts64" )
     #pragma map (wcstombs, "_C_UCS2_wcstombs_ts64" )
   #else
     #pragma map (mbtowc,   "_UCS2_mbtowc" )
     #pragma map (wctomb,   "_UCS2_wctomb" )
     #pragma map (mbstowcs, "_UCS2_mbstowcs" )
     #pragma map (wcstombs, "_UCS2_wcstombs")
   #endif

   #if !defined(__LLP64_IFC__) && (__OS400_TGTVRM__ >= 530)
     #pragma map (mblen, "_C_UCS2_mblen" )
   #endif

 #endif /* #ifdef __UCS2__ */

#ifdef __cplusplus
 #pragma info(restore)
 }
#else
 #pragma checkout(resume)
#endif

#endif /* #ifndef __u_stdlib_h */
