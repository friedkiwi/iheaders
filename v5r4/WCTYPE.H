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
#ifndef __wctype_h
  #define __wctype_h

#ifdef __cplusplus
 extern "C" {
 #pragma info(none)
#else
 #pragma nomargins nosequence
 #pragma checkout(suspend)
#endif
/* ==================================================================*/
/*  Header File Name: wctype.h                                       */
/*                                                                   */
/*  This header contains the declarations used by the C multibyte    */
/*  character query routines.                                        */
/* ==================================================================*/


  #ifndef __wchar_t
    #define __wchar_t
    #ifdef __UTF32__
      typedef unsigned int wchar_t;
    #else
      typedef unsigned short wchar_t;
    #endif
  #endif

  #ifndef __wctype_t
     #define __wctype_t
     typedef unsigned int   wctype_t;
  #endif

  #ifndef __wint_t
     #define __wint_t
     typedef int        wint_t;
  #endif

  #ifndef __wctrans_t
    #define __wctrans_t
    typedef unsigned int wctrans_t;
  #endif

  #ifndef WEOF
     #define WEOF -1
  #endif

#pragma datamodel(P128)

#if defined(__UCS2__)

#ifndef SHIFT_OUT
	#define SHIFT_OUT          0X0E
#endif

#ifndef SHIFT_IN
	#define SHIFT_IN           0X0F
#endif

#ifndef UNI_PLUS
	#define UNI_PLUS           0X002B
#endif

#ifndef UNI_MINUS
	#define UNI_MINUS          0X002D
#endif

#ifndef UNI_PERIOD
	#define UNI_PERIOD         0X002E
#endif

#ifndef UNI_ZERO
	#define UNI_ZERO           0X0030
#endif

#ifndef UNI_A
	#define UNI_A              0X0041
#endif

#ifndef UNI_a
	#define UNI_a              0X0061
#endif

#ifndef UNI_E
	#define UNI_E              0X0045
#endif

#ifndef UNI_e
	#define UNI_e              0X0065
#endif

#ifndef UNI_X
	#define UNI_X              0X0058
#endif

#ifndef UNI_x
	#define UNI_x              0X0078
#endif

#ifndef UNI_Z
	#define UNI_Z              0X005A
#endif

#ifndef UNI_z
	#define UNI_z              0X007A
#endif

#endif

#ifdef __POSIX_LOCALE__

  /* indexes of toupper/tolower tables in external character table */
  #ifndef _C_PSX_TOUPPER_INDEX
     #define _C_PSX_TOUPPER_INDEX 257
  #endif
  #ifndef _C_PSX_TOLOWER_INDEX
     #define _C_PSX_TOLOWER_INDEX 514
  #endif

  #ifndef __ISXDIGIT
     #define __ISXDIGIT       0x0001U
  #endif
  #ifndef __ISDIGIT
     #define __ISDIGIT        0x0002U
  #endif
  #ifndef __ISSPACE
     #define __ISSPACE        0x0004U
  #endif
  #ifndef __ISBLANK
     #define __ISBLANK        0x0008U
  #endif
  #ifndef __ISPRINT
     #define __ISPRINT        0x0010U
  #endif
  #ifndef __ISCNTRL
     #define __ISCNTRL        0x0020U
  #endif
  #ifndef __ISLOWER
     #define __ISLOWER        0x0040U
  #endif
  #ifndef __ISUPPER
     #define __ISUPPER        0x0080U
  #endif
  #ifndef __ISALPHA
     #define __ISALPHA        0x0100U
  #endif
  #ifndef __ISALNUM
     #define __ISALNUM        0x0102U
  #endif
  #ifndef __ISGRAPH
     #define __ISGRAPH        0x0200U
  #endif
  #ifndef __ISPUNCT
     #define __ISPUNCT        0x0400U
  #endif
  #ifndef __TOLOWER
     #define __TOLOWER      0x0001U
  #endif
  #ifndef __TOUPPER
     #define __TOUPPER      0x0002U
  #endif

  #ifndef __cplusplus_nomacro__
    int      iswalnum (wint_t);
    int      iswalpha (wint_t);
    int      iswcntrl (wint_t);
    int      iswdigit (wint_t);
    int      iswgraph (wint_t);
    int      iswlower (wint_t);
    int      iswprint (wint_t);
    int      iswpunct (wint_t);
    int      iswspace (wint_t);
    int      iswupper (wint_t);
    int      iswxdigit (wint_t);
    wint_t   towlower (wint_t);
    wint_t   towupper (wint_t);
    int      iswctype (wint_t, wctype_t);
#if defined(__UCS2__) && (__OS400_TGTVRM__ >= 530)
    #pragma map(iswalnum, "_C_UCS2_iswalnum")
    #pragma map(iswalpha, "_C_UCS2_iswalpha")
    #pragma map(iswcntrl, "_C_UCS2_iswcntrl")
    #pragma map(iswdigit, "_C_UCS2_iswdigit")
    #pragma map(iswgraph, "_C_UCS2_iswgraph")
    #pragma map(iswlower, "_C_UCS2_iswlower")
    #pragma map(iswprint, "_C_UCS2_iswprint")
    #pragma map(iswpunct, "_C_UCS2_iswpunct")
    #pragma map(iswspace, "_C_UCS2_iswspace")
    #pragma map(iswupper, "_C_UCS2_iswupper")
    #pragma map(iswxdigit, "_C_UCS2_iswxdigit")
    #pragma map(towlower, "_C_UCS2_towlower")
    #pragma map(towupper, "_C_UCS2_towupper")
    #pragma map(iswctype, "_C_UCS2_iswctype")
#elif defined(__UTF32__)
    #pragma map(iswalnum, "_C_UTF_iswalnum")
    #pragma map(iswalpha, "_C_UTF_iswalpha")
    #pragma map(iswcntrl, "_C_UTF_iswcntrl")
    #pragma map(iswdigit, "_C_UTF_iswdigit")
    #pragma map(iswgraph, "_C_UTF_iswgraph")
    #pragma map(iswlower, "_C_UTF_iswlower")
    #pragma map(iswprint, "_C_UTF_iswprint")
    #pragma map(iswpunct, "_C_UTF_iswpunct")
    #pragma map(iswspace, "_C_UTF_iswspace")
    #pragma map(iswupper, "_C_UTF_iswupper")
    #pragma map(iswxdigit, "_C_UTF_iswxdigit")
    #pragma map(towlower, "_C_UTF_towlower")
    #pragma map(towupper, "_C_UTF_towupper")
    #pragma map(iswctype, "_C_UTF_iswctype")
#endif

  #endif

  wint_t   towctrans (wint_t, wctrans_t);
  wctype_t wctype (const char *);
  wctrans_t wctrans (const char *);
#if defined(__UTF32__) || defined(__CCSID_NEUTRAL__)
  #pragma map(wctype, "_C_NEU_wctype")
  #pragma map(wctrans, "_C_NEU_wctrans")
#endif
#if defined(__UCS2__) && (__OS400_TGTVRM__ >= 530)
  #pragma map(towctrans, "_C_UCS2_towctrans")
#elif defined(__UTF32__)
  #pragma map(towctrans, "_C_UTF_towctrans")
#endif

  #ifndef __cplusplus_nomacro__
    #define iswalnum(__c)  __iswalnum(__c)
    #define iswalpha(__c)  __iswalpha(__c)
    #define iswcntrl(__c)  __iswcntrl(__c)
    #define iswdigit(__c)  __iswdigit(__c)

    #define iswgraph(__c)  __iswgraph(__c)
    #define iswlower(__c)  __iswlower(__c)
    #define iswprint(__c)  __iswprint(__c)
    #define iswpunct(__c)  __iswpunct(__c)
    #define iswspace(__c)  __iswspace(__c)
    #define iswupper(__c)  __iswupper(__c)
    #define iswxdigit(__c) __iswxdigit(__c)
    #define towlower(__c)  __towlower(__c)
    #define towupper(__c)  __towupper(__c)
    #define iswctype(__c, __d) __iswctype(__c, __d)
  #endif/* #ifndef __cplusplus_nomacro__ */

  #if !defined(__UCS2__) && !defined(__UTF32__)

  extern short *_C_PSX_C_ctype;
  extern unsigned int *_C_PSX_C_DB_ctype[256];
  extern unsigned short *_C_PSX_C_TOWUPPER[256];
  extern unsigned short *_C_PSX_C_TOWLOWER[256];

  #define __SBCK(a,m)   (_C_PSX_C_ctype[a] & m)
  #define __MBCK(a,m)   (((_C_PSX_C_DB_ctype == 0) ||                \
      (_C_PSX_C_DB_ctype[(unsigned int)((a) & 0xFF00)>>8] == 0))     \
      ? 0 :                                                          \
          (_C_PSX_C_DB_ctype[((unsigned int)((a) & 0xFF00))>>8])     \
                   [(unsigned int)((a) & 0x00FF)] & m)
  #define __VALCK(a,m)  ((a)<256?__SBCK(a,m):__MBCK(a,m))
  #define __iswctype(a,m) (((a) < 256                                \
                            ?  __SBCK(a,m)                           \
                            :  __MBCK(a,m)))
  #elif defined(__UTF32__)

  extern char *_C_UTF_wbase;
  extern void *_C_UTF_wctype_table;
  extern void *_C_UTF_wtoupper_table;
  extern void *_C_UTF_wtolower_table;
  extern unsigned int
    _C_UTF_lookup_utf32_offset(const char*, const void *,
                               unsigned int);
  extern unsigned int
    _C_UTF_lookup_utf32_char(const char*, const void *,
                             unsigned int);

  #define __MBCK(__a,__m)                                           \
    (_C_UTF_lookup_utf32_offset(_C_UTF_wbase, _C_UTF_wctype_table,  \
                                (__a)) & (__m))

  #define __VALCK(__a,__m)  (__MBCK(__a,__m))
  #define __iswctype(__a,__m) (__MBCK(__a,__m))
  #else

  extern unsigned int    *_UCS2_DB_ctype[];
  extern short *_UCS2_ctype;
  extern unsigned short *_UCS2_TOWUPPER[];
  extern unsigned short *_UCS2_TOWLOWER[];

  #define __SBCK(__a,__m)   (_UCS2_ctype[__a] & __m)
  #define __MBCK(__a,__m)  (                                        \
(_UCS2_DB_ctype[(unsigned int)((__a) & 0xFF00)>>8] == 0)            \
      ? 0 :                                                         \
          (_UCS2_DB_ctype[((unsigned int)((__a) & 0xFF00))>>8])     \
                   [(unsigned int)((__a) & 0x00FF)] & __m)

  #define __VALCK(__a,__m)  (__MBCK(__a,__m))
  #define __iswctype(__a,__m) (__MBCK(__a,__m))
  #endif

  #define __iswalpha(__a)  (__VALCK(__a,__ISALPHA))
  #define __iswalnum(__a)  (__VALCK(__a,__ISALNUM))
  #define __iswcntrl(__a)  (__VALCK(__a,__ISCNTRL))
  #define __iswdigit(__a)  (__VALCK(__a,__ISDIGIT))
  #define __iswgraph(__a)  (__VALCK(__a,__ISGRAPH))
  #define __iswlower(__a)  (__VALCK(__a,__ISLOWER))
  #define __iswprint(__a)  (__VALCK(__a,__ISPRINT))
  #define __iswpunct(__a)  (__VALCK(__a,__ISPUNCT))
  #define __iswspace(__a)  (__VALCK(__a,__ISSPACE))
  #define __iswupper(__a)  (__VALCK(__a,__ISUPPER))
  #define __iswxdigit(__a) (__VALCK(__a,__ISXDIGIT))

  #if !defined(__UCS2__) && !defined(__UTF32__)

  #define __SBUPPER(__a)     (_C_PSX_C_ctype[__a+_C_PSX_TOUPPER_INDEX])
  #define __MBUPPER(__a)     (((_C_PSX_C_TOWUPPER == 0) ||             \
      (_C_PSX_C_TOWUPPER[(unsigned int)((__a) & 0xFF00) >>8] == 0))    \
      ? (__a) :                                                        \
           (_C_PSX_C_TOWUPPER[((unsigned int)((__a) & 0xFF00))>>8])    \
                      [(unsigned int)((__a) & 0x00FF)])

  #define __SBLOWER(__a)     (_C_PSX_C_ctype[__a+_C_PSX_TOLOWER_INDEX])
  #define __MBLOWER(__a)     (((_C_PSX_C_TOWLOWER == 0) ||             \
      (_C_PSX_C_TOWLOWER[(unsigned int)((__a) & 0xFF00) >>8] == 0))    \
      ? (__a) :                                                        \
          (_C_PSX_C_TOWLOWER[((unsigned int)((__a) & 0xFF00))>>8])     \
                      [(unsigned int)((__a) & 0x00FF)])

  #define __towupper(__a) ((unsigned int)(__a) < 256                   \
                                     ? __SBUPPER(__a)                  \
                                     : ((__a) == WEOF)                 \
                                       ? WEOF                          \
                                     : __MBUPPER(__a))

  #define __towlower(__a) ((unsigned int)(__a) < 256                   \
                                      ? __SBLOWER(__a)                 \
                                      : ((__a) == WEOF)                \
                                      ? WEOF                           \
                                      : __MBLOWER(__a))
  #elif defined(__UTF32__)

  #define __MBUPPER(__a)                                             \
    (_C_UTF_lookup_utf32_char(_C_UTF_wbase, _C_UTF_wtoupper_table, (__a)))

  #define __MBLOWER(__a)                                             \
    (_C_UTF_lookup_utf32_char(_C_UTF_wbase, _C_UTF_wtolower_table, (__a)))

  #define __towupper(__a) (__MBUPPER(__a))

  #define __towlower(__a) (__MBLOWER(__a))
  #else

  #define __MBUPPER(__a)     (                                       \
      (_UCS2_TOWUPPER[(unsigned int)((__a) & 0xFF00) >>8] == 0)      \
      ? (__a) :                                                      \
           (_UCS2_TOWUPPER[((unsigned int)((__a) & 0xFF00))>>8])     \
                      [(unsigned int)((__a) & 0x00FF)])

  #define __MBLOWER(__a)     (                                       \
      (_UCS2_TOWLOWER[(unsigned int)((__a) & 0xFF00) >>8] == 0)      \
      ? (__a) :                                                      \
          (_UCS2_TOWLOWER[((unsigned int)((__a) & 0xFF00))>>8])      \
                      [(unsigned int)((__a) & 0x00FF)])
  #define __towupper(__a) (__MBUPPER(__a))

  #define __towlower(__a) (__MBLOWER(__a))
  #endif

  #ifdef __cplusplus_nomacro__
    inline int iswalnum(wint_t __c) {
      return __iswalnum(__c);
    }

    inline int iswalpha(wint_t __c) {
      return __iswalpha(__c);
    }

    inline int iswcntrl(wint_t __c) {
      return __iswcntrl(__c);
    }

    inline int iswdigit(wint_t __c) {
      return __iswdigit(__c);
    }

    inline int iswgraph(wint_t __c) {
      return __iswgraph(__c);
    }

    inline int iswlower(wint_t __c) {
      return __iswlower(__c);
    }

    inline int iswprint(wint_t __c) {
      return __iswprint(__c);
    }

    inline int iswpunct(wint_t __c) {
      return __iswpunct(__c);
    }

    inline int iswspace(wint_t __c) {
      return __iswspace(__c);
    }

    inline int iswupper(wint_t __c) {
      return __iswupper(__c);
    }

    inline int iswxdigit(wint_t __c) {
      return __iswxdigit(__c);
    }

    inline wint_t towlower(wint_t __c) {
      return __towlower(__c);
    }

    inline wint_t towupper(wint_t __c) {
      return __towupper(__c);
    }

    inline int iswctype (wint_t __c, wctype_t __d) {
      return __iswctype (__c,__d);
    }
  #endif/* #ifndef __cplusplus_nomacro__ */


#endif   /* ifdef __POSIX_LOCALE__                                */

#pragma datamodel(pop)

#ifdef __cplusplus
 #pragma info(restore)
 }
#else
 #pragma checkout(resume)
#endif

#endif   /* ifndef __wctype_h */

