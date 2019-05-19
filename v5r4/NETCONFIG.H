
 #ifdef __cplusplus
   #pragma info(none)
#else
   #pragma nomargins nosequence
   #pragma checkout(suspend)
#endif

/*** START HEADER FILE SPECIFICATIONS **************************/
/*                                                             */
/*  Header File Name: netconfig.h                              */
/*  Header File Description: Defines prototypes, macros, and   */
/*                           structures to be used with the    */
/*                           Network Selection APIs.           */
/*                                                             */
/*  5769-SS1                                                   */
/*  (C) Copyright IBM Corp. 1998, 1998                         */
/*  All rights reserved.                                       */
/*  US Government Users Restricted Rights -                    */
/*  Use, duplication or disclosure restricted                  */
/*  by GSA ADP Schedule Contract with IBM Corp.                */
/*                                                             */
/*  Licensed Materials-Property of IBM                         */
/* Copyright (c) 1989 by Sun Microsystems, Inc.                */
/*                                                             */
/*  Description: Defines prototypes, macros, and structures    */
/*               to be used with the network selection APIs.   */
/*                                                             */
/*  Header Files Included: None                                */
/*                                                             */
/*  Macros list:                                               */
/*                NETCONFIG                                    */
/*                MAXNETCONFIGLINE                             */
/*                NC_TPI_CLTS                                  */
/*                NC_TPI_COTS                                  */
/*                NC_TPI_COTS_ORD                              */
/*                NC_TPI_CLTS_S                                */
/*                NC_TPI_COTS_S                                */
/*                NC_TPI_COTS_ORD_S                            */
/*                NC_NOFLAG                                    */
/*                NC_VISIBLE                                   */
/*                NC_NOFLAG_C                                  */
/*                NC_VISIBLE_C                                 */
/*                NC_NOPROTOFMLY                               */
/*                NC_LOOPBACK                                  */
/*                NC_INET                                      */
/*                NC_NOPROTO                                   */
/*                NC_TCP                                       */
/*                NC_UDP                                       */
/*                NC_NOLOOKUP                                  */
/*                                                             */
/*  Structure List:                                            */
/*                netconfig                                    */
/*                NCONF_HANDLE                                 */
/*                                                             */
/*  Function prototype list :                                  */
/*                setnetconfig()                               */
/*                getnetconfig()                               */
/*                endnetconfig()                               */
/*                getnetconfigent()                            */
/*                freenetconfigent()                           */
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

#ifndef __NETCONFIG__
#define __NETCONFIG__ 1
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


struct netconfig {
    char            *nc_netid;      /* Network ID, including
                                     * NULL terminator */
    unsigned long   nc_semantics;   /* Semantics */
    unsigned long   nc_flag;        /* Flags */
    unsigned long   nc_unused[8];   /* Reserved for future
                                     * expansion */
    char     *nc_protofmly;         /* Protocol family */
    char     *nc_proto;             /* Protocol name */
};

typedef struct {
    struct netconfig **nc_head;     /* head node of netconfig
                                     * structure list */
    struct netconfig **nc_curr;     /* current node of netconfig
                                     * structure list */
} NCONF_HANDLE;

/* nc_semantics */
#define NC_TPI_CLTS       1    /* Datagram */
#define NC_TPI_COTS       2    /* Virtual Circuit */
#define NC_TPI_COTS_ORD   3   /* Virtual Circuit with ord release*/

/* semantics as strings */
#define NC_TPI_CLTS_S       "TPI_CLTS"
#define NC_TPI_COTS_S       "TPI_COTS"
#define NC_TPI_COTS_ORD_S   "TPI_COTS_ORD"


/* nc_flag */
#define NC_NOFLAG         0x2  /* No flag defined */
#define NC_VISIBLE        0x1  /* is visible */

/* flags as characters */
#define   NC_NOFLAG_C      'N'
#define   NC_VISIBLE_C     'V'


/* nc_protofmly */
#define NC_NOPROTOFMLY     "-"
#define NC_LOOPBACK        "LOOPBACK"
#define NC_INET            "INET"

/* nc_proto */
#define NC_NOPROTO         "-"
#define NC_TCP             "TCP"
#define NC_UDP             "UDP"


/* lookup libraries */
#define NC_NOLOOKUP        "-"


QBFC_EXTERN void *setnetconfig (void);
QBFC_EXTERN struct netconfig *getnetconfig (void *);
QBFC_EXTERN int endnetconfig (void *);
QBFC_EXTERN struct netconfig *getnetconfigent (char *);
QBFC_EXTERN void freenetconfigent (struct netconfig *);
#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(pop)       /* @B1A*/
#endif                       /* @B1A*/

#endif /* ndef __NETCONFIG__ */
#ifdef __cplusplus
   #pragma info(restore)
#else
   #pragma checkout(resume)
#endif
