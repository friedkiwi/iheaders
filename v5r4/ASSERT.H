#ifdef __cplusplus
 extern "C" {
 #pragma info(none)
#else
 #pragma nomargins nosequence
 #pragma checkout(suspend)
#endif

/* ================================================================= */
/* Header File Name: assert.h                                        */
/*                                                                   */
/* This header contains the declaration of the assert macro.         */
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

#undef assert

#ifndef NDEBUG

  #ifndef __stdio_h
    #include <stdio.h>
  #endif

  #ifndef __stdlib_h
    #include <stdlib.h>
  #endif

  #define assert(__expr) ((__expr) ? ((void)0) :                         \
          (fprintf(stderr,"%s \n",_C_assrt(#__expr,__FILE__,__LINE__)),\
          system("DSPJOB OUTPUT(*PRINT) OPTION(*ALL)"),              \
          abort()))

#else  /* NDEBUG is defined  */
  #define assert(__expr) ((void)0)
#endif

#pragma datamodel(P128)

char   *_C_assrt ( char *, char *, int );
#if (defined(__CCSID_NEUTRAL__) || defined(__UTF32__)) && \
    (! defined(__C_assrt_map))
  #define __C_assrt_map
  #pragma map(_C_assrt, "_C_NEU_assrt")
#endif

#pragma datamodel(pop)

#ifdef __cplusplus
 #pragma info(restore)
 }
#else
 #pragma checkout(resume)
#endif
