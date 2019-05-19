#ifndef __ILEC400__
  extern "C" {
#else
  #pragma nomargins nosequence
  #pragma checkout(suspend)
#endif

#ifndef __QTRXRLSA_H
  #define __QTRXRLSA_H  1

/*===  START OF SPECIFICATIONS  ======================================*/
/*                                                                    */
/* Header File Name       : qtrxrlsa.h                                */
/*                                                                    */
/* Descriptive Name       : Retrieve Lock Space Attributes API        */
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
/* Description            : This header file provides the declare     */
/*                          and function prototypes for the Retrieve  */
/*                          Lock Space Attributes API.                */
/*                                                                    */
/* Notes:                 :                                           */
/*                                                                    */
/*                                                                    */
/* Header Files Included  : <pointer.h>                               */
/*                                                                    */
/* Macros List            : __QTRXRLSA_H                              */
/*                          _TRX_RLSA0100                             */
/*                          _TRX_RLSA_SYSTEM_ASP                      */
/*                          _TRX_RLSA_UNKNOWN_ASP                     */
/*                                                                    */
/* Structure List         : _TRX_RLSA0100_T                           */
/*                                                                    */
/* Function Prototype List: QTRXRLSA                                  */
/*                                                                    */
/*                                                                    */
/* Change Activity:                                                   */
/*                                                                    */
/*  CFD List:                                                         */
/*                                                                    */
/*                RLSE&                                               */
/*  FLAG  REASON  LEVEL  DATE    PGMR     COMMENTS                    */
/*  ---- -------- ----- ------ --------- ---------------------------- */
/*  $A0  D9882407 5D20  011014 ORBECK  : Retrieve Lock Space          */
/*                                       Attributes API               */
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

#ifndef __pointer_h
  #include <pointer.h>
#endif

#if (__OS400_TGTVRM__>=510)
#pragma datamodel(P128)
#endif


/*--------------------------------------------------------------------*/
/*                             Constants                              */
/*--------------------------------------------------------------------*/

#define _TRX_RLSA0100 "RLSA0100"    /* Format RLSA0100                */
#define _TRX_RLSA_SYSTEM_ASP   "*SYSBAS   "  /* Lock space located in */
                                    /* the system ASP                 */
#define _TRX_RLSA_UNKNOWN_ASP  "*N        "  /* ASP name can not be   */
                                    /* determined                     */


/*--------------------------------------------------------------------*/
/*                             Structures                             */
/*--------------------------------------------------------------------*/

typedef _Packed struct _TRX_RLSA0100_T {  /* Format RLSA0100 structure*/
    int BytesReturned;              /* Bytes returned                 */
    int BytesAvailable;             /* Bytes available                */
    int Type;                       /* Lock space type                */
    int State;                      /* Lock space state               */
    unsigned long long LockWait;    /* Lock wait time                 */
    unsigned long long ActiveTimer; /* Active state timer             */
    int AttachedThreads;            /* Number of threads with lock    */
                                    /* space attached                 */
    int MaximumThreads;             /* Maximum number of threads with */
                                    /* lock space attached            */
    char Reserved1[8];              /* Reserved (binary 0)            */
    char Name[30];                  /* Lock space name                */
    char LibraryName[10];           /* Lock space library name        */
    char NameASP[10];               /* Lock space ASP name            */
    char LibraryNameASP[10];        /* Lock space library ASP name    */
    int LockSpaceASP;               /* Lock space ASP number          */
    int LibraryASP;                 /* Lock space library ASP number  */
} _TRX_RLSA0100_T;


/*--------------------------------------------------------------------*/
/*                        Function Prototypes                         */
/*--------------------------------------------------------------------*/

#ifdef  __ILEC400__
    #pragma linkage(QTRXRLSA,OS,nowiden)
#else
    extern "OS"
#endif

void QTRXRLSA( void *receiver,
               int *receiverLength,
               char *receiverFormat,
               char *lockSpaceID,
               void *errorCode
              );


#if (__OS400_TGTVRM__>=510)
#pragma datamodel(pop)
#endif

#endif                              /* #ifndef __QTRXRLSA_H           */


#ifndef __ILEC400__
  }
#else
  #pragma checkout(resume)
#endif
