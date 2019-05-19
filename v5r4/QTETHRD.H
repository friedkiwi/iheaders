/*** START HEADER FILE SPECIFICATIONS ********************************/
/*                                                                   */
/* Header File Name: H/QTETHRD                                       */
/*                                                                   */
/* Descriptive Name: Source Debugger APIs.                           */
/*                                                                   */
/* 5716-SS1,5722-SS1  (C) Copyright IBM Corp. 1996,2001              */
/* All rights reserved.                                              */
/* US Government Users Restricted Rights -                           */
/* Use, duplication or disclosure restricted                         */
/* by GSA ADP Schedule Contract with IBM Corp.                       */
/*                                                                   */
/* Licensed Materials-Property of IBM                                */
/*                                                                   */
/*                                                                   */
/* Description: Include header file for the QTETHRD APIs.            */
/*                                                                   */
/* Header Files Included: H/QTES                                     */
/*                                                                   */
/* Macros List: None.                                                */
/*                                                                   */
/* Structure List: Receiver variables for Retrieve Debugged Threads  */
/*                                                                   */
/* Function Prototype List: QteChangeCurrentThread                   */
/*                          QteChangeThreadStatus                    */
/*                          QteRetrieveDebuggedThreads               */
/*                          QteStopDebuggedJob                       */
/*                                                                   */
/* Change Activity:                                                  */
/*                                                                   */
/* CFD List:                                                         */
/*                                                                   */
/* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION       */
/* ---- ------------ ----- ------ --------- -------------------------*/
/* $A0= D9480300     4D20  960920 ROCH    : New Include              */
/* $A1= D9480303     4D20  970206 ROCH    : Chg prototype for        */
/*                                          QteChangeCurrentThread   */
/* $B1= D9552600     4D30  971203 ROCH    : Add prototype for        */
/*                                          QteChangeThreadStatus    */
/*                                          and add ThreadStatus to  */
/*                                          THDL0100 and THD0200     */
/*                                          format records.          */
/* $B2= D98212.3    v5r1m0 010400 ROCH    : Teraspace stage 2        */
/*                                                                   */
/* End CFD List.                                                     */
/*                                                                   */
/*  Additional notes about the Change Activity                       */
/* End Change Activity.                                              */
/*** END HEADER FILE SPECIFICATIONS **********************************/

#ifndef _QTETHRD_H
#define _QTETHRD_H


/*-------------------------------------------------------------------*/
/* Includes used by Source Debugger APIs                             */
/*-------------------------------------------------------------------*/

#include <qtes.h>                   /* Common names include          */
#if (__OS400_TGTVRM__>=510)                                   /* @B2A*/
#pragma datamodel(P128)                                       /* @B2A*/
#endif                                                        /* @B2A*/


/*********************************************************************/
/* Prototype for Change Current Thread API.                          */
/*********************************************************************/
void QteChangeCurrentThread(
              _TE_THREADID_T,       /* Thread Identification         */
              _TE_ERROR_CODE_T *);  /* Error code                    */

/*********************************************************************/
/* Prototype for Retrieve Debugged Threads API.                      */
/*********************************************************************/
void QteRetrieveDebuggedThreads(
              char *,               /* Receiver variable             */
              long int *,           /* Length of receiver variable   */
              _TE_FORMAT_T,         /* Format name                   */
              char *,               /* Thread array                  */
              long int *,           /* Number of threads             */
              _TE_ERROR_CODE_T *);  /* Error code                    */

/*-------------------------------------------------------------------*/
/* Type Definition for THDL0100 format thread record returned by     */
/* Retrieve Debugged Threads API.                                    */
/*-------------------------------------------------------------------*/
typedef struct {
  _TE_THREADID_T  ThreadID;
  char  CurrentThreadFlag;
  char  InitialThreadFlag;
  char  ThreadRunState;
  char  ThreadStatus;
  char  Reserved1;
} _TE_THDL0100_RECORD_T;

/*-------------------------------------------------------------------*/
/* Type definition for the THDL0100 format of receiver variable in   */
/* the Retrieve Debugged Threads API.                                */
/*-------------------------------------------------------------------*/

typedef _Packed struct {
  long int BytesReturned;
  long int BytesAvailable;
  char     JobStatus;
  char     Reserved[3];
  long int OffsetToThreadRecords;
  long int NumberOfThreadRecords;
  long int SizeOfThreadRecord;
/*char Reserved[];*/
/*_TE_THDL0100_RECORD_T ThreadRecord[];*/
} _TE_THDL0100_HEADER_T;

/*-------------------------------------------------------------------*/
/* Type Definition for THDL0200 format thread record returned by     */
/* Retrieve Debugged Threads API.                                    */
/*-------------------------------------------------------------------*/
typedef struct {
  _TE_THREADID_T  ThreadID;
  char  CurrentThreadFlag;
  char  InitialThreadFlag;
  char  ThreadRunState;
  char  ThreadStatus;
  char  Reserved[3];
  char  TopOfStackFlag;
  long int StatementViewID;
  long int LineInStmtView;
} _TE_THDL0200_RECORD_T;

/*-------------------------------------------------------------------*/
/* Type definition for the THDL0200 format of receiver variable in   */
/* the Retrieve Debugged Threads API.                                */
/*-------------------------------------------------------------------*/

typedef _Packed struct {
  long int BytesReturned;
  long int BytesAvailable;
  char     JobStatus;
  char     Reserved[3];
  long int OffsetToThreadRecords;
  long int NumberOfThreadRecords;
  long int SizeOfThreadRecord;
/*char Reserved[];*/
/*_TE_THDL0200_RECORD_T ThreadRecord[];*/
} _TE_THDL0200_HEADER_T;

/*********************************************************************/
/* Prototype for Stop Debugged Job API.                              */
/*********************************************************************/
void QteStopDebuggedJob(
              _TE_ERROR_CODE_T *);  /* Error code                    */

/*********************************************************************/
/* Prototype for Change Thread Status API.                           */
/*********************************************************************/
void QteChangeThreadStatus(
              _TE_NAME_T,           /* Thread status                 */
              char *,               /* Thread array                  */
              long int *,           /* Number of threads             */
              _TE_ERROR_CODE_T *);  /* Error code                    */

#if (__OS400_TGTVRM__>=510)                                   /* @B2A*/
#pragma datamodel(pop)                                        /* @B2A*/
#endif                                                        /* @B2A*/

#endif
