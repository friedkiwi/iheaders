#ifndef __ILEC400__
  extern "C" {
#else
  #pragma nomargins nosequence
  #pragma checkout(suspend)
#endif

#ifndef __QTRXRLSL_H
  #define __QTRXRLSL_H  1

/*===  START OF SPECIFICATIONS  ======================================*/
/*                                                                    */
/* Header File Name       : qtrxrlsl.h                                */
/*                                                                    */
/* Descriptive Name       : Retrieve Lock Space Locks API             */
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
/*                          Lock Space Locks API.                     */
/*                                                                    */
/* Notes:                 :                                           */
/*                                                                    */
/*                                                                    */
/* Header Files Included  : <pointer.h>                               */
/*                                                                    */
/* Macros List            : __QTRXRLSL_H                              */
/*                          _TRX_RLSL0100                             */
/*                          _TRX_RLSL_SYSTEM_ASP                      */
/*                          _TRX_RLSL_UNKNOWN_ASP                     */
/*                          _TRX_RLSL_SHARED_READ                     */
/*                          _TRX_RLSL_SHARED_UPDATE                   */
/*                          _TRX_RLSL_SHARED_NO_UPDATE                */
/*                          _TRX_EXCLUSIVE_READ                       */
/*                          _TRX_EXCLUSIVE                            */
/*                          _TRX_RLSF0100                             */
/*                          _TRX_RLSF_DEFAULT_FLAG                    */
/*                          _TRX_RLSF_EXCLUDE_DATA                    */
/*                          _TRX_RLSF_INCLUDE_DATA                    */
/*                          _TRX_RLSL_Entity_Type_T                   */
/*                          _TRX_RLSL_Lock_Status_T                   */
/*                          _TRX_RLSF0100_Filter_Size_T               */
/*                          _TRX_RLSF_Lock_State_Filter_T             */
/*                                                                    */
/* Structure List         : _TRX_RLSL0100_T                           */
/*                          _TRX_RLSL0100_Entry_T                     */
/*                          _TRX_RLSF0100_T                           */
/*                                                                    */
/* Function Prototype List: QTRXRLSL                                  */
/*                                                                    */
/*                                                                    */
/* Change Activity:                                                   */
/*                                                                    */
/*  CFD List:                                                         */
/*                                                                    */
/*                RLSE&                                               */
/*  FLAG  REASON  LEVEL  DATE    PGMR     COMMENTS                    */
/*  ---- -------- ----- ------ --------- ---------------------------- */
/*  $A0  D9882407 5D20  011014 ORBECK  : Retrieve Lock Space Locks    */
/*                                       API                          */
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

#define _TRX_RLSL0100 "RLSL0100"    /* Format RLSL0100                */

#define _TRX_RLSL_SYSTEM_ASP  "*SYSBAS   "  /* Lock space located in  */
                                    /* the system ASP                 */
#define _TRX_RLSL_UNKNOWN_ASP "*N        "  /* ASP name can not be    */
                                    /* determined                     */

#define _TRX_RLSL_SHARED_READ      "*SHRRD    "  /* Lock shared for   */
                                    /* read                           */
#define _TRX_RLSL_SHARED_UPDATE    "*SHRUPD   "  /* Lock shared for   */
                                    /* update                         */
#define _TRX_RLSL_SHARED_NO_UPDATE "*SHRNUP   "  /* Lock shared, no   */
                                    /* update                         */
#define _TRX_RLSL_EXCLUSIVE_READ   "*EXCLRD   "  /* Lock exclusive,   */
                                    /* allow read                     */
#define _TRX_RLSL_EXCLUSIVE        "*EXCL     "  /* Lock exclusive,   */
                                    /* no read allowed                */

#define _TRX_RLSF0100 "RLSF0100"    /* Lock filter format RLSF0100    */

#define _TRX_RLSF_DEFAULT_FLAG ' '  /* Use default setting for data   */
#define _TRX_RLSF_EXCLUDE_DATA '0'  /* Exclude data flag              */
#define _TRX_RLSF_INCLUDE_DATA '1'  /* Include data flag              */
#define _TRX_RLSF_RESERVED1 0x00    /* Reserved field value           */

typedef enum {                      /* Type of entities values        */
    _TRX_RLSL_External_Object = 1,
    _TRX_RLSL_Member_Object   = 2,
    _TRX_RLSL_Internal_Object = 3
} _TRX_RLSL_Entity_Type_T;

typedef enum {                      /* Lock status values             */
    _TRX_RLSL_Object_Not_Locked = 0,
    _TRX_RLSL_Object_Locked     = 1
} _TRX_RLSL_Lock_Status_T;

typedef enum {                      /* Filter format RLSF0100 sizes   */
    _TRX_RLSF0100_No_Filtering = 4,
    _TRX_RLSF0100_All_Filters  = 44
} _TRX_RLSF0100_Filter_Size_T;

typedef enum {                      /* Filter lock state values       */
    _TRX_RLSF_No_Filter       = 0,
    _TRX_RLSF_Shared_Locks    = 1,
    _TRX_RLSF_Exclusive_Locks = 2
} _TRX_RLSF_Lock_State_Filter_T;


/*--------------------------------------------------------------------*/
/*                             Structures                             */
/*--------------------------------------------------------------------*/

typedef _Packed struct _TRX_RLSL0100_Entry_T {
    int Entity;                     /* Type of entity                 */
    char ObjectName[30];            /* Extended object name           */
    char LibraryName[10];           /* Object library name            */
    char ObjectASPname[10];         /* Object ASP name                */
    char LibraryASPname[10];        /* Object library ASP name        */
    int ObjectASP;                  /* Object ASP number              */
    int LibraryASP;                 /* Object library ASP number      */
    char ObjectType[10];            /* Object type                    */
    char ObjectAttrs[10];           /* Extended object attributes     */
    char MemberName[10];            /* Member name                    */
    char MemberLockType;            /* Member lock type               */
    char Reserved1[3];              /* Reserved (binary 0)            */
    char LockState[10];             /* Lock state                     */
    int Status;                     /* Lock status                    */
    int MemberLocks;                /* Member locks                   */
    int LockCount;                  /* Lock count                     */
    char ObjectHandle[64];          /* Object lock handle             */
    char RequesterHandle[64];       /* Lock requester handle          */
} _TRX_RLSL0100_Entry_T;

typedef _Packed struct _TRX_RLSL0100_T {  /* Format RLSL0100          */
    int BytesReturned;              /* Bytes returned                 */
    int BytesAvailable;             /* Bytes available                */
    int EntriesAvailable;           /* Number of locked object entries*/
                                    /* available                      */
    int EntryOffset;                /* Offset to list of object locks */
    int EntriesReturned;            /* Number of locked object entries*/
                                    /* returned                       */
    int EntrySize;                  /* Length of locked object entry  */
} _TRX_RLSL0100_T;

typedef _Packed struct _TRX_RLSF0100_T {  /* Filter format RLSF0100   */
    int Size;                       /* Filter size                    */
    int State;                      /* Filter lock state              */
    char ExternalObjectData;        /* Include OS/400 external objects*/
                                    /* flag                           */
    char MemberData;                /* Include member objects flag    */
    char InternalObjectData;        /* Include internal objects flag  */
    char LockSpaceData;             /* Include lock space objects flag*/
    char UnknownEntitiesData;       /* Include unknown entities flag  */
    char Reserved1;                 /* Reserved (binary 0)            */
    char ObjectName[10];            /* Filter object name             */
    char LibraryName[10];           /* Filter object library name     */
    char LibraryASPname[10];        /* Filter object library ASP name */
} _TRX_RSLF0100_T;


/*--------------------------------------------------------------------*/
/*                        Function Prototypes                         */
/*--------------------------------------------------------------------*/

#ifdef  __ILEC400__
    #pragma linkage(QTRXRLSL,OS,nowiden)
#else
    extern "OS"
#endif

void QTRXRLSL( void *receiver,
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

#endif                              /* #ifndef __QTRXRLSL_H           */


#ifndef __ILEC400__
  }
#else
  #pragma checkout(resume)
#endif
