
/* 5716-CX5, 5799-GDW, 5769-CX5                                   */
/* (C) Copyright IBM Corp. 1996,1999                              */
/* ALL rights reserved.                                           */
/* US Government Users Restricted Rights-                         */
/* Use, duplication or disclosure restricted                      */
/* by GSA ADP schedule Contract with IBM Corp.                    */
/*                                                                */
/* Licensed Materials-Property of IBM.                            */

/**************************************************************************
*                                                                         *
* IBM(R) VisualAge(TM) for C++ for AS/400(R)                              *
*                                                                         *
*                                                                         *
*C++ source for the C++ Language System, Release 3.0.  This product       *
*is a new release of the original cfront developed in the computer        *
*science research center of AT&T Bell Laboratories.                       *
*                                                                         *
*Copyright (c) 1991, 1992 AT&T and UNIX System Laboratories, Inc.         *
*Copyright (c) 1984, 1989, 1990 AT&T.  All Rights Reserved.               *
*                                                                         *
***************************************************************************/
#ifndef FSTREAMH
#define FSTREAMH

#if (__OS400_TGTVRM__ >= 510)
  #pragma datamodel(P128)
  #pragma object_model(compat)
#endif


#if defined(__LLP64_RTBND__) || defined(__UTF32__)
  #if defined(__LLP64_RTBND__)
    #warning This file is deprecated. Consider using the equivalent C++ \
Standard Library function.
  #endif

    #include <iostream.h>
    #include <fstream>
    using std::filebuf;
    using std::ifstream;
    using std::ofstream;
    using std::fstream;
    using std::streampos;
    using std::_CCSID_T;
#else // defined(__LLP64_RTBND__)
#include <iostream.h>

#if ( __OS400_TGTVRM__ >= 440 ) && ( __IO64_ENABLED__ )
#if !defined(__IFS64_IO__) \
    && !defined(_LARGE_FILES) \
    && !defined(_LARGE_FILE_API) \
    && !defined(_IFS_BYPASS_ERROR)
   #error ***ERROR: IFS for 64-bit byte stream I/O not enabled.
#endif
#endif

#if (__OS400_TGTVRM__ >= 510)
class _CCSID_T {
public:
#if defined(__EXTENDED__) || defined(__ANSI__)
    explicit
#endif
    _CCSID_T(int ii) : ccsid(ii) {}
    int value () const { return ccsid; }
private:
    const int ccsid;
};
#endif

class  filebuf : public streambuf {        /* a stream buffer for files */
public:
        static const int openprot ; /* default protection for open */
public:
                        filebuf() ;
                        filebuf(int fd);
                        filebuf(int fd, char*  p, int l) ;

        int                is_open() { return opened ; }
        int                fd() { return xfd ; }
#if ((__OS400_TGTVRM__ >= 510) && !defined(__BUILD_ATT370__))
        filebuf*        open(const char *name, int om, int prot=openprot,
                             _CCSID_T ccsid=_CCSID_T(0));
        filebuf*        open(const char *name, int om, _CCSID_T ccsid)
                            { return open(name, om, openprot, ccsid); }
#else
        filebuf*        open(const char *name, int om, int prot=openprot);
#endif
        filebuf*        attach(int fd) ;
        int                detach() ;
        filebuf*         close() ;
                        ~filebuf() ;
public: /* virtuals */
        virtual int        overflow(int=EOF);
        virtual int        underflow();
        virtual int        sync() ;
        virtual streampos
                        seekoff(streamoff,ios::seek_dir,int) ;
        virtual streambuf*
                        setbuf(char*  p, int len) ;
protected:
        int                xfd;
        int                mode ;
        char                opened;
        streampos        last_seek ;
        char*                 in_start;
        int                last_op();
        char                lahead[2] ;
};

class fstreambase : virtual public ios {
public:
                        fstreambase() ;

#if ((__OS400_TGTVRM__ >= 510) && !defined(__BUILD_ATT370__))
                        fstreambase(const char* name,
                                    int mode,
                                    int prot=filebuf::openprot,
                                    _CCSID_T ccsid=_CCSID_T(0)) ;
                        fstreambase(const char* name,
                                    int mode,
                                    _CCSID_T ccsid) ;
        void            open(const char* name, int mode,
                             int prot=filebuf::openprot,
                             _CCSID_T ccsid=_CCSID_T(0)) ;
        void            open(const char* name, int mode, _CCSID_T ccsid)
                            { open(name, mode, filebuf::openprot, ccsid); }
#else
                        fstreambase(const char* name,
                                    int mode,
                                    int prot=filebuf::openprot) ;
        void            open(const char* name, int mode,
                             int prot=filebuf::openprot) ;
#endif

                        fstreambase(int fd) ;
                        fstreambase(int fd, char*  p, int l) ;
                        ~fstreambase() ;
        void                attach(int fd);
        int                detach();
        void                close() ;
        void                setbuf(char*  p, int l) ;
        filebuf*        rdbuf() { return &buf ; }
private:
        filebuf                buf ;
protected:
        void                verify(int) ;
} ;

class ifstream : public fstreambase, public istream {
public:
#if ((__OS400_TGTVRM__ >= 510) && !defined(__BUILD_ATT370__))
                        ifstream(const char* name,
                                 int mode=ios::in,
                                 int prot=filebuf::openprot,
                                 _CCSID_T ccsid=_CCSID_T(0)) ;
                        ifstream(const char* name, int mode, _CCSID_T ccsid);
        void            open(const char* name, int mode=ios::in,
                             int prot=filebuf::openprot,
                             _CCSID_T ccsid=_CCSID_T(0)) ;
        void            open(const char* name, int mode, _CCSID_T ccsid)
                        { open(name,mode,filebuf::openprot,ccsid); }
#else
                        ifstream(const char* name,
                                 int mode=ios::in,
                                 int prot=filebuf::openprot) ;
        void            open(const char* name, int mode=ios::in,
                             int prot=filebuf::openprot) ;
#endif
                        ifstream() ;
                        ifstream(int fd) ;
                        ifstream(int fd, char*  p, int l) ;
                        ~ifstream() ;

        filebuf*        rdbuf() { return fstreambase::rdbuf(); }
} ;

class ofstream : public fstreambase, public ostream {
public:
#if ((__OS400_TGTVRM__ >= 510) && !defined(__BUILD_ATT370__))
                        ofstream(const char* name,
                                 int mode=ios::out,
                                 int prot=filebuf::openprot,
                                 _CCSID_T ccsid=_CCSID_T(0)) ;
                        ofstream(const char* name, int mode, _CCSID_T);
        void            open(const char* name, int mode=ios::out,
                             int prot=filebuf::openprot,
                             _CCSID_T ccsid=_CCSID_T(0)) ;
        void            open(const char* name, int mode, _CCSID_T ccsid)
                        { open(name,mode,filebuf::openprot,ccsid); }
#else
                        ofstream(const char* name,
                                 int mode=ios::out,
                                 int prot=filebuf::openprot) ;
        void            open(const char* name, int mode=ios::out,
                             int prot=filebuf::openprot) ;
#endif
                        ofstream() ;
                        ofstream(int fd) ;
                        ofstream(int fd, char*  p, int l) ;
                        ~ofstream() ;

        filebuf*        rdbuf() { return fstreambase::rdbuf(); }
} ;

class fstream : public fstreambase, public iostream {
public:
#if ((__OS400_TGTVRM__ >= 510) && !defined(__BUILD_ATT370__))
                        fstream(const char* name, int mode,
                                 int prot=filebuf::openprot,
                                 _CCSID_T ccsid=_CCSID_T(0)) ;
                        fstream(const char* name, int mode, _CCSID_T ccsid);
        void            open(const char* name, int mode,
                             int prot=filebuf::openprot,
                             _CCSID_T ccsid=_CCSID_T(0)) ;
        void            open(const char* name, int mode,
                             _CCSID_T ccsid)
                        { open(name,mode,filebuf::openprot,ccsid); }
#else
                        fstream(const char* name,
                                 int mode=ios::out,
                                 int prot=filebuf::openprot) ;
        void            open(const char* name, int mode,
                             int prot=filebuf::openprot) ;
#endif
                        fstream() ;

                        fstream(int fd) ;
                        fstream(int fd, char*  p, int l) ;
                        ~fstream() ;
        filebuf*        rdbuf() { return fstreambase::rdbuf(); }
} ;

#if defined(__UTF32__)
#pragma map(filebuf::open(const char *, int, int, _CCSID_T), \
    "__UTF32_filbuf_open_const_char_P_int_int_CCSID_T__")
#pragma map(fstreambase::fstreambase(const char*, int, int, _CCSID_T), \
    "__UTF32_fstreambase_ct_const_char_P_int_int_CCSID_T__")
#pragma map(fstreambase::fstreambase(const char*, int, _CCSID_T), \
    "__UTF32_fstreambase_ct_const_char_P_int_CCSID_T__")
#pragma map(fstreambase::open(const char*, int, int, _CCSID_T), \
    "__UTF32_fstreambase_open_const_char_P_int_int_CCSID_T__")
#pragma map(ifstream::ifstream(const char*, int, int, _CCSID_T), \
    "__UTF32_ifstream_ct_const_char_P_int_int_CCSID_T__")
#pragma map(ifstream::ifstream(const char*, int, _CCSID_T), \
    "__UTF32_ifstream_ct_const_char_P_int_CCSID_T__")
#pragma map(ifstream::open(const char*, int, int, _CCSID_T), \
    "__UTF32_ifstream_open_const_char_P_int_int_CCSID_T__")
#pragma map(ofstream::ofstream(const char*, int, int, _CCSID_T), \
    "__UTF32_ofstream_ct_const_char_P_int_int_CCSID_T__")
#pragma map(ofstream::ofstream(const char*, int, _CCSID_T), \
    "__UTF32_ofstream_ct_const_char_P_int_CCSID_T__")
#pragma map(ofstream::open(const char*, int, int, _CCSID_T), \
    "__UTF32_ofstream_open_const_char_P_int_int_CCSID_T__")
#pragma map(fstream::fstream(const char*, int, int, _CCSID_T), \
    "__UTF32_fstream_ct_const_char_P_int_int_CCSID_T__")
#pragma map(fstream::fstream(const char*, int, _CCSID_T), \
    "__UTF32_fstream_ct_const_char_P_int_CCSID_T__")
#pragma map(fstream::open(const char*, int, int, _CCSID_T), \
    "__UTF32_fstream_open_const_char_P_int_int_CCSID_T__")
#pragma map(fstream::overflow(int), \
    "__UTF32_fstream_overflow_int")
#endif

#endif //defined(__LLP64_RTBND__)

#if (__OS400_TGTVRM__ >= 510)
   #pragma datamodel(pop)
   #pragma object_model(pop)
#endif


#endif
