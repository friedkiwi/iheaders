                    ??=ifndef _YMATH
                      ??=if defined(__MVS__)
                        ??=if defined(__COMPILER_VER__)
                          ??=pragma filetag("IBM-1047")
                        #endif /* defined(__COMPILER_VER__) */
                        #pragma nomargins nosequence
                        #pragma checkout(suspend)
                      #endif /* defined(__MVS__) */
                      #define _YMATH

/* ymath.h internal header */

#if (__OS400_TGTVRM__ >= 510)
#  if defined(__LLP64_RTBND__)
#    pragma datamodel(LLP64)
#  else
#    pragma datamodel(P128)
#  endif
#endif

#if !defined(__MVS__) || defined(__cplusplus)
#pragma info(none)
#ifndef __CHKHDR__
#  pragma report(level, E)
#endif
#pragma info(restore)
#endif /* __MVS__ */

   /********************************************************************/
   /*  <ymath.h> header file                                           */
   /*                                                                  */
   /*  IBM VisualAge C++ Professional, Version 6.0                     */
   /*    Licensed Materials - Property of IBM                          */
   /*                                                                  */
   /*  5801-AAR and Other Materials                                    */
   /*  5694-A01                                                        */
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

#include <math.h>
#ifndef _YVALS
#include <yvals.h>
#endif

                /* MACROS */
#define _FINITE         -1
#define _INFCODE        1
#define _NANCODE        2
                /* TYPE DEFINITIONS */
typedef union {
        unsigned short _W[5];
        float _F;
        double _D;
        long double _L;
        } _Dconst;
_C_LIB_DECL
                /* double DECLARATIONS */
double _Cosh(double, double);
short _Dtest(double *);
short _Exp(double *, double, short);
double _Log(double, int);
double _Sin(double, unsigned int);
double _Sinh(double, double);
extern const _Dconst _Denorm, _Hugeval, _Inf,
        _Nan, _Snan;
                /* float DECLARATIONS */
float _FCosh(float, float);
short _FDtest(float *);
short _FExp(float *, float, short);
float _FLog(float, int);
float _FSin(float, unsigned int);
float _FSinh(float, float);
extern const _Dconst _FDenorm, _FInf, _FNan, _FSnan;
                /* long double DECLARATIONS */
long double _LCosh(long double, long double);
short _LDtest(long double *);
short _LExp(long double *, long double, short);
long double _LLog(long double, int);
long double _LSin(long double, unsigned int);
long double _LSinh(long double, long double);
extern const _Dconst _LDenorm, _LInf, _LNan, _LSnan;
_END_C_LIB_DECL

#if (__OS400_TGTVRM__ >= 510)
   #pragma datamodel(pop)
#endif

#if !defined(__MVS__) || defined(__cplusplus)
#pragma info(none)
#ifndef __CHKHDR__
#  pragma report(pop)
#endif
#pragma info(restore)
#endif /* __MVS__ */

/*
 * Copyright (c) 1995-1998 by P.J. Plauger.  ALL RIGHTS RESERVED.
 * Consult your license regarding permissions and restrictions.
V2.3:0081 */

                    #if defined(__MVS__)
                      #pragma checkout(resume)
                    #endif /* defined(__MVS__) */
                    ??=endif /* _YMATH */
