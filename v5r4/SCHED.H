#ifdef __cplusplus
  extern "C" {
  #pragma info(none)
#else
  #pragma nomargins nosequence
  #pragma checkout(suspend)
#endif

#ifndef _SCHED_H
#define _SCHED_H

#if (__OS400_TGTVRM__>=510)  /* @B1A*/
    #pragma datamodel(P128)  /* @B1A*/
#endif                       /* @B1A*/

/*** START HEADER FILE SPECIFICATIONS *********************************/
/*                                                                    */
/* Header File Name: sched.h                                          */
/*                                                                    */
/* Descriptive Name: Scheduling definitions                           */
/*                                                                    */
/* 5769-SS1        (C) Copyright IBM Corp. 1996,1997                  */
/* All rights reserved.                                               */
/* US Government Users Restricted Rights -                            */
/* Use, duplication, or disclosure restricted                         */
/* by GSA ADP Schedule Contract with IBM Corp.                        */
/*                                                                    */
/* Licensed Materials-Property of IBM                                 */
/*                                                                    */
/* This header file is an external product interface, all             */
/* modifications must be upward compatible.                           */
/*                                                                    */
/* Macros List:                                                       */
/*                                                                    */
/* Structure/Type List:                                               */
/*                                                                    */
/* Function Prototype List:                                           */
/*                                                                    */
/* Change Activity:                                                   */
/*                                                                    */
/* FLAG REASON    LEVEL      DATE        CHANGE DESCRIPTION           */
/* ---- --------- ---------- ------      -------------------          */
/* $A0= D94778    v4r2m0.xpf 08/26/1996  New include                  */
/*                                                                    */
/* End Change Activity.                                               */
/*                                                                    */
/*** END HEADER FILE SPECIFICATIONS ***********************************/

/**********************************************************************/
/* Constants                                                          */
/**********************************************************************/
/* Priority is specified as a delta to the default process priority   */
#define PRIORITY_MIN_NP          -99
#define PRIORITY_DEFAULT_NP      0
#define PRIORITY_MAX_NP          0

/* Scheduling policies */
#define SCHED_OTHER              0

/**********************************************************************/
/* User Types                                                         */
/**********************************************************************/
struct sched_param {
  int           sched_priority;
  unsigned int  reserved[3];
  void          *reserved1;
};

/**********************************************************************/
/* Function Prototypes                                                */
/**********************************************************************/

int sched_yield(void);


#if (__OS400_TGTVRM__>=510)  /* @B1A*/
    #pragma datamodel(pop)   /* @B1A*/
#endif                       /* @B1A*/

#endif /* _SCHED_H */

#ifdef __cplusplus
  #pragma info(restore)
} /* end extern "C" */
#else
  #pragma checkout(resume)
#endif
