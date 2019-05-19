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
#ifndef   __locale_h
  #define __locale_h

#ifdef __cplusplus
 extern "C" {
 #pragma info(none)
#else
 #pragma nomargins nosequence
 #pragma checkout(suspend)
#endif

/* ================================================================= */
/* Header File Name: locale.h                                        */
/*                                                                   */
/* This header contains the declarations and definitions used by     */
/* the C locale functions.                                           */
/* ================================================================= */

  #pragma datamodel(P128)

  struct lconv {
    char    *decimal_point;
    char    *thousands_sep;
    char    *grouping;
    char    *int_curr_symbol;
    char    *currency_symbol;
    char    *mon_decimal_point;
    char    *mon_thousands_sep;
    char    *mon_grouping;
    char    *positive_sign;
    char    *negative_sign;
    char    int_frac_digits;
    char    frac_digits;
    char    p_cs_precedes;
    char    p_sep_by_space;
    char    n_cs_precedes;
    char    n_sep_by_space;
    char    p_sign_posn;
    char    n_sign_posn;
  };


#if (__OS400_TGTVRM__ >= 530) && defined(__EXTENDED__)
  #ifndef   __wchar_t
    #define __wchar_t
    #ifdef __UTF32__
      typedef unsigned int wchar_t;
    #else
      typedef unsigned short wchar_t;
    #endif
  #endif


  struct wcslconv {
    wchar_t *decimal_point;
    wchar_t *thousands_sep;
    wchar_t *grouping;
    wchar_t *int_curr_symbol;
    wchar_t *currency_symbol;
    wchar_t *mon_decimal_point;
    wchar_t *mon_thousands_sep;
    wchar_t *mon_grouping;
    wchar_t *positive_sign;
    wchar_t *negative_sign;
    char    int_frac_digits;
    char    frac_digits;
    char    p_cs_precedes;
    char    p_sep_by_space;
    char    n_cs_precedes;
    char    n_sep_by_space;
    char    p_sign_posn;
    char    n_sign_posn;
  };

  #if defined(__UCS2__) || defined(__UTF32__)
     struct wcslconv *wcslocaleconv ( void );
     #if defined(__UCS2__)
       #pragma map(wcslocaleconv, "_C_UCS2_wcslocaleconv" )
     #else
       #pragma map(wcslocaleconv, "_C_UTF_wcslocaleconv" )
     #endif
  #endif
#endif/*#if (__OS400_TGTVRM__ >= 530) && defined(__EXTENDED__) */

  /* Prototype definitions                                            */
  char         *setlocale  ( int, const char * );
  char         *_UCS2_setlocale( int, const char * );
  struct lconv *localeconv ( void );

/* Categories */
#ifndef __POSIX_LOCALE__
 #define LC_ALL       (-1)
 #define LC_COLLATE    0
 #define LC_CTYPE      1
 #define LC_NUMERIC    2
 #define LC_MONETARY   3
 #define LC_TIME       4
 #define LC_TOD        5

#else   /* __POSIX_LOCALE__ */

 #define LC_ALL    (-1)
 #define LC_CTYPE    1
 #define LC_COLLATE  2
 #define LC_TIME     3
 #define LC_NUMERIC  4
 #define LC_MESSAGES 5
 #define LC_MONETARY 6
 #define LC_TOD      7

 #if defined(__UCS2__)
  #pragma map(setlocale,  "_UCS2_setlocale")
 #elif defined(__UTF32__)
  #pragma map(setlocale,  "_C_UTF_setlocale")
 #else
  #pragma map(setlocale,  "_C_PSX_setlocale")
 #endif

 #if defined(__UTF32__) || defined(__CCSID_NEUTRAL__)
  #pragma map(localeconv, "_C_NEU_localeconv")
 #else
  #pragma map(localeconv, "_C_PSX_localeconv")
 #endif

#endif  /* ifndef __POSIX_LOCALE__ */

#ifdef __UCS2__
  #define LC_UCS2_ALL      8
  #define LC_UCS2_COLLATE  9
  #define LC_UCS2_CTYPE   10

  #include <u_stdlib.h>
#endif
#if defined(__UCS2__) || defined(__UTF32__)
  #define LC_UNI_ALL      8
  #define LC_UNI_COLLATE  9
  #define LC_UNI_CTYPE    10
  #define LC_UNI_TIME     11
  #define LC_UNI_NUMERIC  12
  #define LC_UNI_MESSAGES 13
  #define LC_UNI_MONETARY 14
  #define LC_UNI_TOD      15
#endif

/* *CLD Locales                                                       */
#ifndef __POSIX_LOCALE__
 #define LC_C          "C"
 #define LC_C_GERMANY  "*LIBL/QCZGERM"
 #define LC_C_FRANCE   "*LIBL/QCZFRAN"
 #define LC_C_UK       "*LIBL/QCZUK"
 #define LC_C_ITALY    "*LIBL/QCZITALY"
 #define LC_C_SPAIN    "*LIBL/QCZSPAIN"
 #define LC_C_USA      "*LIBL/QCZUSA"
#endif  /* ifndef __POSIX_LOCALE__ */

#ifndef NULL
  #ifdef __cplusplus
    #define NULL 0
  #else
    #define NULL ((void *)0)
  #endif
#endif

#pragma datamodel(pop)

#ifdef __cplusplus
 #pragma info(restore)
 }
#else
 #pragma checkout(resume)
#endif

#endif /* #ifndef __locale_h */
