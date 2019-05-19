#ifndef   __stddef_h
  #define __stddef_h

#ifdef __cplusplus
 extern "C" {
 #pragma info(none)
#else
 #pragma nomargins nosequence
 #pragma checkout(suspend)
#endif

/* ================================================================= */
/* Header File Name: stddef.h                                        */
/*                                                                   */
/* This header contains the standard C library definitions.          */
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

  #ifndef   __ptrdiff_t
    #define __ptrdiff_t
    typedef int ptrdiff_t;
  #endif

  /* Language Levels - IBM Extensions only                            */
  #if defined (__EXTENDED__)
    extern char _EXCP_MSGID[];
  #endif /* Language Levels - IBM Extensions only                     */


  #define offsetof(x,y) __offsetof(x,y)

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

#endif  /* #ifndef __stddef_h */
