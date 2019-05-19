/*** START HEADER FILE SPECIFICATIONS ********************************/
/*                                                                   */
/* Header File Name       : H/QP2USER                                */
/*                                                                   */
/* Descriptive Name       : OS/400 PASE API Definitions              */
/*                                                                   */
/*    5769-SS1, 5722-SS1                                             */
/*    (C) Copyright IBM Corp. 1997, 2000                             */
/*    All rights reserved.                                           */
/*    US Government Users Restricted Rights -                        */
/*    Use, duplication or disclosure restricted                      */
/*    by GSA ADP Schedule Contract with IBM Corp.                    */
/*                                                                   */
/* Licensed Materials-Property of IBM                                */
/*                                                                   */
/* Description            : Defines the interface to ILE procedure   */
/*                          APIs exported by service program         */
/*                          QSYS/QP2USER                             */
/*                                                                   */
/* Change Activity        :                                          */
/*                                                                   */
/* CFD List               :                                          */
/*                                                                   */
/* Flag Reason   Level   Date   Pgmr      Change Description         */
/* ---- -------- ------- ------ --------- -------------------------  */
/* $01  D95693   v4r3m0  971031 ROCH      New file                   */
/* $02= P3664554 v4r3m0  970215 timms     Callback changes           */
/* $03= D97566   v4r5m0  990225 timms     add Qp2PaseSignal          */
/* $04= D97972   v5r1m0  000505 timms     externalize header file    */
/*                                        and add 64-bit support     */
/* $05= P9957361 v5r2m0  011130 timms     Callback enhancements      */
/* $05= P9958473 v5r2m0  011220 timms     More callback enhancements */
/*                                                                   */
/* End CFD List.                                                     */
/*********************************************************************/

#ifndef _QP2USER_H
#define _QP2USER_H

#include <sys/types.h>

#if (__OS400_TGTVRM__>=510)
#pragma datamodel(P128)
#endif

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

/*********************************************************************
 * Run an OS/400 PASE program
 *********************************************************************/
extern
int                                /* Program _exit() return code */
Qp2RunPase(const char *pathName,   /* Path/name of program */
           const char *symbolName, /* Name of (external) symbol */
           const void *symbolData, /* Data to prime symbol */
           unsigned int symbolDataLen, /* Length of *symbolData */
           int ccsid,              /* CCSID of PASE program */
           const char *const *argv, /* Argument strings */
           const char *const *env); /* Environment strings */

typedef short   QP2_arg_type_t;
#define QP2_ARG_END             0
#define QP2_ARG_WORD            -1 /* only for 32-bit programs */
#define QP2_ARG_DWORD           -2 /* only for 64-bit programs */
#define QP2_ARG_FLOAT32         -3
#define QP2_ARG_FLOAT64         -4
#define QP2_ARG_PTR32           -5 /* only for 32-bit programs */
#define QP2_ARG_PTR64           -6 /* only for 64-bit programs */

typedef short   QP2_result_type_t;
#define QP2_RESULT_VOID         0
#define QP2_RESULT_WORD         -1
#define QP2_RESULT_DWORD        -2
#define QP2_RESULT_FLOAT64      -4
#define QP2_RESULT_PTR32        -5 /* only for 32-bit programs */
#define QP2_RESULT_PTR64        -6 /* only for 64-bit programs */

/* Qp2RunPase special results */
#define QP2RUNPASE_ERROR         -1 /* unexpected error */
#define QP2RUNPASE_RETURN_NOEXIT -2 /* OS/400 PASE still active */

/*********************************************************************
 * End an OS/400 PASE program
 *********************************************************************/
extern
int
Qp2EndPase(void);

/*********************************************************************
 * Function result and argument value types
 *********************************************************************/
typedef unsigned int        QP2_word_t;
typedef unsigned long long  QP2_dword_t;
typedef float               QP2_float32_t;
typedef double              QP2_float64_t;
typedef unsigned int        QP2_ptr32_t;
typedef unsigned long long  QP2_ptr64_t;

/* Special value for an argument pointer into stack */
#define QP2_ARG_PTR_TOSTACK     0x0fff0000

/*********************************************************************
 * Call an OS/400 PASE procedure
 *********************************************************************/
extern
int                         /* Call operation return code */
Qp2CallPase2(const void *target,
             const void *arglist,
             const QP2_arg_type_t *signature,
             QP2_result_type_t result_type,
             void *buf,
             short bufLenIn);
extern
int                        /* Call operation return code */
Qp2CallPase(const void *target,
            const void *arglist,
            const QP2_arg_type_t *signature,
            QP2_result_type_t result_type,
            void *buf);

#define QP2CALLPASE_NORMAL              0
#define QP2CALLPASE_RESULT_ERROR        1
#define QP2CALLPASE_ENVIRON_ERROR       2
#define QP2CALLPASE_ARG_ERROR           4
#define QP2CALLPASE_TERMINATING         6
#define QP2CALLPASE_RETURN_NOEXIT       7

/*********************************************************************
 * Post an asynchronous OS/400 PASE signal
 *********************************************************************/
extern
int                        /* Call operation return code */
Qp2SignalPase(int signo);  /* ILE signal or negative AIX signal */

/* Return the size of OS/400 PASE pointers */
extern
size_t Qp2ptrsize(void);

/* Return the OS/400 PASE and job default CCSID values */
extern
int Qp2paseCCSID(void);
extern
int Qp2jobCCSID(void);

/* Return a pointer to the OS/400 PASE errno for the current thread */
extern
int* Qp2errnop(void);

/* Run OS/400 PASE malloc and free (allocate/free OS/400 PASE heap memory) */
extern
void* Qp2malloc(QP2_dword_t size,
                QP2_ptr64_t *mem_pase);
extern
int Qp2free(void *mem);

/* Run OS/400 PASE dlopen (dynamically load a module) */
extern
QP2_ptr64_t Qp2dlopen(const char *path,
                      int flags,
                      int ccsid);

/* Run OS/400 PASE dlsym (find a symbol in a module loaded by dlopen) */
extern
void* Qp2dlsym(QP2_ptr64_t id,
               const char *name,
               int ccsid,
               QP2_ptr64_t *sym_pase);

/* Run OS/400 PASE dlclose (close/unload a module loaded by dlopen) */
extern
int Qp2dlclose(QP2_ptr64_t id);

/* Run OS/400 PASE dlerror (return a pointer to error information) */
extern
char* Qp2dlerror(void);

/*
 * Values for the flags argument to Qp2dlopen().
 * One of QP2_RTLD_NOW or QP2_RTLD_LAZY must be specified
 */
#define QP2_RTLD_NOW         0x00000002 /* Load object and dependents now */
#define QP2_RTLD_LAZY        0x00000004 /* Defer loads until needed */
#define QP2_RTLD_GLOBAL      0x00010000 /* Load symbols as global */
#define QP2_RTLD_NOAUTODEFER 0x00020000 /* Do not import from future loads */
#define QP2_RTLD_MEMBER      0x00040000 /* Path may be an archive member */
#define QP2_RTLD_LOCAL       0x00080000 /* Load symbols as private */

#ifdef __cplusplus
}
#endif /* __cplusplus */

#if (__OS400_TGTVRM__>=510)
#pragma datamodel(pop)
#endif

#endif /* _QP2USER_H */
