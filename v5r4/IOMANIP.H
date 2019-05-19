/* =================================================================  */
/*  IBM C Set ++ for OS/400 Library header file              V4R1M0   */
/*  Copyright: 5716-CX4 (c) IBM Corp 1994                             */
/* =================================================================  */
/*ident        "@(#)cls4:incl-master/const-headers/iomanip.h        1.2" */
/**************************************************************************

C++ source for the C++ Language System, Release 3.0.  This product
is a new release of the original cfront developed in the computer
science research center of AT&T Bell Laboratories.

Copyright (c) 1991, 1992 AT&T and UNIX System Laboratories, Inc.
Copyright (c) 1984, 1989, 1990 AT&T.  All Rights Reserved.

*****************************************************************************/

#ifndef IOMANIPH
#define IOMANIPH

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
    #include <iomanip>

    using std::showbase;
    using std::noshowbase;
    using std::showpoint;
    using std::noshowpoint;
    using std::showpos;
    using std::noshowpos;
    using std::skipws;
    using std::noskipws;
    using std::uppercase;
    using std::nouppercase;
    using std::internal;
    using std::left;
    using std::right;
    using std::dec;
    using std::hex;
    using std::oct;
    using std::fixed;
    using std::scientific;
    using std::resetiosflags;
    using std::setiosflags;
    using std::setbase;
    using std::setfill;
    using std::setprecision;
    using std::setw;
#else // defined(__LLP64_RTBND__)
#include <generic.h>

#ifndef IOSTREAMH
#include <iostream.h>
#endif

#define SMANIP(T)name2(smanip_,T)
#define SAPP(T)name2(sapply_,T)
#define IMANIP(T)name2(imanip_,T)
#define OMANIP(T)name2(omanip_,T)
#define IOMANIP(T)name2(iomanip_,T)
#define IAPP(T)name2(iapply_,T)
#define OAPP(T)name2(oapply_,T)
#define IOAPP(T)name2(ioapply_,T)

#define IOMANIPdeclare(T)                                                \
class SMANIP(T) {                                                        \
        ios& (*fct)(ios&,T) ;                                                \
        T arg ;                                                                \
public:                                                                        \
        SMANIP(T)(ios& (*f)(ios&, T), T a) :                                \
                        fct(f), arg(a) { }                                \
        friend istream& operator>>(istream& i, const SMANIP(T)& m) {        \
                        ios* s = &i ;                                        \
                        (*m.fct)(*s,m.arg) ; return i ; }                \
        friend ostream& operator<<(ostream& o, const SMANIP(T)& m) {        \
                        ios* s = &o ;                                        \
                        (*m.fct)(*s,m.arg) ; return o ; }                \
        } ;                                                                \
class SAPP(T) {                                                                \
        ios& (*fct)(ios&, T) ;                                                \
public:                                                                        \
        SAPP(T)(ios& (*f)(ios&,T)) : fct(f) { }                                \
        SMANIP(T) operator()(T a) {                                        \
                        return SMANIP(T)(fct,a) ; }                        \
        } ;                                                                \
class IMANIP(T) {                                                        \
        istream& (*fct)(istream&,T) ;                                        \
        T arg ;                                                                \
public:                                                                        \
        IMANIP(T)(istream& (*f)(istream&, T), T a ) :                        \
                fct(f), arg(a) { }                                        \
        friend istream& operator>>(istream& s, const IMANIP(T)& m) {        \
                return(*m.fct)(s,m.arg) ;                                \
                }                                                        \
        } ;                                                                \
class IAPP(T) {                                                                \
        istream& (*fct)(istream&, T) ;                                        \
public:                                                                        \
        IAPP(T)(istream& (*f)(istream&,T)) : fct(f) { }                        \
        IMANIP(T) operator()(T a) {                                        \
                        return IMANIP(T)(fct,a) ; }                        \
        } ;                                                                \
class OMANIP(T) {                                                        \
        ostream& (*fct)(ostream&,T) ;                                        \
        T arg ;                                                                \
public:                                                                        \
        OMANIP(T)(ostream& (*f)(ostream&, T), T a ) :                        \
                fct(f), arg(a) { }                                        \
        friend ostream& operator<<(ostream& s, const OMANIP(T)& m) {        \
                return(*m.fct)(s,m.arg) ;                                \
                }                                                        \
        } ;                                                                \
class OAPP(T) {                                                                \
        ostream& (*fct)(ostream&, T) ;                                        \
public:                                                                        \
        OAPP(T)(ostream& (*f)(ostream&,T)) : fct(f) { }                        \
        OMANIP(T) operator()(T a) {                                        \
                        return OMANIP(T)(fct,a) ; }                        \
        } ;                                                                \
class IOMANIP(T) {                                                        \
        iostream& (*fct)(iostream&,T) ;                                        \
        T arg ;                                                                \
public:                                                                        \
        IOMANIP(T)(iostream& (*f)(iostream&, T), T a ) :                \
                fct(f), arg(a) { }                                        \
        friend istream& operator>>(iostream& s, const IOMANIP(T)& m) {        \
                return(*m.fct)(s,m.arg) ;                                \
                }                                                        \
        friend ostream& operator<<(iostream& s, const IOMANIP(T)& m) {        \
                return(*m.fct)(s,m.arg) ;                                \
                }                                                        \
        } ;                                                                \
class IOAPP(T) {                                                        \
        iostream& (*fct)(iostream&, T) ;                                \
public:                                                                        \
        IOAPP(T)(iostream& (*f)(iostream&,T)) : fct(f) { }                \
        IOMANIP(T) operator()(T a) {                                        \
                        return IOMANIP(T)(fct,a) ; }                        \
        } ;                                                                \



IOMANIPdeclare(int) ;
IOMANIPdeclare(long) ;

SMANIP(int)         setbase(int b) ;        /* 10, 8, 16 or 0 */
SMANIP(long)        resetiosflags(long b) ;
SMANIP(long)        setiosflags(long b) ;
SMANIP(int)        setfill(int f);
SMANIP(int)        setprecision(int p);
SMANIP(int)        setw(int w) ;

#endif //defined(__LLP64_RTBND__)

#if (__OS400_TGTVRM__ >= 510)
   #pragma datamodel(pop)
   #pragma object_model(pop)
#endif


#endif
