#ifdef __cplusplus
   #pragma info(none)
#else
   #pragma nomargins nosequence
   #pragma checkout(suspend)
#endif

#ifndef __qp0z1170_h
  #define __qp0z1170_h 1

/*** START HEADER FILE SPECIFICATIONS *********************************/
/*                                                                    */
/* Header File Name:        qp0z1170.h                                */
/*                                                                    */
/* Descriptive Name:        Common Programming APIs Header File       */
/*                                                                    */
/* 5716-SS1, 5769-SS1                                                 */
/* (C) Copyright IBM Corp. 1995,1999                                  */
/* All rights reserved.                                               */
/* US Government Users Restricted Rights -                            */
/* Use, duplication or disclosure restricted                          */
/* by GSA ADP Schedule Contract with IBM Corp.                        */
/*                                                                    */
/* Licensed Materials-Property of IBM                                 */
/*                                                                    */
/*                                                                    */
/* Description: Include header file for function prototypes for       */
/*              Common Programming APIs.                              */
/*                                                                    */
/* Header Files Included: None.                                       */
/*                                                                    */
/* Macros List:                                                       */
/*                          QP0Z_CVTTIME_TO_OFFSET                @A2A*/
/*                          QP0Z_CVTTIME_TO_TIMESTAMP             @A2A*/
/*                          QP0Z_CVTTIME_FACTOR_EPOCH_ONLY        @A2A*/
/*                          QP0Z_CVTTIME_FACTOR_UTCOFFSET_ONLY    @A2A*/
/*                                                                    */
/* Structure List: None.                                              */
/*                                                                    */
/* Function Prototype List:                                           */
/*                          Qp0zGetEnvCCSID                           */
/*                          Qp0zGetEnvNoInit                          */
/*                          Qp0zInitEnv                               */
/*                          Qp0zPutEnvCCSID                           */
/*                          Qp0zCvtToTimeval                      @A2A*/
/*                          Qp0zCvtToMITime                       @A2A*/
/*                          Qp0zSystem                            @A3A*/
/*                          Qp0zDltEnv                            @A4A*/
/*                          Qp0zPutSysEnv                         @A5A*/
/*                          Qp0zGetSysEnv                         @A5A*/
/*                          Qp0zDltSysEnv                         @A5A*/
/*                                                                    */
/* Change Activity:                                                   */
/*                                                                    */
/* CFD List:                                                          */
/*                                                                    */
/* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION        */
/* ---- ------------ ----- ------ --------- ------------------------- */
/* $A0= D9178800     3D60  941016 ROCH    : New include               */
/* $A1= P3996471     3D60  950718 ROCH    : Move getopt to unistd     */
/* $A2= D9477900     4D20  961206 ROCH    : Time conversion and #ifdef*/
/*                                          __cplusplus additions     */
/* $A3= D9551600     4D20  970521 ROCH    : Add Qp0zSystem()          */
/* $A4= D9559900     4D30  971007 ROCH    : Add Qp0zDltEnv()          */
/* $A5= D9724800     4D40  980707 ROCH    : Added prototypes for      */
/*                                          system environment        */
/*                                          variable APIs and         */
/*                                          change the #defines for   */
/*                                          Qp0zGetEnv and Qp0zPutEnv */
/*                                          into prototypes           */
/* $B1= D9776727     5D10  990416 ROCH    : Updates for teraspace     */
/*                                                                    */
/* End CFD List.                                                      */
/*                                                                    */
/*  Additional notes about the Change Activity                        */
/*                                                                    */
/* End Change Activity.                                               */
/*** END HEADER FILE SPECIFICATIONS ***********************************/

#ifndef   __stdlib_h
  #include <stdlib.h>
#endif

#ifndef   __unistd_h                                           /* @A1A*/
  #include <unistd.h>                                          /* @A1A*/
#endif                                                         /* @A1A*/

#ifndef   __micommon_h                                         /* @A2A*/
  #include <mih/micommon.h>                                    /* @A2A*/
#endif                                                         /* @A2A*/

#ifndef   QP0Z_USE_QBFCTIME                                    /* @A2A*/
  #include <sys/time.h>                                        /* @A2A*/
#else                                                          /* @A2A*/
  #include <sys/Qbfctime.h>                                    /* @A2A*/
#endif                                                         /* @A2A*/

#if (__OS400_TGTVRM__>=510)  /* @B1A*/
  #pragma datamodel(P128)    /* @B1A*/
#endif /* __OS400_TGTVRM__>=510 @B1A*/

/**********************************************************************/
/* Macros, i.e. #define symbol mapping                                */
/**********************************************************************/

/* Valid values of the 'option' parameter of */                /* @A2A*/
/* Qp0zCvtToTimeval() and Qp0zCvtToMITime()  */                /* @A2A*/
#define QP0Z_CVTTIME_TO_OFFSET             0                   /* @A2A*/
#define QP0Z_CVTTIME_TO_TIMESTAMP          1                   /* @A2A*/
#define QP0Z_CVTTIME_FACTOR_EPOCH_ONLY     2                   /* @A2A*/
#define QP0Z_CVTTIME_FACTOR_UTCOFFSET_ONLY 3                   /* @A2A*/

/**********************************************************************/
/* Function Prototypes and Descriptions                               */
/**********************************************************************/

#ifndef __QBFC_EXTERN
    #ifdef __ILEC400__
         #define QBFC_EXTERN extern
    #else
         #define QBFC_EXTERN extern "C"
    #endif

    #define __QBFC_EXTERN
#endif


QBFC_EXTERN char *Qp0zGetEnvCCSID(const char *name, int *ccsid);
QBFC_EXTERN int   Qp0zInitEnv(void);
QBFC_EXTERN int   Qp0zPutEnvCCSID(const char *string, int ccsid);
QBFC_EXTERN int   Qp0zCvtToTimeval(struct timeval *to,         /* @A2A*/
                                   const _MI_Time from,        /* @A2A*/
                                   int option);                /* @A2A*/
QBFC_EXTERN int   Qp0zCvtToMITime(_MI_Time to,                 /* @A2A*/
                                  const struct timeval *from,  /* @A2A*/
                                  int option);                 /* @A2A*/
QBFC_EXTERN int   Qp0zSystem(const char *CLcommand);           /* @A3A*/
QBFC_EXTERN int   Qp0zDltEnv(const char *name);                /* @A4A*/

QBFC_EXTERN int   Qp0zPutSysEnv(const char *string, int ccsid,
                           void *reserved);               /*@A5A*/
QBFC_EXTERN int   Qp0zGetSysEnv(const char *name,
                           char *value, int *value_size,
                           int *ccsid, void *reserved); /*@A5A*/
QBFC_EXTERN int   Qp0zGetAllSysEnv(char *list_buf, int *list_buf_size,
                           int *ccsid_buf, int *ccsid_buf_size,
                           void *reserved);               /*@A5A*/
QBFC_EXTERN int   Qp0zDltSysEnv(const char *name,
                           void *reserved);               /*@A5A*/

QBFC_EXTERN char *Qp0zGetEnv(const char *name, int *ccsid); /*@A5A*/
QBFC_EXTERN int   Qp0zPutEnv(const char *string, int ccsid); /*@A5A*/
QBFC_EXTERN char *Qp0zGetEnvNoInit(const char *name); /*@B1A*/

#if (__OS400_TGTVRM__>=510)  /* @B1A*/
  #pragma datamodel(pop)     /* @B1A*/
#endif /* __OS400_TGTVRM__>=510 @B1A*/

#endif /* __qp0z1170_h */

#ifdef __cplusplus
    #pragma info(restore)
#else
    #pragma checkout(resume)
#endif
