/* begin_generated_IBM_copyright_prolog                              */
/* This is an automatically generated copyright prolog.              */
/* After initializing,  DO NOT MODIFY OR MOVE                        */
/* ----------------------------------------------------------------- */
/*                                                                   */
/* Product(s):                                                       */
/*     5722-SS1                                                      */
/*                                                                   */
/* (C)Copyright IBM Corp.  2005, 2005                                */
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
#ifndef   __stdint_h
  #define __stdint_h

#ifdef __cplusplus
 #pragma info(none)
#else
 #pragma nomargins nosequence
 #pragma checkout(suspend)
#endif
/* ================================================================= */
/*  Header File Name: stdint.h                                       */
/*                                                                   */
/*  This header declares sets of integer types having specified      */
/*  widths, and defines corresponding sets of macros.                */
/*  It also defines macros that specify limits of integer types      */
/*  corresponding to types defined in other standard headers.        */
/*                                                                   */
/* ================================================================= */

/*********************************************************************/
/* Exact-width integer types                                         */
/*********************************************************************/
#ifndef _INT8_T
 #define _INT8_T
 typedef signed char          int8_t;
#endif

#ifndef _UINT8_T
 #define _UINT8_T
 typedef unsigned char        uint8_t;
#endif

#ifndef _INT16_T
 #define _INT16_T
 typedef signed short         int16_t;
#endif

#ifndef _UINT16_T
 #define _UINT16_T
 typedef unsigned short       uint16_t;
#endif

#ifndef _INT32_T
 #define _INT32_T
 typedef signed long          int32_t;
#endif

#ifndef _UINT32_T
 #define _UINT32_T
 typedef unsigned long        uint32_t;
#endif

#ifndef _INT64_T
 #define _INT64_T
 #ifdef _LONG_LONG
   typedef signed long long   int64_t;
 #else
   typedef char               int64_t[8];
 #endif
#endif

#ifndef _UINT64_T
 #define _UINT64_T
 #ifdef _LONG_LONG
   typedef unsigned long long uint64_t;
 #else
   typedef unsigned char      uint64_t[8];
 #endif
#endif

/*********************************************************************/
/* Minimum-width integer types                                       */
/*********************************************************************/
typedef int8_t            int_least8_t;
typedef int16_t           int_least16_t;
typedef int32_t           int_least32_t;
#ifdef _LONG_LONG
typedef int64_t           int_least64_t;
#endif

typedef uint8_t           uint_least8_t;
typedef uint16_t          uint_least16_t;
typedef uint32_t          uint_least32_t;
#ifdef _LONG_LONG
typedef uint64_t          uint_least64_t;
#endif

/*********************************************************************/
/* Fastest minimum-width integer types                               */
/*********************************************************************/
typedef int8_t            int_fast8_t;
typedef int16_t           int_fast16_t;
typedef int32_t           int_fast32_t;
#ifdef _LONG_LONG
typedef int64_t           int_fast64_t;
#endif

typedef uint8_t           uint_fast8_t;
typedef uint16_t          uint_fast16_t;
typedef uint32_t          uint_fast32_t;
#ifdef _LONG_LONG
typedef uint64_t          uint_fast64_t;
#endif

/*********************************************************************/
/* Greatest-width integer types                                      */
/*********************************************************************/
#ifdef _LONG_LONG
typedef int64_t           intmax_t;
typedef uint64_t          uintmax_t;
#else
typedef int32_t           intmax_t;
typedef uint32_t          uintmax_t;
#endif

#if !defined(__cplusplus) || defined(__STDC_LIMIT_MACROS)

/*********************************************************************/
/* Limits of exact-width integer types                               */
/*********************************************************************/
#define INT8_MIN          (-128)
#define INT16_MIN         (-32767-1)
#define INT32_MIN         (-2147483647-1)
#ifdef _LONG_LONG
#define INT64_MIN         ((-9223372036854775807LL)-1)
#endif

#define INT8_MAX          (127)
#define INT16_MAX         (32767)
#define INT32_MAX         (2147483647)
#ifdef _LONG_LONG
#define INT64_MAX         (9223372036854775807LL)
#endif

#define UINT8_MAX         (255U)
#define UINT16_MAX        (65535U)
#define UINT32_MAX        (4294967295U)
#ifdef _LONG_LONG
#define UINT64_MAX        (18446744073709551615ULL)
#endif

/*********************************************************************/
/* Limits of minimum-width integer types                             */
/*********************************************************************/
#define INT_LEAST8_MIN    INT8_MIN
#define INT_LEAST16_MIN   INT16_MIN
#define INT_LEAST32_MIN   INT32_MIN
#ifdef _LONG_LONG
#define INT_LEAST64_MIN   INT64_MIN
#endif

#define INT_LEAST8_MAX    INT8_MAX
#define INT_LEAST16_MAX   INT16_MAX
#define INT_LEAST32_MAX   INT32_MAX
#ifdef _LONG_LONG
#define INT_LEAST64_MAX   INT64_MAX
#endif

#define UINT_LEAST8_MAX   UINT8_MAX
#define UINT_LEAST16_MAX  UINT16_MAX
#define UINT_LEAST32_MAX  UINT32_MAX
#ifdef _LONG_LONG
#define UINT_LEAST64_MAX  UINT64_MAX
#endif

/*********************************************************************/
/* Limits of fastest minimum-width integer types                     */
/*********************************************************************/
#define INT_FAST8_MIN     INT8_MIN
#define INT_FAST16_MIN    INT16_MIN
#define INT_FAST32_MIN    INT32_MIN
#ifdef _LONG_LONG
#define INT_FAST64_MIN    INT64_MIN
#endif

#define INT_FAST8_MAX     INT8_MAX
#define INT_FAST16_MAX    INT16_MAX
#define INT_FAST32_MAX    INT32_MAX
#ifdef _LONG_LONG
#define INT_FAST64_MAX    INT64_MAX
#endif

#define UINT_FAST8_MAX    UINT8_MAX
#define UINT_FAST16_MAX   UINT16_MAX
#define UINT_FAST32_MAX   UINT32_MAX
#ifdef _LONG_LONG
#define UINT_FAST64_MAX   UINT64_MAX
#endif

/*********************************************************************/
/* Limits of greatest-width integer types                            */
/*********************************************************************/
#ifdef _LONG_LONG
#define INTMAX_MIN        INT64_MIN
#define INTMAX_MAX        INT64_MAX
#define UINTMAX_MAX       UINT64_MAX
#else
#define INTMAX_MIN        INT32_MIN
#define INTMAX_MAX        INT32_MAX
#define UINTMAX_MAX       UINT32_MAX
#endif

#endif /* !defined(__cplusplus) || defined(__STDC_LIMIT_MACROS) */

#if !defined(__cplusplus) || defined(__STDC_LIMIT_MACROS)

/*********************************************************************/
/* Limits of other integer types                                     */
/*********************************************************************/
#define PTRDIFF_MIN       INT32_MIN
#define PTRDIFF_MAX       INT32_MAX

#define SIG_ATOMIC_MIN    INT32_MIN
#define SIG_ATOMIC_MAX    INT32_MAX

#define SIZE_MAX          UINT32_MAX

#ifdef __UTF32__
  #define WCHAR_MIN       (0)
  #define WCHAR_MAX       (4294967295U)
#else
  #define WCHAR_MIN       (0)
  #define WCHAR_MAX       (65535U)
#endif

#define WINT_MIN          INT32_MIN
#define WINT_MAX          INT32_MAX

#endif /* !defined(__cplusplus) || defined(__STDC_LIMIT_MACROS) */

#if !defined(__cplusplus) || defined(__STDC_CONSTANT_MACROS)

#define __PASTE__(__A,__B)    __A##__B

/*********************************************************************/
/* Macros for minimum-width integer constants                        */
/*********************************************************************/
#define INT8_C(__c)       __c
#define INT16_C(__c)      __c
#define INT32_C(__c)      __c
#ifdef _LONG_LONG
#define INT64_C(__c)      __PASTE__(__c,LL)
#endif

#define UINT8_C(__c)      __PASTE__(__c,U)
#define UINT16_C(__c)     __PASTE__(__c,U)
#define UINT32_C(__c)     __PASTE__(__c,U)
#ifdef _LONG_LONG
#define UINT64_C(__c)     __PASTE__(__c,ULL)
#endif

/*********************************************************************/
/* Macros for greatest-width integer constants                       */
/*********************************************************************/
#ifdef _LONG_LONG
#define INTMAX_C(__c)     INT64_C(__c)
#define UINTMAX_C(__c)    UINT64_C(__c)
#else
#define INTMAX_C(__c)     INT32_C(__c)
#define UINTMAX_C(__c)    UINT32_C(__c)
#endif

#endif /* !defined(__cplusplus) || defined(__STDC_CONSTANT_MACROS) */

#ifdef __cplusplus
 #pragma info(restore)
#else
 #pragma checkout(resume)
#endif

#endif /* #ifndef __stdint_h */
