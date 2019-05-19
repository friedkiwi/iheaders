/* begin_generated_IBM_copyright_prolog                              */
/* This is an automatically generated copyright prolog.              */
/* After initializing,  DO NOT MODIFY OR MOVE                        */
/* ----------------------------------------------------------------- */
/*                                                                   */
/* Product(s):                                                       */
/*     5722-SS1                                                      */
/*                                                                   */
/* (C)Copyright IBM Corp.  2002, 2003                                */
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
#ifndef   __strings_h
  #define __strings_h

#ifdef __cplusplus
 extern "C" {
 #pragma info(none)
#else
 #pragma nomargins nosequence
 #pragma checkout(suspend)
#endif

/* ================================================================= */
/*  Header File Name: strings.h                                      */
/*                                                                   */
/*  This header contains the declarations used by the C character    */
/*    manipulation routines.                                         */
/* ================================================================= */

  #pragma datamodel(P128)

  #ifndef   __size_t
    #define __size_t
    typedef unsigned int size_t;
  #endif

  #if defined (__EXTENDED__) && defined (__POSIX_LOCALE__) && \
      (__OS400_TGTVRM__>=520)
    int strcasecmp(const char *, const char *);
    int strncasecmp(const char *, const char *, size_t);

    #if defined(__UTF32__) || defined(__CCSID_NEUTRAL__)
      #pragma map(strcasecmp, "_C_NEU_strcasecmp")
      #pragma map(strncasecmp, "_C_NEU_strncasecmp")
    #endif
  #endif

  #pragma datamodel(pop)

#ifdef __cplusplus
 #pragma info(restore)
 }
#else
 #pragma checkout(resume)
#endif

#endif /* #ifndef __strings_h                                        */
