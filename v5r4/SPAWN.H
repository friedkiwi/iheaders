/* begin_generated_IBM_copyright_prolog                              */
/* This is an automatically generated copyright prolog.              */
/* After initializing,  DO NOT MODIFY OR MOVE                        */
/* ----------------------------------------------------------------- */
/*                                                                   */
/* Product(s):                                                       */
/*     5716-SS1                                                      */
/*     5769-SS1                                                      */
/*     5722-SS1                                                      */
/*                                                                   */
/* (C)Copyright IBM Corp.  1994, 2003                                */
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
/* ----------------------------------------------------------------- */

/* ----------------------------------------------------------------- */

#ifndef _SPAWN_H
#define _SPAWN_H

/*********************************************************************/
/*                                                                   */
/* Header File Name: spawn.h                                         */
/*                                                                   */
/* Header File Description: spawn declarations                       */
/*                                                                   */
/* Description:                                                      */
/*      Define the inheritance structure and the prototypes for      */
/*      the spawn functions.                                         */
/*                                                                   */
/* Header Files Included:                                            */
/*          sys/types.h                                              */
/*          signal.h                                                 */
/*          qlg.h                                                @A5A*/
/*                                                                   */
/* Macros List:                                                      */
/*      SPAWN_SETSIGMASK                                             */
/*      SPAWN_SETSIGDEF                                              */
/*      SPAWN_SETPGROUP                                              */
/*      SPAWN_SETTHREAD_NP                                           */
/*      SPAWN_SETPJ_NP                                               */
/*      SPAWN_SETCOMPMSG_NP                                          */
/*      SPAWN_SETJOBNAMEPARENT_NP                                @A7A*/
/*      SPAWN_SETJOBNAMEARGV_NP                                  @A8A*/
/*      SPAWN_SETLOGJOBMSGABN_NP                                 @A9A*/
/*      SPAWN_SETLOGJOBMSGNONE_NP                                @A9A*/
/*      SPAWN_SETAFFINITYID_NP                                   @A9A*/
/*      SPAWN_SETTHREADRUNPTY_NP                                 @A9A*/
/*      SPAWN_FDCLOSED                                               */
/*      SPAWN_NEWPGROUP                                              */
/*      SPAWN_MAX_NUM_ARGS                                           */
/*                                                                   */
/*                                                                   */
/* Structure List:                                                   */
/*           flagset_t                                               */
/*           inheritance_t                                           */
/*                                                                   */
/*                                                                   */
/* Function Prototype List:                                          */
/*           spawn()                                             @A5A*/
/*           spawnp()                                            @A5A*/
/*           QlgSpawn()                                          @A5A*/
/*           QlgSpawnp()                                         @A5A*/
/*           Qp0zPipe()                                              */
/*                                                                   */
/* Change Activity:                                                  */
/*                                                                   */
/* CFD List:                                                         */
/*                                                                   */
/* FLAG REASON  VERSION    DATE    PGMR      DESCRIPTION             */
/* ---- ------- ---------- ------- --------- ----------------------- */
/* $A0=CPA28531 v3r1m0.cpa 941025  ROCH      : Creation              */
/* $A1=P3603505 v3r6m0.cpa 950625  ROCH      : Added SPAWN_SETPGROUP */
/*                                             fixed signal include  */
/* $A2=D94779.13 v4r2m0.xpf 961210 ROCH      : Added new flag        */
/*                                             SPAWN_SETTHREAD_NP    */
/* $A3=D94779.15 v4r2m0.xpf 970415 ROCH      : Added new flag        */
/*                                             SPAWN_SETPJ_NP        */
/* $A4=P3684518  v4r4m0.xpf 981117 ROCH      : Added new flag        */
/*                                             SPAWN_SETCOMPMSG_NP   */
/* $A5=D97767.18 v5r1m0.xpf 991220 ROCH      : Added new spawn_ts64, */
/*                                             spawnp_ts64,          */
/*                                             QlgSpawn, QlgSpawnp.  */
/*                                             Fix prototypes.       */
/* $A6=D9829000  v5r1m0.xpf 000607 ROCH      : Remove pipe()         */
/*                                             prototype and mapping */
/*                                             of pipe to Qp0zPipe   */
/*                                             from v5r1m0.xpf and   */
/*                                             future releases.      */
/* $A7=P9931394  v5r1m0.xpf 000824 ROCH      : Added new flag        */
/*                                         SPAWN_SETJOBNAMEPARENT_NP */
/* $A8=D99276    v5r3m0.xpf 021001 ROCH      : Added new flag        */
/*                                         SPAWN_SETJOBNAMEARGV_NP   */
/* $A9=D99454    v5r3m0.xpf 030413 ROCH      : Added new flags       */
/*                                         SPAWN_SETLOGJOBMSGABN_NP  */
/*                                         SPAWN_SETLOGJOBMSGNONE_NP */
/*                                         SPAWN_SETAFFINITYID_NP and*/
/*                                         SPAWN_SETTHREADRUNPTY_NP  */
/*                                                                   */
/* End CFD List.                                                     */
/*                                                                   */
/*  Additional notes about the Change Activity                       */
/*                                                                   */
/* End Change Activity.                                              */
/*                                                                   */
/*********************************************************************/

/*********************************************************************/
/* Includes                                                          */
/*********************************************************************/
#ifndef __QBFC_EXTERN
    #ifdef __ILEC400__
        #define QBFC_EXTERN extern
    #else
        #define QBFC_EXTERN extern "C"
    #endif

    #define __QBFC_EXTERN
#endif

#include <sys/types.h>
#include <signal.h>                  /*@A1C@A8C*/
#include <qlg.h>                         /*@A5A*/

#pragma datamodel(P128)                  /*@A5A*/

/*********************************************************************/
/* Macros and Constants                                              */
/*********************************************************************/

#define SPAWN_SETSIGMASK           0x00000002
#define SPAWN_SETSIGDEF            0x00000004
#define SPAWN_SETPGROUP            0x00000008                  /*@A1A*/
#define SPAWN_SETTHREAD_NP         0x00000010                  /*@A2A*/
#define SPAWN_SETPJ_NP             0x00000020                  /*@A3A*/
#define SPAWN_SETCOMPMSG_NP        0x00000040                  /*@A4A*/
#define SPAWN_SETJOBNAMEPARENT_NP  0x00000080                  /*@A7A*/
#if (__OS400_TGTVRM__ >= 530)                                  /*@A8A*/
#define SPAWN_SETJOBNAMEARGV_NP    0x00000100                  /*@A8A*/
#define SPAWN_SETLOGJOBMSGABN_NP   0x00000200                  /*@A9A*/
#define SPAWN_SETLOGJOBMSGNONE_NP  0x00000400                  /*@A9A*/
#define SPAWN_SETAFFINITYID_NP     0x00000800                  /*@A9A*/
#define SPAWN_SETTHREADRUNPTY_NP   0x00001000                  /*@A9A*/
#endif /* __OS400_TGTVRM__ >= 530 */                           /*@A8A*/
#define SPAWN_FDCLOSED     -1
#define SPAWN_NEWPGROUP    -1
#define SPAWN_MAX_NUM_ARGS 255

/*********************************************************************/
/* Data Types                                                        */
/*********************************************************************/

typedef unsigned int flagset_t;

typedef struct inheritance {
    flagset_t     flags;
    pid_t         pgroup;
    sigset_t      sigmask;
    sigset_t      sigdefault;
    /* unsigned int affinityID; */
} inheritance_t;

/*********************************************************************/
/* Function Prototypes                                               */
/*********************************************************************/

#if (!defined(__LLP64_IFC__))                              /*@A5A@A8C*/
  QBFC_EXTERN pid_t spawn (const char               *path,     /*@A5A*/
                           const int                 fd_count,
                           const int                 fd_map[],
                           const struct inheritance *inherit,
                           char * const              argv[],
                           char * const              envp[]);

  QBFC_EXTERN pid_t spawnp (const char               *file,    /*@A5A*/
                            const int                 fd_count,
                            const int                 fd_map[],
                            const struct inheritance *inherit,
                            char * const              argv[],
                            char * const              envp[]);

#else                                                          /*@A5A*/
  /* START __ptr64 declarations                                  @A5A*/
  /*   change the datamodel such that pointer parameters are     @A5A*/
  /*   declared as __ptr64 types.                                @A5A*/
  #pragma datamodel(LLP64)                                     /*@A5A*/
  QBFC_EXTERN pid_t spawn (const char               *path,
                           const int                 fd_count,
                           const int                 fd_map[],
                           const struct inheritance *inherit,
                           char * const              argv[],
                           char * const              envp[]);  /*@A5A*/
  QBFC_EXTERN pid_t spawnp (const char               *file,
                            const int                 fd_count,
                            const int                 fd_map[],
                            const struct inheritance *inherit,
                            char * const              argv[],
                            char * const              envp[]); /*@A5A*/
  #pragma datamodel(pop)                                       /*@A5A*/
  /* END __ptr64 declarations                                    @A5A*/
  #pragma map(spawn,"spawn_ts64")                              /*@A5A*/
  #pragma map(spawnp,"spawnp_ts64")                            /*@A5A*/
#endif                                                         /*@A5A*/

QBFC_EXTERN pid_t QlgSpawn (const Qlg_Path_Name_T    *path,
                            const int                 fd_count,
                            const int                 fd_map[],
                            const struct inheritance *inherit,
                            char * const              argv[],
                            char * const              envp[]);

QBFC_EXTERN pid_t QlgSpawnp (const Qlg_Path_Name_T    *file,
                             const int                 fd_count,
                             const int                 fd_map[],
                             const struct inheritance *inherit,
                             char * const              argv[],
                             char * const              envp[]);

QBFC_EXTERN int Qp0zPipe(int fildes[2]);

#pragma datamodel(pop)              /*@A5A*/

#endif /* _SPAWN_H */

