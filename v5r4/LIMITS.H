#ifndef   __limits_h
  #define __limits_h
  #include <sys/limits.h>

#ifdef __cplusplus
 extern "C" {
 #pragma info(none)
#else
 #pragma nomargins nosequence
 #pragma checkout(suspend)
#endif

/* ================================================================== */
/*  Header File Name: limits.h                                        */
/*                                                                    */
/*  This header contains the definitions related to integral values.  */
/*                                                                    */
/* Licensed Materials-Property of IBM                                 */
/*                                                                    */
/* 5716-CX2, 5716-CX4, 5716-CX5, 5722-SS1                             */
/* (C) Copyright IBM Corp. 1991,2005                                  */
/*                                                                    */
/* US Government Users Restricted Rights -                            */
/* Use, duplication or disclosure restricted                          */
/* by GSA ADP Schedule Contract with IBM Corp.                        */
/* ================================================================== */

#define    CHAR_BIT       8

#define    SCHAR_MIN      (-128)
#define    SCHAR_MAX      127
#define    UCHAR_MAX      255U
#define    CHAR_MAX       255
#define    CHAR_MIN       0

#define    MB_LEN_MAX     4

#define    SHRT_MIN       (-32768)
#define    SHRT_MAX       32767
#define    USHRT_MAX      65535U

#define    INT_MIN        (-2147483647-1)
#define    INT_MAX        2147483647
#define    UINT_MAX       4294967295U

#define    LONG_MIN       (-2147483647L-1L)
#define    LONG_MAX       2147483647L
#define    ULONG_MAX      4294967295UL

#define    LONGLONG_MIN   (-9223372036854775807LL-1LL)
#define    LONGLONG_MAX   9223372036854775807LL
#define    ULONGLONG_MAX  18446744073709551615ULL

#define    NL_ARGMAX      256  /* max number of printf args */

#ifdef __cplusplus
 #pragma info(restore)
 }
#else
 #pragma checkout(resume)
#endif

#endif /* ifndef __limits_h                                           */
