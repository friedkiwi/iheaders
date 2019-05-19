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
#ifndef __p_ctype_h
 #define __p_ctype_h

#ifdef __cplusplus
 extern "C" {
 #pragma info(none)
#else
 #pragma nomargins nosequence
 #pragma checkout(suspend)
#endif

/* ================================================================= */
/* Header File Name: p_ctype.h                                       */
/*                                                                   */
/* This header contains information used for character               */
/* classification.                                                   */
/* ================================================================= */

#ifdef __POSIX_LOCALE__

#ifndef   __ctype_h
  #include <ctype.h>
#endif

   #pragma datamodel(P128)

   #ifndef __cplusplus_nomacro__
     #ifdef __UTF32__
       #pragma map(isalnum, "_C_UTF_isalnum")
       #pragma map(isalpha, "_C_UTF_isalpha")
       #pragma map(iscntrl, "_C_UTF_iscntrl")
       #pragma map(isdigit, "_C_UTF_isdigit")
       #pragma map(isgraph, "_C_UTF_isgraph")
       #pragma map(islower, "_C_UTF_islower")
       #pragma map(isprint, "_C_UTF_isprint")
       #pragma map(ispunct, "_C_UTF_ispunct")
       #pragma map(isspace, "_C_UTF_isspace")
       #pragma map(isupper, "_C_UTF_isupper")
       #pragma map(isxdigit, "_C_UTF_isxdigit")
       #pragma map(tolower, "_C_UTF_tolower")
       #pragma map(toupper, "_C_UTF_toupper")
     #elif defined(__CCSID_NEUTRAL__)
       #pragma map(isalnum, "_C_NEU_isalnum")
       #pragma map(isalpha, "_C_NEU_isalpha")
       #pragma map(iscntrl, "_C_NEU_iscntrl")
       #pragma map(isdigit, "_C_NEU_isdigit")
       #pragma map(isgraph, "_C_NEU_isgraph")
       #pragma map(islower, "_C_NEU_islower")
       #pragma map(isprint, "_C_NEU_isprint")
       #pragma map(ispunct, "_C_NEU_ispunct")
       #pragma map(isspace, "_C_NEU_isspace")
       #pragma map(isupper, "_C_NEU_isupper")
       #pragma map(isxdigit, "_C_NEU_isxdigit")
       #pragma map(tolower, "_C_NEU_tolower")
       #pragma map(toupper, "_C_NEU_toupper")
     #else
       #pragma map(isalnum, "_C_PSX_isalnum")
       #pragma map(isalpha, "_C_PSX_isalpha")
       #pragma map(iscntrl, "_C_PSX_iscntrl")
       #pragma map(isdigit, "_C_PSX_isdigit")
       #pragma map(isgraph, "_C_PSX_isgraph")
       #pragma map(islower, "_C_PSX_islower")
       #pragma map(isprint, "_C_PSX_isprint")
       #pragma map(ispunct, "_C_PSX_ispunct")
       #pragma map(isspace, "_C_PSX_isspace")
       #pragma map(isupper, "_C_PSX_isupper")
       #pragma map(isxdigit, "_C_PSX_isxdigit")
       #pragma map(tolower, "_C_PSX_tolower")
       #pragma map(toupper, "_C_PSX_toupper")
     #endif
   #endif

  #ifdef __UTF32__
    #pragma map(isascii, "_C_UTF_isascii")
    #pragma map(toascii, "_C_UTF_toascii")
  #elif defined(__CCSID_NEUTRAL__)
    #pragma map(isascii, "_C_NEU_isascii")
    #pragma map(toascii, "_C_NEU_toascii")
  #endif

  /* external character table for ctype macros                        */
  #if defined(__UTF32__) || defined(__CCSID_NEUTRAL__)
    extern short *_C_NEU_C_ctype;
  #else
    extern short *_C_PSX_C_ctype;
  #endif

  /* masks for using external character table                         */
  #define _C_PSX_PU 0x0400
  #define _C_PSX_GR 0x0200
  #define _C_PSX_AL 0x0100
  #define _C_PSX_UP 0x0080
  #define _C_PSX_LO 0x0040
  #define _C_PSX_CN 0x0020
  #define _C_PSX_PR 0x0010
  #define _C_PSX_BL 0x0008
  #define _C_PSX_SP 0x0004
  #define _C_PSX_DG 0x0002
  #define _C_PSX_XD 0x0001

  /* indexes of toupper/tolower tables in external character table    */
  #define _C_PSX_TOUPPER_INDEX 257
  #define _C_PSX_TOLOWER_INDEX 514

  /* macro definitions                                                */

  #ifdef __UTF32__
    extern char *_C_UTF_base;
    extern void *_C_UTF_ctype_table;
    extern void *_C_UTF_toupper_table;
    extern void *_C_UTF_tolower_table;
    extern unsigned int
      _C_UTF_lookup_utf8_offset(const char*, const void *,
                                unsigned int);
    extern unsigned int
      _C_UTF_lookup_utf8_char(const char*, const void *,
                              unsigned int);

    #define __UTFCHK(__c,__m) (((((__c) & 0xffffff00) == 0) ||      \
                                ((__c) == -1)) ?                    \
      (_C_NEU_C_ctype[(__c)] & (__m)) :                             \
      (_C_UTF_lookup_utf8_offset(_C_UTF_base, _C_UTF_ctype_table,   \
                                 (__c)) & (__m)))

    #define __UTFUPPER(__c)   (((((__c) & 0xffffff00) == 0) ||      \
                                ((__c) == -1)) ?                    \
      (_C_NEU_C_ctype[(__c) + _C_PSX_TOUPPER_INDEX]) :              \
      (_C_UTF_lookup_utf8_char(_C_UTF_base, _C_UTF_toupper_table,   \
                               (__c))))

    #define __UTFLOWER(__c)   (((((__c) & 0xffffff00) == 0) ||      \
                                ((__c) == -1)) ?                    \
      (_C_NEU_C_ctype[(__c) + _C_PSX_TOLOWER_INDEX]) :              \
      (_C_UTF_lookup_utf8_char(_C_UTF_base, _C_UTF_tolower_table,   \
                               (__c))))

    #define __isalnum(__c)  (__UTFCHK((__c), (_C_PSX_AL | _C_PSX_DG)))
    #define __isalpha(__c)  (__UTFCHK((__c), _C_PSX_AL))
    #define __iscntrl(__c)  (__UTFCHK((__c), _C_PSX_CN))
    #define __isdigit(__c)  (__UTFCHK((__c), _C_PSX_DG))
    #define __isgraph(__c)  (__UTFCHK((__c), _C_PSX_GR))
    #define __islower(__c)  (__UTFCHK((__c), _C_PSX_LO))
    #define __isprint(__c)  (__UTFCHK((__c), _C_PSX_PR))
    #define __ispunct(__c)  (__UTFCHK((__c), _C_PSX_PU))
    #define __isspace(__c)  (__UTFCHK((__c), _C_PSX_SP))
    #define __isupper(__c)  (__UTFCHK((__c), _C_PSX_UP))
    #define __isxdigit(__c) (__UTFCHK((__c), _C_PSX_XD))
    #define __toupper(__c)  (__UTFUPPER(__c))
    #define __tolower(__c)  (__UTFLOWER(__c))
  #elif defined(__CCSID_NEUTRAL__)
    #define __isalnum(__c)  (_C_NEU_C_ctype[(__c)] & (_C_PSX_AL | _C_PSX_DG))
    #define __isalpha(__c)  (_C_NEU_C_ctype[(__c)] & _C_PSX_AL)
    #define __iscntrl(__c)  (_C_NEU_C_ctype[(__c)] & _C_PSX_CN)
    #define __isdigit(__c)  (_C_NEU_C_ctype[(__c)] & _C_PSX_DG)
    #define __isgraph(__c)  (_C_NEU_C_ctype[(__c)] & _C_PSX_GR)
    #define __islower(__c)  (_C_NEU_C_ctype[(__c)] & _C_PSX_LO)
    #define __isprint(__c)  (_C_NEU_C_ctype[(__c)] & _C_PSX_PR)
    #define __ispunct(__c)  (_C_NEU_C_ctype[(__c)] & _C_PSX_PU)
    #define __isspace(__c)  (_C_NEU_C_ctype[(__c)] & _C_PSX_SP)
    #define __isupper(__c)  (_C_NEU_C_ctype[(__c)] & _C_PSX_UP)
    #define __isxdigit(__c) (_C_NEU_C_ctype[(__c)] & _C_PSX_XD)
    #define __toupper(__c)  (_C_NEU_C_ctype[(__c) + _C_PSX_TOUPPER_INDEX])
    #define __tolower(__c)  (_C_NEU_C_ctype[(__c) + _C_PSX_TOLOWER_INDEX])
  #else
    #define __isalnum(__c)  (_C_PSX_C_ctype[(__c)] & (_C_PSX_AL | _C_PSX_DG))
    #define __isalpha(__c)  (_C_PSX_C_ctype[(__c)] & _C_PSX_AL)
    #define __iscntrl(__c)  (_C_PSX_C_ctype[(__c)] & _C_PSX_CN)
    #define __isdigit(__c)  (_C_PSX_C_ctype[(__c)] & _C_PSX_DG)
    #define __isgraph(__c)  (_C_PSX_C_ctype[(__c)] & _C_PSX_GR)
    #define __islower(__c)  (_C_PSX_C_ctype[(__c)] & _C_PSX_LO)
    #define __isprint(__c)  (_C_PSX_C_ctype[(__c)] & _C_PSX_PR)
    #define __ispunct(__c)  (_C_PSX_C_ctype[(__c)] & _C_PSX_PU)
    #define __isspace(__c)  (_C_PSX_C_ctype[(__c)] & _C_PSX_SP)
    #define __isupper(__c)  (_C_PSX_C_ctype[(__c)] & _C_PSX_UP)
    #define __isxdigit(__c) (_C_PSX_C_ctype[(__c)] & _C_PSX_XD)
    #define __toupper(__c)  (_C_PSX_C_ctype[(__c) + _C_PSX_TOUPPER_INDEX])
    #define __tolower(__c)  (_C_PSX_C_ctype[(__c) + _C_PSX_TOLOWER_INDEX])
  #endif

  #ifndef __cplusplus_nomacro__

    #define isalnum(__c)  (__isalnum(__c))
    #define isalpha(__c)  (__isalpha(__c))
    #define iscntrl(__c)  (__iscntrl(__c))
    #define isdigit(__c)  (__isdigit(__c))
    #define isgraph(__c)  (__isgraph(__c))
    #define islower(__c)  (__islower(__c))
    #define isprint(__c)  (__isprint(__c))
    #define ispunct(__c)  (__ispunct(__c))
    #define isspace(__c)  (__isspace(__c))
    #define isupper(__c)  (__isupper(__c))
    #define isxdigit(__c) (__isxdigit(__c))
    #define toupper(__c)  (__toupper(__c))
    #define tolower(__c)  (__tolower(__c))

  #else

    inline int isalnum(int __c) {
      return __isalnum(__c);
    }

    inline int isalpha(int __c) {
      return __isalpha(__c);
    }

    inline int iscntrl(int __c) {
      return __iscntrl(__c);
    }

    inline int isdigit(int __c) {
      return __isdigit(__c);
    }

    inline int isgraph(int __c) {
      return __isgraph(__c);
    }

    inline int islower(int __c) {
      return __islower(__c);
    }

    inline int isprint(int __c) {
      return __isprint(__c);
    }

    inline int ispunct(int __c) {
      return __ispunct(__c);
    }

    inline int isspace(int __c) {
      return __isspace(__c);
    }

    inline int isupper(int __c) {
      return __isupper(__c);
    }

    inline int isxdigit(int __c) {
      return __isxdigit(__c);
    }

    inline int toupper(int __c) {
      return __toupper(__c);
    }

    inline int tolower(int __c) {
      return __tolower(__c);
    }

  #endif  /* ifndef __cplusplus_nomacro__ */

  #pragma datamodel(pop)

#endif /* #ifdef __POSIX_LOCALE__ */

#ifdef __cplusplus
 #pragma info(restore)
 }
#else
 #pragma checkout(resume)
#endif

#endif  /* ifndef __p_ctype_h */
