                   ??=ifndef _YVALS
                     ??=if defined(__MVS__)
                       ??=ifdef __COMPILER_VER__
                         ??=pragma filetag("IBM-1047")
                       #endif
                       #pragma nomargins nosequence
                       #pragma checkout(suspend)
                     #endif   /* __MVS__ */
                     #define _YVALS 1

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
    #pragma report(level, E)
  #endif
  #pragma info(restore)
#endif /* __MVS__ */

   /********************************************************************/
   /*  <yvals.h> header file                                           */
   /*                                                                  */
   /*  IBM VisualAge C++ Professional, Version 6.0                     */
   /*    Licensed Materials - Property of IBM                          */
   /*                                                                  */
   /*  5801-AAR 5694-A01 and Other Materials                           */
   /*  5694-A01                                                        */
   /*                                                                  */
   /*  (c) Copyright IBM Corp 1991, 2004. All rights reserved.         */
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

#ifndef _CXX_IMPORT
  #define _CXX_IMPORT
#endif

#if ((defined(_AIX) && (__IBMCPP__ >= 600))     || \
     (defined(__MVS__) && (__IBMCPP__ > 41020)) || \
     (__OS400_TGTVRM__ > 520))
#ifndef __V5_NAME_MANGLING
#  define __V5_NAME_MANGLING 1
#endif
#endif

#ifdef __TOS_AIX__
  #ifndef __mbstate_t
    #define __mbstate_t
    #if !(_AIX43) && !(__ia64) && !(_AIX50)
      typedef short mbstate_t;
    #endif /* _AIX43, _AIX50, _ia64 */
  #endif
#endif
               /* NAMESPACE */
#if defined(__cplusplus)
  #define _STD                  std::
  #define _STD_BEGIN    namespace std {
  #define _STD_END              };
  #define _STD_USING
#else
  #define _STD                  ::
  #define _STD_BEGIN
  #define _STD_END
#endif /* __cplusplus */
_STD_BEGIN
               /* TYPE bool */
#if defined(__cplusplus)
  typedef bool _Bool;
#endif /* __cplusplus */
               /* INTEGER PROPERTIES */
#define   _MAX_EXP_DIG     8      /* for parsing numerics */
#define   _MAX_INT_DIG    32
#define   _MAX_SIG_DIG    36
#ifdef _LONG_LONG
  #define _MAX_LNG_DIG    64      /* for long long type */
#endif /* _LONG_LONG */

/* _USE_IOCNT to select buffering implementation in streambuf */
#if defined(__OS400__) || defined(__TOS_AIX__) || \
    defined(__ia64) || defined(__MVS__)
#define _USE_IOCNT 1
#endif

               /* STDIO PROPERTIES */
#define _Filet FILE
#if defined(__OS400__)
  #if defined(__IFS_IO__)
    #define _FPOSOFF(fp)    (fp.__fpos_elem[0])
  #else
    #define _FPOSOFF(fp)    (fp.__reserved[0])
  #endif
  #define _IOBASE      fp->bufPtr
  #define _IOPTR       fp->bufPtr
  #define _IOCNT       fp->countIn
 #if defined(__BUILD_RT2__)
    #include <coibm.h>
 #elif defined(__BUILD_RT__)
    #include <sys/coibm.h>
  #endif
#elif defined(__MVS__)
  #define _FPOSOFF(fp)    ((long)(fp.__fpos_elem[0]))
  #define _IOBASE    __fp->__bufPtr
  #define _IOPTR     __fp->__bufPtr
  #define _IOCNT     __fp->__countIn
#elif defined( __TOS_AIX__) || defined (__ia64)
  #define _FPOSOFF(fp)    ((long)(fp))
  #define _IOBASE          _base
  #define _IOPTR           _ptr
  #define _IOCNT           _cnt
#else
  #define _FPOSOFF(fp)    ((long)(fp.__ll))
  #define _IOBASE          __buf
  #define _IOPTR           __bufPtr
  #define _IOEGET          __bufGetLimit
  #define _IOEPUT          __bufPutLimit
#endif /* __OS400__ */
               /* CODE PAGE PARAMETER */
#if defined(__OS400__) && defined(__cplusplus)
  class _CCSID_T {
  public:
      explicit _CCSID_T(int ii) : ccsid(ii) {}
      int value() const { return ccsid; }
  private:
      const int ccsid;
  };
  #define _CCSID_PROT  , _CCSID_T ccsid=_CCSID_T(0)
  #define _CCSID_PROT2 , _CCSID_T ccsid
  #define _CCSID_OBJ   , ccsid
  #define _CCSID_DFLT  , _CCSID_T(0)
#else /* not __OS400__ */
  #define _CCSID_PROT
  #define _CCSID_PROT2
  #define _CCSID_OBJ
  #define _CCSID_DFLT
#endif /* __OS400__ */
               /* NAMING PROPERTIES */
#if defined(__cplusplus)
  #define _C_LIB_DECL extern "C" {
  #define _END_C_LIB_DECL }
#else
  #define _C_LIB_DECL
  #define _END_C_LIB_DECL
#endif /* __cplusplus */
                /* LOCK MACROS */
#if defined(__cplusplus)

#define _LOCK_LOCALE    _Lockit::_Loc
#define _LOCK_MALLOC    _Lockit::_Mal
#define _LOCK_STREAM    _Lockit::_Str
#define _LOCK_NOLOCK    _Lockit::_Nolock

  class _Lock;
                  /* CLASS _Lockit */
  class _Lockit
          {       /* lock while object in existence */
  public:
          enum _Mux {_Loc, _Mal, _Str, _Nolock = 0xFFFF};
          _Lockit(int);
          ~_Lockit();
  private:
          _Lock *_L;
          };
#endif /* __cplusplus */
               /* NATIVE ASCII SUPPORT MACROS */
#ifdef __MVS__
  #ifndef __EBCDIC
    #define __EBCDIC  0
  #endif
  #ifndef __ASCII
    #define __ASCII   1
  #endif
  #ifndef __NATIVE_ASCII_F
    #if defined(__XPLINK__) && __CHARSET_LIB == __ASCII
      #define __NATIVE_ASCII_F
    #endif
  #endif
  #ifdef   _Stoflt
    #undef _Stoflt
  #endif
  #ifdef   _Stof
    #undef _Stof
  #endif
  #ifdef   _Stod
    #undef _Stod
  #endif
  #ifdef   _Stold
    #undef _Stold
  #endif
  #ifdef __NATIVE_ASCII_F
    #define _LC_COLLATE_T  _LC_collate_t_a
    #define _LC_CTYPE_T    _LC_ctype_t_a
    #define _LC_CHARMAP_T  _LC_charmap_t_a
    #define _LC_TIME_T     _LC_time_t_a
    #define _Getcoll       _Getcoll_a
    #define _Getctype      _Getctype_a
    #define _Getcvt        _Getcvt_a
    #define _Getdays       _Getdays_a
    #define _Getmonths     _Getmonths_a
    #define _Gettnames     _Gettnames_a
    #define _Mbrtowc       _Mbrtowc_a
    #define _Strcoll       _Strcoll_a
    #define _Strftime      _Strftime_a
    #define _Strxfrm       _Strxfrm_a
    #define _Tolower       _Tolower_a
    #define _Toupper       _Toupper_a
    #define _Towlower      _Towlower_a
    #define _Towupper      _Towupper_a
    #define _Wcrtomb       _Wcrtomb_a
    #define _Wcscoll       _Wcscoll_a
    #define _Wcsxfrm       _Wcsxfrm_a
    #define _Stoflt        _Stoflt_a
    #ifdef __BFP__
      #define _Stof        _Stof_a_ieee
      #define _Stod        _Stod_a_ieee
      #define _Stold       _Stold_a_ieee
    #else
      #define _Stof        _Stof_a_hex
      #define _Stod        _Stod_a_hex
      #define _Stold       _Stold_a_hex
    #endif /* __BFP__ */
  #else
    #define _LC_COLLATE_T  _LC_collate_t
    #define _LC_CTYPE_T    _LC_ctype_t
    #define _LC_CHARMAP_T  _LC_charmap_t
    #define _LC_TIME_T     _LC_time_t
    #define _Stoflt        _Stoflt_e
    #ifdef __BFP__
      #define _Stof        _Stof_e_ieee
      #define _Stod        _Stod_e_ieee
      #define _Stold       _Stold_e_ieee
    #else
      #define _Stof        _Stof_e_hex
      #define _Stod        _Stod_e_hex
      #define _Stold       _Stold_e_hex
    #endif /* __BFP__ */
  #endif
  #if defined(__cplusplus)
    #define __CPP_ENC_NAMESPACE__ 1
    #ifdef __NATIVE_ASCII_F
      #define _ENC                  _ASCII::
      #define _ENC_BEGIN    namespace _ASCII {
      #define _ENC_END              };
      #define _ENC_USING    using namespace _ASCII;
    #else
      #define _ENC                  _EBCDIC::
      #define _ENC_BEGIN    namespace _EBCDIC {
      #define _ENC_END              };
      #define _ENC_USING    using namespace _EBCDIC;
    #endif /* __NATIVE_ASCII_F */
  #endif /* __cplusplus */
#else
  #undef  __CPP_ENC_NAMESPACE__
  #define _ENC
  #define _ENC_BEGIN
  #define _ENC_END
  #define _ENC_USING
  #define _LC_COLLATE_T  _LC_collate_t
  #define _LC_CTYPE_T    _LC_ctype_t
  #define _LC_CHARMAP_T  _LC_charmap_t
  #define _LC_TIME_T     _LC_time_t
#endif /* __MVS__ */

               /* HEX and IEEE support for complex class */
#ifdef __MVS__
  #ifdef   _Cosh
    #undef _Cosh
  #endif
  #ifdef   _Exp
    #undef _Exp
  #endif
  #ifdef   _Sinh
    #undef _Sinh
  #endif
  #ifdef   _Poly
    #undef _Poly
  #endif
  #ifdef   _Dtest
    #undef _Dtest
  #endif
  #ifdef   _Dscale
    #undef _Dscale
  #endif
  #ifdef   _Dnorm
    #undef _Dnorm
  #endif
  #ifdef   _Dtento
    #undef _Dtento
  #endif
  #ifdef   _Dunscale
    #undef _Dunscale
  #endif

  #ifdef   _FCosh
    #undef _FCosh
  #endif
  #ifdef   _FExp
    #undef _FExp
  #endif
  #ifdef   _FSinh
    #undef _FSinh
  #endif
  #ifdef   _FDtest
    #undef _FDtest
  #endif
  #ifdef   _FDnorm
    #undef _FDnorm
  #endif
  #ifdef   _FDscale
    #undef _FDscale
  #endif
  #ifdef   _FDtento
    #undef _FDtento
  #endif
  #ifdef   _FDunscale
    #undef _FDunscale
  #endif

  #ifdef   _LCosh
    #undef _LCosh
  #endif
  #ifdef   _LExp
    #undef _LExp
  #endif
  #ifdef   _LSinh
    #undef _LSinh
  #endif
  #ifdef   _LPoly
    #undef _LPoly
  #endif
  #ifdef   _LDtest
    #undef _LDtest
  #endif
  #ifdef   _LDnorm
    #undef _LDnorm
  #endif
  #ifdef   _LDscale
    #undef _LDscale
  #endif
  #ifdef   _LDtento
    #undef _LDtento
  #endif
  #ifdef   _LDunscale
    #undef _LDunscale
  #endif

  #ifdef   _Denorm
    #undef _Denorm
  #endif
  #ifdef   _Eps
    #undef _Eps
  #endif
  #ifdef   _Hugeval
    #undef _Hugeval
  #endif
  #ifdef   _Inf
    #undef _Inf
  #endif
  #ifdef   _Nan
    #undef _Nan
  #endif
  #ifdef   _Rteps
    #undef _Rteps
  #endif
  #ifdef   _Snan
    #undef _Snan
  #endif
  #ifdef   _Xbig
    #undef _Xbig
  #endif

  #ifdef   _FDenorm
    #undef _FDenorm
  #endif
  #ifdef   _FEps
    #undef _FEps
  #endif
  #ifdef   _FInf
    #undef _FInf
  #endif
  #ifdef   _FNan
    #undef _FNan
  #endif
  #ifdef   _FRteps
    #undef _FRteps
  #endif
  #ifdef   _FSnan
    #undef _FSnan
  #endif
  #ifdef   _FXbig
    #undef _FXbig
  #endif

  #ifdef   _LDenorm
    #undef _LDenorm
  #endif
  #ifdef   _LEps
    #undef _LEps
  #endif
  #ifdef   _LInf
    #undef _LInf
  #endif
  #ifdef   _LNan
    #undef _LNan
  #endif
  #ifdef   _LRteps
    #undef _LRteps
  #endif
  #ifdef   _LSnan
    #undef _LSnan
  #endif
  #ifdef   _LXbig
    #undef _LXbig
  #endif

  #ifdef __BFP__
    /* double DECLARATIONS */
    #define _Cosh       _Cosh_ieee
    #define _Exp        _Exp_ieee
    #define _Sinh       _Sinh_ieee

    #define _Poly       _Poly_ieee
    #define _Dtest      _Dtest_ieee
    #define _Dscale     _Dscale_ieee
    #define _Dnorm      _Dnorm_ieee
    #define _Dtento     _Dtento_ieee
    #define _Dunscale   _Dunscale_ieee

    /* float declarations */
    #define _FCosh      _FCosh_ieee
    #define _FExp       _FExp_ieee
    #define _FSinh      _FSinh_ieee

    #define _FDtest     _FDtest_ieee
    #define _FDnorm     _FDnorm_ieee
    #define _FDscale    _FDscale_ieee
    #define _FDtento    _FDtento_ieee
    #define _FDunscale  _FDunscale_ieee

    /* long double DECLARATIONS */
    #define _LCosh       _LCosh_ieee
    #define _LExp        _LExp_ieee
    #define _LSinh       _LSinh_ieee

    #define _LPoly       _LPoly_ieee
    #define _LDtest      _LDtest_ieee
    #define _LDscale     _LDscale_ieee
    #define _LDnorm      _LDnorm_ieee
    #define _LDtento     _LDtento_ieee
    #define _LDunscale   _LDunscale_ieee

    /* const value */
    /* double VARIABLE */
    #define _Denorm      _Denorm_ieee
    #define _Eps         _Eps_ieee
    #define _Hugeval     _Hugeval_ieee
    #define _Inf         _Inf_ieee
    #define _Nan         _Nan_ieee
    #define _Rteps       _Rteps_ieee
    #define _Snan        _Snan_ieee
    #define _Xbig        _Xbig_ieee

    /* float VARIABLE */
    #define _FDenorm     _FDenorm_ieee
    #define _FEps        _FEps_ieee
    #define _FInf        _FInf_ieee
    #define _FNan        _FNan_ieee
    #define _FSnan       _FSnan_ieee
    #define _FRteps      _FRteps_ieee
    #define _FXbig       _FXbig_ieee

    /* long double VARIABLE */
    #define _LDenorm     _LDenorm_ieee
    #define _LEps        _LEps_ieee
    #define _LInf        _LInf_ieee
    #define _LNan        _LNan_ieee
    #define _LRteps      _LRteps_ieee
    #define _LSnan       _LSnan_ieee
    #define _LXbig       _LXbig_ieee
  #else
    /* double DECLARATIONS */
    #define _Cosh       _Cosh_hex
    #define _Exp        _Exp_hex
    #define _Sinh       _Sinh_hex

    #define _Poly       _Poly_hex
    #define _Dtest      _Dtest_hex
    #define _Dscale     _Dscale_hex
    #define _Dnorm      _Dnorm_hex
    #define _Dtento     _Dtento_hex
    #define _Dunscale   _Dunscale_hex

    /* float declarations */
    #define _FCosh      _FCosh_hex
    #define _FExp       _FExp_hex
    #define _FSinh      _FSinh_hex

    #define _FDtest     _FDtest_hex
    #define _FDnorm     _FDnorm_hex
    #define _FDscale    _FDscale_hex
    #define _FDtento    _FDtento_hex
    #define _FDunscale  _FDunscale_hex

    /* long double DECLARATIONS */
    #define _LCosh       _LCosh_hex
    #define _LExp        _LExp_hex
    #define _LSinh       _LSinh_hex

    #define _LPoly       _LPoly_hex
    #define _LDtest      _LDtest_hex
    #define _LDscale     _LDscale_hex
    #define _LDnorm      _LDnorm_hex
    #define _LDtento     _LDtento_hex
    #define _LDunscale   _LDunscale_hex

    /* const value */
    /* double VARIABLE */
    #define _Denorm      _Denorm_hex
    #define _Eps         _Eps_hex
    #define _Hugeval     _Hugeval_hex
    #define _Inf         _Inf_hex
    #define _Nan         _Nan_hex
    #define _Rteps       _Rteps_hex
    #define _Snan        _Snan_hex
    #define _Xbig        _Xbig_hex

    /* float VARIABLE */
    #define _FDenorm     _FDenorm_hex
    #define _FEps        _FEps_hex
    #define _FInf        _FInf_hex
    #define _FNan        _FNan_hex
    #define _FSnan       _FSnan_hex
    #define _FRteps      _FRteps_hex
    #define _FXbig       _FXbig_hex

    /* long double VARIABLE */
    #define _LDenorm     _LDenorm_hex
    #define _LEps        _LEps_hex
    #define _LInf        _LInf_hex
    #define _LNan        _LNan_hex
    #define _LRteps      _LRteps_hex
    #define _LSnan       _LSnan_hex
    #define _LXbig       _LXbig_hex
  #endif /* __BFP__ */
#endif /* __MVS__ */

               /* HEX and IEEE support for numeric_limits class */
#ifdef __MVS__
  #if defined(__cplusplus)
    #ifdef __BFP__
      #define _FLT                  _FLT_IEEE::
      #define _FLT_BEGIN    namespace _FLT_IEEE {
      #define _FLT_END              };
      #define _FLT_USING    using namespace _FLT_IEEE;
    #else
      #define _FLT                  _FLT_HEX::
      #define _FLT_BEGIN    namespace _FLT_HEX {
      #define _FLT_END              };
      #define _FLT_USING    using namespace _FLT_HEX;
    #endif /* __BFP__ */
  #endif /* __cplusplus */
#else
  #define _FLT
  #define _FLT_BEGIN
  #define _FLT_END
  #define _FLT_USING
#endif /* __MVS__ */

/* MVS PDS support */
#if defined(__MVS__) && defined(__cplusplus)
  #define _FOMODE_PROT  , const char * _A=""
  #define _FOMODE_PROT2 , const char * _A
  #define _FOMODE_DFLT  , ""
  #define _FOMODE_USAGE , _A
#else
  #define _FOMODE_PROT
  #define _FOMODE_PROT2
  #define _FOMODE_DFLT
  #define _FOMODE_USAGE
#endif

/* MVS Long Long support */
#if defined(__MVS__) && defined(__cplusplus)
  #define _LLVIRTUAL      _VIRTUAL
#else
  #define _LLVIRTUAL
#endif

/* large file support MACROS */
#ifdef __MVS__
  #if defined(__cplusplus)
    #define __CPP_LFS_NAMESPACE__ 1
    #if defined(_LARGE_FILES)
      #define _ENABLE_LFS   1
      #define _LFS          _LFS_ON::
      #define _LFS_BEGIN    namespace _LFS_ON {
      #define _LFS_END      };
      #define _LFS_USING    using namespace _LFS_ON;
    #else
      #undef  _ENABLE_LFS
      #define _LFS          _LFS_OFF::
      #define _LFS_BEGIN    namespace _LFS_OFF {
      #define _LFS_END      };
      #define _LFS_USING    using namespace _LFS_OFF;
    #endif /* _LFS */
  #endif /* __cplusplus */
#elif defined(__TOS_AIX__) && defined(__cplusplus) && defined(_LARGE_FILES)
  #define __CPP_LFS_NAMESPACE__ 1
  #define _ENABLE_LFS   1
  #define _LFS          _LFS_ON::
  #define _LFS_BEGIN    namespace _LFS_ON {
  #define _LFS_END      };
  #define _LFS_USING    using namespace _LFS_ON;
#elif defined(__OS400__) && defined(__cplusplus)
  #undef  __CPP_LFS_NAMESPACE__
  #define _ENABLE_LFS   1
  #define _LFS
  #define _LFS_BEGIN
  #define _LFS_END
  #define _LFS_USING
#else
  #undef  __CPP_LFS_NAMESPACE__
  #undef _ENABLE_LFS
  #define _LFS
  #define _LFS_BEGIN
  #define _LFS_END
  #define _LFS_USING
#endif

               /* UTF-32 ENABLEMENT */
#if defined(__UTF32__) && defined(__OS400__) /* or any new platforms */
                                             /* to be supported      */
  #define __CPP_UTF32_LIB__   1
  #define _UTF32          _UTF32_ON::
  #define _UTF32_BEGIN    namespace _UTF32_ON {
  #define _UTF32_END      };
  #define _UTF32_USING    using namespace _UTF32_ON;
  #define _UTF32_NAME(x)  x##__utf32
  #define _UTF32_NAME_FIX(x)  x##__utf32
#else
  #undef __CPP_UTF32_LIB__
  #define _UTF32
  #define _UTF32_BEGIN
  #define _UTF32_END
  #define _UTF32_USING
  #define _UTF32_NAME(x)  x
  #define _UTF32_NAME_FIX(x)  x
#endif

#if defined(__CPP_ENC_NAMESPACE__) || defined(__CPP_LFS_NAMESPACE__) \
 || defined(__CPP_UTF32_LIB__)
  #define __USING(x,y) using x y;
#else
  #define __USING(x,y)
#endif
               /* MISCELLANEOUS MACROS */
#define _ATEXIT_T       void _Optlink
#define _Mbstinit(x)    mbstate_t x = {0}

               /* NON-XPLINK STD C++ LIB MACROS */
#ifdef __MVS__
  #define _C128N_CDECL __cdecl
#else
  #define _C128N_CDECL
#endif

#if (defined(__OS400__) && (__OS400_TGTVRM__ <= 510)) ||  \
    (defined(__MVS__) && (__TARGET_LIB__ <= 0x41070000))
  #define __NO_C99LIB 1
#endif

#if defined(__OS400__) && \
    (defined(__TERASPACE__) || defined(__STGMDL_TERASPACE__)) && \
    !defined(__LLP64_RTBND__)
  #define __TERASPACE2_RT__ 1
#endif

#if defined(__OS400__) && defined(__LLP64_IFC__)
  #define _PTR_SPEC __ptr64
#else
  #define _PTR_SPEC
#endif

_STD_END

#if !defined(__MVS__) || defined(__cplusplus)
  #pragma info(none)
  #ifndef __CHKHDR__
    #pragma report(pop)
  #endif
  #pragma info(restore)
  #if (__OS400_TGTVRM__ >= 510)
    #pragma datamodel(pop)
  #endif
#endif /* __MVS__ */

/*
 * Copyright (c) 1996-1998 by P.J. Plauger.  ALL RIGHTS RESERVED.
 * Consult your license regarding permissions and restrictions.
V2.3:0081 */

                    #if defined(__MVS__)
                      #pragma checkout(resume)
                    #endif /* defined(__MVS__) */
                    ??=endif /* _YVALS */
