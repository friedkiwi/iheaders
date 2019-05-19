#ifndef   __decimal_h
  #define __decimal_h

#ifdef __cplusplus
  #ifndef   __bcd_h
    #include <bcd.h>
  #endif
#else

#pragma nomargins nosequence
#pragma checkout(suspend)

/* ================================================================= */
/*  Header File Name: decimal.h                                      */
/*                                                                   */
/*  This header contains definitions relating to decimal values.     */
/*                                                                   */
/* Licensed Materials-Property of IBM                                */
/*                                                                   */
/* 5716-CX2, 5716-CX4,5722-SS1                                       */
/* (C) Copyright IBM Corp. 1991,2004                                 */
/*                                                                   */
/* US Government Users Restricted Rights -                           */
/* Use, duplication or disclosure restricted                         */
/* by GSA ADP Schedule Contract with IBM Corp.                       */
/* ================================================================= */

#ifndef __decimal
  #define __decimal 1
#endif

#if defined (__EXTENDED__)

  #define decimal           _Decimal
  #define digitsof          __digitsof
  #define precisionof       __precisionof

  #define DEC_MIN          -9999999999999999999999999999999D
  #define DEC_MAX           9999999999999999999999999999999D
  #define DEC_EPSILON      .0000000000000000000000000000001D
  #define DEC_DIG           31
  #define DEC_PRECISION     31
  #if (__OS400_TGTVRM__ >= 530)
    #define DEC63_MIN \
    -999999999999999999999999999999999999999999999999999999999999999D
    #define DEC63_MAX \
     999999999999999999999999999999999999999999999999999999999999999D
    #define DEC63_EPSILON \
    .000000000000000000000000000000000000000000000000000000000000001D
    #define DEC63_DIG           63
    #define DEC63_PRECISION     63
  #endif
#endif /* #if defined (__EXTENDED__)                                  */

#pragma checkout(resume)
#endif

#endif       /* #ifndef __decimal_h */
