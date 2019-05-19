#ifndef   __ctype_h
  #define __ctype_h

#ifdef __cplusplus
 extern "C" {
 #pragma info(none)
#else
 #pragma nomargins nosequence
 #pragma checkout(suspend)
#endif

/* ================================================================= */
/* Header File Name: ctype.h                                         */
/*                                                                   */
/* This header contains information used for character               */
/* classification.                                                   */
/*                                                                   */
/* Licensed Materials-Property of IBM                                */
/*                                                                   */
/* 5716-CX2, 5716-CX4, 5716-CX5, 5799-GDW, 5722-SS1                  */
/* (C) Copyright IBM Corp. 1991,2003                                 */
/*                                                                   */
/* US Government Users Restricted Rights -                           */
/* Use, duplication or disclosure restricted                         */
/* by GSA ADP Schedule Contract with IBM Corp.                       */
/* ================================================================= */

  #pragma datamodel(P128)

  /* external character table for ctype macros                        */
  extern const short *_C_ctype;

  #pragma datamodel(pop)

  #ifndef __cplusplus_nomacro__
    int isalnum ( int );
    int isalpha ( int );
    int iscntrl ( int );
    int isdigit ( int );
    int isgraph ( int );
    int islower ( int );
    int isprint ( int );
    int ispunct ( int );
    int isspace ( int );
    int isupper ( int );
    int isxdigit( int );
    int tolower ( int );
    int toupper ( int );
  #endif

  #ifdef __POSIX_LOCALE__
    int isascii ( int );
    int toascii ( int );
  #endif

  #if defined (__EXTENDED__)

    #ifdef __cplusplus
      #ifndef __ANSI_NAMES_ONLY__

        int isblank(int);

        #pragma map (isblank, "__isblank")

      #endif    /* non-ansi extensions */
    #endif      /* C++ Extensions only */
  #endif        /* #if defined  (__EXTENDED__) */


#ifndef __POSIX_LOCALE__

/* masks for using external character table                           */
#define _C_U 0x0080
#define _C_L 0x0040
#define _C_C 0x0020
#define _C_P 0x0010
#define _C_W 0x0008
#define _C_S 0x0004
#define _C_D 0x0002
#define _C_X 0x0001
#define _C_A 0x0100

/* indexes of toupper/tolower tables in external character table      */
#define _TOUPPER_INDEX 257
#define _TOLOWER_INDEX 514

/* macro definitions                                                  */
#ifndef __cplusplus_nomacro__
  #define isalnum(__c)  (_C_ctype[(__c)] & (_C_A | _C_D))
  #define isalpha(__c)  (_C_ctype[(__c)] & _C_A)
  #define iscntrl(__c)  (_C_ctype[(__c)] & _C_C)
  #define isdigit(__c)  (_C_ctype[(__c)] & _C_D)
  #define isgraph(__c)  (_C_ctype[(__c)] & (_C_P | _C_A | _C_D))
  #define islower(__c)  (_C_ctype[(__c)] & _C_L)
  #define isprint(__c)  (_C_ctype[(__c)] & (_C_P | _C_A | _C_D | _C_S))
  #define ispunct(__c)  (_C_ctype[(__c)] & _C_P)
  #define isspace(__c)  (_C_ctype[(__c)] & _C_W)
  #define isupper(__c)  (_C_ctype[(__c)] & _C_U)
  #define isxdigit(__c) (_C_ctype[(__c)] & _C_X)
  #define toupper(__c)  (_C_ctype[(__c) + _TOUPPER_INDEX])
  #define tolower(__c)  (_C_ctype[(__c) + _TOLOWER_INDEX])
#else
  inline int isalnum(int __c) {
    return (_C_ctype[__c] & (_C_A | _C_D));
  }

  inline int isalpha(int __c) {
    return (_C_ctype[__c] & _C_A);
  }

  inline int iscntrl(int __c) {
    return (_C_ctype[__c] & _C_C);
  }

  inline int isdigit(int __c) {
    return (_C_ctype[__c] & _C_D);
  }

  inline int isgraph(int __c) {
    return (_C_ctype[__c] & (_C_P | _C_A | _C_D));
  }

  inline int islower(int __c) {
    return (_C_ctype[__c] & _C_L);
  }

  inline int isprint(int __c) {
    return (_C_ctype[__c] & (_C_P | _C_A | _C_D | _C_S));
  }

  inline int ispunct(int __c) {
    return (_C_ctype[__c] & _C_P);
  }

  inline int isspace(int __c) {
    return (_C_ctype[__c] & _C_W);
  }

  inline int isupper(int __c) {
    return (_C_ctype[__c] & _C_U);
  }

  inline int isxdigit(int __c) {
    return (_C_ctype[__c] & _C_X) ;
  }

  inline int toupper(int __c) {
    return (_C_ctype[__c + _TOUPPER_INDEX]);
  }

  inline int tolower(int __c) {
    return (_C_ctype[__c + _TOLOWER_INDEX]);
  }

#endif /* #ifndef __cplusplus_nomacro__ */

#else
  #include <p_ctype.h>
#endif

#ifdef __cplusplus
 #pragma info(restore)
 }
#else
 #pragma checkout(resume)
#endif

#endif       /* #ifndef __ctype_h */
