
/* 5716-CX5, 5799-GDW, 5769-CX5                                   */
/* (C) Copyright IBM Corp. 1996,2003                              */
/* ALL rights reserved.                                           */
/* US Government Users Restricted Rights-                         */
/* Use, duplication or disclosure restricted                      */
/* by GSA ADP schedule Contract with IBM Corp.                    */
/*                                                                */
/* Licensed Materials-Property of IBM.                            */

/*ident       "@(#)cls4:incl-master/const-headers/iostream.h  1.6" */

/*******************************************************************************

C++ source for the C++ Language System, Release 3.0.  This product
is a new release of the original cfront developed in the computer
science research center of AT&T Bell Laboratories.

Copyright (c) 1991, 1992 AT&T and UNIX System Laboratories, Inc.
Copyright (c) 1984, 1989, 1990 AT&T.  All Rights Reserved.

*******************************************************************************/
#ifndef IOSTREAMH
#define IOSTREAMH

#if (__OS400_TGTVRM__ >= 510)
  #pragma datamodel(P128)
  #pragma object_model(compat)
#endif


#if defined(__LLP64_RTBND__) || defined(__UTF32__)
  #if defined(__LLP64_RTBND__)
    #warning This file is deprecated. Consider using the equivalent C++ \
Standard Library function.
  #endif

    #include <iostream>

    using std::iostream;
    using std::ostream;
    using std::istream;
    using std::ios;
    using std::streambuf;
    using std::cout;
    using std::cin;
    using std::cerr;
    using std::clog;
    using std::ws;
    using std::endl;
    using std::ends;
    using std::flush;

#else // defined(__LLP64_RTBND__)
#include <string.h> /* Some inlines use memcpy */

#if !defined(__BUILD_USL_ACCESS__)
#    define __BUILD_USL_ACCESS__
#endif

/* If EOF is defined already verify that it is -1.  Otherwise
 * define it.
 */

#ifdef EOF
#        if EOF!=-1
#                define EOF (-1)
#        endif
#else
#        define EOF (-1)
#endif

/* Don't worry about NULL not being 0 */
#ifndef NULL
#        define NULL 0
#endif

#define        zapeof(c) ((c)&0377)
            /* extracts char from c. The critical requirement is
             *      zapeof(EOF)!=EOF
             * ((c)&0377) and ((unsigned char)(c)) are alternative definitions
             * whose efficiency depends on compiler environment.
             */

#if ((__OS400_TGTVRM__ >= 510) && !defined(__BUILD_ATT370__))
 #if defined(_LONG_LONG)
   typedef long long streampos ;
   typedef long long streamoff ;
 #else
    #error ***ERROR: Type definition LONG LONG not enabled.
 #endif
#else
 typedef long streampos ;
 typedef long streamoff ;
#endif

class streambuf ;
class ostream ;
union ios_user_union;


class ios {
public: /* Some enums are declared in ios to avoid pollution of
         * global namespace
         */
        enum io_state        { goodbit=0, eofbit=1, failbit=2, badbit=4,
                                hardfail=0200};
                                /* hard fail can be set and reset internally,
                                 * but not via public function */
        enum open_mode        { in=1, out=2, ate=4, app=010, trunc=020,
                                nocreate=040, noreplace=0100,
                                bin=0200, binary=bin, text=0400 } ;
        enum seek_dir        { beg=0, cur=1, end=2 } ;

        /* flags for controlling format */
        enum                { skipws=01,
                                        /* skip whitespace on input */
                          left=02,  right=04, internal=010,
                                        /* padding location */
                          dec=020, oct=040, hex=0100,
                                        /* conversion base */
                          showbase=0200, showpoint=0400, uppercase=01000,
                          showpos=02000,
                                        /* modifiers */
                          scientific=04000, fixed=010000,
                                        /* floating point notation */
                          unitbuf=020000, stdio=040000
                                        /* stuff to control flushing */
                          } ;
        static const long
                        basefield ; /* dec|oct|hex */
        static const long
                        adjustfield ; /* left|right|internal */
        static const long
                        floatfield ; /* scientific|fixed */
public:
                        ios(streambuf*) ;
        virtual                ~ios() ;

        long                flags() const         { return x_flags ; }
        long                flags(long f);

        long                setf(long setbits, long field);
        long                setf(long) ;
        long                unsetf(long) ;

        int                width()        const        { return x_width ; }
        int                width(int w)
        {
                        int i = x_width ; x_width = w ; return i ;
        }

        ostream*        tie(ostream* s);
        ostream*        tie()                { return x_tie ; }
        char                fill(char) ;
        char                fill() const        { return x_fill ; }
        int                precision(int) ;
        int                precision() const        { return x_precision ; }

        int                rdstate() const        { return state ; }
                        operator void*()
                                {
                                if (state&(failbit|badbit|hardfail)) return 0 ;
                                else return this ;
                                }
                        operator const void*() const
                                {
                                if (state&(failbit|badbit|hardfail)) return 0 ;
                                else return this ;
                                }

        int                operator!() const
                                { return state&(failbit|badbit|hardfail); }
        int                eof() const        { return state&eofbit; }
        int                fail() const
                              { return state&(failbit|badbit|hardfail); }
        int                bad() const        { return state&badbit ; }
        int                good() const        { return state==0 ; }
        void                clear(int i =0)
                                {
                                state =  (i&0377) | (state&hardfail) ;
                                ispecial = (ispecial&~0377) | state ;
                                ospecial = (ospecial&~0377) | state ;
                                }
        streambuf*        rdbuf() { return bp ;}

public: /* Members related to user allocated bits and words */
        long &                iword(int) ;
        void* &                pword(int) ;
        static long        bitalloc() ;
        static int        xalloc() ;

private: /*** privates for implemting allocated bits and words */
        static long        nextbit ;
        static long        nextword ;

        int                nuser ;
        union ios_user_union*
                        x_user ;
        int        uresize(int) ;
public: /* static member functions */
        static void        sync_with_stdio() ;
protected:
        enum                 { skipping=01000, tied=02000 } ;
                        /*** bits 0377 are reserved for userbits ***/
        streambuf*        bp;
        void                setstate(int b)
                        {        state |= (b&0377) ;
                                ispecial |= b&~skipping ;
                                ispecial |= b ;
                        }
        int                state;
        int                ispecial;
        int                ospecial;
        int                isfx_special;
        int                osfx_special;
        int                delbuf;
        ostream*        x_tie;
        long                 x_flags;
        short                x_precision;
        char                x_fill;
        short                 x_width;

        static void        (*stdioflush)() ;

        void                init(streambuf*) ;
                                /* Does the real work of a constructor */
                        ios() ; /* No initialization at all. Needed by
                                 * multiple inheritance versions */
        int                assign_private ;
                                /* needed by with_assgn classes */
private:
__BUILD_USL_ACCESS__
                        ios(ios&) ;
        void                operator=(ios&) ;
public:   /* old stream package compatibility */
        int                skip(int i) ;
};

class streambuf {
        short                alloc;
        short                x_unbuf;
        char*                 x_base;
        char*                x_pbase;
        char*                x_pptr;
        char*                 x_epptr;
        char*                 x_gptr;
        char*                x_egptr;
        char*                x_eback;
        int                x_blen;
    private:
                        streambuf(streambuf&); /* Declared but not defined */
        void            operator=(streambuf&); /* Declared but not defined */
    public:
        void                dbp();
    protected:
        char*                base()                 { return x_base ; }
        char*                pbase()                { return x_pbase ; }
        char*                pptr()                 { return x_pptr ; }
        char*                epptr()         { return x_epptr ; }
        char*                gptr()                 { return x_gptr ; }
        char*                egptr()         { return x_egptr ; }
        char*                eback()         { return x_eback ; }
        char*                 ebuf()                { return x_base+x_blen ; }
        int                blen() const        { return x_blen; }
        void                setp(char*  p, char*  ep)
        {
                x_pbase=x_pptr=p ; x_epptr=ep ;
        }
        void                setg(char*  eb,char*  g, char*  eg)
        {
                x_eback=eb; x_gptr=g ; x_egptr=eg ;
        }
        void                pbump(int n)
        {
                x_pptr+=n ;
        }

        void                gbump(int n)
        {
                x_gptr+=n ;
                }

        void                setb(char* b, char* eb, int a = 0 )
        {
                if ( alloc && x_base ) delete x_base ;
                x_base = b ;
                x_blen= (eb>b) ? (eb-b) : 0 ;
                alloc = a ;
                }
        int                unbuffered() const        { return x_unbuf; }
        void                unbuffered(int unb) { x_unbuf = (unb!=0)  ; }
        int                allocate()
        {
                if ( x_base== 0 && !unbuffered() ) return doallocate() ;
                else                                   return 0 ;
        }
        virtual int         doallocate();
    public :
        virtual int        overflow(int c=EOF);
        virtual int        underflow();
        virtual int        pbackfail(int c);
        virtual int        sync();
        virtual streampos
                        seekoff(streamoff,ios::seek_dir,int =ios::in|ios::out);
        virtual streampos
                        seekpos(streampos, int =ios::in|ios::out) ;
        virtual int        xsputn(const char*  s,int n);
        virtual int        xsgetn(char*  s,int n);

        int                in_avail()
        {
                return x_gptr<x_egptr ? x_egptr-x_gptr : 0 ;
        }

        int                out_waiting()
        {
                if ( x_pptr ) return x_pptr-x_pbase ;
                else              return 0 ;
        }

        int                sgetc()
        {
                /***WARNING: sgetc does not bump the pointer ***/
                return (x_gptr>=x_egptr) ? underflow() : zapeof(*x_gptr);
        }
        int                snextc()
        {
                return (++x_gptr>=x_egptr)
                                ? x_snextc()
                                : zapeof(*x_gptr);
        }
        int                sbumpc()
        {
                return  ( x_gptr>=x_egptr && underflow()==EOF )
                                ? EOF
                                : zapeof(*x_gptr++) ;
        }
        int                optim_in_avail()
        {
                return x_gptr<x_egptr ;
        }
        int                optim_sbumpc()
        {
                return  zapeof(*x_gptr++) ;
        }
        void                stossc()
        {
                if ( x_gptr < x_egptr ||
                     ( x_gptr >= x_egptr && underflow() != EOF ) )
                  x_gptr++;
        }

        int                sputbackc(char c)
        {
                if (x_gptr > x_eback ) {
                        if ( *--x_gptr == c ) return zapeof(c) ;
                        else                       return zapeof(*x_gptr=c) ;
                } else {
                        return pbackfail(c) ;
                }
        }

        int                sputc(int c)
        {
                return (x_pptr>=x_epptr) ? overflow(zapeof(c))
                                      : zapeof(*x_pptr++=c);
        }
        int                sputn(const char*  s,int n)
         {
                if ( n <= (x_epptr-x_pptr) ) {
                        memcpy(x_pptr,s,n) ;
                        pbump(n);
                        return n ;
                } else {
                        return xsputn(s,n) ;
                }
        }
        int                sgetn(char*  s,int n)
        {
                if ( n <= (x_egptr-x_gptr) ) {
                        memcpy(s,x_gptr,n) ;
                        gbump(n);
                        return n ;
                } else {
                        return xsgetn(s,n) ;
                }
        }
        virtual streambuf*
                        setbuf(char*  p, int len) ;
           streambuf*        setbuf(unsigned char*  p, int len) ;

        streambuf*        setbuf(char*  p, int len, int count) ;
                                /* obsolete third argument */
                          /*** Constructors -- should be protected ***/
                        streambuf() ;
                        streambuf(char*  p, int l) ;

                        streambuf(char*  p, int l,int c) ;
                        /* 3 argument form is obsolete.
                         * Use strstreambuf.
                         */
        virtual                ~streambuf() ;
        /*
           The function:
              int streambuf::pptr_non_null()
           was added by IBM to fix a problem in which a number of member
           functions in class istream needed to check that the "pptr()"
           was non-null. You are advised NOT to use this function in your
           code.
        */
        int                pptr_non_null() { return x_pptr != 0; }
private:
        int                x_snextc() ;
};

class istream : virtual public ios {
public: /* Constructor */
                        istream(streambuf*) ;
        virtual                ~istream() ;
public:
        int                ipfx(int noskipws=0)
                        {        if ( noskipws?(ispecial&~skipping):ispecial) {
                                        return do_ipfx(noskipws) ;
                                } else return 1 ;
                        }

        /*
          FUNCTION void isfx() IS INTERNAL AND SHOULD NOT BE USED.
        */
        void                isfx() { }

        istream&        seekg(streampos p) ;
        istream&        seekg(streamoff o, ios::seek_dir d) ;
           streampos        tellg() ;
        istream&        operator>> (istream& (*f)(istream&))
                        {        return (*f)(*this) ; }
        istream&        operator>> (ios& (*f)(ios&) ) ;
        istream&        operator>>(char*);
        istream&        operator>>(signed char*);
        istream&        operator>>(unsigned char*);
        istream&        operator>>(char& c)
                        {        if ( !ispecial && bp->optim_in_avail() &&
                                     bp->pptr_non_null() ) {
                                        c = bp->optim_sbumpc() ;
                                        return *this;
                                }
                                else {
                                        return (rs_complicated(c));
                                }
                        }
        istream&        operator>>(signed char& c)
                        {        if ( !ispecial && bp->optim_in_avail() &&
                                     bp->pptr_non_null() ) {
                                        c = bp->optim_sbumpc() ;
                                        return *this;
                                }
                                else {
                                        return (rs_complicated(c));
                                }
                        }
        istream&        operator>>(unsigned char& c)
                        {        if ( !ispecial && bp->optim_in_avail() &&
                                     bp->pptr_non_null() ) {
                                        c = bp->optim_sbumpc() ;
                                        return *this;
                                }
                                else {
                                        return (rs_complicated(c));
                                }
                        }

        /*
          FUNCTION istream &rs_complicated(char &) IS INTERNAL AND SHOULD
          NOT BE USED.
        */
        istream&        rs_complicated(char& c);

        /*
          FUNCTION istream &rs_complicated(signed char &) IS INTERNAL
          AND SHOULD NOT BE USED.
        */
        istream&        rs_complicated(signed char& c);

        /*
          FUNCTION istream &rs_complicated(unsigned char &) IS INTERNAL
          AND SHOULD NOT BE USED.
        */
        istream&        rs_complicated(unsigned char& c);

        istream&        operator>>(short&);
        istream&        operator>>(int&);
        istream&        operator>>(long&);
        istream&        operator>>(unsigned short&);
        istream&        operator>>(unsigned int&);
        istream&        operator>>(unsigned long&);
        istream&        operator>>(float&);
        istream&        operator>>(double&);
        istream&        operator>>(long double&);
        istream&        operator>>(streambuf*);
        istream&        operator>>(wchar_t*);
        istream&        operator>>(wchar_t&);
    #if ( __OS400_TGTVRM__ >= 510 )
      #if defined(_LONG_LONG)
        istream&        operator>>(long long&);
        istream&        operator>>(unsigned long long&);
      #endif
    #endif
        istream&        get(char* , int lim, char delim='\n');
        istream&        get(signed char* b,int lim, char delim='\n');
        istream&        get(unsigned char* b,int lim, char delim='\n');
        istream&        getline(char* b, int lim, char delim='\n');
        istream&        getline(signed char* b, int lim, char delim='\n');
        istream&        getline(unsigned char* b, int lim, char delim='\n');
        istream&        get(streambuf& sb, char delim ='\n');
        istream&        get(wchar_t&);

        /*
          FUNCTION istream &get_complicated(char &) IS INTERNAL AND SHOULD
          NOT BE USED.
        */
        istream&        get_complicated(char& c);

        /*
          FUNCTION istream &get_complicated(signed char &) IS INTERNAL
          AND SHOULD NOT BE USED.
        */
        istream&        get_complicated(signed char& c);

        /*
          FUNCTION istream &get_complicated(unsigned char &) IS INTERNAL
          AND SHOULD NOT BE USED.
        */
        istream&        get_complicated(unsigned char& c);

        istream&        get(char& c)
                        {
                                if ( !(ispecial & ~skipping) &&
                                       bp->optim_in_avail() ) {
                                        x_gcount = 1 ;
                                        c = bp->sbumpc() ;
                                        return *this;
                                } else {
                                        return (get_complicated(c));
                                }
                        }
        istream&        get(signed char& c)
                        {
                                if ( !(ispecial & ~skipping) &&
                                       bp->optim_in_avail() ) {
                                        x_gcount = 1 ;
                                        c = bp->sbumpc() ;
                                        return *this;
                                } else {
                                        return (get_complicated(c));
                                }
                        }
        istream&        get(unsigned char& c)
                        {
                                if ( !(ispecial & ~skipping) &&
                                       bp->optim_in_avail() ) {
                                        x_gcount = 1 ;
                                        c = bp->sbumpc() ;
                                        return *this;
                                } else {
                                        return (get_complicated(c));
                                }
                        }
        int                 get()
                        {
                                int c ;
                                if ( !ipfx(1) ) return EOF ;
                                else {
                                        c = bp->sbumpc() ;
                                        if ( c == EOF ) setstate(eofbit) ;
                                        return c ;
                                        }
                        }
        int                peek()
                        {
                                if ( ipfx(-1) ) return bp->sgetc() ;
                                else                return EOF ;

                        }
        istream&        ignore(int n=1,int delim=EOF) ;
        istream&        read(char*  s,int n);
        istream&        read(signed char* s,int n)
                        {
                                return read((char*)s,n) ;
                        }
        istream&        read(unsigned char* s,int n)
                        {
                                return read((char*)s,n) ;
                        }
        int                gcount() ;
        istream&        putback(char c);
        int                sync()        { return bp->sync() ; }
protected:

        /*
          FUNCTION int do_ipfx(int) IS INTERNAL AND SHOULD NOT BE USED.
        */
        int                do_ipfx(int noskipws) ;

        /*
          FUNCTION void eatwhite() IS INTERNAL AND SHOULD NOT BE USED.
        */
        void                eatwhite() ;

                        istream() ;
private:
        int                x_gcount ;
        void                 xget(char*  c) ;
        int                inf_special_in(streambuf * nbp);
        int                nan_special_in(streambuf * nbp);
        wchar_t                getawc(int&c);

public: /*** Obsolete constructors, carried over from stream package ***/
        /*
          YOU ARE ADVISED NOT TO USE THE OBSOLETE FUNCTIONS SINCE THEY
          MAY BE REMOVED IN A FUTURE VERSION.
        */
                        istream(streambuf*, int sk, ostream* t=0) ;
                                /* obsolete, set sk and tie
                                 * via format state variables */
                        istream(int size ,char*,int sk=1) ;
                                /* obsolete, use strstream */
                        istream(int fd,int sk=1, ostream* t=0) ;
                                /* obsolete use fstream */
};

class ostream : virtual public ios {
public: /* Constructor */
                        ostream(streambuf*) ;
        virtual                ~ostream();
public:
        int                opfx()        /* Output prefix */
                        {        if ( ospecial )        return do_opfx() ;
                                else                return 1 ;
                        }

        void                osfx()
                        {        if ( osfx_special ) do_osfx() ; }

        ostream&        flush() ;
        ostream&        seekp(streampos p) ;
        ostream&        seekp(streamoff o, ios::seek_dir d) ;
         streampos        tellp() ;

        ostream&        put(char c)
        {
                if (ospecial || osfx_special) {
                        return complicated_put(c);
                }
                else {
                        if (  bp->sputc(c) == EOF )  {
                                setstate(eofbit|failbit) ;
                        }
                        return *this ;
                }
        }

        /*
          FUNCTION ostream &complicated_put(char) IS INTERNAL AND SHOULD
          NOT BE USED.
        */
        ostream&        complicated_put(char c);

        ostream&        operator<<(char c)
        {
                if (ospecial || osfx_special) {
                        return ls_complicated(c);
                }
                else {
                        if (  bp->sputc(c) == EOF )  {
                                setstate(eofbit|failbit) ;
                        }
                        return *this ;
                }
        }

        ostream&        operator<<(signed char c)
        {
                if (ospecial || osfx_special) {
                        return ls_complicated(c);
                }
                else {
                        if (  bp->sputc(c) == EOF )  {
                                setstate(eofbit|failbit) ;
                        }
                        return *this ;
                }
        }

        ostream&        operator<<(unsigned char c)
        {
                if (ospecial || osfx_special) {
                        return ls_complicated(c);
                }
                else {
                        if (  bp->sputc(c) == EOF )  {
                                setstate(eofbit|failbit) ;
                        }
                        return *this ;
                }
        }

        /*
          FUNCTION ostream &ls_complicated(char) IS INTERNAL AND SHOULD
          NOT BE USED.
        */
        ostream&         ls_complicated(char);

        /*
          FUNCTION ostream &ls_complicated(signed char) IS INTERNAL AND
          SHOULD NOT BE USED.
        */
        ostream&         ls_complicated(signed char);

        /*
          FUNCTION ostream &ls_complicated(unsigned char) IS INTERNAL AND
          SHOULD NOT BE USED.
        */
        ostream&         ls_complicated(unsigned char);

        ostream&        operator<<(wchar_t);
        ostream&        operator<<(const wchar_t*);
        ostream&        operator<<(const char*);
    #if defined(__TERASPACE__) || defined(__STGMDL_TERASPACE__)
        ostream&        operator<<(const wchar_t*__ptr64 _X)
                            {
                            return *this << (const wchar_t *__ptr128)_X;
                            }
        ostream&        operator<<(const char*__ptr64 _X)
                            {
                            return *this << (const char *__ptr128)_X;
                            }
    #endif
        ostream&        operator<<(const signed char*);
        ostream&        operator<<(const unsigned char*);
        ostream&        operator<<(int a);
        ostream&        operator<<(long);
        ostream&        operator<<(double);
        ostream&        operator<<(long double);
        ostream&        operator<<(float);
        ostream&        operator<<(unsigned int a);
        ostream&        operator<<(unsigned long);
    #if __OS400_TGTVRM__ >= 510
      #if defined(_LONG_LONG)
        ostream&        operator<<(long long);
        ostream&        operator<<(unsigned long long);
      #endif
    #endif
        ostream&        operator<<(const void*);
        ostream&        operator<<(streambuf*);
        ostream&        operator<<(short i) { return *this << (int)i ; }
        ostream&        operator<<(unsigned short i)
                        { return *this << (int)i  ; }

        ostream&        operator<< (ostream& (*f)(ostream&))
                        { return (*f)(*this) ; }
    #if defined(__TERASPACE__) || defined(__STGMDL_TERASPACE__)
        ostream&        operator<< (ostream& (*__ptr64 f)(ostream&))
                        { return (*f)(*this) ; }
    #endif
        ostream&        operator<< (ios& (*f)(ios&) ) ;

        ostream&        write(const char*  s,int n)
        {
                if ( !state ) {
                        if ( bp->sputn(s,n) != n ) setstate(eofbit|failbit);
                        }
                return *this ;
        }
        ostream&        write(const signed char* s, int n)
        {
                return write((const char*)s,n);
        }
        ostream&        write(const unsigned char* s, int n)
        {
                return write((const char*)s,n);
        }
protected: /* More ostream members */

        /*
          FUNCTION int do_opfx() IS INTERNAL AND SHOULD NOT BE USED.
        */
        int                do_opfx() ;

        /*
          FUNCTION void do_osfx() IS INTERNAL AND SHOULD NOT BE USED.
        */
        void                do_osfx() ;

                        ostream() ;

public: /*** Obsolete constructors, carried over from stream package ***/
        /*
          YOU ARE ADVISED NOT TO USE THE OBSOLETE FUNCTIONS SINCE THEY
          MAY BE REMOVED IN A FUTURE VERSION.
        */
                        ostream(int fd) ;
                                /* obsolete use fstream */
                        ostream(int size ,char*) ;
                                /* obsolete, use strstream */
/*
   Function:
        int                wchar_out(int, char *, int) ;

   has been added by IBM to support wchar_t.

   Functions:
        ostream& pad_complicated(char c)
        ostream& pad_complicated(signed char c)
        ostream& pad_complicated(unsigned char c)

   have been added by IBM.  They are now obsolete, but
   remain for library compatability reasons.
*/
private:
        int                wchar_out(int, char *, int) ;
        ostream&        pad_complicated(char c);
        ostream&        pad_complicated(signed char c);
        ostream&        pad_complicated(unsigned char c);
} ;

class iostream : public istream, public ostream {
public:
                        iostream(streambuf*) ;
        virtual                ~iostream() ;
protected:
                        iostream() ;
        } ;

class istream_withassign : public istream {
public:
                        istream_withassign() ;
        virtual                ~istream_withassign() ;
        istream_withassign&        operator=(istream&) ;
#if (__OS400_TGTVRM__ >= 510)
        istream_withassign&        operator=(istream_withassign&stream)
        {
            return operator=((istream&)stream);
        }
#endif
        istream_withassign&        operator=(streambuf*) ;
} ;

class ostream_withassign : public ostream {
public:
                        ostream_withassign() ;
        virtual                ~ostream_withassign() ;
        ostream_withassign&        operator=(ostream&) ;
#if (__OS400_TGTVRM__ >= 510)
        ostream_withassign&        operator=(ostream_withassign&stream)
        {
            return operator=((ostream&)stream);
        }
#endif
        ostream_withassign&        operator=(streambuf*) ;
} ;

class iostream_withassign : public iostream {
public:
                        iostream_withassign() ;
        virtual                ~iostream_withassign() ;
        iostream_withassign&        operator=(ios&) ;
#if (__OS400_TGTVRM__ >= 510)
        iostream_withassign&        operator=(iostream_withassign&stream)
        {
            return operator=((iostream&)stream);
        }
#endif
        iostream_withassign&        operator=(streambuf*) ;
} ;

#if defined(__UTF32__) || defined(__BUILD_RT__)
namespace _UTF32_ON
{
extern istream_withassign cin ;
extern ostream_withassign cout ;
extern ostream_withassign cerr ;
extern ostream_withassign clog ;
}
#if !defined(__BUILD_RT__)
using _UTF32_ON::cin;
using _UTF32_ON::cout;
using _UTF32_ON::cerr;
using _UTF32_ON::clog;
#endif
#endif

#if !defined(__UTF32__) || defined(__BUILD_RT__)
extern istream_withassign cin ;
extern ostream_withassign cout ;
extern ostream_withassign cerr ;
extern ostream_withassign clog ;
#endif

ios&                dec(ios&) ;

#if (__OS400_TGTVRM__ >= 510 && !defined(XCP))
inline ostream& endl(ostream& i)
{
    i.put('\n') ;
    i.flush() ;
    return i ;
}
#else
ostream&        endl(ostream& i) ;
#endif

ostream&        ends(ostream& i) ;
ostream&        flush(ostream&) ;
ios&                hex(ios&) ;
ios&                oct(ios&) ;
istream&        ws(istream&) ;


#if defined(__bcd_h)
inline ostream &
operator << (ostream &os, const _ConvertDecimal &val)
{
   char output[DEC_DIG+10];
   char format[15];
   sprintf (format, "%cD(%d,%d)", '%', val.DigitsOf(), val.PrecisionOf());
   sprintf (output, format, val);
   return (os << (char *)output);
}

template <int dig, int prec>
inline ostream &
operator << (ostream &os, const _DecimalT<dig,prec> &val)
{
   char output[DEC_DIG+10];
   char format[15];
   sprintf (format, "%cD(%d,%d)", '%', dig, prec);
   sprintf (output, format, val);
   return (os << (char *)output);
}

template <int dig, int prec>
inline istream &
operator >> (istream &is, _DecimalT<dig,prec> &val)
{
   char input[255];
   is >> input;
   val = _ConvertDecimal(input);
   return is;
}
#endif

#if defined(__UTF32__)
#pragma map(istream::operator>>(wchar_t*), \
    "__UTF32_istream_extractor_wchar_t_P__")
#pragma map(istream::operator>>(wchar_t&), \
    "__UTF32_istream_extractor_wchar_t_R__")
#pragma map(istream::getawc(int &), "__UTF32_istream_getawc_int_R__")
#pragma map(istream::get(wchar_t&), "__UTF32_istream_get_wchar_t_R__")
#pragma map(ostream::operator<<(const wchar_t*), \
    "__UTF32_ostream_inserter_wchar_t_P__")
#pragma map(ostream::operator<<(wchar_t), \
    "__UTF32_ostream_inserter_wchar_t_R__")
#pragma map(ostream::wchar_out(int, char *, int), \
    "__UTF32_ostream_wchar_out_int_char_P_int__")
#endif

#endif //defined(__LLP64_RTBND__)

#if (__OS400_TGTVRM__ >= 510)
   #pragma datamodel(pop)
   #pragma object_model(pop)
#endif

#endif
