#ifdef __cplusplus
   #pragma info(none)
#else
   #pragma nomargins nosequence
   #pragma checkout(suspend)
#endif

/*** START HEADER FILE SPECIFICATIONS **************************/
/*                                                             */
/*  Header File Name: netdir.h                                 */
/*  Header File Description: Defines prototypes, macros, and   */
/*                           structures to be used with the    */
/*                           Name-to-Address Translation       */
/*                           APIs.                             */
/*                                                             */
/*  5769-SS1                                                   */
/*  (C) Copyright IBM Corp. 1998, 1998                         */
/*  All rights reserved.                                       */
/*  US Government Users Restricted Rights -                    */
/*  Use, duplication or disclosure restricted                  */
/*  by GSA ADP Schedule Contract with IBM Corp.                */
/*                                                             */
/*  Licensed Materials-Property of IBM                         */
/*  Copyright (c) 1989 by Sun Microsystems, Inc.               */
/*                                                             */
/*  Header Files Included:  tirpccom.h                         */
/*                          netconfig.h                        */
/*                                                             */
/*  Macros list:  ND_HOSTSERV                                  */
/*                ND_HOSTSERVLIST                              */
/*                ND_ADDR                                      */
/*                ND_ADDRLIST                                  */
/*                ND_SET_BROADCAST                             */
/*                ND_SET_RESERVEDPORT                          */
/*                ND_CHECK_RESERVEDPORT                        */
/*                ND_MERGEADDR                                 */
/*                ND_TRY_AGAIN                                 */
/*                ND_NO_RECOVERY                               */
/*                ND_NO_DATA                                   */
/*                ND_NO_ADDRESS                                */
/*                ND_BADARG                                    */
/*                ND_NOMEM                                     */
/*                ND_OK                                        */
/*                ND_NOHOST                                    */
/*                ND_NOSERV                                    */
/*                ND_NOSYM                                     */
/*                ND_OPEN                                      */
/*                ND_ACCESS                                    */
/*                ND_UKNWN                                     */
/*                ND_NOCTRL                                    */
/*                ND_FAILCTRL                                  */
/*                ND_SYSTEM                                    */
/*                ND_CONVERT                                   */
/*                HOST_SELF                                    */
/*                HOST_ANY                                     */
/*                HOST_BROADCAST                               */
/*                HOST_SELF_BIND                               */
/*                HOST_SELF_CONNECT                            */
/*                RPC_ANYFD                                    */
/*                                                             */
/*  Structure List: nd_addrlist                                */
/*                  nd_hostservlist                            */
/*                  nd_hostserv                                */
/*                  nd_mergearg                                */
/*                                                             */
/*  Function prototype list: netdir_getbyname()                */
/*                           netdir_getbyaddr()                */
/*                           netdir_free()                     */
/*                           netdir_options()                  */
/*                           netdir_sperror()                  */
/*                           uaddr2taddr()                     */
/*                           taddr2uaddr()                     */
/*                                                             */
/*  Change Activity:                                           */
/*  CFD List:                                                  */
/*                                                             */
/*  FLAG REASON   LEVEL DATE   PGMR     CHANGE DESCRIPTION     */
/*  ---- -------  ----- ----   -----    -------------------    */
/*  $A0= D94971   4D20  980227 ROCH     New Include            */
/*  End CFD List.                                              */
/*                                                             */
/*  Additional notes about the Change Activity                 */
/*  End Changed Activity.                                      */
/*                                                             */
/*** END HEADER FILE SPECIFICATIONS ****************************/

#ifndef __NETDIR__
#define __NETDIR__ 1

#include <netconfig.h>
#include <tirpccom.h>
#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(P128)      /* @B1A*/
#endif                       /* @B1A*/

#ifndef __QBFC_EXTERN
   #ifdef __ILEC400__
      #define QBFC_EXTERN extern
   #else
      #define QBFC_EXTERN extern "C"
   #endif
   #define __QBFC_EXTERN
#endif

/* The following constant is defined in RPC_COM, but is included here
 * so that an end user does not need to include that seprately.
 */
#ifndef RPC_ANYFD
#define RPC_ANYFD       -1
#endif

struct nd_addrlist {
    int                n_cnt;       /* number of netbufs */
    struct netbuf      *n_addrs;          /* the netbufs */
};

struct nd_hostserv {
    char        *h_host;                 /* the host name */
    char        *h_serv;              /* the service name */
};

struct nd_hostservlist {
    int                 h_cnt;  /* number of nd_hostservs */
    struct nd_hostserv  *h_hostservs;      /* the entries */
};

struct nd_mergearg {        /* parameter struct for option
                             * ND_MERGEADDR               */
    char *s_uaddr;    /* input: server's univeral address */
    char *c_uaddr;    /* input: client's univeral address */
    char *m_uaddr;     /* output: merged univeral address */
};


QBFC_EXTERN int netdir_getbyname (struct netconfig *,
                                 struct nd_hostserv *,
                                 struct nd_addrlist **);

QBFC_EXTERN int netdir_getbyaddr (struct netconfig *,
                                 struct nd_hostservlist **,
                                 struct netbuf *);

QBFC_EXTERN void netdir_free (void *, int);

QBFC_EXTERN struct netbuf *uaddr2taddr (struct netconfig *,
                                       char *);

QBFC_EXTERN char *taddr2uaddr (struct netconfig *,
                              struct netbuf *);

QBFC_EXTERN int netdir_options (struct netconfig *,
                                int,
                                int,
                                char *);

QBFC_EXTERN void netdir_sperror (void);

QBFC_EXTERN int nd_errno;     /* name-to-address translation error code */

/*
 * These are all objects that can be freed by netdir_free
 */
#define ND_HOSTSERV             0
#define ND_HOSTSERVLIST         1
#define ND_ADDR                 2
#define ND_ADDRLIST             3

/*
 * These are the options for netdir_options
 */
#define ND_SET_BROADCAST         1
#define ND_SET_RESERVEDPORT      2
#define ND_CHECK_RESERVEDPORT    3
#define ND_MERGEADDR             4

/*
 * These are the various errors that can be encountered while
 * attempting to translate names to addresses. Note that none
 * of them (except maybe no memory) are truely fatal unless
 * the ntoa deamon is on its last attempt to translate the
 * name.
 *
 * Negative errors terminate the search resolution process,
 * positive errors are treated as warnings.
 */
#define ND_TRY_AGAIN    -5  /* Non-Authoritative Host not found,
                             * or SERVERFAIL                 */
#define ND_NO_RECOVERY  -4  /* Non recoverable errors        */
#define ND_NO_DATA      -3  /* Valid name, no data record of
                             * requested type                */
#define ND_NO_ADDRESS   ND_NO_DATA      /* no address,
                                         *look for MX record */
#define ND_BADARG       -2      /* Bad arguments passed      */
#define ND_NOMEM        -1    /* No virtual memory left      */
#define ND_OK            0     /* Translation successful     */
#define ND_NOHOST        1   /* Hostname was not resolvable  */
#define ND_NOSERV        2   /* Service was unknown          */
#define ND_NOSYM         3   /* Couldn't resolve symbol      */
#define ND_OPEN          4   /* File couldn't be opened      */
#define ND_ACCESS        5   /* File is not accessible       */
#define ND_UKNWN         6   /* Unknown object to be freed   */
#define ND_NOCTRL        7   /* Unknown option passed to
                              * netdir_options               */
#define ND_FAILCTRL      8  /*Option failed in netdir_options*/
#define ND_SYSTEM        9   /* Other System error           */
#define ND_CONVERT      10    /* Conversion error            */

/*
 * The following special case host names are used to give the
 * underlying transport provider a clue as to the intent of
 * the request.
 */

#define  HOST_SELF      "\\1"    /* The generic bind address
                                  * for this tp              */
#define  HOST_ANY       "\\2"    /* A "don't care" option for
                                  * the host                 */
#define  HOST_BROADCAST "\\3"    /* The broadcast address for
                                  * this tp                  */
#define  HOST_SELF_BIND  HOST_SELF

#define  HOST_SELF_CONNECT  "\\4"

#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(pop)       /* @B1A*/
#endif                       /* @B1A*/

#endif /* ndef __NETDIR__ */
#ifdef __cplusplus
   #pragma info(restore)
#else
   #pragma checkout(resume)
#endif
