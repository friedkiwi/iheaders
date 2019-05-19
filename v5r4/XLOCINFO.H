                    ??=ifndef _XLOCINFO
                      ??=if defined(__MVS__)
                        ??=if defined(__COMPILER_VER__)
                          ??=pragma filetag("IBM-1047")
                        #endif /* defined(__COMPILER_VER__) */
                        #pragma nomargins nosequence
                        #pragma checkout(suspend)
                      #endif /* defined(__MVS__) */
                      #define _XLOCINFO_H

// xlocinfo.h internal header

#pragma info(none)
#ifndef __CHKHDR__
#  pragma report(level, E)
#endif
#pragma info(restore)

#if defined(__MVS__)
#  if (__IBMCPP__ < 41020)
#    error\
     This file to be used only with IBM z/OS C++ V1R2 and later compilers
#  endif /* __IBMCPP__ < 41020 */

#  if (__TARGET_LIB__ < 0x41020000)
#    error\
     This file to be used only when the target is z/OS V1R2 or a later release
#  endif /* __TARGET_LIB__ < 0x41020000 */

#else
#  if __IBMCPP__ < 400
#    error\
     This file to be used only with IBM VisualAge C++ v4 and later compilers
#  endif /* __IBMCPP__ < 400 */
#endif /* defined(__MVS__) */

#if (__OS400_TGTVRM__ >= 510)
#  if defined(__LLP64_RTBND__)
#    pragma datamodel(LLP64)
#  else
#    pragma datamodel(P128)
#  endif
#endif

#if !(defined(__MVS__) && defined(_LP64))
#pragma object_model(compat)
#endif
#pragma namemangling(ansi)

   /********************************************************************/
   /*  <xlocinfo.h> header file                                        */
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

#include <ctype.h>
#include <locale.h>
#include <wchar.h>
#ifndef _YVALS
#include <yvals.h>
#endif

#if defined(__IBMCPP__) && !defined(__ia64)
  #if defined (__TOS_AIX__)
    #if !defined(_AIX43) && !defined(_AIX50)
      #include <ansic_aix.h>
    #endif
    #if (_XOPEN_SOURCE == 500)
      #include <sys/localedef.h>
    #endif
  #elif !defined(__OS400__)
    #include <localdef.h>
  #endif
#endif

                /* SUPPLEMENTAL CTYPE MACROS & DECLARATIONS */
#define _XA             0x100   /* extra alphabetic */
#define _XS             0x200   /* extra space */
#define _BB             0x20    /* BEL, BS, etc. */
#define _CN             0x08    /* CR, FF, HT, NL, VT */
#define _DI             0x02    /* '0'-'9' */
#define _LO             0x40    /* 'a'-'z' */
#define _PU             0x10    /* punctuation */
#define _SP             0x04    /* space */
#define _UP             0x80    /* 'A'-'Z' */
#define _XD             0x01    /* '0'-'9', 'A'-'F', 'a'-'f' */

                /* SUPPLEMENTAL LOCALE MACROS AND DECLARATIONS */
#define _X_ALL                  LC_ALL
#define _X_COLLATE              LC_COLLATE      /* or [0,] 1, 2, 3, etc. */
#define _X_CTYPE                LC_CTYPE
#define _X_MONETARY             LC_MONETARY
#define _X_NUMERIC              LC_NUMERIC
#define _X_TIME                 LC_TIME
#define _X_MAX                  LC_MESSAGES     /* highest real category */
#define _X_MESSAGE              6
#define _NCAT                   (_X_MESSAGE + 1)        /* maximum + 1 */

#define _CATMASK(n)     (1 << (n))
#define _M_COLLATE      _CATMASK(_X_COLLATE)
#define _M_CTYPE        _CATMASK(_X_CTYPE)
#define _M_MONETARY     _CATMASK(_X_MONETARY)
#define _M_NUMERIC      _CATMASK(_X_NUMERIC)
#define _M_TIME         _CATMASK(_X_TIME)
#define _M_MESSAGE      _CATMASK(_X_MESSAGE)
#define _M_ALL          (_CATMASK(_NCAT) - 1)

#if defined(__TOS_AIX__) && !defined(__ia64)
 #if !defined(__mbstate_t) || __ORDERED__
  #define __mbstate_t
  #if !defined(_AIX43) && !defined(_AIX50)
   typedef short mbstate_t;
  #endif /* _AIX43, _AIX50 */
 #endif
#endif

#ifdef __OS400__
class _LC_collate_t;
class _LC_ctype_t;
class _LC_charmap_t;
#endif

typedef struct _Collvec {

#ifdef _LOCALE_CACHE_
        __xlocale_ptr _Ptr;
#else
        _LC_COLLATE_T *_Ptr;
#endif
        } _Collvec;

typedef struct _Ctypevec {

#ifdef _LOCALE_CACHE_
        __xlocale_ptr _Ptr;
#else
        _LC_CTYPE_T *_Ptr;
#endif
        const short *_Table;
        int _Delfl;

        } _Ctypevec;

typedef struct _Cvtvec {

#ifdef _LOCALE_CACHE_
        __xlocale_ptr _Ptr;
#else
        _LC_CHARMAP_T *_Ptr;
#endif

        } _Cvtvec;

                /* FUNCTION DECLARATIONS */
#if __OS400_TGTVRM__ >= 530
_Collvec _Getcoll(const char *);
_Ctypevec _UTF32_NAME(_Getctype)(const char *);
_Cvtvec _Getcvt(const char *);
void *_Gettnames(const char *);
lconv *_Getmonpunct(const char *);
lconv *_Getnumpunct(const char *);
#endif

extern "C" {
        _Collvec _Getcoll();
        _Ctypevec _UTF32_NAME(_Getctype)();
        _Cvtvec _Getcvt();
        char *_Getdays();
        char *_Getmonths();
        void *_Gettnames();
        int _UTF32_NAME(_Mbrtowc)(wchar_t *, const char *, size_t,
                mbstate_t *, const _Cvtvec *);
        extern float _UTF32_NAME(_Stof)(const char *, char **, long);
        extern double _UTF32_NAME(_Stod)(const char *, char **, long);
        extern long double _UTF32_NAME(_Stold)(const char *, char **, long);
        int _Strcoll(const char *, const char *,
                const char *, const char *, const _Collvec *);
        size_t _UTF32_NAME(_Strftime)(char *, size_t, const char *,
                const struct tm *, void *);
        size_t _Strxfrm(char *, char *,
                const char *, const char *, const _Collvec *);
        int _UTF32_NAME(_Tolower)(int, const _Ctypevec *);
        int _UTF32_NAME(_Toupper)(int, const _Ctypevec *);
        int _UTF32_NAME(_Towlower)(int, const _Ctypevec *);
        int _UTF32_NAME(_Towupper)(int, const _Ctypevec *);
        int _UTF32_NAME(_Wcrtomb)(char *, wchar_t, mbstate_t *,
                const _Cvtvec *);
        int _Wcscoll(const wchar_t *, const wchar_t *,
                const wchar_t *, const wchar_t *, const _Collvec *);
        size_t _Wcsxfrm(wchar_t *, wchar_t *,
                const wchar_t *, const wchar_t *, const _Collvec *);
}

#pragma namemangling()
#if !(defined(__MVS__) && defined(_LP64))
#pragma object_model(pop)
#endif

#if (__OS400_TGTVRM__ >= 510)
   #pragma datamodel(pop)
#endif

#pragma info(none)
#ifndef __CHKHDR__
#  pragma report(pop)
#endif
#pragma info(restore)

/*
 * Copyright (c) 1995 by P.J. Plauger.  ALL RIGHTS RESERVED.
 * Copyright (c) 1997 by IBM Corp.  ALL RIGHTS RESERVED.
 * Consult your license regarding permissions and restrictions.
V2.3:0081 */

                    #if defined(__MVS__)
                      #pragma checkout(resume)
                    #endif /* defined(__MVS__) */
                    ??=endif /* _XLOCINFO_H */
