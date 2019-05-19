#ifdef __cplusplus
   #pragma info(none)
#else
   #pragma nomargins nosequence
   #pragma checkout(suspend)
#endif
/*** START HEADER FILE SPECIFICATIONS ********************************/
/*                                                                   */
/* Header File Name:  resolv.h                                       */
/*                                                                   */
/* Descriptive Name: Defines global information used by the          */
/*                   sockets resolver routines                       */
/*                                                                   */
/*                                                                   */
/* 5763-SS1, 5716-SS1, 5722-SS1                                      */
/* (C) Copyright IBM Corp. 1994, 2001                                */
/* All rights reserved.                                              */
/* US Government Users Restricted Rights -                           */
/* Use, duplication or disclosure restricted                         */
/* by GSA ADP Schedule Contract with IBM Corp.                       */
/*                                                                   */
/* Licensed Materials-Property of IBM                                */
/*                                                                   */
/* Copyright (c) 1982, 1983, 1986, 1987. 1989                        */
/*    The Regents of the University of California.                   */
/* All rights reserved.  The Berkeley software License Agreement     */
/* specifies the terms and conditions for redistribution.            */
/*                                                                   */
/*                                                                   */
/* Portions Copyright (c) 1996-1999 by Internet Software Consortium. */
/*                                                                   */
/* Permission to use, copy, modify, and distribute this software for */
/* any purpose with or without fee is hereby granted, provided that  */
/* the above copyright notice and this permission notice appear in   */
/* all copies.                                                       */
/*                                                                   */
/*          Defines macros, variables, and structures                */
/*          to be used with the sockets resolver routines.           */
/*                                                                   */
/* Header Files Included:                                            */
/*                                                                   */
/*          arpa/nameser.h                                           */
/*          netinet/in.h                                             */
/*          sys/types.h                                              */
/*          resolv_u.h                                           @A1A*/
/*                                                                   */
/* Macros List:                                                      */
/*          MAXDNSRCH                                                */
/*          MAXLVLSRCH                                               */
/*          MAXNS                                                    */
/*          MAXRESOLVSORT                                            */
/*                                                                   */
/*          RES_AAONLY                                               */
/*          RES_CP850                                             A1A*/
/*          RES_DEFAULT                                              */
/*          RES_DEFNAMES                                             */
/*          RES_DNSRCH                                               */
/*          RES_IGNTC                                                */
/*          RES_INIT                                                 */
/*          RES_INSECURE1                                         A1A*/
/*          RES_INSECURE2                                         A1A*/
/*          RES_KEEPTSIG                                          A1A*/
/*          RES_NOALIASES                                         A1A*/
/*          RES_NOCACHE                                           A1A*/
/*          RES_NOCHECKNAME                                       A1A*/
/*          RES_NSADDRONLY                                        A1A*/
/*          RES_RETRYTCP                                          A1A*/
/*          RES_RECURSE                                              */
/*          RES_ROTATE                                            A1A*/
/*          RES_STAYOPEN                                             */
/*          RES_USEVC                                                */
/*          RES_XINIT                                             A1A*/
/*                                                                   */
/*          RES_EXHAUSTIVE                                       @A1A*/
/*                                                                   */
/*          nsaddr                                                   */
/*                                                                   */
/* Structure List:                                                   */
/*                                                                   */
/*          state                                                    */
/*          res_state                                            @A1A*/
/*                                                                   */
/* Function Prototype List:                                          */
/*                                                                   */
/*          None                                                     */
/*                                                                   */
/*                                                                   */
/* Change Activity:                                                  */
/*                                                                   */
/*   CFD List:                                                       */
/*                                                                   */
/*   FLAG REASON       LEVEL DATE    PGMR     CHANGE DESCRIPTION     */
/*   ---- ------------ ----- ------- -------- ---------------------- */
/*   $A0= D3188200     3D10  940225  ROCH     New include.           */
/*   $A1= Dxxxxxxx     5D10  991122  ROCH     Updated to support new */
/*                                            threadsafe routines and*/
/*                                            dynamic update routines*/
/*   $B1= Dxxxxxxx     5D10  991229  ROCH     Teraspace stage II     */
/*                                                                   */
/*   End CFD List.                                                   */
/*                                                                   */
/*   Additional notes about the Change Activity:                     */
/*                                                                   */
/* End Change Activity                                               */
/*                                                                   */
/*** END HEADER FILE SPECIFICATIONS **********************************/

#ifndef __resolv_h
  #define __resolv_h

#ifndef __QBFC_EXTERN
    #ifdef __ILEC400__
        #define QBFC_EXTERN extern
    #else
        #define QBFC_EXTERN extern "C"
    #endif

    #define __QBFC_EXTERN
#endif

/*********************************************************************/
/* Header files                                                      */
/*********************************************************************/

#include <arpa/nameser.h>             /* MAXDNAME typedef and function
                                                prototypes           */
#include <netinet/in.h>               /* sockaddr_in structure       */
#include <sys/types.h>                /* u_short typedef             */

#if (__OS400_TGTVRM__>=510)                                   /* @B1A*/
#pragma datamodel(P128)                                       /* @B1A*/
#endif                                                        /* @B1A*/

/*********************************************************************/
/* Macros for options flag in _res structure                         */
/*********************************************************************/
#define RES_AAONLY       0x0001       /* request authoritative answer*/
#define RES_DEFNAMES     0x0002       /* append default domain name
                                         to names without '.'        */
#define RES_DNSRCH       0x0004       /* append search list entries
                                         to names not ending in '.'  */
#define RES_IGNTC        0x0008       /* ignore truncation           */
#define RES_INIT         0x0010       /* state structure is
                                         initialized                 */
#define RES_RECURSE      0x0020       /* recursive query             */
#define RES_STAYOPEN     0x0040       /* keep TCP connection open    */
#define RES_USEVC        0x0080       /* use TCP instead of UDP      */

                                                        /* Start @A1A*/
#define RES_INSECURE1    0x0200       /* type 1 security disabled    */
#define RES_INSECURE2    0x0400       /* type 2 security disabled    */
#define RES_NOALIASES    0x0800       /* turn off HOSTALIASES feature*/
#define RES_ROTATE       0x1000       /* rotate ns list              */
#define RES_NOCHECKNAME  0x2000       /* do not check names          */
#define RES_KEEPTSIG     0x4000       /* do not strip TSIG records   */
#define RES_NOCACHE      0x8000       /* do not use the answer cache */
/* non-standard flags                                                */
#define RES_XINIT        0x0100       /* extended state structure is
                                         initialized                 */
#define RES_CP850        0x100000     /* use ASCII 850 and not 819.  */
#define RES_RETRYTCP     0x200000     /* use TCP if UDP fails        */
#define RES_NSADDRONLY   0x400000     /* use nsaddr only, not SOCKS  */
                                                          /* End @A1A*/

#define RES_DEFAULT     (RES_RECURSE|RES_DEFNAMES|RES_DNSRCH)
                                      /* default settings for
                                                     state.options   */

/*********************************************************************/
/* Macros for options flag for res_findzonecut()                     */
/*********************************************************************/
#define RES_EXHAUSTIVE     0x00000001 /*always do all queries    @A1A*/

/*********************************************************************/
/* Miscellaneous macros                                              */
/*********************************************************************/
#define nsaddr  nsaddr_list[0]        /* define the address of the
                                         first name server in the
                                         list (see _res structure)   */


#define MAXDNSRCH        6            /* maximum number of domains
                                         to search                   */
#define MAXLVLSRCH       3            /* maximum number of default
                                         domain levels to search     */
#define MAXNS            3            /* maximum number of name
                                         servers                     */
#define MAXRESOLVSORT   10            /* max sort list elements  @A1A*/

/*********************************************************************/
/* Structures                                                        */
/*********************************************************************/
struct state {                        /* AS/400 resolver state       */

  int          retrans;               /* time interval for retries   */
  int          retry;                 /* number of retries performed */
  long         options;               /* resolver options to use     */
  int          nscount;               /* number of server addresses  */
  struct sockaddr_in nsaddr_list[MAXNS]; /* name server addresses    */
  u_short      id;                    /* previous packet ID number   */
  char         defdname[MAXDNAME];    /* default domain name or
                                         search list                 */
  char         reserved0[1];          /* must be initialized to 0x00
                                                                 @A1C*/
  char         reserved1[13];         /* pointer byte alignment. @A1C*/
  char       * dnsrch[MAXDNSRCH+1];   /* domain name/search list     */
  /* Extended state structure begins here.  This is assumed to be
    unitialized storage unless RES_XINIT is set.  It will be
    initialized by res_init() or res_ninit().              Start @A1A*/
struct {
                    struct in_addr addr;
                    uint           mask;
     }            sort_list[MAXRESOLVSORT];
  int          res_h_errno;           /* h_errno for this context    */
  int          extended_error;        /* reply rcode or TSIG error   */
  unsigned     ndots:4;               /* threshold for abs. query    */
  unsigned     nsort:4;               /* number of elements in
                                                         sort_list[] */
  char         state_data[27];        /* internal resolver use only  */
  int          internal_use[4];       /* internal resolver use only  */
  char         reserved[444];         /* initialized to zeros        */
                                                          /* End @A1A*/
};


/*********************************************************************/
/* Static variables                                                  */
/*********************************************************************/
QBFC_EXTERN struct state _res;        /* _res structure used by
                                         resolver routines           */

#ifdef __RESOLV_H_EXTENSIONS                                  /* @A1A*/
/* These are user defined extensions to resolv.h.
   This header does not exist by default and must be created by
   the user.  A sample resolv_u.h is stored in save file
   QUSRTOOL/QATTSYSC.   This sample may be restored to a user header
   file.                                                         @A1A*/
#include "resolv_u.h"                                         /* @A1A*/
#endif                                                        /* @A1A*/

#if (__OS400_TGTVRM__>=510)                                   /* @B1A*/
#pragma datamodel(pop)                                        /* @B1A*/
#endif                                                        /* @B1A*/

#endif /* #ifndef __resolv_h */

#ifdef __cplusplus
    #pragma info(restore)
#else
    #pragma checkout(resume)
#endif

