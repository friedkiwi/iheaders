#ifdef __cplusplus
   #pragma info(none)
#else
   #pragma nomargins nosequence
   #pragma checkout(suspend)
#endif
/*** START HEADER FILE SPECIFICATIONS ********************************/
/*                                                                   */
/* Header File Name:  netdb.h                                        */
/*                                                                   */
/* Descriptive Name: Sockets network library API                     */
/*                                                                   */
/* 5763-SS1, 5716-SS1, 5769-SS1, 5722-SS1                            */
/* (C) Copyright IBM Corp. 1993, 1995, 1998, 2002                    */
/* All rights reserved.                                              */
/* US Government Users Restricted Rights -                           */
/* Use, duplication or disclosure restricted                         */
/* by GSA ADP Schedule Contract with IBM Corp.                       */
/*                                                                   */
/* Licensed Materials-Property of IBM                                */
/*                                                                   */
/* Copyright (c) 1982, 1986 Regents of the University of California. */
/* All rights reserved.  The Berkeley software License Agreement     */
/* specifies the terms and conditions for redistribution.            */
/*                                                                   */
/* Description:                                                      */
/*                                                                   */
/*          Defines prototypes, macros, variables, and               */
/*          structures to be used with the network library           */
/*          routines that perform look ups of host entries,          */
/*          network entries, protocol entries, and service           */
/*          entries.                                                 */
/*                                                                   */
/* Header Files Included:                                            */
/*                                                                   */
/*          None                                                     */
/*                                                                   */
/* Macros List:                                                      */
/*                                                                   */
/*          HOST_NOT_FOUND                                           */
/*          NO_ADDRESS                                               */
/*          NO_DATA                                                  */
/*          NO_RECOVERY                                              */
/*          TRY_AGAIN                                                */
/*          EAI_AGAIN                                            @A3A*/
/*          EAI_BADFLAGS                                         @A3A*/
/*          EAI_FAIL                                             @A3A*/
/*          EAI_FAMILY                                           @A3A*/
/*          EAI_MEMORY                                           @A3A*/
/*          EAI_NONAME                                           @A3A*/
/*          EAI_SERVICE                                          @A3A*/
/*          EAI_SOCKTYPE                                         @A3A*/
/*          EAI_SYSTEM                                           @A3A*/
/*          EAI_MAX                                              @A3A*/
/*                                                                   */
/* Structure List:                                                   */
/*                                                                   */
/*          hostent                                                  */
/*          hostent_data                                             */
/*          netent                                                   */
/*          netent_data                                              */
/*          protoent                                                 */
/*          protoent_data                                            */
/*          servent                                                  */
/*          servent_data                                             */
/*          addrinfo                                             @A3A*/
/*                                                                   */
/* Function Prototype List:   (Not Thread-safe)                      */
/*                                                                   */
/*          endhostent                                               */
/*          endnetent                                                */
/*          endprotoent                                              */
/*          endservent                                               */
/*          gethostbyaddr                                            */
/*          gethostbyname                                            */
/*          gethostent                                               */
/*          getnetbyaddr                                             */
/*          getnetbyname                                             */
/*          getnetent                                                */
/*          getprotobyname                                           */
/*          getprotobynumber                                         */
/*          getprotoent                                              */
/*          getservbyname                                            */
/*          getservbyport                                            */
/*          getservent                                               */
/*          sethostent                                               */
/*          setnetent                                                */
/*          setprotoent                                              */
/*          setservent                                               */
/*                                                                   */
/*          qso_gethostbyaddr98                                  @A2A*/
/*          qso_gethostbyname98                                  @A2A*/
/*          qso_getnetbyaddr98                                   @A2A*/
/*          qso_getnetbyname98                                   @A2A*/
/*          qso_getprotobyname98                                 @A2A*/
/*          qso_getservbyname98                                  @A2A*/
/*          qso_getservbyport98                                  @A2A*/
/*          qso_endhostent98                                     @A2A*/
/*          qso_endnetent98                                      @A2A*/
/*          qso_endprotoent98                                    @A2A*/
/*          qso_endservent98                                     @A2A*/
/*                                                                   */
/* Function Prototype List:  (Thread Safe)                           */
/*                                                                   */
/*          endhostent_r                                             */
/*          endnetent_r                                              */
/*          endprotoent_r                                            */
/*          endservent_r                                             */
/*          gethostbyaddr_r                                          */
/*          gethostbyname_r                                          */
/*          gethostent_r                                             */
/*          getnetbyaddr_r                                           */
/*          getnetbyname_r                                           */
/*          getnetent_r                                              */
/*          getprotobyname_r                                         */
/*          getprotobynumber_r                                       */
/*          getprotoent_r                                            */
/*          getservbyname_r                                          */
/*          getservbyport_r                                          */
/*          getservent_r                                             */
/*          sethostent_r                                             */
/*          setnetent_r                                              */
/*          setprotoent_r                                            */
/*          setservent_r                                             */
/*          getaddrinfo                                          @A3A*/
/*          qso_getaddrinfo98                                    @A3A*/
/*          getnameinfo                                          @A3A*/
/*          qso_getnameinfo98                                    @A3A*/
/*          freeaddrinfo                                         @A3A*/
/*          gai_strerror                                         @A3A*/
/*                                                                   */
/*                                                                   */
/* Change Activity:                                                  */
/*                                                                   */
/*   CFD List:                                                       */
/*                                                                   */
/*   FLAG REASON       LEVEL DATE    PGMR     CHANGE DESCRIPTION     */
/*   ---- ------------ ----- ------- -------- ---------------------- */
/*   $A0= D3188200     3D10  930806  ROCH     New include.           */
/*   $A1= D94779.4     4D20  960916  ROCH     Add thread-safe        */
/*                                            routines.              */
/*   $A2= D98822.1     5D20  010401  ROCH     Update to _XOPEN_SOURCE*/
/*   $A3= D98671.1     5D20  010524  ROCH     Add Protocol-          */
/*                                            Independent routines   */
/*                                                                   */
/*   End CFD List.                                                   */
/*                                                                   */
/*   Additional notes about the Change Activity:                     */
/*                                                                   */
/* End Change Activity                                               */
/*                                                                   */
/*** END HEADER FILE SPECIFICATIONS **********************************/

#ifndef __netdb_h
  #define __netdb_h

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
#include <netinet/in.h>           /* struct in_addr              @A1A*/
#include <sys/socket.h>           /* struct sockaddr, socklen_t  @A3A*/

#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(P128)      /* @B1A*/
#endif                       /* @B1A*/

/*********************************************************************/
/*   File Scoped Constants  - Note these constants are used only     */
/*   in structures hostent_data, netent_data, protoent_data and      */
/*   servent_data. These sturctures are considered opaque and all    */
/*   data should be retrieved thru hostent, netent, protoent,        */
/*   and servent respectively, looking for Null termination of       */
/*   strings and arrays. For AIX compatibility no reference should   */
/*   be mode to these constants.                                     */
/*                                                                   */
/*********************************************************************/
#define NETDB_MAX_HOST_NAME_LENGTH 255                         /*@A1A*/
#define NETDB_MAX_ARRAY_SIZE 64                                /*@A1A*/
#define NETDB_MAX_HOST_ADDR_ARRAY_SIZE 100                     /*@A1A*/
#define NETDB_MAX_NET_NAME_LENGTH 255                          /*@A1A*/
#define NETDB_MAX_ALIASES 4                                    /*@A1A*/
#define NETDB_MAX_PROTO_NAME_LENGTH 32                         /*@A1A*/
#define NETDB_MAX_SERV_NAME_LENGTH 32                          /*@A1A*/


/*********************************************************************/
/* Macros to denote returned h_errno values.                         */
/*********************************************************************/

#define HOST_NOT_FOUND   5            /* host not found              */
#define NO_DATA          10           /* no data of requested type   */
#define NO_ADDRESS       NO_DATA      /* name valid, but no address  */
#define NO_RECOVERY      15           /* unrecoverable error         */
#define TRY_AGAIN        20           /* try again                   */

/*********************************************************************/
/* Macros to denote return codes from getaddrinfo and getnameinfo    */
/*                                                               @A3A*/
/*********************************************************************/

#define EAI_AGAIN        1      /* name not resolved at this time    */
#define EAI_BADFLAGS     2      /* invalid value for ai_flags        */
#define EAI_FAIL         3      /* non-recoverable failure on resolve*/
#define EAI_FAMILY       4      /* ai_family not supported           */
#define EAI_MEMORY       5      /* memory allocation failure         */
#define EAI_NONAME       6      /* name does not resolve             */
#define EAI_SERVICE      7      /* service not supported for socktype*/
#define EAI_SOCKTYPE     8      /* ai_socktype not supported         */
#define EAI_SYSTEM       9      /* system error returned in errno    */
#define EAI_MAX          9      /* maximum defined addrinfo ecode    */

/*********************************************************************/
/* Macros to denote ai_flags values for getaddrinfo()            @A3A*/
/*********************************************************************/

#define AI_PASSIVE      0x00000001 /* get address to use bind()      */
#define AI_CANONNAME    0x00000002 /* fill ai_canonname              */
#define AI_NUMERICHOST  0x00000004 /* prevent name resolution        */
#define AI_NUMERICSERV  0x00000008 /* prevent name resolution        */
#define AI_V4MAPPED     0x00000010 /* accept IPv4-mapped IPv6 addr   */
#define AI_ALL          0x00000020 /* IPv6 and IPv4-mapped           */
#define AI_ADDRCONFIG   0x00000040 /* only if IPv6 address assigned  */
#define AI_MASK         0x0000007F /* Valid ai_flags mask            */

/*********************************************************************/
/* Macros to denote flags values for getnameinfo()               @A3A*/
/*********************************************************************/

#define NI_NOFQDN       0x00000001 /* only nodename returned         */
#define NI_NUMERICHOST  0x00000002 /* numeric form returned          */
#define NI_NAMEREQD     0x00000004 /* return error if name not found */
#define NI_NUMERICSERV  0x00000008 /* numeric form returned          */
#define NI_NUMERICSCOPE 0x00000010 /* numeric form of scope returned */
#define NI_DGRAM        0x00000020 /* datagram service (SOCK_DGRAM)  */
#define NI_MASK         0x0000003F /* Valid flags mask               */

/*********************************************************************/
/* Miscellaneous macros                                              */
/*********************************************************************/

#define h_addr  h_addr_list[0]        /* define the address of the
                                         first host address in
                                         list (see hostent structure)*/
#define h_errno          (*__h_errno())                        /*@A1A*/


/*********************************************************************/
/* Structures                                                        */
/*********************************************************************/
struct netdb_control_block {     /* network file control block       */
                                      /*                         @A1A*/

  int  open_flag;                     /* Stay open flag          @A1A*/
  char * f0;                          /* Qword alignment         @A1A*/
  char filep0[260];                   /* File control block      @A1A*/
  char reserved0[150];                /* reserved space          @A1A*/
  char * f1;                          /* Qword alignment         @A1A*/
  char filep1[260];                   /* File control block      @A1A*/
  char reserved1[150];                /* reserved space          @A1A*/
  char * f2;                          /* Qword alignment         @A1A*/
  char filep2[260];                   /* File control block      @A1A*/
  char reserved2[150];                /* reserved space          @A1A*/
  };

struct hostent {                      /* host entry. Must be 16 byte */
                                      /* aligned                     */
  char         *h_name;               /* host name                   */
  char        **h_aliases;            /* NULL-terminated list of
                                         host aliases                */
  int           h_addrtype;           /* address family of address   */
  int           h_length;             /* length of each address in
                                         h_addr_list                 */
  char        **h_addr_list;          /* NULL-terminated list of
                                         host addresses              */
};


struct hostent_data        {          /* additional host entry data
                                         Considered opaque. Must be
                                         16 byte aligned.        @A1A*/


  char  h_name[NETDB_MAX_HOST_NAME_LENGTH+1];
                                      /* host name               @A1A*/
  char  *h_aliases_arrayp[NETDB_MAX_ARRAY_SIZE+1];
                                      /* Array of pointers to
                                         h_aliases_array elements
                                                                 @A1A*/
  char h_aliases_array[NETDB_MAX_ARRAY_SIZE]
                 [NETDB_MAX_HOST_NAME_LENGTH+1];
                                      /* Alias Array             @A1A*/
  char *h_addr_arrayp[NETDB_MAX_HOST_ADDR_ARRAY_SIZE+1];
                                      /* Array of pointers to
                                         h_addr_array elements   @A1A*/
  struct in_addr h_addr_array[NETDB_MAX_HOST_ADDR_ARRAY_SIZE];
                                      /* Host address array      @A1A*/
  struct netdb_control_block host_control_blk;                 /*@A1A*/
                   };                                          /*@A1A*/



struct netent {                       /* network entry.  Must be 16
                                         byte aligned.               */
  char         *n_name;               /* network name                */
  char        **n_aliases;            /* NULL-terminated list of
                                         network aliases             */
  int           n_addrtype;           /* address family of address   */
  unsigned long n_net;                /* network address             */

};



struct netent_data {                  /* additional network entry data
                                         Considered opaque. Must be
                                         16 byte aligned.        @A1A*/
    char  n_name[NETDB_MAX_NET_NAME_LENGTH+1];
                                      /* network name            @A1A*/
    char  *n_aliases_arrayp[NETDB_MAX_ALIASES+1];
                                      /*Array of pointers to
                                        n_aliases_array elements @A1A*/
    char  n_aliases_array[NETDB_MAX_ALIASES]
                         [NETDB_MAX_NET_NAME_LENGTH+1];
                                      /* Network alias array     @A1A*/
    struct netdb_control_block net_control_blk;                /*@A1A*/
                   };                                          /*@A1A*/






struct protoent {                     /* protocol entry. Must be 16
                                         byte aligned.               */
  char         *p_name;               /* protocol name               */
  char        **p_aliases;            /* NULL-terminated list of
                                         protocol aliases            */
  int           p_proto;              /* assigned protocol number    */

};


struct protoent_data {                /* additional protoent entry data
                                         Considered opaque. Must be
                                         16 byte aligned.        @A1A*/
  char  p_name[NETDB_MAX_PROTO_NAME_LENGTH+1];
                                      /* protocol name           @A1A*/

  char  *p_aliases_arrayp[NETDB_MAX_ALIASES+1];
                                      /* Array of pointers to
                                         p_aliases_array elements
                                                                 @A1A*/
  char  p_aliases_array[NETDB_MAX_ALIASES]
                       [NETDB_MAX_PROTO_NAME_LENGTH+1];
                                      /* protocol alias array    @A1A*/
  struct netdb_control_block proto_control_blk;                /*@A1A*/
  };                                                           /*@A1A*/





struct servent {                      /* service entry. Must be 16
                                         byte aligned.           @A1A*/
  char         *s_name;               /* service name                */
  char        **s_aliases;            /* NULL-terminated list of
                                         service aliases             */
  int           s_port;               /* port to use for this service*/
  char         *s_proto;              /* protocol name to use for
                                         this service                */

};



struct servent_data {                 /* additional servent entry data
                                         Considered opaque. Must be
                                         16 byte aligned.        @A1A*/
  char  s_name[NETDB_MAX_SERV_NAME_LENGTH+1];
                                      /* service name            @A1A*/
  char  s_proto[NETDB_MAX_PROTO_NAME_LENGTH];
                                      /* protocal name length    @A1A*/
  char  *s_aliases_arrayp[NETDB_MAX_ALIASES+1];
                                      /*Array of pointers to
                                        s_aliases_array elements @A1A*/
  char  s_aliases_array[NETDB_MAX_ALIASES]
                      [NETDB_MAX_SERV_NAME_LENGTH+1];
                                      /* service alias array     @A1A*/
  struct netdb_control_block serve_control_blk;                /*@A1A*/
  };

struct addrinfo {                     /* Address Information     @A3A*/
  int     ai_flags;     /* AI_PASSIVE, AI_CANONNAME, AI_NUMERICHOST, */
  int     ai_family;    /* PF_xxx                                    */
  int     ai_socktype;  /* SOCK_xxx                                  */
  int     ai_protocol;  /* 0 or IPPROTO_xxx for IPv4 and IPv6        */
  socklen_t ai_addrlen; /* length of ai_addr                         */
  char   *ai_canonname; /* canonical name for nodename               */
  struct sockaddr  *ai_addr; /* binary address                       */
  struct addrinfo  *ai_next; /* next structure in linked list        */
};


/* Start changes for _XOPEN_SOURCE                               @A2A*/

#if ((_XOPEN_SOURCE+1>520) && !defined(COMPAT_43))
/* _XOPEN_SOURCE is defined to be >= 520 & not BSD 4.3 compatibility */

#include <inttypes.h>

/*********************************************************************/
/* Function prototypes - not thread-safe                             */
/*********************************************************************/

QBFC_EXTERN struct hostent *  gethostbyaddr(const void*,socklen_t,int);
QBFC_EXTERN struct hostent  * gethostbyname(const char *);
QBFC_EXTERN struct netent   * getnetbyaddr(uint32_t, int);
QBFC_EXTERN struct netent   * getnetbyname(const char *);
QBFC_EXTERN struct protoent * getprotobyname(const char *);
QBFC_EXTERN struct protoent * getprotobynumber(int);
QBFC_EXTERN struct servent  * getservbyname(const char*, const char*);
QBFC_EXTERN struct servent  * getservbyport(int, const char *);
QBFC_EXTERN struct hostent  * gethostent(void);
QBFC_EXTERN struct netent   * getnetent(void);
QBFC_EXTERN struct protoent * getprotoent(void);
QBFC_EXTERN struct servent  * getservent(void);
QBFC_EXTERN void              sethostent(int);
QBFC_EXTERN void              setnetent(int);
QBFC_EXTERN void              setprotoent(int);
QBFC_EXTERN void              setservent(int);
QBFC_EXTERN void              endhostent(void);
QBFC_EXTERN void              endnetent(void);
QBFC_EXTERN void              endprotoent(void);
QBFC_EXTERN void              endservent(void);

#pragma map(gethostbyaddr, "qso_gethostbyaddr98")
#pragma map(gethostbyname, "qso_gethostbyname98")
#pragma map(getnetbyaddr, "qso_getnetbyaddr98")
#pragma map(getnetbyname, "qso_getnetbyname98")
#pragma map(getprotobyname, "qso_getprotobyname98")
#pragma map(getprotobynumber, "qso_getprotobynumber98")
#pragma map(getservbyname, "qso_getservbyname98")
#pragma map(getservbyport, "qso_getservbyport98")
#pragma map(gethostent, "qso_gethostent98")
#pragma map(getnetent, "qso_getnetent98")
#pragma map(getprotoent, "qso_getprotoent98")
#pragma map(getservent, "qso_getservent98")
#pragma map(sethostent, "qso_sethostent98")
#pragma map(setnetent, "qso_setnetent98")
#pragma map(setprotoent, "qso_setprotoent98")
#pragma map(setservent, "qso_setservent98")
#pragma map(endhostent, "qso_endhostent98")
#pragma map(endnetent, "qso_endnetent98")
#pragma map(endprotoent, "qso_endprotoent98")
#pragma map(endservent, "qso_endservent98")

/*********************************************************************/
/* Function prototypes - thread safe                                 */
/*********************************************************************/

QBFC_EXTERN int getaddrinfo(const char *, const char *,
                   const struct addrinfo *, struct addrinfo **);
                                                               /*@A3A*/
QBFC_EXTERN int getnameinfo(const struct sockaddr *, socklen_t,
                   char *, socklen_t, char *, socklen_t, int); /*@A3A*/

QBFC_EXTERN int gethostbyaddr_r(const void*,socklen_t, int, struct hostent *,
                                struct hostent_data *);
QBFC_EXTERN int gethostbyname_r(const char *, struct hostent *,
                                struct hostent_data *);
QBFC_EXTERN int endhostent_r(struct hostent_data *);           /*@A1A*/
QBFC_EXTERN int endnetent_r(struct netent_data *);             /*@A1A*/
QBFC_EXTERN int endprotoent_r(struct protoent_data *);         /*@A1A*/
QBFC_EXTERN int endservent_r(struct servent_data *);           /*@A1A*/

#pragma map(getaddrinfo, "qso_getaddrinfo98")
#pragma map(getnameinfo, "qso_getnameinfo98")
#pragma map(gethostbyaddr_r, "qso_gethostbyaddr_r98")
#pragma map(gethostbyname_r, "qso_gethostbyname_r98")
#pragma map(endhostent_r, "qso_endhostent_r98")
#pragma map(endnetent_r, "qso_endnetent_r98")
#pragma map(endprotoent_r, "qso_endprotoent_r98")
#pragma map(endservent_r, "qso_endservent_r98")

#else
/* _XOPEN_SOURCE is not defined to be >= 520 or BSD 4.3 compatibility*/

/*********************************************************************/
/* Function prototypes - not thread-safe                             */
/*********************************************************************/

QBFC_EXTERN struct hostent  * gethostbyaddr(char *, int, int);
QBFC_EXTERN struct hostent  * gethostbyname(char *);
QBFC_EXTERN struct netent   * getnetbyaddr(long, int);
QBFC_EXTERN struct netent   * getnetbyname(char *);
QBFC_EXTERN struct protoent * getprotobyname(char *);
QBFC_EXTERN struct protoent * getprotobynumber(int);
QBFC_EXTERN struct servent  * getservbyname(char *, char *);
QBFC_EXTERN struct servent  * getservbyport(int, char *);
QBFC_EXTERN struct hostent  * gethostent(void);
QBFC_EXTERN struct netent   * getnetent(void);
QBFC_EXTERN struct protoent * getprotoent(void);
QBFC_EXTERN struct servent  * getservent(void);
QBFC_EXTERN void              sethostent(int);
QBFC_EXTERN void              setnetent(int);
QBFC_EXTERN void              setprotoent(int);
QBFC_EXTERN void              setservent(int);
QBFC_EXTERN void              endhostent(void);
QBFC_EXTERN void              endnetent(void);
QBFC_EXTERN void              endprotoent(void);
QBFC_EXTERN void              endservent(void);

/*********************************************************************/
/* Function prototypes - thread safe                                 */
/*********************************************************************/

QBFC_EXTERN int getaddrinfo(const char *, const char *,
                   const struct addrinfo *, struct addrinfo **);
                                                               /*@A3A*/
QBFC_EXTERN int getnameinfo(const struct sockaddr *, socklen_t,
                   char *, socklen_t, char *, socklen_t, int); /*@A3A*/
QBFC_EXTERN int gethostbyaddr_r(char *, int, int, struct hostent *,
                           struct hostent_data *);             /*@A1A*/
QBFC_EXTERN int gethostbyname_r(char *, struct hostent *,
                           struct hostent_data *);             /*@A1A*/

QBFC_EXTERN int endhostent_r(struct hostent_data *);           /*@A1A*/
QBFC_EXTERN int endnetent_r(struct netent_data *);             /*@A1A*/
QBFC_EXTERN int endprotoent_r(struct protoent_data *);         /*@A1A*/
QBFC_EXTERN int endservent_r(struct servent_data *);           /*@A1A*/

#endif
/* End changes for _XOPEN_SOURCE                                 @A2A*/

/*********************************************************************/
/* Function prototypes - thread safe                                 */
/*********************************************************************/

QBFC_EXTERN int gethostent_r(struct hostent *,
                             struct hostent_data *);           /*@A1A*/
QBFC_EXTERN int getnetbyaddr_r(long, int, struct netent *,
                        struct netent_data *);                 /*@A1A*/
QBFC_EXTERN int getnetbyname_r(char *, struct netent *,
                               struct netent_data *);          /*@A1A*/
QBFC_EXTERN int getnetent_r( struct netent *,
                             struct netent_data *);            /*@A1A*/
QBFC_EXTERN int getprotobyname_r(char *,
                             struct protoent *,
                             struct protoent_data *);          /*@A1A*/
QBFC_EXTERN int getprotobynumber_r(int,
                             struct protoent *,
                             struct protoent_data *);          /*@A1A*/
QBFC_EXTERN int getprotoent_r(struct protoent *,
                              struct protoent_data *);         /*@A1A*/
QBFC_EXTERN int getservbyname_r(char *, char *,
                   struct servent *, struct servent_data *);   /*@A1A*/
QBFC_EXTERN int getservbyport_r(int, char *, struct servent *,
                     struct servent_data *);                   /*@A1A*/
QBFC_EXTERN int getservent_r(struct servent *,
                                 struct servent_data *);       /*@A1A*/
QBFC_EXTERN int sethostent_r(int,struct  hostent_data *);      /*@A1A*/
QBFC_EXTERN int setnetent_r(int, struct netent_data *);        /*@A1A*/
QBFC_EXTERN int setprotoent_r(int,struct protoent_data *);     /*@A1A*/
QBFC_EXTERN int setservent_r(int,
                   struct servent_data *);                     /*@A1A*/
QBFC_EXTERN int * __h_errno(void);                             /*@A1A*/
QBFC_EXTERN void freeaddrinfo(struct addrinfo *);              /*@A3A*/
QBFC_EXTERN char *gai_strerror(int);                           /*@A3A*/

#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(pop)       /* @B1A*/
#endif                       /* @B1A*/

#endif  /* __netdb_h */

#ifdef __cplusplus
    #pragma info(restore)
#else
    #pragma checkout(resume)
#endif
