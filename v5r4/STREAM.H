/**************************************************************************
*                                                                         *
* <stream.h> header file                                                  *
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
/**************************************************************************

C++ source for the C++ Language System, Release 3.0.  This product
is a new release of the original cfront developed in the computer
science research center of AT&T Bell Laboratories.

Copyright (c) 1991, 1992 AT&T and UNIX System Laboratories, Inc.
Copyright (c) 1984, 1989, 1990 AT&T.  All Rights Reserved.

***************************************************************************/

#ifndef STREAMH
#define STREAMH

#if (__OS400_TGTVRM__ >= 510)
  #pragma datamodel(P128)
  #pragma object_model(compat)
#endif

#include <iostream.h>
#include <iomanip.h>
#include <fstream.h>

#if defined(__LLP64_RTBND__) || defined(__UTF32__)
  #if defined(__LLP64_RTBND__)
    #error RTBND with *LLP64 not supported for this file
  #endif
#else
#include <stdiostr.h>
#endif // defined(__LLP64_RTBND__) || defined(__UTF32__)
        /* for filebuf */

#ifndef NULL
#define NULL        0
#endif

extern char*  oct(long, int =0);
extern char*  dec(long, int =0);
extern char*  hex(long, int =0);

extern char*  chr(int, int =0);        /* chr(0) is the empty string "" */
extern char*  str(const char*, int =0);
extern char*  form(const char* ...);
                        /* printf format
                         * Things may go terribly wrong (maybe even core
                         * dumps, if form tries to create a string with
                         * more than "max_field_width" characters. */

/* WS used to be a special in streams. The WS manipulator
 * is implemented differently but may be extracted from an istream
 * with the same effect as the old form.
 */

extern istream& WS(istream&) ;
extern void eatwhite(istream&) ;

static const int input = (ios::in) ;
static const int output = (ios::out) ;
static const int append = (ios::app) ;
static const int atend = (ios::ate) ;
static const int _good = (ios::goodbit) ;
static const int _bad = (ios::badbit) ;
static const int _fail = (ios::failbit) ;
static const int _eof = (ios::eofbit) ;

typedef ios::io_state state_value ;


#if (__OS400_TGTVRM__ >= 510)
   #pragma datamodel(pop)
   #pragma object_model(pop)
#endif

#endif
