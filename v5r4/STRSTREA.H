/**************************************************************************
*                                                                         *
* <strstrea.h> header file                                                *
*                                                                         *
* IBM(R) VisualAge(TM) for C++ for AS/400(R), V3R6M0, V3R7M0              *
*                                                                         *
* (C) Copyright IBM Corporation, 1995, 1996 - All Rights Reserved         *
*                                                                         *
* 5716-CX4, 5716-CX5                                                      *
*                                                                         *
* Licensed Materials - Property of IBM                                    *
*                                                                         *
* US Government Users Restricted Rights - Use, duplication or disclosure  *
* restricted by GSA ADP Schedule Contract with IBM Corp.                  *
*                                                                         *
**************************************************************************/

/******************************************************************************

C++ source for the C++ Language System, Release 3.0.  This product
is a new release of the original cfront developed in the computer
science research center of AT&T Bell Laboratories.

Copyright (c) 1991, 1992 AT&T and UNIX System Laboratories, Inc.
Copyright (c) 1984, 1989, 1990 AT&T.  All Rights Reserved.

*******************************************************************************/
#ifndef STRSTREAMH
#define STRSTREAMH

#if (__OS400_TGTVRM__ >= 510)
  #pragma datamodel(P128)
  #pragma object_model(compat)
#endif

#ifndef IOSTREAMH
#include <iostream.h>
#endif

#if defined(__LLP64_RTBND__) || defined(__UTF32__)
  #if defined(__LLP64_RTBND__)
    #warning This file is deprecated. Consider using the equivalent C++ \
Standard Library function.
  #endif

    #include <strstream>

    using std::strstreambuf;
    using std::istrstream;
    using std::ostrstream;
    using std::strstream;

#else // defined(__LLP64_RTBND__)

class strstreambuf : public streambuf
{
public:
                        strstreambuf() ;
                        strstreambuf(int) ;
                        strstreambuf(void* (*a)(long), void (*f)(void*)) ;
                        strstreambuf(char* b, int size, char* pstart = 0 ) ;
                        strstreambuf(signed char* b, int size,
                                     signed char* pstart = 0 ) ;
                        strstreambuf(unsigned char* b, int size,
                                     unsigned char* pstart = 0 ) ;

        /*
         FUNCTION  int streambuf::pcount() IS INTERNAL AND SHOULD
         NOT BE USED.
        */
        int                pcount();
        void                freeze(int n=1) ;
        char*                str() ;
                        ~strstreambuf() ;

public: /* virtuals  */
        virtual int        doallocate() ;
        virtual int        overflow(int) ;
        virtual int        underflow() ;
        virtual streambuf*
                        setbuf(char*  p, int l) ;
        virtual streampos
                        seekoff(streamoff,ios::seek_dir,int) ;

private:
        void                init(char*,int,char*) ;

        void*                (*afct)(long) ;
        void                (*ffct)(void*) ;
        int                ignore_oflow ;
        int                froozen ;
        int                auto_extend ;

public:
        int                isfrozen() { return froozen; }
        } ;

class strstreambase : public virtual ios {
public:
        strstreambuf*        rdbuf() ;
protected:
                        strstreambase(char*, int, char*) ;
                        strstreambase() ;
                        ~strstreambase() ;
private:
        strstreambuf        buf ;
        } ;

#include <string.h>  // needed for strlen()

class istrstream : public strstreambase, public istream {
public:
                        istrstream(char* str);
                        istrstream(signed char* str);
                        istrstream(unsigned char* str);
                        istrstream(char* str, int size ) ;
                        istrstream(signed char* str, int size);
                        istrstream(unsigned char* str, int size);
                        istrstream(const char* str);
                        istrstream(const signed char* str);
                        istrstream(const unsigned char* str);
                        istrstream(const char* str, int size ) ;
                        istrstream(const signed char* str, int size);
                        istrstream(const unsigned char* str, int size);
#if defined(__TERASPACE__) || defined(__STGMDL_TERASPACE__)
#define __ISTRSTREAM_DEF__ : strstreambase((char *__ptr128)str, size, 0) {}
#define __ISTRSTREAM_DEF_NOSIZE__ : strstreambase((char *__ptr128)str, \
                                       strlen((const char*__ptr128)str), 0) {}
                        istrstream(char*__ptr64 str)
                          __ISTRSTREAM_DEF_NOSIZE__
                        istrstream(signed char*__ptr64  str)
                          __ISTRSTREAM_DEF_NOSIZE__
                        istrstream(unsigned char*__ptr64  str)
                          __ISTRSTREAM_DEF_NOSIZE__
                        istrstream(char*__ptr64  str, int size )
                          __ISTRSTREAM_DEF__
                        istrstream(signed char*__ptr64  str, int size)
                          __ISTRSTREAM_DEF__
                        istrstream(unsigned char*__ptr64  str, int size)
                          __ISTRSTREAM_DEF__
                        istrstream(const char*__ptr64  str)
                          __ISTRSTREAM_DEF_NOSIZE__
                        istrstream(const signed char*__ptr64  str)
                          __ISTRSTREAM_DEF_NOSIZE__
                        istrstream(const unsigned char*__ptr64  str)
                          __ISTRSTREAM_DEF_NOSIZE__
                        istrstream(const char*__ptr64  str, int size )
                          __ISTRSTREAM_DEF__
                        istrstream(const signed char*__ptr64  str, int size)
                          __ISTRSTREAM_DEF__
                        istrstream(const unsigned char*__ptr64  str, int size)
                          __ISTRSTREAM_DEF__
#endif
                        ~istrstream() ;
        } ;

class ostrstream : public strstreambase, public ostream {
public:
                        ostrstream(char* str, int size, int=ios::out) ;
                        ostrstream(signed char* str, int size, int=ios::out) ;
                        ostrstream(unsigned char* str, int size, int=ios::out) ;
#if defined(__TERASPACE__) || defined(__STGMDL_TERASPACE__)
#define __STRSTR_PSTART__(str, size, m) \
          ( ( ( (m) &(ios::app|ios::out)) == 0 ) ? ( (str) + (size) ) : \
            ( ( (m) &(ios::app|ios::ate)) )  ? ( (str) + strlen(str)) : (str) )
#define __OSTRSTREAM_DEF__ : strstreambase((char *__ptr128)str, size, \
                                 __STRSTR_PSTART__((char *__ptr128)str, \
                                                    size, (int)(m|ios::out))) {}
                        ostrstream(char*__ptr64 str, int size, int m=ios::out)
                          __OSTRSTREAM_DEF__
                        ostrstream(signed char*__ptr64 str, int size,
                                   int m=ios::out)
                          __OSTRSTREAM_DEF__
                        ostrstream(unsigned char*__ptr64 str, int size,
                                   int m=ios::out)
                          __OSTRSTREAM_DEF__
#endif
                        ostrstream() ;
                        ~ostrstream() ;
        char*                str() ;
        int                pcount() ;
        } ;


class strstream : public strstreambase, public iostream {
public:
                        strstream() ;
                        strstream(char* str, int size, int mode) ;
                        strstream(signed char* str, int size, int mode) ;
                        strstream(unsigned char* str, int size, int mode) ;
#if defined(__TERASPACE__) || defined(__STGMDL_TERASPACE__)
#define __STRSTREAM_DEF__ : strstreambase((char *__ptr128)str, size, \
                                 __STRSTR_PSTART__((char *__ptr128)str, \
                                                    size, (int)mode)) {}
                        strstream(char*__ptr64 str, int size, int mode)
                          __STRSTREAM_DEF__
                        strstream(signed char*__ptr64 str, int size, int mode)
                          __STRSTREAM_DEF__
                        strstream(unsigned char*__ptr64 str, int size, int mode)
                          __STRSTREAM_DEF__
#endif
                        ~strstream() ;
        char*                str() ;
        } ;

#endif //defined(__LLP64_RTBND__)

#if (__OS400_TGTVRM__ >= 510)
   #pragma datamodel(pop)
   #pragma object_model(pop)
#endif

#endif
