#ifndef   __xxcvt_h
  #define __xxcvt_h

#ifdef __cplusplus
 extern "C" {
 #pragma info(none)
#else
 #pragma nomargins nosequence
 #pragma checkout(suspend)
#endif

/* ================================================================== */
/*  Header File Name: xxcvt.h                                        */
/*                                                                    */
/*  This header contains the declarations used by QXX data conversion */
/*  functions.                                                        */
/*                                                                    */
/* Licensed Materials-Property of IBM                                */
/*                                                                   */
/* 5716-CX2, 5716-CX4, 5716-CX5, 5722-SS1                            */
/* (C) Copyright IBM Corp. 1991,2001                                 */
/*                                                                   */
/* US Government Users Restricted Rights -                           */
/* Use, duplication or disclosure restricted                         */
/* by GSA ADP Schedule Contract with IBM Corp.                       */
/* ================================================================== */
#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(P128)      /* @B1A*/
#endif                       /* @B1A*/

  #if defined (__EXTENDED__)

    void   QXXDTOP(unsigned char *, int, int, double);
    void   QXXDTOZ(unsigned char *, int, int, double);
    void   QXXITOP(unsigned char *, int, int, int);
    void   QXXITOZ(unsigned char *, int, int, int);
    int    QXXPTOI(unsigned char *, int, int);
    double QXXPTOD(unsigned char *, int, int);
    double QXXZTOD(unsigned char *, int, int);
    int    QXXZTOI(unsigned char *, int, int);

  #endif /* #if defined (__EXTENDED__)                                */
#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(pop)       /* @B1A*/
#endif                       /* @B1A*/

#ifdef __cplusplus
 #pragma info(restore)
 }
#else
 #pragma checkout(resume)
#endif

#endif /* #ifndef __xxcvt_h */
