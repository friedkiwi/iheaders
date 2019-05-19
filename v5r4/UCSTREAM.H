                    ??=ifndef _UCSTREAM_
                      ??=if defined(__MVS__)
                        ??=if defined(__COMPILER_VER__)
                          ??=pragma filetag("IBM-1047")
                        #endif /* defined(__COMPILER_VER__) */
                        #pragma nomargins nosequence
                        #pragma checkout(suspend)
                      #endif /* defined(__MVS__) */
                      #define _UCSTREAM_

// ucstream non-standard header

#pragma info(none)
#ifndef __CHKHDR__
#  pragma report(level, E)
#endif
#pragma info(restore)

#if (__OS400_TGTVRM__ >= 510)
#  if defined(__LLP64_RTBND__)
#    pragma datamodel(LLP64)
#  else
#    pragma datamodel(P128)
#  endif
#endif

#if __IBMCPP__ < 400
#error This file to be used only with IBM VisualAge C++ v4 and later compilers.
#endif /* __IBMCPP__ */

#if defined(__UTF32__)
#  if defined(__OS400__)
#    error This file must not be compiled with LOCALETYPE(*LOCALEUTF)
#  else
#    error This file must not be compiled with -qutf
#  endif
#endif

#if !(defined(__MVS__) && defined(_LP64))
#pragma object_model(compat)
#endif
#pragma namemangling(ansi)

   /********************************************************************/
   /*  <ucstream.h> header file                                        */
   /*                                                                  */
   /*  VisualAge C++ Professional, Version 6.0                         */
   /*    Licensed Material - Property of IBM                           */
   /*                                                                  */
   /*  5801-AAR and Other Materials                                    */
   /*  5694-A01                                                        */
   /*                                                                  */
   /*  (c) Copyright IBM Corp 1991, 2002. All rights reserved.         */
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

#include <fstream>

namespace std {

_ENC_BEGIN
_LFS_BEGIN

bool _FgetUCS2(wchar_t &, std::_Filet *, bool);
bool _FputUCS2(const wchar_t &, std::_Filet *, bool);
bool _UngetUCS2(const wchar_t &, std::_Filet *, bool);

                // CLASS ucfilebuf
class ucfilebuf : public std::basic_streambuf
                              <wchar_t, std::char_traits<wchar_t> > {
public:
        typedef wchar_t _E;
        typedef std::char_traits<wchar_t> _Tr;
        typedef ucfilebuf _Myt;
        typedef std::basic_streambuf<_E, _Tr> _Mysb;
        typedef std::codecvt<_E, _E, _Tr::state_type> _Cvt;
        virtual ~ucfilebuf();
        ucfilebuf(_Filet *_Fi = 0)
                : _Loc(std::_Noinit), _Mysb()
                {_Init(_Fi, _Newfl); }
        ucfilebuf(std::_Uninitialized)
                : _Loc(std::_Noinit), _Mysb(std::_Noinit) {}
        enum _Initfl {_Newfl, _Openfl, _Closefl};
        bool is_open() const
                {return (_File != 0); }
        _Myt *open(const char *_S, std::ios_base::openmode _M);
        _Myt *open(const char *_N, std::ios_base::open_mode _M)
                {return (open(_N, (std::ios_base::openmode)_M)); }
        _Myt *close()
                {if (_File != 0 && _Endwrite() && std::fclose(_File) == 0)
                        {_Init(0, _Closefl);
                        return (this); }
                else
                        return (0); }
protected:
        virtual int_type overflow(int_type _C = _Tr::eof())
                {if (_Tr::eq_int_type(_Tr::eof(), _C))
                        return (_Tr::not_eof(_C));
                else if (_Mysb::pptr() != 0
                        && _Mysb::pptr() < _Mysb::epptr())
                        {*_Mysb::_Pninc() = _Tr::to_char_type(_C);
                        return (_C); }
                else if (_File == 0)
                        return (_Tr::eof());
                else
                      return (_FputUCS2(_Tr::to_char_type(_C), _File, _Bigendf)
                                ? _C : _Tr::eof()); }
        virtual int_type pbackfail(int_type _C = _Tr::eof())
                {if (_Mysb::gptr() != 0
                        && _Mysb::eback() < _Mysb::gptr()
                        && (_Tr::eq_int_type(_Tr::eof(), _C)
                        || _Tr::eq_int_type(_Tr::to_int_type(_Mysb::gptr()[-1]),
                                _C)))
                        {_Mysb::_Gndec();
                        return (_Tr::not_eof(_C)); }
                else if (_File == 0 || _Tr::eq_int_type(_Tr::eof(), _C))
                        return (_Tr::eof());
                else if (_Pcvt == 0)
                      return (_UngetUCS2(_Tr::to_char_type(_C), _File, _Bigendf)
                                ? _C : _Tr::eof());
                else if (0 < _Str->size()
                        && std::_Ungetc(*_Str->begin(), _File, _Str->size()))
                        {_Str->erase();
                        _State = _State0;
                        return (_C); }
                else
                        return (_Tr::eof()); }
        virtual int_type underflow()
                {if (_Mysb::gptr() != 0
                        && _Mysb::gptr() < _Mysb::egptr())
                        return (_Tr::to_int_type(*_Mysb::gptr()));
                else
                        return (pbackfail(uflow())); }
        virtual int_type uflow()
                {if (_Mysb::gptr() != 0
                        && _Mysb::gptr() < _Mysb::egptr())
                        return (_Tr::to_int_type(*_Mysb::_Gninc()));
                else if (_File == 0)
                        return (_Tr::eof());
                else
                        {_E _C;
                        return (_FgetUCS2(_C, _File, _Bigendf)
                                ? _Tr::to_int_type(_C)
                                : _Tr::eof()); }}
        virtual pos_type seekoff(off_type _O, std::ios_base::seekdir _Way,
                std::ios_base::openmode =
                        (std::ios_base::openmode)(std::ios_base::in |
                                                  std::ios_base::out))
                {std::fpos_t _Fp;
                if (_File == 0 || !_Endwrite()
                        || std::fseek(_File, _O, _Way) != 0
                        || std::fgetpos(_File, &_Fp) != 0)
                        return (pos_type(std::_BADOFF));
                return (pos_type(_State, _Fp)); }
        virtual pos_type seekpos(pos_type _P,
                std::ios_base::openmode =
                        (std::ios_base::openmode)(std::ios_base::in |
                                                  std::ios_base::out))
                {std::fpos_t _Fp = _P.seekpos();
                off_type _Off = (off_type)_P - _FPOSOFF(_Fp);
                if (_File == 0 || !_Endwrite()
                        || std::fsetpos(_File, &_Fp) != 0
                        || _Off != 0 && std::fseek(_File, _Off, SEEK_CUR) != 0
                        || std::fgetpos(_File, &_Fp) != 0)
                        return (pos_type(std::_BADOFF));
                if (_Str != 0)
                        _State = _P.state(), _Str->erase();
                return (pos_type(_State, _Fp)); }
        virtual _Mysb *setbuf(_E *_S, std::streamsize _N)
                {return (_File == 0 || std::setvbuf(_File, (char *)_S,
                        _S == 0 && _N == 0 ? _IONBF : _IOFBF,
                        _N * sizeof (_E)) != 0 ? 0 : this); }
        virtual int sync()
                {return (_File == 0
                        || _Tr::eq_int_type(_Tr::eof(), overflow())
                        || 0 <= std::fflush(_File) ? 0 : -1); }
        void _Init(_Filet *_Fp, _Initfl _Which)
                {static _Tr::state_type _Stinit;
                _Closef = _Which == _Openfl;
                _Writef = false;
                if (_Which == _Newfl)
                        {new (&_Loc) std::locale;
                        _Str = 0; }
                _Mysb::_Init();
                _File = _Fp;
                _State = _Stinit;
                _State0 = _Stinit;
                _Pcvt = 0; }
        bool _Endwrite()
                {overflow();
                return (true); }
        void _Initcvt()
                {_Pcvt = (_Cvt *)&std::_USE(_Mysb::getloc(), _Cvt);
                _Loc = std::_ADDFAC(_Loc, _Pcvt);
                if (_Pcvt->always_noconv())
                        _Pcvt = 0;
                else
                        _Mysb::_Init();
                if (_Str == 0)
                        _Str = new std::string; }
        _Filet * _UCopen(const char *, std::ios_base::openmode);
private:
        _Cvt *_Pcvt;
        _Tr::state_type _State0;
        std::string *_Str;
        bool _Writef;
        _Tr::state_type _State;
        bool _Closef;
        std::locale _Loc;
        std::_Filet *_File;
        bool _Bigendf;
        };

                // CLASS iucstream
class iucstream : public std::basic_istream<wchar_t, std::char_traits<wchar_t> >
{
public:
        typedef wchar_t _E;
        typedef std::char_traits<wchar_t> _Tr;
        typedef iucstream _Myt;
        typedef ucfilebuf _Myfb;
        typedef std::basic_ios<_E, _Tr> _Myios;
        iucstream()
                : std::basic_istream<_E, _Tr>(&_Fb) {}
        explicit iucstream(const char *_S,
                std::ios_base::openmode _M = std::ios_base::in)
                : std::basic_istream<_E, _Tr>(&_Fb)
                {if (_Fb.open(_S, _M | std::ios_base::in) == 0)
                        _Myios::setstate(std::ios_base::failbit); }
        virtual ~iucstream();
        _Myfb *rdbuf() const
                {return ((_Myfb *)&_Fb); }
        bool is_open() const
                {return (_Fb.is_open()); }
        void open(const char *_S,
                std::ios_base::openmode _M = std::ios_base::in)
                {if (_Fb.open(_S, _M | std::ios_base::in) == 0)
                        _Myios::setstate(std::ios_base::failbit); }
        void open(const char *_S, std::ios_base::open_mode _M)
                {open(_S, (std::ios_base::openmode)_M); }
        void close()
                {if (_Fb.close() == 0)
                        _Myios::setstate(std::ios_base::failbit); }
private:
        _Myfb _Fb;
        };

                // CLASS oucstream
class oucstream : public std::basic_ostream<wchar_t, std::char_traits<wchar_t> >
{
public:
        typedef wchar_t _E;
        typedef std::char_traits<wchar_t> _Tr;
        typedef oucstream _Myt;
        typedef ucfilebuf _Myfb;
        typedef std::basic_ios<_E, _Tr> _Myios;
        oucstream()
                : std::basic_ostream<_E, _Tr>(&_Fb) {}
        explicit oucstream(const char *_S,
                std::ios_base::openmode _M = std::ios_base::out)
                : std::basic_ostream<_E, _Tr>(&_Fb)
                {if (_Fb.open(_S, _M | std::ios_base::out) == 0)
                        _Myios::setstate(std::ios_base::failbit); }
        virtual ~oucstream();
        _Myfb *rdbuf() const
                {return ((_Myfb *)&_Fb); }
        bool is_open() const
                {return (_Fb.is_open()); }
        void open(const char *_S,
                std::ios_base::openmode _M = std::ios_base::out)
                {if (_Fb.open(_S, _M | std::ios_base::out) == 0)
                        _Myios::setstate(std::ios_base::failbit); }
        void open(const char *_S, std::ios_base::open_mode _M)
                {open(_S, (std::ios_base::openmode)_M); }
        void close()
                {if (_Fb.close() == 0)
                        _Myios::setstate(std::ios_base::failbit); }
private:
        _Myfb _Fb;
        };

                // CLASS ucstream
class ucstream : public std::basic_iostream<wchar_t, std::char_traits<wchar_t> >
{
public:
        typedef wchar_t _E;
        typedef std::char_traits<wchar_t> _Tr;
        typedef std::basic_ios<_E, _Tr> _Myios;
        typedef _E char_type;
        typedef _Tr traits_type;
        typedef _Tr::int_type int_type;
        typedef _Tr::pos_type pos_type;
        typedef _Tr::off_type off_type;
        ucstream()
                : std::basic_iostream<_E, _Tr>(&_Fb) {}
        explicit ucstream(const char *_S,
            std::ios_base::openmode _M = std::ios_base::in | std::ios_base::out)
                : std::basic_iostream<_E, _Tr>(&_Fb)
                {if (_Fb.open(_S, _M) == 0)
                        _Myios::setstate(std::ios_base::failbit); }
        virtual ~ucstream();
        ucfilebuf *rdbuf() const
                {return ((ucfilebuf *)&_Fb); }
        bool is_open() const
                {return (_Fb.is_open()); }
        void open(const char *_S,
            std::ios_base::openmode _M = std::ios_base::in | std::ios_base::out)
                {if (_Fb.open(_S, _M) == 0)
                        _Myios::setstate(std::ios_base::failbit); }
        void open(const char *_S, std::ios_base::open_mode _M)
                {open(_S, (std::ios_base::openmode)_M); }
        void close()
                {if (_Fb.close() == 0)
                        _Myios::setstate(std::ios_base::failbit); }
private:
        ucfilebuf _Fb;
        };
_LFS_END
_LFS_USING
_ENC_END
_ENC_USING
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
 * Copyright (c) 1994 by P.J. Plauger.  ALL RIGHTS RESERVED.
 * Consult your license regarding permissions and restrictions.
V2.2:0081 */

                    #if defined(__MVS__)
                      #pragma checkout(resume)
                    #endif /* defined(__MVS__) */
                    ??=endif /* _UCSTREAM_ */
