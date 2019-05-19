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
/* (C)Copyright IBM Corp.  1991, 2003                                */
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
#ifndef __p_time_h
 #define __p_time_h

#ifdef __cplusplus
 extern "C" {
 #pragma info(none)
#else
 #pragma nomargins nosequence
 #pragma checkout(suspend)
#endif

/* ================================================================= */
/* Header File Name: p_time.h                                        */
/*                                                                   */
/* This header contains the declarations used by the time            */
/* manipulation routines.                                            */
/* ================================================================= */

#ifdef __POSIX_LOCALE__

#ifndef   __time_h
  #include <time.h>
#else

   #pragma datamodel(P128)

   char * strptime ( const char *, const char *, struct tm *);


   #if defined(__UTF32__) || defined(__CCSID_NEUTRAL__)
     #pragma map (asctime,    "_C_NEU_asctime" )
     #pragma map (asctime_r,  "_C_NEU_asctime_r" )
     #pragma map (ctime,      "_C_NEU_ctime" )
     #pragma map (ctime_r,    "_C_NEU_ctime_r" )
     #pragma map (strptime,   "_C_NEU_strptime" )
   #elif defined(__IFS_IO__)
     #pragma map (asctime,    "_C_PSX_IFS_asctime" )
     #pragma map (asctime_r,  "_C_PSX_IFS_asctime_r" )
     #pragma map (ctime,      "_C_PSX_IFS_ctime" )
     #pragma map (ctime_r,    "_C_PSX_IFS_ctime_r" )
   #else
     #pragma map (asctime,    "_C_PSX_asctime" )
     #pragma map (asctime_r,  "_C_PSX_asctime_r" )
     #pragma map (ctime,      "_C_PSX_ctime" )
     #pragma map (ctime_r,    "_C_PSX_ctime_r" )
   #endif

   #if defined(__UTF32__) || defined(__CCSID_NEUTRAL__)
     #pragma map (strftime,   "_C_NEU_strftime" )
   #elif !defined(__IFS_IO__) && (__OS400_TGTVRM__ >= 530)
     #pragma map (strftime,   "_C_PSX_DM_strftime" )
   #else
     #pragma map (strftime,   "_C_PSX_strftime" )
   #endif

   #pragma map (time,       "_C_PSX_time" )

   #if defined(__UTF32__) || defined(__CCSID_NEUTRAL__)
     #pragma map (gmtime,     "_C_NEU_gmtime" )
     #pragma map (localtime,  "_C_NEU_localtime" )
     #pragma map (mktime,     "_C_NEU_mktime" )
     #pragma map (gmtime_r,   "_C_NEU_gmtime_r" )
     #pragma map (localtime_r, "_C_NEU_localtime_r" )
   #else
     #pragma map (gmtime,     "_C_PSX_gmtime" )
     #pragma map (localtime,  "_C_PSX_localtime" )
     #pragma map (mktime,     "_C_PSX_mktime" )
     #pragma map (gmtime_r,   "_C_PSX_gmtime_r" )
     #pragma map (localtime_r, "_C_PSX_localtime_r" )
   #endif

   #pragma datamodel(pop)

#endif /* #ifndef __time_h  */

#endif /* #ifdef __POSIX_LOCALE__ */

#ifdef __cplusplus
 #pragma info(restore)
 }
#else
 #pragma checkout(resume)
#endif

#endif  /* ifndef __p_time_h */
