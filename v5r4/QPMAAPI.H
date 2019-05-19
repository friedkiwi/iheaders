/*** START HEADER FILE SPECIFICATIONS *******************************/
/*                                                                  */
/* Header File Name: H/QPMAAPI                                      */
/*                                                                  */
/* Descriptive Name: Collection Services API header file            */
/*                                                                  */
/* 5722-SS1  (C) Copyright IBM Corp. 2001                           */
/* All rights reserved.                                             */
/* US Government Users Restricted Rights -                          */
/* Use, duplication or disclosure restricted                        */
/* by GSA ADP Schedule Contract with IBM Corp.                      */
/*                                                                  */
/* Licensed Materials-Property of IBM                               */
/*                                                                  */
/*                                                                  */
/* Description: This file contains declarations and definitions     */
/*              used by callers of the Collection Services APIs.    */
/*              Declarations for these APIs included:               */
/*              - Retrieve Active Management Collection Object Name */
/*                (QpmRtvActiveMgtcolName) API                      */
/*              - Retrieve Management Collection Object Attributes  */
/*                (QpmRtvMgtcolAttrs) API                           */
/*              - Open Management Collection Object                 */
/*                (QpmOpenMgtcol) API                               */
/*              - Close Management Collection Object                */
/*                (QpmCloseMgtcol) API                              */
/*              - Open Management Collection Object Repository      */
/*                (QpmOpenMgtcolRepo) API                           */
/*              - Close Management Collection Object Repository     */
/*                (QpmCloseMgtcolRepo) API                          */
/*              - Read Management Collection Object Data            */
/*                (QpmReadMgtcolData) API                           */
/*                                                                  */
/* Structure List: Qpm_MCOA0100_t,           Qpm_MCOA0200_t         */
/*                 Qpm_Repo_Entry_t,         Qpm_Coll_Entry_t,      */
/*                 Qpm_Read_Options_0100_t,  Qpm_Rec_Info_0100_t    */
/*                                                                  */
/* Function Prototype List: QpmRtvActiveMgtcolName                  */
/*                          QpmRtvMgtcolAttrs                       */
/*                          QpmOpenMgtcol                           */
/*                          QpmCloseMgtcol                          */
/*                          QpmOpenMgtcolRepo                       */
/*                          QpmCloseMgtcolRepo                      */
/*                          QpmReadMgtcolData                       */
/*                                                                  */
/* Change Activity:                                                 */
/*                                                                  */
/* CFD List:                                                        */
/*                                                                  */
/* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION      */
/* ---- ------------ ----- ------ --------- ----------------------  */
/*      D98669       5D20  010709 AP:       New file                */
/*                                                                  */
/* End CFD List.                                                    */
/*                                                                  */
/*  Additional notes about the Change Activity                      */
/* End Change Activity.                                             */
/*** END HEADER FILE SPECIFICATIONS *********************************/


#ifndef  __QPMAAPI_H
  #define  __QPMAAPI_H

#if (__OS400_TGTVRM__>=510)
#pragma datamodel(P128)
#endif


/********************************************************************/
/*  Function prototypes for APIs                                    */
/********************************************************************/

#ifdef __ILEC400__

     #pragma argument (QpmRtvActiveMgtcolName,OS,nowiden)
     #pragma argument (QpmRtvMgtcolAttrs,OS,nowiden)
     #pragma argument (QpmOpenMgtcol,OS,nowiden)
     #pragma argument (QpmCloseMgtcol,OS,nowiden)
     #pragma argument (QpmOpenMgtcolRepo,OS,nowiden)
     #pragma argument (QpmCloseMgtcolRepo,OS,nowiden)
     #pragma argument (QpmReadMgtcolData,OS,nowiden)

#else
  extern "C" {
#endif

/********************************************************************/
/*  Retrieve active *MGTCOL name                                    */
/********************************************************************/
void QpmRtvActiveMgtcolName( char *,    /* Qualified object name    */
                             void * );  /* Error code               */

/********************************************************************/
/*  Retrieve *MGTCOL attributes                                     */
/********************************************************************/
void QpmRtvMgtcolAttrs( void *,      /* Receiver variable           */
                        int  *,      /* Length of receiver variable */
                        char *,      /* Format name                 */
                        char *,      /* Qualified object name       */
                        void * );    /* Error code                  */

/********************************************************************/
/*  Open *MGTCOL                                                    */
/********************************************************************/
void QpmOpenMgtcol( char *,          /* Qualified object name       */
                    int  *,          /* *MGTCOL handle              */
                    void * );        /* Error code                  */

/********************************************************************/
/*  Close *MGTCOL                                                   */
/********************************************************************/
void QpmCloseMgtcol( int  *,         /* *MGTCOL handle              */
                     void * );       /* Error code                  */

/********************************************************************/
/*  Open *MGTCOL repository                                         */
/********************************************************************/
void QpmOpenMgtcolRepo( int  *,      /* *MGTCOL handle              */
                        char *,      /* Repository name             */
                        char *,      /* Format name                 */
                        int  *,      /* repository handle           */
                        void * );    /* Error code                  */

/********************************************************************/
/*  Close *MGTCOL repository                                        */
/********************************************************************/
void QpmCloseMgtcolRepo( int  *,     /* Repository handle           */
                         void * );   /* Error code                  */

/********************************************************************/
/*  Read *MGTCOL data                                               */
/********************************************************************/
void QpmReadMgtcolData( int  *,      /* Repository handle           */
                        void *,      /* Read options                */
                        void *,      /* Record information          */
                        char *,      /* Record data                 */
                        void * );    /* Error code                  */

#ifndef __ILEC400__
             }
#endif




/*******************************************************************/
/* Typedefs for structures used by APIs                            */
/*******************************************************************/

/*******************************************************************/
/* MCOA0100 format (used by QpmRtvMgtcolAttrs)                     */
/*******************************************************************/

typedef _Packed struct Qpm_MCOA0100
{
  int    bytesReturned;             /* Bytes returned from API     */
  int    bytesAvailable;            /* Bytes available from API    */
  long long
         size;                      /* Object size in Kbytes       */
  int    retentionPeriod;           /* Retention period            */
  int    dftInterval;               /* Default collection interval */
  int    repositoryCount;           /* Number of repositories      */
  char   timeCreated[14];           /* Object creation time        */
                                    /*   'YYYYMMDDHHMMSS'          */
  char   timeUpdated[14];           /* Last update time            */
                                    /*   'YYYYMMDDHHMMSS'          */
  char   logicalPSN[10];            /* Partition Serial Number     */
  char   isActive;                  /* Object is active flag       */
  char   isRepaired;                /* Object was repaired         */
  char   sumStatus;                 /* Summarization status        */

  char   rsvd1[3];

} Qpm_MCOA0100_t;


/*******************************************************************/
/* MCOA0200 format (used by QpmRtvMgtcolAttrs)                     */
/*******************************************************************/

typedef _Packed struct Qpm_MCOA0200
{
  int    bytesReturned;             /* Bytes returned from API     */
  int    bytesAvailable;            /* Bytes available from API    */
  long long
         size;                      /* Object size                 */
  int    retentionPeriod;           /* Retention period            */
  int    dftInterval;               /* Default collection interval */
  int    repositoryCount;           /* Number of repositories      */
  char   timeCreated[14];           /* Object creation time        */
                                    /*   'YYYYMMDDHHMMSS'          */
  char   timeUpdated[14];           /* Last update time            */
                                    /*   'YYYYMMDDHHMMSS'          */
  char   logicalPSN[10];            /* Partition Serial Number     */
  char   isActive;                  /* Object is active flag       */
  char   isRepaired;                /* Object was repaired         */
  char   sumStatus;                 /* Summarization status        */

  char   rsvd1[3];

  int    repoEntryCount;            /* Number of repository        */
                                    /*   entries returned          */
  int    repoArrayOffset;           /* Offset to array of          */
                                    /*   repository entries        */
  struct                            /* This array will have zero   */
  {                                 /*   or more entries           */
     int    offset;                 /* Offset to repository entry  */
     int    length;                 /* Length of repository entry  */
  } repoEntry[1];

} Qpm_MCOA0200_t;


/*******************************************************************/
/* Collection period entry structure (used in Qpm_Repo_Entry_t)    */
/*******************************************************************/

typedef _Packed struct Qpm_Coll_Entry
{
  int    entryLength;               /* Length of this entry        */
  char   startTime[14];             /* Start of collection period  */
                                    /*   'YYYYMMDDHHMMSS'          */
  char   endTime[14];               /* End of collection period    */
                                    /*   'YYYYMMDDHHMMSS'          */
  int    interval;                  /* Collection interval for     */
                                    /*   this collection period    */
  char   rsvd1[4];

} Qpm_Coll_Entry_t;



/*******************************************************************/
/* Repository entry structure (used in MCOA0200 format )           */
/*******************************************************************/

typedef _Packed struct Qpm_Repo_Entry
{
  char   name[10];                  /* Repository name             */
  char   categoryName[10];          /* Collection category name    */
  int    collEntryCount;            /* Number of collection        */
                                    /*   period entries            */
  long long
         size;                      /* Repository size             */
  Qpm_Coll_Entry_t                  /* Collection period entry     */
         collEntry[1];              /*   repeats one or more times */
} Qpm_Repo_Entry_t;


/*******************************************************************/
/* Read options structure (used by QpmReadMgtcolData when          */
/*    MCOD0100 format was used)                                    */
/*******************************************************************/

typedef _Packed struct Qpm_Read_Options_0100
{
  int    bytesProvided;           /* Bytes provided by API caller  */
  int    option;                  /* Record positioning option     */
  long long
         offset;                  /* Offset in record data         */
  long long
         bytesToRead;             /* How many bytes to read        */
  char   recKey[8];               /* Record key to search for      */

} Qpm_Read_Options_0100_t;


/*******************************************************************/
/* Record information structure (used by QpmReadMgtcolData when    */
/*    MCOD0100 format was used)                                    */
/*******************************************************************/

typedef _Packed struct Qpm_Rec_Info_0100
{
  int    recStatus;               /* Record status                 */
  int    recType;                 /* Record type                   */
  long long
         bytesReturned;           /* Bytes returned by API         */
  char   recKey[8];               /* Key of record returned        */
  char   timestamp[8];            /* Timestamp of record returned  */
  long long
         recLength;               /* Total record length           */

} Qpm_Rec_Info_0100_t;


/*******************************************************************/
/* Manifest constants                                              */
/*******************************************************************/

/*******************************************************************/
/* *MGTCOL summarization status (QpmRtvMgtcolAttrs)                */
/*******************************************************************/

#define   PM_SUMMARY_NOT_RUN      0
#define   PM_SUMMARY_OK           1
#define   PM_SUMMARY_IN_PROGRESS  2
#define   PM_SUMMARY_FAILED       3

/*******************************************************************/
/* Record positioning option (QpmReadMgtcolData)                   */
/*******************************************************************/

#define   PM_READ_NEXT                       0
#define   PM_READ_CURRENT                    1
#define   PM_READ_FIRST                      2
#define   PM_READ_BY_KEY_EQUAL               3
#define   PM_READ_BY_KEY_LESS_EQUAL          4
#define   PM_READ_BY_KEY_GREATER_EQUAL       5

/*******************************************************************/
/* Record status (QpmReadMgtcolData)                               */
/*******************************************************************/

#define   PM_RECORD_FOUND         0
#define   PM_RECORD_NOT_FOUND     1

/*******************************************************************/
/* Record type (QpmReadMgtcolData)                                 */
/*******************************************************************/

#define   PM_INTERVAL_RECORD      0
#define   PM_CONTROL_RECORD       1
#define   PM_STOP_RECORD          2
#define   PM_UNEXPECTED_RECORD    3


#if (__OS400_TGTVRM__>=510)
#pragma datamodel(pop)
#endif

#endif
