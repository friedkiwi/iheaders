/**************************************************************************
*                                                                         *
* <stdiostr.h> header file                                                *
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

/*******************************************************************************

C++ source for the C++ Language System, Release 3.0.  This product
is a new release of the original cfront developed in the computer
science research center of AT&T Bell Laboratories.

Copyright (c) 1991, 1992 AT&T and UNIX System Laboratories, Inc.
Copyright (c) 1984, 1989, 1990 AT&T.  All Rights Reserved.

*******************************************************************************/
#ifndef STDSTREAMH
#define STDSTREAMH

#if (__OS400_TGTVRM__ >= 510)
  #if defined(__LLP64_RTBND__)
    #error RTBND with *LLP64 not supported for this file
  #elif defined(__UTF32__)
    #error LOCALETYPE with *LOCALEUTF not supported for this file
  #endif
  #pragma datamodel(P128)
  #pragma object_model(compat)
#endif


#include <iostream.h>
#include <stdio.h>

class stdiobuf : public streambuf {
        /*** stdiobuf is obsolete, should be avoided ***/
public: // Virtuals
        virtual int        overflow(int=EOF);
        virtual int        underflow();
        virtual int        sync() ;
        virtual streampos
                        seekoff(streamoff,ios::seek_dir,int) ;
        virtual int        pbackfail(int c);
public:
                        stdiobuf(FILE* f) ;
        FILE*                stdiofile() { return fp ; }
        virtual                ~stdiobuf() ;
private:
        FILE*                fp ;
        int                last_op ;
        char                buf[2];
};

class stdiostream : public ios {
public:
                        stdiostream(FILE*) ;
                        ~stdiostream() ;
        stdiobuf*        rdbuf() ;
private:
        stdiobuf        buf ;
};



#if (__OS400_TGTVRM__ >= 510)
   #pragma datamodel(pop)
   #pragma object_model(pop)
#endif


#endif

