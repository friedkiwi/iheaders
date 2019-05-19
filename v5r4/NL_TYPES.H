/* begin_generated_IBM_copyright_prolog                              */
/* This is an automatically generated copyright prolog.              */
/* After initializing,  DO NOT MODIFY OR MOVE                        */
/* ----------------------------------------------------------------- */
/*                                                                   */
/* Product(s):                                                       */
/*     5716-CX2                                                      */
/*     5716-CX4                                                      */
/*     5716-CX5                                                      */
/*     5769-CX2                                                      */
/*     5722-SS1                                                      */
/*                                                                   */
/* (C)Copyright IBM Corp.  1991, 2005                                */
/*                                                                   */
/* All rights reserved.                                              */
/* US Government Users Restricted Rights -                           */
/* Use, duplication or disclosure restricted                         */
/* by GSA ADP Schedule Contract with IBM Corp.                       */
/*                                                                   */
/* Licensed Materials-Property of IBM                                */
/*                                                                   */
/*  ---------------------------------------------------------------  */
/*                                                                   */
/* end_generated_IBM_copyright_prolog                                */
#ifndef __nl_types_h
 #define __nl_types_h

#ifdef __cplusplus
 extern "C" {
 #pragma info(none)
#else
 #pragma nomargins nosequence
 #pragma checkout(suspend)
#endif

/* ================================================================= */
/* Header File Name: nl_types.h                                      */
/*                                                                   */
/* This header contains the declarations used by the C message       */
/* catalog routines.                                                 */
/*                                                                   */
/* ================================================================= */

#if defined(__POSIX_LOCALE__) && defined(__IFS_IO__)

   #pragma datamodel(P128)
   struct _msg_list_head {
           char            *_text;
           struct  _msg_list_head  *_msg_list_next;
           int     _msg_ccsid;
   };

   struct _catalog_descriptor {
           char            *_mem;
           char            *_name;
           int             _fd;
           struct _header  *_hd;
           struct _catset  *_set;
           int             _setmax;
           int             _count;
           int             _pid;
           int             _oflag;
           void            *_rsv1;
           int             _is_neutral;
           int             **_msg_ccsid;
           struct _msg_list_head  ***_msg_list;
   };

   #ifndef __nl_item
     #define __nl_item
     typedef int           nl_item;
   #endif

   typedef struct _catalog_descriptor *nl_catd;

   #define NL_SETD         1

   /* Bit defines for the oflag parameter  */
   #define NL_CAT_LOCALE      1
   /* NL_CAT_JOB_MODE and NL_CAT_CTYPE_MODE bits are mutually exclusive */
   #define NL_CAT_JOB_MODE    2  /* Return message in job CCSID */
   #define NL_CAT_CTYPE_MODE  4  /* Return message in LC_CTYPE CCSID */

   #define CAT_MAGIC       505
   #define CATD_ERR        ((nl_catd) -1)
   #define NL_MAXOPEN      75

   int catclose(nl_catd);
   char * catgets(nl_catd, int, int, const char*);
   nl_catd catopen(const char*, int);

   #if defined(__UTF32__) || defined(__CCSID_NEUTRAL__)
     #pragma map(catopen, "_C_NEU_catopen")
   #endif

   #pragma datamodel(pop)

#endif    /* if defined(__POSIX_LOCALE__) && defined(__IFS_IO__)     */

#ifdef __cplusplus
 #pragma info(restore)
 }
#else
 #pragma checkout(resume)
#endif

#endif   /* ifndef __nl_types_h */
