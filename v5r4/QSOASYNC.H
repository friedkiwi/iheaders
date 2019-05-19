/* begin_generated_IBM_copyright_prolog                              */
/* This is an automatically generated copyright prolog.              */
/* After initializing,  DO NOT MODIFY OR MOVE                        */
/* ----------------------------------------------------------------- */
/*                                                                   */
/* Product(s):                                                       */
/*     5722-SS1                                                      */
/*                                                                   */
/* (C)Copyright IBM Corp.  2000, 2006                                */
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
#ifdef __cplusplus
   #pragma info(none)
#else
   #pragma nomargins nosequence
   #pragma checkout(suspend)
#endif
/*** START HEADER FILE SPECIFICATIONS ********************************/
/*                                                                   */
/* Header File Name:  qsoasync.h                                     */
/*                                                                   */
/* Descriptive Name: Sockets asynchronous I/O definition             */
/*                                                                   */
/*                                                                   */
/* Description:                                                      */
/*                                                                   */
/*          Defines prototypes, macros, variables, and               */
/*          structures to be used with the sockets asynchronous      */
/*          I/O completion port APIs.                                */
/*                                                                   */
/* Header Files Included:                                            */
/*                                                                   */
/*          sys/time.h                                               */
/*          sys/types.h                                              */
/*                                                                   */
/* Macros List:                                                      */
/*                                                                   */
/*          QSO_MAX_IOCOMPLETION_PORTS                               */
/*          QSOPOSTIOCOMPLETION                                      */
/*          QSOSTARTRECV                                             */
/*          QSOSTARTSEND                                             */
/*          QSOSTARTACCEPT                                       @A1A*/
/*          GSKSECURESOCSTARTSEND                                @A1A*/
/*          GSKSECURESOCSTARTRECV                                @A1A*/
/*          GSKSECURESOCSTARTINIT                                @A3A*/
/*                                                                   */
/* Structure List:                                                   */
/*                                                                   */
/*          Qso_OverlappedIO_t                                       */
/*                                                                   */
/* Function Prototype List:                                          */
/*                                                                   */
/*          QsoCreateIOCompletionPort                                */
/*          QsoDestroyIOCompletionPort                               */
/*          QsoWaitForIOCompletion                                   */
/*          QsoPosttIOCompletion                                     */
/*          QsoStartRecv                                             */
/*          QsoStartSend                                             */
/*          QsoStartAccept                                       @A1A*/
/*          QsoGenerateOperationId                               @A5A*/
/*          QsoCancelOperation                                   @A5A*/
/*          QsoIsOperationPending                                @A5A*/
/*                                                                   */
/* Change Activity:                                                  */
/*                                                                   */
/*   CFD List:                                                       */
/*                                                                   */
/*   FLAG REASON       LEVEL DATE    PGMR     CHANGE DESCRIPTION     */
/*   ---- ------------ ----- ------- -------- ---------------------- */
/*   $A0= D98272       4D50  990110  ROCH     New include.           */
/*   $A1= D97922.01    5D10  000604  ROCH     Additions              */
/*   $A2= D98212.1     5D10  991107  ROCH:    Teraspace stage 2      */
/*   $A3= D98833.1     5D10  010421  ROCH:    GSKSECURESOCSTARTINIT  */
/*   $A4= D98822.3     5D20  010713  ROCH:    Add timer support      */
/*   $A5= D93602       5D40  060308  ROCH:    Add cancel support     */
/*                                                                   */
/*   End CFD List.                                                   */
/*                                                                   */
/*   Additional notes about the Change Activity:                     */
/*                                                                   */
/* End Change Activity                                               */
/*                                                                   */
/*** END HEADER FILE SPECIFICATIONS **********************************/

#ifndef __qsoasync_h
  #define __qsoasync_h

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
#include <sys/time.h>                 /* timeval structure           */
#include <sys/types.h>                /* common typedefs             */

#if (__OS400_TGTVRM__>=510)                                    /*@A2A*/
    #pragma datamodel(P128)                                    /*@A2A*/
#endif                                                         /*@A2A*/

#ifndef ECANCELED                                             /* @A5A*/
 #define ECANCELED 3456               /* Operation canceled      @A5A*/
#endif                                                        /* @A5A*/
/*********************************************************************/
/* Maximum number of I/O Completion ports per process                */
/*********************************************************************/
#define QSO_MAX_IOCOMPLETION_PORTS        256

/*********************************************************************/
/* Completed operation types (operationCompleted)                    */
/*********************************************************************/
#define QSOSTARTSEND                       1
#define QSOSTARTRECV                       2
#define QSOPOSTIOCOMPLETION                3
#define GSKSECURESOCSTARTSEND              4                   /*@A1A*/
#define GSKSECURESOCSTARTRECV              5                   /*@A1A*/
#define QSOSTARTACCEPT                     6                   /*@A1A*/
#define GSKSECURESOCSTARTINIT              7                   /*@A3A*/

/*********************************************************************/
/* Definition of a handle for application specific use               */
/*********************************************************************/
typedef void * Qso_DescriptorHandle_t;

/*********************************************************************/
/* Structures                                                        */
/*********************************************************************/
struct Qso_OverlappedIO_t {
  Qso_DescriptorHandle_t   descriptorHandle;
  void *                buffer;
  size_t                bufferLength;
  int                   postFlag : 1;
  int                   fillBuffer : 1;
  int                   postFlagResult : 1;                   /*@A1A*/
  int                   reserved1 : 29;                       /*@A1C*/
  int                   returnValue;
  int                   errnoValue;
  int                   operationCompleted;
  int                   secureDataTransferSize;               /*@A1A*/
  unsigned int          bytesAvailable;                       /*@A1A*/
  struct timeval        operationWaitTime;                    /*@A4A*/
  int                   postedDescriptor;                     /*@A4A*/
  unsigned long long    operationId;                          /*@A5A*/
  char                  reserved2[32];                        /*@A5C*/
   };


/*********************************************************************/
/* Definition of Qso_OverlappedIO_t                                  */
/*********************************************************************/
typedef struct Qso_OverlappedIO_t Qso_OverlappedIO_t;



/*********************************************************************/
/* Function prototypes                                               */
/*********************************************************************/

QBFC_EXTERN int QsoCreateIOCompletionPort(void);
QBFC_EXTERN int QsoDestroyIOCompletionPort(int);
QBFC_EXTERN int QsoWaitForIOCompletion(int, Qso_OverlappedIO_t *,
                                       struct timeval *);
QBFC_EXTERN int QsoStartRecv(int, int, Qso_OverlappedIO_t *);
QBFC_EXTERN int QsoStartSend(int, int, Qso_OverlappedIO_t *);
QBFC_EXTERN int QsoPostIOCompletion(int, Qso_OverlappedIO_t *);
QBFC_EXTERN int QsoStartAccept(int, int, Qso_OverlappedIO_t *);

QBFC_EXTERN unsigned long long QsoGenerateOperationId(int);   /*@A5A*/
QBFC_EXTERN int QsoCancelOperation(int, unsigned long long);  /*@A5A*/
QBFC_EXTERN int QsoIsOperationPending(int,unsigned long long);/*@A5A*/



 #if (__OS400_TGTVRM__>=510)                                  /*@A2A*/
     #pragma datamodel(pop)                                   /*@A2A*/
 #endif                                                       /*@A2A*/


#endif /* #ifndef __qsoasync_h */

#ifdef __cplusplus
    #pragma info(restore)
#else
    #pragma checkout(resume)
#endif
