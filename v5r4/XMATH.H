                    ??=ifndef _XMATH
                      ??=if defined(__MVS__)
                        ??=if defined(__COMPILER_VER__)
                          ??=pragma filetag("IBM-1047")
                        #endif /* defined(__COMPILER_VER__) */
                        #pragma nomargins nosequence
                        #pragma checkout(suspend)
                      #endif /* defined(__MVS__) */
                      #define _XMATH

#if (__OS400_TGTVRM__ >= 510)
#  if defined(__LLP64_RTBND__)
#    pragma datamodel(LLP64)
#  else
#    pragma datamodel(P128)
#  endif
#if !(defined(__MVS__) && defined(_LP64))
   #pragma object_model(compat)
#endif
#endif


   /********************************************************************/
   /*  <xmath.h> header file                                           */
   /*                                                                  */
   /*  IBM VisualAge C++ Professional, Version 6.0                     */
   /*    Licensed Materials - Property of IBM                          */
   /*                                                                  */
   /*  5801-AAR and Other Materials                                    */
   /*                                                                  */
   /*  (c) Copyright IBM Corp 1991, 2003. All rights reserved.         */
   /*                                                                  */
   /*                                                                  */
   /*  US Government Users Restricted Rights - Use, duplication        */
   /*  or disclosure restricted by GSA ADP Schedule Contract with      */
   /*  IBM Corp.                                                       */
   /*                                                                  */
   /*  Dinkum C++ Library                                              */
   /*  Copyright (c) 1998.  Licensed to IBM Corp. and its suppliers.   */
   /*                                                                  */
   /********************************************************************/

#include <errno.h>
#include <math.h>
#include <stddef.h>
#ifndef _YMATH
 #include <ymath.h>
#endif
_STD_BEGIN

#if __THW_LITTLE_ENDIAN__
#  define _D0   3       /* little-endian, doubles */
#  define _D1   2
#  define _D2   1
#  define _D3   0
#else
#  define _D0   0       /* big-endian, doubles */
#  define _D1   1
#  define _D2   2
#  define _D3   3
#endif

#if __THW_LITTLE_ENDIAN__
#  define _F0   1       /* little-endian order */
#  define _F1   0
#else
#  define _F0   0       /* big-endian order */
#  define _F1   1
#endif

#if __MVS__ && !__BFP__
                  /* HEX double properties */
  #define _DBIAS  0x3f
  #define _DOFF   8
  #define _DFRAC  ((1 << _DOFF) - 1)
  #define _DMASK  (0x7fff & ~_DFRAC)
  #define _DMAX   ((1 << (14 - _DOFF)) - 1) * 4
  #define _DSIGN  0x8000
  #define DSIGN(x)        (((unsigned short *)&(x))[_D0] & _DSIGN)
  #define HUGE_EXP        (int)(_DMAX * 900L / 1000)
  #define HUGE_RAD        3.37e9  /* ~pi * 2^30 */
  #define SAFE_EXP        (_DMAX >> 1)

                  /* HEX float properties */
  #define _FBIAS  0x3f
  #define _FOFF   8
  #define _FRND   1
  #define _FFRAC  ((1 << _FOFF) - 1)
  #define _FMASK  (0x7fff & ~_FFRAC)
  #define _FMAX   ((1 << (14 - _FOFF)) - 1) * 4
  #define _FSIGN  0x8000
  #define FSIGN(x)        (((unsigned short *)&(x))[_D0] & _FSIGN)
  #define FHUGE_EXP       (int)(_FMAX * 900L / 1000)
  #define FHUGE_RAD       3.37e9  /* ~pi * 2^30 */
  #define FSAFE_EXP       (_FMAX >> 1)
#else
                /* FLOAT PROPERTIES */
  #define _DBIAS  0x3fe
  #define _DOFF   4
  #define _FBIAS  0x7e
  #define _FOFF   7
  #define _FRND   1

  /* Define _DLONG for 80 bit long double support. */
  #if __TOS_OS2__ || __TOS_WIN__ || __ia64
  #  define _DLONG        1
  #endif

  #define _LBIAS  0x3fe
  #define _LOFF   4
                  /* IEEE 754 double properties */
  #define _DFRAC  ((1 << _DOFF) - 1)
  #define _DMASK  (0x7fff & ~_DFRAC)
  #define _DMAX   ((1 << (15 - _DOFF)) - 1)
  #define _DSIGN  0x8000
  #define DSIGN(x)        (((unsigned short *)&(x))[_D0] & _DSIGN)
  #define HUGE_EXP        (int)(_DMAX * 900L / 1000)
  #define HUGE_RAD        3.37e9  /* ~pi * 2^30 */
  #define SAFE_EXP        (_DMAX >> 1)
                  /* IEEE 754 float properties */
  #define _FFRAC  ((1 << _FOFF) - 1)
  #define _FMASK  (0x7fff & ~_FFRAC)
  #define _FMAX   ((1 << (15 - _FOFF)) - 1)
  #define _FSIGN  0x8000
  #define FSIGN(x)        (((unsigned short *)&(x))[_F0] & _FSIGN)
  #define FHUGE_EXP       (int)(_FMAX * 900L / 1000)
  #define FHUGE_RAD       3.37e9  /* ~pi * 2^30 */
  #define FSAFE_EXP       (_FMAX >> 1)

                  /* IEEE 754 long double properties */
  #define _LFRAC  (-1)
  #define _LMASK  0x7fff
  #define _LMAX   0x7fff
  #define _LSIGN  0x8000
  #define LSIGN(x)        (((unsigned short *)&(x))[_L0] & _LSIGN)
  #define LHUGE_EXP       (int)(_LMAX * 900L / 1000)
  #define LHUGE_RAD       3.37e9  /* ~pi * 2^30 */
  #define LSAFE_EXP       (_LMAX >> 1)
  #define _L0     4       /* little-endian, large long doubles */
  #define _L1     3
  #define _L2     2
  #define _L3     1
  #define _L4     0
#endif
                /* return values for testing functions */
#define FINITE  _FINITE
#define INF             _INFCODE
_C_LIB_DECL
int _UTF32_NAME(_Stoflt)(const char *, char **, long *, int);
                /* double declarations */
double _Atan(double, int);
short _Dint(double *, short);
short _Dnorm(unsigned short *);
short _Dscale(double *, long);
double _Dtento(double, long);
short _Dunscale(short *, double *);
double _Poly(double, const double *, int);
extern const _Dconst _Eps, _Rteps;
extern const double _Xbig;
                /* float declarations */
float _FAtan(float, int);
short _FDint(float *, short);
short _FDnorm(unsigned short *);
short _FDscale(float *, long);
float _FDtento(float, long);
short _FDunscale(short *, float *);
float _FPoly(float, const float *, int);
extern const _Dconst _FEps, _FRteps;
extern const float _FXbig;
                /* long double functions */
long double _LAtan(long double, int);
short _LDint(long double *, short);
short _LDnorm(unsigned short *);
short _LDscale(long double *, long);
long double _LDtento(long double, long);
short _LDunscale(short *, long double *);
long double _LPoly(long double, const long double *, int);
extern const _Dconst _LEps, _LRteps;
extern const long double _LXbig;
_END_C_LIB_DECL
_STD_END

#if (__OS400_TGTVRM__ >= 510)
   #pragma datamodel(pop)
#if !(defined(__MVS__) && defined(_LP64))
   #pragma object_model(pop)
#endif
#endif

/*
 * Copyright (c) 1994 by P.J. Plauger.  ALL RIGHTS RESERVED.
 * Consult your license regarding permissions and restrictions.
V2.3:0081 */
                    #if defined(__MVS__)
                      #pragma checkout(resume)
                    #endif /* defined(__MVS__) */
                    ??=endif /* _XMATH */
