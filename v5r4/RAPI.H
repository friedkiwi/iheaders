/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/*                                                                        */
/* Licensed Materials - Property of IBM                                   */
/*                                                                        */
/* Restricted Materials of IBM                                            */
/*                                                                        */
/* (C) COPYRIGHT International Business Machines Corp. 1999,2000          */
/* All Rights Reserved                                                    */
/*                                                                        */
/* US Government Users Restricted Rights - Use, duplication or            */
/* disclosure restricted by GSA ADP Schedule Contract with IBM Corp.      */
/*                                                                        */
/* IBM_PROLOG_END_TAG                                                     */
/*
 *   COMPONENT_NAME: toq.xpf
 *
 *   FUNCTIONS:
 *
 *   ORIGINS: 27
 *
 *   (C) COPYRIGHT International Business Machines Corp. 1999,2000
 *   All Rights Reserved
 *   Licensed Materials - Property of IBM
 *   US Government Users Restricted Rights - Use, duplication or
 *   disclosure restricted by GSA ADP Schedule Contract with IBM Corp.
 */

#ifndef H_RSVP_RAPI
#define H_RSVP_RAPI

#include <sys/types.h>
#include <sys/socket.h>  /* for sockaddr */
#include <netinet/in.h>  /* for sockaddr_in */

/*************************************/
/* Handle the differences in the     */
/* extern definitions for compilers. */
/*************************************/
#ifndef QTOQ_EXTERN
  #ifdef __ILEC400__
    #define QTOQ_EXTERN extern
  #else
    #define QTOQ_EXTERN extern "C"
  #endif
#endif

#define wordsof(x) (((x)+3)/4)    /* number of 32-bit words */
/************************************/
/*    Integrated Service Numbers    */
/************************************/
#define GENERAL_INFO           1
#define GUARANTEED_SERV        2
#define CONTROLLED_LOAD_SERV   5
/*******************************/
/*    Int-Serv Parameter IDs   */
/*******************************/
enum int_serv_wkp
  {
  IS_WKP_HOP_CNT        = 4,
  IS_WKP_PATH_BW        = 6,
  IS_WKP_MIN_LATENCY    = 8,
  IS_WKP_COMPOSED_MTU   = 10,
  IS_WKP_TB_TSPEC       = 127    /* token-bucket TSPEC parameter */
  };

#define INTSERV_VERS_MASK       0xf0
#define INTSERV_VERSION0        0
#define Intserv_Version(x)      (((x)&ismh_version&INTSERV_VERS_MASK)>>4)
#define Intserv_Version_OK(x)   (((x)->ismh_version&INTSERV_VERS_MASK)== \
                                INTSERV_VERSION0)
/***********************/
/*    Main Header      */
/***********************/
typedef struct
  {
  unsigned char  ismh_version;/* version                                   */
  unsigned char  ismh_unused; /* not used                                  */
  unsigned short ismh_len32b; /* num of 32-bit words excluding this header */
  } IS_main_hdr_t;

/**********************/
/*    Service Header  */
/**********************/
typedef struct
  {
  unsigned char  issh_service;/* service number                           */
  unsigned char  issh_flags;  /* flags - see below                        */
  unsigned short issh_len32b; /* num of 32-bit words excluding this header */
}   IS_serv_hdr_t;

#define ISSH_BREAK_BIT   0x80      /* service break flag                 */
/************************/
/*    Parameter Header  */
/************************/
typedef struct
  {
  unsigned char  isph_parm_num;/* parameter number                         */
  unsigned char  isph_flags;   /* flags - see below                        */
  unsigned short isph_len32b; /* num of 32-bit words excluding this header */
  } IS_parm_hdr_t;

#define ISPH_FLG_INV     0x80  /* invalid flag                           */

/*************************/
/*    Useful Macros      */
/*************************/
#define Set_Main_Hdr(p, len)       {(p)->ismh_version  = INTSERV_VERSION0; \
                                    (p)->ismh_unused   = 0; \
                                    (p)->ismh_len32b   = wordsof(len);}
#define Set_Serv_Hdr(p, s, len)    {(p)->issh_service  = (s); \
                                    (p)->issh_flags    = 0; \
                                    (p)->issh_len32b   = wordsof(len);}
#define Set_Param_Hdr(p, id, len)  {(p)->isph_parm_num = (id); \
                                    (p)->isph_flags    = 0; \
                                    (p)->isph_len32b   = wordsof(len);}
#define Set_Break_Bit(p)           ((IS_serv_hdr_t *)p)->issh_flags |= \
 ISSH_BREAK_BIT
#define Next_Main_Hdr(p)           (IS_main_hdr_t *)((unsigned long \
 *)(p)+1+(p)->ismh_len32b)
#define Next_Serv_Hdr(p)           (IS_serv_hdr_t *)((unsigned long \
 *)(p)+1+(p)->issh_len32b)
#define Next_Parm_Hdr(p)           (IS_parm_hdr_t *)((unsigned long \
 *)(p)+1+(p)->isph_len32b)
#define Non_Is_Hop                 ((IS_serv_hdr_t \
 *)p)->issh_flags&ISSH_BREAK_BIT

/************************/
/*    Generic Tspec     */
/************************/
#define TB_MAX_RATE             40e12           /* Bytes/sec    */
#define TB_MIN_RATE             1               /* Bytes/sec    */
#define TB_MAX_DEPTH            250e9           /* Bytes        */
#define TB_MIN_DEPTH            1               /* Bytes        */
#define TB_MAX_PEAK             0x7f800000      /* +ve infinity */

typedef struct
  {
  float         TB_Tspec_r;       /* token bucket rate in bytes/sec  */
  float         TB_Tspec_b;       /* token bucket depth in bytes     */
  float         TB_Tspec_p;       /* token bucket peak in bytes/sec  */
  unsigned long TB_Tspec_m;       /* min policed unit in bytes       */
  unsigned long TB_Tspec_M;       /* max packet size in bytes        */
  } TB_Tsp_parms_t;

typedef struct
  {
  IS_serv_hdr_t    gen_Tspec_serv_hdr;   /* GENERAL_INFO, length    */
  IS_parm_hdr_t    gen_Tspec_parm_hdr;   /* IS_WKP_TB_TSPEC         */
  TB_Tsp_parms_t   gen_Tspec_parms;      /* tspec values            */
  } gen_Tspec_t;

#define gtspec_r       gen_Tspec_parms.TB_Tspec_r
#define gtspec_b       gen_Tspec_parms.TB_Tspec_b
#define gtspec_p       gen_Tspec_parms.TB_Tspec_p
#define gtspec_m       gen_Tspec_parms.TB_Tspec_m
#define gtspec_M       gen_Tspec_parms.TB_Tspec_M
#define gtspec_parmno  gen_Tspec_parm_hdr.isph_parm_num
#define gtspec_flags   gen_Tspec_parm_hdr.isph_flags
#define gtspec_len32b  gen_Tspec_parm_hdr.isph_len32b
#define gtspec_len     (sizeof(gen_Tspec_t)-sizeof(IS_serv_hdr_t))
/**********************************/
/*    Controlled-Load Service     */
/**********************************/
typedef struct
  {
  IS_serv_hdr_t    CL_spec_serv_hdr;     /* CONTROLLED_LOAD_SERV, 0, len */
  IS_parm_hdr_t    CL_spec_parm_hdr;     /* IS_WKP_TB_SPEC               */
  TB_Tsp_parms_t   CL_spec_parms;        /* tspec values                 */
  } CL_flowspec_t;

#define CLspec_r       CL_spec_parms.TB_Tspec_r
#define CLspec_b       CL_spec_parms.TB_Tspec_b
#define CLspec_p       CL_spec_parms.TB_Tspec_p
#define CLspec_m       CL_spec_parms.TB_Tspec_m
#define CLspec_M       CL_spec_parms.TB_Tspec_M
#define CLspec_parmno  CL_spec_parm_hdr.isph_parm_num
#define CLspec_flags   CL_spec_parm_hdr.isph_flags
#define CLspec_len32b  CL_spec_parm_hdr.isph_len32b
#define CLspec_len     (sizeof(CL_flowspec_t)-sizeof(IS_serv_hdr_t))

/***************************/
/*    Guaranteed           */
/***************************/
enum
  {
  IS_GUAR_RSPEC        = 130,
  GUAR_ADSPARM_C       = 131,
  GUAR_ADSPARM_D       = 132,
  GUAR_ADSPARM_Ctot    = 133,
  GUAR_ADSPARM_Dtot    = 134,
  GUAR_ADSPARM_Csum    = 135,
  GUAR_ADSPARM_Dsum    = 136
  };

typedef struct
  {
  float         Guar_R;               /* guaranteed rate in bytes/sec */
  unsigned long Guar_S;               /* slack term in microsecs      */
  } guar_Rspec_t;

typedef struct
  {
  IS_serv_hdr_t    Guar_serv_hdr;        /* GUARANTEED, 0, length        */
  IS_parm_hdr_t    Guar_Tspec_hdr;       /* IS_WKP_TB_TSPEC              */
  TB_Tsp_parms_t   Guar_Tspec_parms;     /* GENERIC Tspec parameters     */
  IS_parm_hdr_t    Guar_Rspec_hdr;       /* IS_GUAR_RSPEC                */
  guar_Rspec_t     Guar_Rspec;           /* Guaranteed Rspec parameters  */
  } Guar_flowspec_t;

#define Gspec_r        Guar_Tspec_parms.TB_Tspec_r
#define Gspec_b        Guar_Tspec_parms.TB_Tspec_b
#define Gspec_p        Guar_Tspec_parms.TB_Tspec_p
#define Gspec_m        Guar_Tspec_parms.TB_Tspec_m
#define Gspec_M        Guar_Tspec_parms.TB_Tspec_M
#define Gspec_R        Guar_Rspec.Guar_R
#define Gspec_S        Guar_Rspec.Guar_S
#define Gspec_T_parmno Guar_Tspec_hdr.isph_parm_num
#define Gspec_T_flags  Guar_Tspec_hdr.isph_flags
#define Gspec_T_len32b Guar_Tspec_hdr.isph_len32b
#define Gspec_R_parmno Guar_Rspec_hdr.isph_parm_num
#define Gspec_R_flags  Guar_Rspec_hdr.isph_flags
#define Gspec_R_len32b Guar_Rspec_hdr.isph_len32b
#define Gspec_len      (sizeof(Guar_flowspec_t)-sizeof(IS_serv_hdr_t))

typedef struct
  {
  IS_serv_hdr_t    Gads_serv_hdr;        /* GUARANTEED, x, length        */
  IS_parm_hdr_t    Gads_Ctot_hdr;        /* GUAR_ADSPARM_Ctot            */
  unsigned long    Gads_Ctot;
  IS_parm_hdr_t    Gads_Dtot_hdr;        /* GUAR_ADSPARM_Dtot            */
  unsigned long    Gads_Dtot;
  IS_parm_hdr_t    Gads_Csum_hdr;        /* GUAR_ADSPARM_Csum            */
  unsigned long    Gads_Csum;
  IS_parm_hdr_t    Gads_Dsum_hdr;        /* GUAR_ADSPARM_Dsum            */
  unsigned long    Gads_Dsum;
  } Gads_parms_t;

/*********************/
/*   Basic Adspec    */
/*********************/
typedef struct
  {
  IS_serv_hdr_t    gen_parm_hdr;         /* GENERAL_INFO, length         */
  IS_parm_hdr_t    gen_parm_hopcnt_hdr;  /* IS_WKP_HOP_CNT               */
  unsigned long    gen_parm_hopcnt;
  IS_parm_hdr_t    gen_parm_pathbw_hdr;  /* IS_WKP_PATH_BW               */
  float            gen_parm_path_bw;
  IS_parm_hdr_t    gen_parm_minlat_hdr;  /* IS_WKP_MIN_LATENCY           */
  unsigned long    gen_parm_min_latency;
  IS_parm_hdr_t    gen_parm_compmtu_hdr; /* IS_WKP_COMPOSED_MTU          */
  unsigned long    gen_parm_composed_MTU;
  } genparm_parms_t;

typedef struct
  {
  IS_serv_hdr_t    mads_hdr;             /* <service>, 1, length = 0     */
  } Min_adspec_t;

/**************************************/
/*   Integrated Services Flowspec     */
/**************************************/
typedef struct
  {
  IS_main_hdr_t      spec_mh;
   union
     {
     CL_flowspec_t    CL_spec;            /* Controlled-Load service      */
     Guar_flowspec_t  G_spec;             /* Guaranteed service           */
     }   spec_u;
   } IS_specbody_t;

#define ISmh_len32b    spec_mh.ismh_len32b
#define ISmh_version   spec_mh.ismh_version
#define ISmh_unused    spec_mh.ismh_unused

/********************************/
/*   Integrated Services Tspec  */
/********************************/
typedef struct
  {
  IS_main_hdr_t      st_mh;
  union
    {
    gen_Tspec_t      gen_stspec;         /* Generic Tspec                */
    }   tspec_u;
  } IS_tspbody_t;

#define IStmh_len32b   st_mh.ismh_len32b
#define IStmh_version  st_mh.ismh_version
#define IStmh_unused   st_mh.ismh_unused

/**********************************/
/*   Integrated Services Adspec   */
/**********************************/
#define MAX_OPT_ADSPEC_SIZE \
  sizeof(Gads_parms_t)+sizeof(Min_adspec_t)+2*sizeof(genparm_parms_t)

typedef struct
  {
  IS_main_hdr_t      adspec_mh;
  genparm_parms_t    adspec_genparms;
  /* may be followed by service specific fragments */
  } IS_adsbody_t;

typedef struct sockaddr  rapi_addr_t;
/***************************************************************/
/*   RAPI Formats                                              */
/***************************************************************/

typedef enum
  {
  RAPI_EMPTY_OTYPE          = 0,   /* empty object               */
  RAPI_FLOWSTYPE_Intserv    = 2,   /* Int-Serv format flowspec   */
  RAPI_FLOWSTYPE_Simplified = 3,   /* Simplified format flowspec */
  RAPI_TSPECTYPE_Intserv    = 17,  /* Int-Serv format tspec      */

  RAPI_TSPECTYPE_Simplified = 18,  /* Simplified format tspec    */

  RAPI_ADSTYPE_Intserv      = 33,  /* Int-Serv format adspec     */
  RAPI_ADSTYPE_Simplified   = 34,  /* Simplified format adspec   */

  RAPI_FILTERFORM_BASE      = 258, /* Simple V4: only sockaddr   */
  RAPI_FILTERFORM_GPI       = 259, /* IPV4 GPI filter format     */
  RAPI_FILTERFORM_BASE6     = 260, /* Simple V6: only sockaddr   */
  RAPI_FILTERFORM_GPI6      = 261  /* IPV6 GPI filter format     */
  } rapi_format_t;
/*******************************************/
/*    Generic RAPI Object Header           */
/*******************************************/
typedef struct
  {
  unsigned int   len;     /* actual length in bytes     */
  int            form;    /* object format              */
  } rapi_hdr_t;
/********************************************/
/*   Filterspec Formats                     */
/********************************************/
typedef struct
  {
  struct sockaddr_in sender;
  } rapi_filter_base_t;

typedef struct
  {
  struct in_addr     sender;
  unsigned long      gpi;
  } rapi_filter_gpi_t;

/**********************************************/
/*     RAPI Filterspec                        */
/**********************************************/
typedef struct
  {
  unsigned long      len;    /* length of filter, in bytes */
  rapi_format_t      form;   /* filter type */
  union
    {
    rapi_filter_base_t  base;
    rapi_filter_gpi_t   gpi;     /* not implemented */
    }   filt_u;                  /* variable length */
  } rapi_filter_t;

#define rapi_filt4              filt_u.base.sender
#define rapi_filtbase4_addr     rapi_filt4.sin_addr
#define rapi_filtbase4_port     rapi_filt4.sin_port
#define rapi_filtgpi4           filt_u.gpi
#define rapi_filtgpi4_addr      rapi_filtgpi4.sender
#define rapi_filtgpi4_gpi       rapi_filtgpi4.gpi

/**********************************************************/
/*        Flowspec/Tspec Formats                          */
/*                                                        */
/* service types used for flowspec/tspec simplified format*/
/**********************************************************/
typedef enum
  {
  QOS_TSPEC      = 0,            /* Generic Tspec           */
  QOS_CNTR_LOAD  = 1,            /* Controlled-Load service */
  QOS_GUARANTEED = 2             /* Guaranteed service      */
  } qos_service_t;  /* may need to change -> qos_service_type */

typedef struct
  {
  float            spec_Tspec_r;  /* Token bucket rate (B/sec) */
  float            spec_Tspec_b;  /* Token bucket depth (B)    */
  float            spec_Tspec_p;  /* Peak data rate (B/sec)    */
  unsigned long    spec_Tspec_m;  /* Min Policed Unit (B)      */
  unsigned long    spec_Tspec_M;  /* Max pkt size (B)          */
  } qos_Tspec_body;

/**********************************/
/*    Simplified Tspec format     */
/**********************************/
typedef struct
  {
  qos_service_t   spec_type;     /* qos service type         */
  qos_Tspec_body  xtspec_Tspec;  /* Tspec                    */
  } qos_tspecx_t;

#define xtspec_r        xtspec_Tspec.spec_Tspec_r
#define xtspec_b        xtspec_Tspec.spec_Tspec_b
#define xtspec_p        xtspec_Tspec.spec_Tspec_p
#define xtspec_m        xtspec_Tspec.spec_Tspec_m
#define xtspec_M        xtspec_Tspec.spec_Tspec_M
/*****************************/
/*     RAPI Tspec format     */
/*****************************/
typedef struct
  {
  unsigned int    len;           /* object len in bytes      */
  rapi_format_t   form;          /* tspec format             */
  union
    {
    qos_tspecx_t  qosxt;         /* Simplified format tspec  */
    IS_tspbody_t  ISt;           /* Int-Serv format tspec    */
    } tspecbody_u;
  } rapi_tspec_t;

#define tspecbody_qosx  tspecbody_u.qosxt
#define tspecbody_IS    tspecbody_u.ISt
/***************************************/
/*     Simplified Flowspec format      */
/***************************************/
typedef struct
  {
  qos_service_t   spec_type;     /* qos service type         */
  qos_Tspec_body  xspec_Tspec;   /* Tspec                    */
  float           xspec_R;       /* Guaranteed Rate (B/sec)  */
  unsigned long   xspec_S;       /* Slack term (sec)         */
  } qos_flowspecx_t;

#define xspec_r         xspec_Tspec.spec_Tspec_r
#define xspec_b         xspec_Tspec.spec_Tspec_b
#define xspec_p         xspec_Tspec.spec_Tspec_p
#define xspec_m         xspec_Tspec.spec_Tspec_m
#define xspec_M         xspec_Tspec.spec_Tspec_M
//***************************************
//      RAPI Flowspec
//***************************************
typedef struct
  {
  unsigned int    len;           /* object len in bytes        */
  rapi_format_t   form;          /* flowspec format            */
  union
    {
    qos_flowspecx_t  qosx;       /* Simplified flowspec format */
    IS_specbody_t    IS;         /* Int-serv format            */
    } specbody_u;
  }   rapi_flowspec_t;

#define specbody_qosx   specbody_u.qosx
#define specbody_IS     specbody_u.IS
/***************************************************************/
/********************/
/*   Adspec Formats */
/********************/
typedef struct
  {
  /*****************************/
  /* General adspec parameters */
  /*****************************/
  unsigned char   xaspec_flags;        /* see flags below            */
  unsigned short  xaspec_hopcnt;       /* num Int-Serv aware hops    */
  float           xaspec_path_bw;      /* min path band width (B/s)  */
  unsigned long   xaspec_min_latency;  /* min path latency (microsec)*/
  unsigned long   xaspec_composed_MTU; /* composed path MTU          */
  /********************************************/
  /* Controlled-Load service adspec parameters*/
  /********************************************/
  unsigned char   xClaspec_flags;      /* see flags below            */
  unsigned char   xClaspec_override;  /* 1 => override all gen. parms*/
  unsigned short  xClaspec_hopcnt;    /* num Int-Serv aware hops     */
  float           xClaspec_path_bw;   /* min path band width (B/s)   */
  unsigned long   xClaspec_min_latency;/* min path latency (microsec)*/
  unsigned long   xClaspec_composed_MTU;/* composed path MTU         */
  /******************************************/
  /*  Guaranteed service adspec parameters  */
  /******************************************/
  unsigned char   xGaspec_flags;       /* see flags below             */
  unsigned long   xGaspec_Ctot;        /* total rate dep. err (B)     */
  unsigned long   xGaspec_Dtot;        /* tot rate indep. err (usec)  */
  unsigned long   xGaspec_Csum;        /* reshaped rate dep. err (B)  */
  unsigned long   xGaspec_Dsum;        /* reshaped rate indep. err (usec)*/
  unsigned char   xGaspec_override;    /* 1 => over ride all gen. params*/
  unsigned short  xGaspec_hopcnt;      /* num Int-Serv aware hops      */
  float           xGaspec_path_bw;     /* min path band width (B/s)    */
  unsigned long   xGaspec_min_latency; /* min path latency (microsec)  */
  unsigned long   xGaspec_composed_MTU;/* composed path MTU            */
  } qos_adspecx_t;
/*****************************/
/* possible values for flags */
/*****************************/
#define XASPEC_FLG_BRK  0x01   /* break in service                        */
#define XASPEC_FLG_IGN  0x02   /* ignore : do not include this service    */
#define XASPEC_FLG_PARM 0x04   /* params present : include service params */
/**********************/
/*     RAPI Adspec    */
/**********************/
typedef struct
  {
  unsigned int    len;              /* object len in bytes      */
  rapi_format_t   form;             /* adspec format            */
  union
    {
    qos_adspecx_t adsx;             /* Simplified adspec format */
    IS_adsbody_t  ISa;              /* Int-Serv adspec format   */
    } adsbody_u;
  } rapi_adspec_t;

#define adspecbody_qosx adsbody_u.adsx
#define adspecbody_IS   adsbody_u.ISa

/*********************************************************/
/*********************/
/*   Policy Formats  */
/*********************/
typedef struct
  {
  char        name[1];
  } rapi_policy_name_string_t;

typedef enum
  {
  RAPI_POLICYF_INTEGRITY        =  0x00000001,
  RAPI_POLICYF_GLOBAL           =  0x00000002,
  RAPI_POLICYF_RESP             =  0x00000004
  } rapi_policy_flags_t;

/*********************/
/*    RAPI Policy    */
/*********************/
typedef struct
  {
  unsigned long           len;            /* actual length in bytes */
  rapi_format_t           form;           /* policy data format */
  rapi_policy_flags_t     flags;
  union
    {
    rapi_policy_name_string_t    namestring;
    } pol_u;
  } rapi_policy_t;
/**********************************/
/*   Reservation style ids        */
/**********************************/
typedef enum
  {
  RAPI_RSTYLE_WILDCARD = 1,       /* STYLE_ID_WF */
  RAPI_RSTYLE_FIXED = 2,          /* STYLE_ID_FF */
  RAPI_RSTYLE_SE = 3              /* STYLE_ID_SE */
  } rapi_styleid_t;
/***********************************************************/
/*    Reservation style extension                          */
/*                                                         */
/*   This structure is currently undefined; in the future, */
/*   it will allow passing style-specific parameters for   */
/*   possible new styles.                                  */
/***********************************************************/
typedef void rapi_stylex_t;

/***************************/
/*     Registration flags  */
/***************************/
/***************************************************************/
/************************/
/*  RAPI client handle  */
/************************/
typedef unsigned int rapi_sid_t;
#define NULL_SID        0       /* Error return from rapi_session */

/******************************************************************/
/**********************************/
/*   RAPI User callback function  */
/**********************************/
typedef enum
  {
  RAPI_PATH_EVENT   = 1,
  RAPI_RESV_EVENT   = 2,
  RAPI_PATH_ERROR   = 3,
  RAPI_RESV_ERROR   = 4,
  RAPI_RESV_CONFIRM = 5
  } rapi_eventinfo_t;

/***************************************/
/* RAPI event routine flag values      */
/***************************************/
#define RAPI_ERRF_InPlace  0x01  /*   Left resv in place        */
#define RAPI_ERRF_NotGuilty 0x02 /*   This rcvr not guilty      */
typedef int  ((*rapi_event_rtn_t)
  (
  rapi_sid_t,              /* Which sid generated event    */
  rapi_eventinfo_t,        /* Event type                   */
  rapi_styleid_t,          /* Style ID                     */
  int,                     /* Error code                   */
  int,                     /* Error value                  */
  rapi_addr_t *,           /* Error node address           */
  unsigned int,            /* Error flags                  */
  int,                     /* Number of filter specs/sender*/
                           /*      templates in list       */
  rapi_filter_t *,         /* Filter spec/sender templ list*/
  int,                     /* Number of flowspecs/Tspecs   */
  rapi_flowspec_t *,       /* Flowspec/Tspec list          */
  int,                     /* Number of adspecs            */
  rapi_adspec_t *,         /* Adspec list                  */
  void *                   /* Client supplied arg          */
  ));

/********************************************************************/
/***************************************/
/*      RAPI External Functions        */
/***************************************/
/* Define rapi_session() flags         */
/***************************************/
#define RAPI_USE_INTSERV  0x1   /* Use Int-Serv format in upcalls       */
#define RAPI_GPI_SESSION  0x2   /* Not supported.                       */

QTOQ_EXTERN
rapi_sid_t rapi_session(
   rapi_addr_t      *Dest,     /* Session: (Dst addr, port), net order */
   int              Ptotid,    /* Protocol id                          */
   int              flags,     /* Flags                                */
   rapi_event_rtn_t Event_rtn, /* Definition of callback rtn-optional  */
   void             *Event_arg,/* App argument to callback - optional  */
   int              *errnop    /* error return code                    */
   );

/**************************************/
/* Define rapi_sender() flags         */
/**************************************/
#define TC_QOS_POLICE     0x2   /* turn policing on                     */
#define TC_QOS_NOPOLICE   0x4   /* turn policing off                    */
#define TC_QOS_SHAPE      0x8   /* turn shaping on                      */
#define TC_QOS_NOSHAPE    0x10  /* turn shaping off                     */

QTOQ_EXTERN
int rapi_sender(
   rapi_sid_t SessID,        /* Session ID                            */
   int           flags,      /* Flags - for traffic control           */
   rapi_addr_t   *LocalAddr, /* Local host:(Src addr, port),netorder  */
   rapi_filter_t *Filter,    /* Sender template - not supported       */
   rapi_tspec_t  *SndTspec,  /* Sender Tspec                          */
   rapi_adspec_t *SndAdspec, /* Sender Adspec                         */
   rapi_policy_t *SndPol,    /* Sender policy data - not supported    */
   int           Ttl         /* TTL of multicast data                 */
   );


/**************************************/
/* Define rapi_reserve() flags        */
/**************************************/
#define RAPI_REQ_CONFIRM  0x20   /* Request confirmation */

QTOQ_EXTERN
int rapi_reserve(
   rapi_sid_t      SessID,    /* Session ID                      */
   int             flags,     /* Flags                           */
   rapi_addr_t     *SessAddr, /* Recv host addr - optional       */
   rapi_styleid_t  style,     /* Style ID                        */
   rapi_stylex_t   *style_ext,/* Style extension - not supported */
   rapi_policy_t   *RcvPol,   /* Receiver policy - not supported */
   int             numFilt,   /* # of filter specs               */
   rapi_filter_t   *FspecLst, /* List of filter specs            */
   int             numFlow,   /* # of flowspecs                  */
   rapi_flowspec_t *FlowLst   /* List of flowspecs               */
   );

QTOQ_EXTERN
int rapi_release(rapi_sid_t SessID  /* Session ID */);

QTOQ_EXTERN
int rapi_getfd(rapi_sid_t  SessID  /* Session ID */);

QTOQ_EXTERN
int rapi_dispatch(void);

QTOQ_EXTERN
int rapi_version(void);

/******************************/
/*      Formatting routines   */
/******************************/
QTOQ_EXTERN
void    rapi_fmt_flowspec(
   rapi_flowspec_t *pFlowspec,  /* RAPI flowspec                 */
   char            *pBuffer,    /* Pointer to formatting buffer  */
   int             size         /* Size of buffer                */
   );

QTOQ_EXTERN
void    rapi_fmt_tspec(
   rapi_tspec_t *pTspec,        /* RAPI Tspec                    */
   char         *pBuffer,       /* Pointer to formatting buffer  */
   int          size            /* Size of buffer                */
   );

QTOQ_EXTERN
void    rapi_fmt_adspec(
   rapi_adspec_t *pAdspec,      /* RAPI Adspec                   */
   char          *pBuffer,      /* Pointer to formatting buffer  */
   int           size           /* Size of buffer                */
   );

QTOQ_EXTERN
void    rapi_fmt_filtspec(
   rapi_filter_t *pFiltspec,    /* RAPI Filter spec              */
   char          *pBuffer,      /* Pointer to formatting buffer  */
   int           size           /* Size of buffer                */
   );


/**************************/
/*     RAPI Error Codes   */
/**************************/
#define RAPI_ERR_OK             0   /* No error                          */
#define RAPI_ERR_INVAL          1   /* Invalid parameter                 */
#define RAPI_ERR_MAXSESS        2   /* Too many sessions                 */
#define RAPI_ERR_BADSID         3   /* Sid out of legal range.           */
#define RAPI_ERR_N_FFS          4   /* Wrong n_filter/n_flow for style   */
#define RAPI_ERR_BADSTYLE       5   /* Illegal reservation style         */
#define RAPI_ERR_SYSCALL        6   /* Some sort of syscall err; see errno*/
#define RAPI_ERR_OVERFLOW       7   /* Parm list overflow                */
#define RAPI_ERR_MEMFULL        8   /* Not enough memory                 */
#define RAPI_ERR_NORSVP         9   /* RSVP server doesn't respond/exist.*/
#define RAPI_ERR_OBJTYPE        10  /* Object type error                 */
#define RAPI_ERR_OBJLEN         11  /* Object length error               */
#define RAPI_ERR_NOTSPEC        12  /* No sender tspec in rapi_sendr     */
#define RAPI_ERR_INTSERV        13  /* Intserv format error              */
#define RAPI_ERR_GPI_CONFLICT   14  /* IPSEC: Conflicting C-type         */
#define RAPI_ERR_BADPROTO       15  /* IPSEC: Protocol not AH|ESP        */
#define RAPI_ERR_BADVDPORT      16  /* IPSEC: vDstPort is zero           */
#define RAPI_ERR_GPISESS        17  /* IPSEC: Other param error          */
/**********************************************/
/* The following occur only asynchronously, as*/
/* the error value when error code = 20       */
/**********************************************/
#define RAPI_ERR_BADSEND        21  /* Sender addr not my interface     */
#define RAPI_ERR_BADRECV        22  /* Recv addr not my interface       */
#define RAPI_ERR_BADSPORT       23  /* Sport != 0 but Dport == 0        */

#define RAPI_ERR_UNSUPPORTED    254
#define RAPI_ERR_UNKNOWN        255
/************************/
/*   RSVP Error Codes   */
/************************/
#define RSVP_Err_NONE           0   /* RESV: Confirmation               */
#define RSVP_Err_ADMISSION      1   /* RESV: Admission control failure  */
#define RSVP_Err_POLICY         2   /* RESV: Policy control failure     */
#define RSVP_Err_NO_PATH        3   /* RESV: No path information        */
#define RSVP_Err_NO_SENDER      4   /* RESV: No sender information      */
#define RSVP_Err_BAD_STYLE      5   /* RESV: Conflicting style          */
#define RSVP_Err_UNKNOWN_STYLE  6   /* RESV: Unknown style              */
#define RSVP_Err_BAD_DSTPORT    7   /* Conflicting dest port in Session */
#define RSVP_Err_BAD_SNDPORT    8   /* PATH: Conflicting src port       */
#define RSVP_Err_BAD_FILTER     9   /* RESV: Ambiguous filter spec      */
#define RSVP_Err_PREEMPTED      12  /* Service preempted                */
#define RSVP_Err_UNKN_OBJ_CLAS  13  /* Unknown object class             */
#define RSVP_Err_UNKNOWN_CTYPE  14  /* Unknown object C-type            */
#define RSVP_Err_API_ERROR      20  /* API Client error                 */
#define RSVP_Err_TC_ERROR       21  /* Traffic control error            */
#define RSVP_Err_TC_SYS_ERROR   22  /* Traffic control system error     */
#define RSVP_Err_RSVP_SYS_ERROR 23  /* RSVP system error                */

/*********************************/
/*   Integrated Services Adspec  */
/*********************************/
#define MAX_OPT_ADSPEC_SIZE \
  sizeof(Gads_parms_t)+sizeof(Min_adspec_t)+2*sizeof(genparm_parms_t)
/***********************************/
/*    Integrated Service Numbers   */
/***********************************/
#define GENERAL_INFO           1
#define GUARANTEED_SERV        2
#define CONTROLLED_LOAD_SERV   5


#endif /* H_RSVP_RAPI  */
