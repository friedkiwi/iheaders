#ifndef   __float_h
  #define __float_h

#ifdef __cplusplus
 extern "C" {
 #pragma info(none)
#else
 #pragma nomargins nosequence
 #pragma checkout(suspend)
#endif

/* ================================================================= */
/*  Header File Name: float.h                                        */
/*                                                                   */
/*  This header contains the definitions related to floating point   */
/*  values.  They meet the requirements for single-precision and     */
/*  double-precision normalized numbers in the IEEE standard for     */
/*  Binary Floating-Point Arithmetic (ANSI/IEEE 754-1985).           */
/*                                                                   */
/* Licensed Materials-Property of IBM                                */
/*                                                                   */
/* 5716-CX2, 5716-CX4,5722-SS1                                       */
/* (C) Copyright IBM Corp. 1991,2001                                 */
/*                                                                   */
/* US Government Users Restricted Rights -                           */
/* Use, duplication or disclosure restricted                         */
/* by GSA ADP Schedule Contract with IBM Corp.                       */
/* ================================================================= */

  union __intflt {
    int      i;
    float    f;
  };

  union __intdbl {
    struct { int i1, i2; } s;
    double   d;
  };

  extern union __intflt _C_flt_eps,
                        _C_flt_min,
                        _C_flt_max;

  extern union __intdbl _C_dbl_eps,
                        _C_dbl_min,
                        _C_dbl_max;


#define FLT_RADIX             2
#define FLT_ROUNDS            1              /* rounds to nearest     */

#define FLT_DIG               6
#define FLT_MANT_DIG          24
#define FLT_MAX_10_EXP        38
#define FLT_MAX_EXP           128
#define FLT_MIN_10_EXP        (-37)
#define FLT_MIN_EXP           (-125)

#define FLT_EPSILON           _C_flt_eps.f
#define FLT_MIN               _C_flt_min.f
#define FLT_MAX               _C_flt_max.f

#define DBL_DIG               15
#define DBL_MANT_DIG          53
#define DBL_MAX_10_EXP        308
#define DBL_MAX_EXP           1024
#define DBL_MIN_10_EXP        (-307)
#define DBL_MIN_EXP           (-1021)

#define DBL_EPSILON           _C_dbl_eps.d
#define DBL_MIN               _C_dbl_min.d
#define DBL_MAX               _C_dbl_max.d

#define LDBL_DIG              DBL_DIG
#define LDBL_MANT_DIG         DBL_MANT_DIG
#define LDBL_MAX_10_EXP       DBL_MAX_10_EXP
#define LDBL_MAX_EXP          DBL_MAX_EXP
#define LDBL_MIN_10_EXP       DBL_MIN_10_EXP
#define LDBL_MIN_EXP          DBL_MIN_EXP

#define LDBL_EPSILON          DBL_EPSILON
#define LDBL_MIN              DBL_MIN
#define LDBL_MAX              DBL_MAX

#ifdef __cplusplus
 #pragma info(restore)
 }
#else
 #pragma checkout(resume)
#endif

#endif /* #ifndef __float_h                                           */
