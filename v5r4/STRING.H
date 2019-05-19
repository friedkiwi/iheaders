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
#ifndef   __string_h
  #define __string_h

#ifdef __cplusplus
 extern "C" {
 #pragma info(none)
#else
 #pragma nomargins nosequence
 #pragma checkout(suspend)
#endif

/* ================================================================= */
/* Header File Name: string.h                                        */
/*                                                                   */
/* This header contains the declarations used by the C character     */
/* manipulation routines.                                            */
/*                                                                   */
/* ================================================================= */

  #pragma datamodel(P128)

  #ifndef   __size_t
    #define __size_t
    typedef unsigned int size_t;
  #endif

  #ifndef   NULL
    #ifdef __cplusplus
      #define NULL 0
    #else
      #define NULL ((void *)0)
    #endif
  #endif

  int      strcoll   ( const char *, const char * );
  size_t   strxfrm   ( char *, const char *, size_t );
  char    *strerror  ( int );
  size_t   strcspn   ( const char *, const char * );
  size_t   strspn    ( const char *, const char * );
#if defined(__cplusplus) && defined(__cplusplus98__interface__)
  char    *_C_strpbrk( const char *, const char * );
  char    *_C_strchr ( const char *, int );
  char    *_C_strrchr( const char *, int );
  char    *_C_strstr ( const char *, const char * );

extern "C++" {
inline const char *strpbrk(const char *__s1, const char *__s2) {
  return (const char *)_C_strpbrk(__s1, __s2);
}
inline char *strpbrk(char *__s1, const char *__s2) {
  return _C_strpbrk((const char *)__s1, __s2);
}
#ifdef __LLP64_IFC__
inline const char *strpbrk(const char * __ptr64 __s1,
                           const char *__s2) {
  return (const char *)_C_strpbrk(__s1, __s2);
}
inline char *strpbrk(char * __ptr64 __s1, const char *__s2) {
  return _C_strpbrk((const char *)__s1, __s2);
}
#endif
inline const char *strchr(const char *__s1, int __c) {
  return (const char *)_C_strchr(__s1, __c);
}
inline char *strchr(char *__s1, int __c) {
  return _C_strchr((const char *)__s1, __c);
}
#ifdef __LLP64_IFC__
inline const char *strchr(const char * __ptr64 __s1, int __c) {
  return (const char *)_C_strchr(__s1, __c);
}
inline char *strchr(char * __ptr64 __s1, int __c) {
  return _C_strchr((const char *)__s1, __c);
}
#endif
inline const char *strrchr(const char *__s1, int __c) {
  return (const char *)_C_strrchr(__s1, __c);
}
inline char *strrchr(char *__s1, int __c) {
  return _C_strrchr((const char *)__s1, __c);
}
#ifdef __LLP64_IFC__
inline const char *strrchr(const char * __ptr64 __s1, int __c) {
  return (const char *)_C_strrchr(__s1, __c);
}
inline char *strrchr(char * __ptr64 __s1, int __c) {
  return _C_strrchr((const char *)__s1, __c);
}
#endif
inline const char *strstr(const char *__s1, const char *__s2) {
  return (const char *)_C_strstr(__s1, __s2);
}
inline char *strstr(char *__s1, const char *__s2) {
  return _C_strstr((const char *)__s1, __s2);
}
#ifdef __LLP64_IFC__
inline const char *strstr(const char * __ptr64 __s1,
                          const char *__s2) {
  return (const char *)_C_strstr(__s1, __s2);
}
inline char *strstr(char * __ptr64 __s1, const char *__s2) {
  return _C_strstr((const char *)__s1, __s2);
}
#endif
} /* End extern "C++" */

#else
  char    *strpbrk   ( const char *, const char * );
  char    *strchr    ( const char *, int );
  char    *strrchr   ( const char *, int );
  char    *strstr    ( const char *, const char * );
#endif

  #ifdef __POSIX_LOCALE__
    #ifdef __UTF32__
      #pragma map (strcoll, "_C_UTF_strcoll")
      #pragma map (strxfrm, "_C_UTF_strxfrm")
    #else
      #pragma map (strcoll, "_C_PSX_strcoll")
      #pragma map (strxfrm, "_C_PSX_strxfrm")
    #endif
  #endif

  #if (defined(__UTF32__) || defined(__CCSID_NEUTRAL__))
    #pragma map(strerror, "_C_NEU_strerror")

    #pragma map(strcspn, "_C_NEU_strcspn" )
    #pragma map(strspn, "_C_NEU_strspn" )
    #if defined(__cplusplus) && \
        defined(__cplusplus98__interface__)
      #pragma map(_C_strpbrk, "_C_NEU_strpbrk" )
      #pragma map(_C_strchr, "_C_NEU_strchr" )
      #pragma map(_C_strrchr, "_C_NEU_strrchr" )
      #pragma map(_C_strstr, "strstr" )
    #else
      #pragma map(strpbrk, "_C_NEU_strpbrk" )
      #pragma map(strchr, "_C_NEU_strchr" )
      #pragma map(strrchr, "_C_NEU_strrchr" )
    #endif
  #else  /* Not UTF32 or neutral  */

  #if defined(__POSIX_LOCALE__) && (__OS400_TGTVRM__ >= 530)
    #pragma map(strcspn, "_C_PSX_strcspn" )
    #if defined(__cplusplus) && \
        defined(__cplusplus98__interface__)
      #pragma map(_C_strpbrk, "_C_PSX_strpbrk" )
      #pragma map(_C_strchr, "_C_PSX_strchr" )
      #pragma map(_C_strrchr, "_C_PSX_strrchr" )
      #pragma map(_C_strstr, "strstr" )
    #else
      #pragma map(strpbrk, "_C_PSX_strpbrk" )
      #pragma map(strchr, "_C_PSX_strchr" )
      #pragma map(strrchr, "_C_PSX_strrchr" )
    #endif
    #pragma map(strspn, "_C_PSX_strspn" )
  #elif defined(__cplusplus) && \
        defined(__cplusplus98__interface__)
    #pragma map(_C_strpbrk, "strpbrk" )
    #pragma map(_C_strchr,  "strchr" )
    #pragma map(_C_strrchr, "strrchr" )
    #pragma map(_C_strstr,  "strstr" )
  #endif
  #endif  /* not UTF32 or neutral  */

  #if defined(__LLP64_IFC__) && (__OS400_TGTVRM__ >= 530)
    char  *__ptr64 strtok    ( char *__ptr64, const char *__ptr64);
    char  *__ptr64 strtok_r  ( char *__ptr64, const char *__ptr64,
                               char *__ptr64 *__ptr64 );
    #if (defined(__UTF32__) || defined(__CCSID_NEUTRAL__))
       #pragma map(strtok,   "_C_NEU_strtok_ts64" )
       #pragma map(strtok_r, "_C_NEU_strtok_r_ts64" )
    #elif __POSIX_LOCALE__
       #pragma map(strtok,   "_C_PSX_strtok_ts64" )
       #pragma map(strtok_r, "_C_PSX_strtok_r_ts64" )
    #else
       #pragma map(strtok,   "_C_strtok_ts64" )
       #pragma map(strtok_r, "_C_strtok_r_ts64" )
    #endif
  #elif defined(__LLP64_IFC__)  /* Before v5r3 */
    char    *strtok    ( char *, const char * );
    char  *__ptr64 strtok_r  ( char *__ptr64, const char *__ptr64,
                               char *__ptr64 *__ptr64 );

    #pragma map(strtok_r, "_C_strtok_r_ts64" )
  #else
    char    *strtok    ( char *, const char * );
    char    *strtok_r    ( char *, const char *,char**);

    #if (defined(__UTF32__) || defined(__CCSID_NEUTRAL__))
       #pragma map(strtok,   "_C_NEU_strtok" )
       #pragma map(strtok_r, "_C_NEU_strtok_r" )
    #elif defined(__POSIX_LOCALE__) && (__OS400_TGTVRM__ >= 530)
       #pragma map(strtok,   "_C_PSX_strtok" )
       #pragma map(strtok_r, "_C_PSX_strtok_r" )
    #endif
  #endif

  #ifndef __cplusplus_nomacro__
    #if defined(__cplusplus) && \
        defined(__cplusplus98__interface__)
    void    *_C_memchr ( const void *, int, size_t );
    #pragma map(_C_memchr, "memchr")

extern "C++" {
inline const void *memchr(const void *ptr, int c, size_t sz) {
  return (const void *)_C_memchr(ptr, c, sz);
}
inline void *memchr( void *ptr, int c, size_t sz) {
  return _C_memchr((const void *)ptr, c, sz);
}
#ifdef __LLP64_IFC__
inline const void *memchr(const void * __ptr64 ptr,
                          int c, size_t sz) {
  return (const void *)_C_memchr(ptr, c, sz);
}
inline void *memchr( void * __ptr64 ptr, int c, size_t sz) {
  return _C_memchr((const void *)ptr, c, sz);
}
#endif
} /* End extern "C++" */

    #else
    void    *memchr    ( const void *, int, size_t );
    #endif
    int      memcmp    ( const void *, const void *, size_t );
    void    *memcpy    ( void *, const void *, size_t );
    void    *memmove   ( void *, const void *, size_t );
    void    *memset    ( void *, int, size_t );
    char    *strcat    ( char *, const char * );
    int      strcmp    ( const char *, const char * );
    char    *strcpy    ( char *, const char * );
    size_t   strlen    ( const char * );
    int      strncmp   ( const char *, const char *, size_t );
    char    *strncpy   ( char *, const char *, size_t );
    char    *strncat   ( char *, const char *, size_t );
  #endif

  #if defined (__EXTENDED__) && !defined(__ANSI_NAMES_ONLY__)
    #if (__OS400_TGTVRM__ >= 530 && defined(__cplusplus__strings__)) || \
            defined(__cplusplus)
        int   memicmp(void *, void *, unsigned int);
        int   strcmpi(const char *, const char *);
        char *strdup(const char *);
        int   stricmp(const char *, const char *);
        int   strnicmp(const char *, const char *, int);
        char *strnset(char *, int c, size_t);
        char *strset(char *, int c);
        #pragma map(strdup, "__strdup")
        #pragma map(strnset, "__strnset")
        #pragma map(strset, "__strset")

      #if defined(__POSIX_LOCALE__) && (__OS400_TGTVRM__ >= 530)
        #if defined(__UTF32__) || defined(__CCSID_NEUTRAL__)
          #pragma map(memicmp, "_C_NEU_memicmp")
          #pragma map(strcmpi, "_C_NEU_strcasecmp")
          #pragma map(stricmp, "_C_NEU_strcasecmp")
          #pragma map(strnicmp, "_C_NEU_strncasecmp")
        #else
          #pragma map(memicmp, "_C_PSX_memicmp")
          #pragma map(strcmpi, "strcasecmp")
          #pragma map(stricmp, "strcasecmp")
          #pragma map(strnicmp, "strncasecmp")
        #endif
      #else /* not posix  */
        #pragma map(memicmp, "__memicmp")
        #pragma map(strcmpi, "__strcmpi")
        #pragma map(stricmp, "__stricmp")
        #pragma map(strnicmp, "__strnicmp")
      #endif
    #endif
  #endif        /* Extended  */
#ifdef __cplusplus
  extern "builtin" {
#else
  #pragma linkage( __memcmp, builtin )
  #pragma linkage( __memcpy, builtin )
  #pragma linkage( __memset, builtin )
  #pragma linkage( __strcat, builtin )
  #pragma linkage( __strcmp, builtin )
  #pragma linkage( __strcpy, builtin )
  #pragma linkage( __strlen, builtin )
  #pragma linkage( __strncat, builtin )
  #pragma linkage( _MEMCHR,  builtin )
  #pragma linkage( _MEMMOVE, builtin )
  #pragma linkage( _STRCHRNULL, builtin )
  #pragma linkage( _STRNCMPNULL, builtin )
  #pragma linkage( _STRNCPYNULLPAD, builtin )
#endif

  int      __memcmp  ( const void *, const void *, size_t );
  void    *__memcpy  ( void *, const void *, size_t );
  void    *__memset  ( void *, int, size_t );
  char    *__strcat  ( char *, const char * );
  int      __strcmp  ( const char *, const char * );
  char    *__strcpy  ( char *, const char * );
  size_t   __strlen  ( const char * );
  char    *__strncat ( char *, const char *, size_t );
  void    *_MEMCHR         ( const void *, int, size_t );
  void    *_MEMMOVE        ( void *, const void *, size_t );
  char    *_STRCHRNULL     ( const char *, int );
  int      _STRNCMPNULL    ( const char *, const char *, size_t );
  char    *_STRNCPYNULLPAD ( char *, const char *, size_t );

#ifdef __cplusplus
  }
#endif

  #ifndef __cplusplus_nomacro__

    #define memcmp(__s2,__s1,__n)  (__memcmp((__s2),(__s1),(__n)))
    #define memcpy(__s2,__s1,__n)  (__memcpy((__s2),(__s1),(__n)))
    #define memset(__s2,__c,__n)   (__memset((__s2),(__c),(__n)))
    #define strcat(__s1,__s)       (__strcat((__s1),(__s)))
    #define strcmp(__s1,__s)       (__strcmp((__s1),(__s)))
    #define strcpy(__s1,__s)       (__strcpy((__s1),(__s)))
    #define strlen(__s)            (__strlen(__s))

    #define memchr(__s2,__c,__n)   (_MEMCHR((__s2),(__c),(__n)))
    #define memmove(__s2,__s1,__n) (_MEMMOVE((__s2),(__s1),(__n)))
    #define strncmp(__s2,__s1,__n) (_STRNCMPNULL((__s2),(__s1),(__n)))
    #define strncpy(__s2,__s1,__n) (_STRNCPYNULLPAD((__s2),(__s1),(__n)))
    #define strncat(__s1,__s,__n)  (__strncat((__s1),(__s),(__n)))

  #else

    inline int memcmp(const void *__s2, const void *__s1, size_t __n) {
      return __memcmp(__s2,__s1,__n);
    }

    inline void *memcpy(void *__s2, const void *__s1, size_t __n) {
      return __memcpy(__s2,__s1,__n);
    }

    inline void *memset(void *__s2, int __c, size_t __n) {
      return __memset(__s2,__c,__n) ;
    }

    inline char *strcat(char *__s1, const char *__s) {
      return __strcat(__s1,__s);
    }

    inline int strcmp(const char *__s1, const char *__s) {
      return __strcmp(__s1,__s);
    }

    inline char *strcpy(char *__s1, const char *__s) {
      return __strcpy(__s1,__s);
    }

    inline size_t strlen(const char *__s) {
      return __strlen(__s);
    }
#if defined(__cplusplus) && defined(__cplusplus98__interface__)

extern "C++" {
inline const void *memchr(const void *__s2,
                          int __c, size_t __n) {
  return (const void *)_MEMCHR(__s2,__c,__n);
}

inline void *memchr(void *__s2, int __c, size_t __n) {
  return _MEMCHR((const void *)__s2,__c,__n);
}
#ifdef __LLP64_IFC__
inline const void *memchr(const void * __ptr64 __s2,
                          int __c, size_t __n) {
  return (const void *)_MEMCHR(__s2,__c,__n);
}

inline void *memchr(void * __ptr64 __s2, int __c, size_t __n) {
  return _MEMCHR((const void *)__s2,__c,__n);
}
#endif
} /* End extern "C++" */

#else

    inline void *memchr(const void *__s2, int __c, size_t __n) {
      return _MEMCHR(__s2,__c,__n);
    }
#endif
    inline void *memmove(void *__s2, const void *__s1, size_t __n) {
      return _MEMMOVE(__s2,__s1,__n);
    }

    inline int strncmp(const char *__s2, const char *__s1, size_t __n) {
      return _STRNCMPNULL(__s2,__s1,__n);
    }

    inline char *strncpy(char *__s2, const char *__s1, size_t __n) {
      return _STRNCPYNULLPAD(__s2,__s1,__n);
    }

    inline char *strncat(char *__s1, const char *__s, size_t __n) {
      return __strncat(__s1,__s,__n);
    }

  #endif /* ifndef __cplusplus_nomacro__ */

#pragma datamodel(pop)

#ifdef __cplusplus
 #pragma info(restore)
 }
#else
 #pragma checkout(resume)
#endif

#endif /* #ifndef __string_h */
