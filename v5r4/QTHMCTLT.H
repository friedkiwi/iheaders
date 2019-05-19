#ifndef __ILEC400__
  extern "C" {
#else
  #pragma nomargins nosequence
  #pragma checkout(suspend)
#endif

#ifndef __QTHMCTLT_H
  #define __QTHMCTLT_H  1

/*===  START OF SPECIFICATIONS  ======================================*/
/*                                                                    */
/* Header File Name       : qthmctlt.h                                */
/*                                                                    */
/* Descriptive Name       : Control Thread (QTHMCTLT) API interface   */
/*                                                                    */
/* 5722-SS1                                                           */
/* (C) Copyright IBM Corp. 2002                                       */
/* All rights reserved.                                               */
/* US Government Users Restricted Rights -                            */
/* Use, duplication or disclosure restricted                          */
/* by GSA ADP Schedule Contract with IBM Corp.                        */
/*                                                                    */
/* Licensed Materials-Property of IBM                                 */
/*                                                                    */
/* Description            : This header file provides the declares    */
/*                          and function prototypes for the Control   */
/*                          Thread (QTHMCTLT) API.                    */
/*                                                                    */
/* Notes:                 :                                           */
/*                                                                    */
/*                                                                    */
/* Header Files Included  : <pointer.h>                               */
/*                                                                    */
/* Macros List            : __QTHMCTLT_H                              */
/*                          _THM_CURRENT_JOB                          */
/*                          _THM_INTERNAL_JOB_ID                      */
/*                          _THM_CTLT0100                             */
/*                          _THM_JIDF0100                             */
/*                          _THM_JIDF0200                             */
/*                                                                    */
/* Structure List         : _THM_CTLT0100_T                           */
/*                          _THM_JIDF0100_T                           */
/*                          _THM_JIDF0200_T                           */
/*                                                                    */
/* Function Prototype List: QTHMCTLT                                  */
/*                                                                    */
/*                                                                    */
/* Change Activity:                                                   */
/*                                                                    */
/*  CFD List:                                                         */
/*                                                                    */
/*                RLSE&                                               */
/*  FLAG  REASON  LEVEL  DATE    PGMR     COMMENTS                    */
/*  ---- -------- ----- ------ --------- ---------------------------- */
/*  $A0  D9857809 5D20  011104 ORBECK  : Control Thread API           */
/*                                                                    */
/*                                                                    */
/*  End CFD List                                                      */
/*                                                                    */
/*  Additional notes about the Change Activity                        */
/*                                                                    */
/*                                                                    */
/*  End Change Activity                                               */
/*                                                                    */
/*                                                                    */
/*===  END OF SPECIFICATIONS  ========================================*/

#if (__OS400_TGTVRM__>=510)
    #pragma datamodel(P128)
#endif

#ifndef __pointer_h
  #include <pointer.h>
#endif


/*--------------------------------------------------------------------*/
/*                             Structures                             */
/*--------------------------------------------------------------------*/

typedef enum {                      /* Thread action values           */
    _THM_Hold_Thread    = 1,
    _THM_Release_Thread = 2,
    _THM_End_Thread     = 3
} _THM_Action_T;

typedef enum {                       /* Thread indicator values       */
    _THM_Min_Thread_Indicator_Value = 0,
    _THM_Thread_Identifier = 0,
    _THM_Current_Thread    = 1,
    _THM_Initial_Thread    = 2,
    _THM_Max_Thread_Indicator_Value = 2
} _THM_Thread_Indicator_T;

typedef _Packed struct _THM_CTLT0100_T {  /* Format CTLT0100         */
    int BytesReturned;              /* Bytes returned                */
    int BytesAvailable;             /* Bytes available               */
    unsigned int HoldCount;         /* Hold count                    */
} _THM_CTLT0100_T;

typedef _Packed struct _THM_JIDF0100_T {  /* Format JIDF0100         */
    char JobName[10];               /* Job name                      */
    char UserName[10];              /* User name                     */
    char JobNumber[6];              /* Job number                    */
    char JobIdentifier[16];         /* Internal job identifier       */
    char reserved[2];               /* Reserved                      */
    int ThreadIndicator;            /* Thread indicator              */
    char ThreadID[8];               /* Thread identifier             */
} _THM_JIDF0100_T;

typedef _Packed struct _THM_JIDF0200_T {  /* Format JIDF0200         */
    char JobName[10];               /* Job name                      */
    char UserName[10];              /* User name                     */
    char JobNumber[6];              /* Job number                    */
    char JobIdentifier[16];         /* Internal job identifier       */
    char reserved[2];               /* Reserved                      */
    unsigned int ThreadHandle;      /* Thread handle                 */
    char ThreadID[8];               /* Thread identifier             */
} _THM_JIDF0200_T;


/*--------------------------------------------------------------------*/
/*                             Constants                              */
/*--------------------------------------------------------------------*/

#define _THM_CURRENT_JOB      "*         "  /* The job in which       */
                                    /* QTHMCTLT is running            */
#define _THM_INTERNAL_JOB_ID  "*INT      "  /* The internal job       */
                                    /* identifier locates the job     */

#define _THM_CTLT0100  "CTLT0100"   /* Receiver CTLT0100 format       */
#define _THM_JIDF0100  "JIDF0100"   /* Job/Thread identification uses */
                                    /* JIDF0100 format                */
#define _THM_JIDF0200  "JIDF0200"   /* Job/Thread identification uses */
                                    /* JIDF0200 format                */


/*--------------------------------------------------------------------*/
/*                        Function Prototypes                         */
/*--------------------------------------------------------------------*/

#ifdef  __ILEC400__
    #pragma linkage(QTHMCTLT,OS,nowiden)
#else
    extern "OS"
#endif

void QTHMCTLT( void *receiver,
               int *recieverLength,
               char *receiverFormat,
               void *threadInfo,
               char *threadInfoFormat,
               int *action,
               void *errorCode
              );


#if (__OS400_TGTVRM__>=510)
#pragma datamodel(pop)
#endif

#endif                              /* #ifndef __QTHMCTLT_H           */


#ifndef __ILEC400__
  }
#else
  #pragma checkout(resume)
#endif
