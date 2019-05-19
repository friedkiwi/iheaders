#ifndef __monetary_h
 #define __monetary_h

#ifdef __cplusplus
 extern "C" {
 #pragma info(none)
#else
 #pragma nomargins nosequence
 #pragma checkout(suspend)
#endif

/* ================================================================= */
/* Header File Name: monetary.h                                      */
/*                                                                   */
/* This header contains the declarations used by the C monetary      */
/* string routines.                                                  */
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
#ifdef __POSIX_LOCALE__

   #pragma datamodel(P128)

   #ifndef __size_t
     #define __size_t
      typedef unsigned int size_t;
   #endif

   #ifndef __ssize_t
     #define __ssize_t
      typedef unsigned int ssize_t;
   #endif

   ssize_t strfmon(char *, size_t, const char *, ...);

   #if defined(__CCSID_NEUTRAL__) || defined(__UTF32__)
     #pragma map(strfmon, "_C_NEU_strfmon")
   #endif

   #if defined(__UTF32__) && defined(__EXTENDED__)
     #ifndef   __wchar_t
       #define __wchar_t
       #ifdef __UTF32__
         typedef unsigned int wchar_t;
       #else
         typedef unsigned short wchar_t;
       #endif
     #endif

     ssize_t wcsfmon(wchar_t *, size_t, const wchar_t *, ...);
     #pragma map(wcsfmon, "_C_UTF_wcsfmon")
   #endif /*defined(__UTF32__) && defined(__EXTENDED__)*/

   #pragma datamodel(pop)

#endif    /* ifdef __POSIX_LOCALE__ */

#ifdef __cplusplus
 #pragma info(restore)
 }
#else
 #pragma checkout(resume)
#endif

#endif   /* ifndef __monetary_h */
