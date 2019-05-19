#ifndef __ILEC400__
  extern "C" {
#else
  #pragma nomargins nosequence
  #pragma checkout(suspend)
#endif

#ifndef __QTRXRLRL_H
  #define __QTRXRLRL_H  1

/*===  START OF SPECIFICATIONS  ======================================*/
/*                                                                    */
/* Header File Name       : qtrxrlrl.h                                */
/*                                                                    */
/* Descriptive Name       : Retrieve Lock Space Record Locks API      */
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
/*                          and function prototype for the Retrieve   */
/*                          Lock Space Record Locks API.              */
/*                                                                    */
/* Notes:                 :                                           */
/*                                                                    */
/*                                                                    */
/* Header Files Included  : <pointer.h>                               */
/*                                                                    */
/* Macros List            : __QTRXRLRL_H                              */
/*                          _TRX_RLRL0100                             */
/*                          _TRX_RLRL_SYSTEM_ASP                      */
/*                          _TRX_RLRL_UNKNOWN_ASP                     */
/*                          _TRX_RLRL_SHARED_READ                     */
/*                          _TRX_RLRL_EXCLUSIVE_UPDATE                */
/*                          _TRX_RLRL_SHARED_INTERNAL                 */
/*                          _TRX_RLRF0100                             */
/*                          _TRX_RLRF_DEFAULT_FLAG                    */
/*                          _TRX_RLRF_EXCLUDE_DATA                    */
/*                          _TRX_RLRF_INCLUDE_DATA                    */
/*                          _TRX_RLRF0100_Filter_Size_T               */
/*                          _TRX_RLRF_Lock_State_Filter_T             */
/*                                                                    */
/* Structure List         : _TRX_RLRL0100_T                           */
/*                          _TRX_RLRL0100_Entry_T                     */
/*                          _TRX_RLRF0100_T                           */
/*                                                                    */
/* Function Prototype List: QTRXRLRL                                  */
/*                                                                    */
/*                                                                    */
/* Change Activity:                                                   */
/*                                                                    */
/*  CFD List:                                                         */
/*                                                                    */
/*                RLSE&                                               */
/*  FLAG  REASON  LEVEL  DATE    PGMR     COMMENTS                    */
/*  ---- -------- ----- ------ --------- ---------------------------- */
/*  $A0  D9882407 5D20  011014 ORBECK  : Retrieve Lock Space Record   */
/*                                       Locks API                    */
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

#define _TRX_RLRL0100 "RLRL0100"    /* Format RLRL0100                */

#define _TRX_RLRL_SYSTEM_ASP  "*SYSBAS   "  /* Lock space located in  */
                                    /* the system ASP                 */
#define _TRX_RLRL_UNKNOWN_ASP "*N        "  /* ASP name can not be    */
                                    /* determined                     */

#define _TRX_RLRL_SHARED_READ '0'      /* Shared read lock state.     */
#define _TRX_RLRL_EXCLUSIVE_UPDATE '1' /* Exclusive update lock state */
#define _TRX_RLRL_SHARED_INTERNAL '2'  /* Shared internal lock state  */

#define _TRX_RLRF0100 "RLRF0100"    /* Lock filter format RLRF0100    */

typedef enum {                      /* Filter format RLRF0100 sizes   */
    _TRX_RLRF0100_No_Filtering = 4,
    _TRX_RLRF0100_All_Filters  = 48
} _TRX_RLRF0100_Filter_Size_T;

typedef enum {                      /* Filter lock state values       */
    _TRX_RLRF_No_Filter       = 0,
    _TRX_RLRF_Shared_Locks    = 1,
    _TRX_RLRF_Exclusive_Locks = 2
} _TRX_RLRF_Lock_State_Filter_T;


/*--------------------------------------------------------------------*/
/*                             Structures                             */
/*--------------------------------------------------------------------*/

typedef _Packed struct _TRX_RLRL0100_Entry_T {
    char FileName[10];              /* Database file name             */
    char LibraryName[10];           /* Database file library name     */
    char MemberName[10];            /* Database member name           */
    char Reserved1;                 /* Reserved (binary 0)            */
    char LockState;                 /* Lock state                     */
    unsigned int RecordNumber;      /* Relative record number         */
    char FileASPname[10];           /* Database file ASP name         */
    char LibraryASPname[10];        /* Database file library ASP name */
    int FileASP;                    /* Database file ASP number       */
    int LibraryASP;                 /* Database file library ASP      */
                                    /* number                         */
} _TRX_RLRL0100_Entry_T;

typedef _Packed struct _TRX_RLRL0100_T {  /* Format RLRL0100          */
    int BytesReturned;              /* Bytes returned                 */
    int BytesAvailable;             /* Bytes available                */
    int EntriesAvailable;           /* Number record locks available  */
    int EntriesReturned;            /* Number record locks returned   */
    int EntryOffset;                /* Offset to list of record locks */
    int EntrySize;                  /* Length of record lock entry    */
} _TRX_RLRL0100_T;

typedef _Packed struct _TRX_RLRF0100_T {  /* Filter format RLRF0100   */
    int Size;                       /* Filter size                    */
    int State;                      /* Filter lock state              */
    char FileName[10];              /* Filter database file name      */
    char LibraryName[10];           /* Filter database file library   */
                                    /* name                           */
    char MemberName[10];            /* Filter database member name    */
    char LibraryASPname[10];        /* Filter object library ASP name */
} _TRX_RLRF0100_T;


/*--------------------------------------------------------------------*/
/*                        Function Prototypes                         */
/*--------------------------------------------------------------------*/

#ifdef  __ILEC400__
    #pragma linkage(QTRXRLRL,OS,nowiden)
#else
    extern "OS"
#endif

void QTRXRLRL( void *receiver,
               int *receiverLength,
               char *receiverFormat,
               char *lockSpaceID,
               void *filter,
               char *filterFormat,
               void *errorCode
              );


#if (__OS400_TGTVRM__>=510)
#pragma datamodel(pop)
#endif

#endif                              /* #ifndef __QTRXRLRL_H           */


#ifndef __ILEC400__
  }
#else
  #pragma checkout(resume)
#endif
