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
/* (C)Copyright IBM Corp.  1991, 2005                                */
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
#ifndef   __math_h
  #define __math_h

#ifdef __cplusplus
 extern "C" {
 #pragma info(none)
#else
 #pragma nomargins nosequence
 #pragma checkout(suspend)
#endif

/* ================================================================= */
/* Header File Name: math.h                                          */
/*                                                                   */
/* This header contains the declarations and definitions used by     */
/* the math library functions.                                       */
/*                                                                   */
/* ================================================================= */

  #pragma datamodel(P128)

  union __huge {
    struct { int i1, i2;} s;
    double   d;
  };
  extern union __huge     _C_huge_val;
#if (__OS400_TGTVRM__ >= 540)
  union __hugef {
    int i1;
    float   f;
  };
  extern union __hugef   _C_huge_valf;
#endif

  /* Language Levels - ANSI, SAA, SAA Level 2 and IBM Extensions      */
  double acos    ( double );
  double asin    ( double );
  double atan    ( double );
  double atan2   ( double, double );
  double ceil    ( double );
  double cos     ( double );
  double cosh    ( double );
  double exp     ( double );
  double floor   ( double );
  double fmod    ( double, double );
  double frexp   ( double, int * );
  double ldexp   ( double, int );
  double log     ( double );
  double log10   ( double );
  double modf    ( double, double * );
  double pow     ( double, double );
  double sin     ( double );
  double sinh    ( double );
  double sqrt    ( double );
  double tan     ( double );
  double tanh    ( double );
  #if (__OS400_TGTVRM__ >= 540)
    double nextafter( double, double );
    double nexttoward( double, long double );
    long double nexttowardl( long double, long double );
    long double nextafterl( long double, long double );
    #pragma map(nexttoward,  "nextafter")
    #pragma map(nexttowardl, "nextafter")
    #pragma map(nextafterl,  "nextafter")
  #endif

  #ifndef __cplusplus_nomacro__
    double fabs    ( double );
  #endif

  /* Language Levels - SAA, SAA  Level 2 and IBM Extensions           */
  #if defined (__SAA__) || defined (__SAA_L2__) || defined (__EXTENDED__)

    double erf   ( double );
    double erfc  ( double );
    double gamma ( double );
    double hypot ( double, double );
    double jn    ( int, double );
    double j0    ( double );
    double j1    ( double );
    double yn    ( int, double );
    double y0    ( double );
    double y1    ( double );

  #endif /* Language Levels - SAA, SAA Level 2 and IBM Extension      */

#ifdef __cplusplus
  extern "builtin" {
#else
  #pragma linkage( __fabs, builtin )
#endif
  double  __fabs          ( double );
#ifdef __cplusplus
  }
#endif

#define HUGE_VAL        _C_huge_val.d
#if (__OS400_TGTVRM__ >= 540)
  #define HUGE_VALF       _C_huge_valf.f
#endif

#ifndef __cplusplus_nomacro__
  #define fabs(__x)  (__fabs((__x)))
#else
inline double fabs(double __x) {
  return ( __fabs(__x) );
}
#endif /* ifndef __cplusplus_nomacro__ */

#pragma datamodel(pop)

#ifdef __cplusplus
 #pragma info(restore)
 }
#else
 #pragma checkout(resume)
#endif

#endif /* #ifndef __math_h */
