#ifdef __ILEC400__
  #pragma nomargins nosequence
  #pragma checkout(suspend)
#endif

#ifndef __qp0zipc_h
#define __qp0zipc_h

/*** START HEADER FILE SPECIFICATIONS *****************************/
/*                                                                */
/* Header File Name: QP0ZIPC                                      */
/*                                                                */
/* Descriptive Name: Common include for interprocess              */
/*                   communications APIs                          */
/*                                                                */
/* 5769-SS1  (C) Copyright IBM Corp. 1998,1999                    */
/* All rights reserved.                                           */
/* US Government Users Restricted Rights -                        */
/* Use, duplication or disclosure restricted                      */
/* by GSA ADP Schedule Contract with IBM Corp.                    */
/*                                                                */
/* Licensed Materials-Property of IBM                             */
/*                                                                */
/*                                                                */
/* Description: Common include for interprocess communications    */
/*              APIs.                                             */
/*                                                                */
/* Macros List: None.                                             */
/*                                                                */
/* Structure List:                                                */
/*     Qp0z_ipc_JobInfo                                           */
/*     Qp0z_ipc_MessageQueue                                      */
/*     Qp0z_ipc_Perms                                             */
/*     Qp0z_ipc_Profs                                             */
/*     Qp0z_ipc_SemaphoreSet                                      */
/*     Qp0z_ipc_SharedMemory                                      */
/*     Qp0z_ipc_Time                                              */
/*     Qp0z_ipc_ThreadInfo                                        */
/*                                                                */
/* Function Prototype List: None.                                 */
/*                                                                */
/* Change Activity:                                               */
/*                                                                */
/* CFD List:                                                      */
/*                                                                */
/* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
/* ---- ------------ ----- ------ --------- ----------------------*/
/* $A0= D95191       4D20  970401 ROCH      New Include           */
/* $B1= D95601       4D40  980504 ROCH      Added ThreadInfo      */
/* $B2= D95944       4D40  980617 ROCH      Teraspace Changes     */
/* $B3= D9776700     5D10  991205 ROCH      Added datamodel pragma*/
/*                                                                */
/* End CFD List.                                                  */
/*                                                                */
/*  Additional notes about the Change Activity                    */
/*                                                                */
/* End Change Activity.                                           */
/*                                                                */
/*** END HEADER FILE SPECIFICATIONS *******************************/

/******************************************************************/
/* Includes                                                       */
/******************************************************************/

#include <sys/types.h>

#pragma datamodel(P128)      /* @B3A*/

/********************************************************************/
/* Type definition for specifying the qualified job identifier.     */
/********************************************************************/

typedef _Packed struct Qp0z_ipc_JobInfo
{
  char  Job_Name[10];
  char  User[10];
  char  Number[6];
  char  Reserved[2];
} Qp0z_ipc_JobInfo_t;

/********************************************************************/
/* Type definition for specifying the thread identifier.        @B1A*/
/********************************************************************/

typedef _Packed struct Qp0z_ipc_ThreadInfo
{
  char  Thread[16];
} Qp0z_ipc_ThreadInfo_t;

/********************************************************************/
/* Type definition for specifying the permissions to an IPC object  */
/********************************************************************/

typedef _Packed struct Qp0z_ipc_Perms
{
  char Owner_Read;                     /* Owner has read permission */
  char Owner_Write;                    /* Owner has write permission */
  char Group_Read;                     /* Group has read permission */
  char Group_Write;                    /* Group has write permission */
  char General_Read;                   /* Others have read permission */
  char General_Write;                  /* Others have write permission */
} Qp0z_ipc_Perms_t;

/********************************************************************/
/* Type definition to specify the time an IPC action  occured       */
/********************************************************************/

typedef _Packed struct Qp0z_ipc_Time
{
  char Century;                        /* Century flag */
  char Date[6];                        /* Day, month, year */
  char Time[6];                        /* Hours, minutes, seconds */
  char Milliseconds[3];                /* Milliseconds */
} Qp0z_ipc_Time_t;

/********************************************************************/
/* Type definition to supply the owner, group, creator and          */
/* creator's group.                                                 */
/********************************************************************/

typedef _Packed struct Qp0z_ipc_Profs
{
  char owner[10];                      /* Owner's user profile */
  char group[10];                      /* Owner's group profile */
  char creator[10];                    /* Creator's user profile */
  char cgroup[10];                     /* Creator's group profile */
} Qp0z_ipc_Profs_t;

/********************************************************************/
/* Type definition for the basic information that is returned for   */
/* a semaphore set.                                                 */
/********************************************************************/

typedef _Packed struct Qp0z_ipc_SemaphoreSet
{
  int                Identifier;       /* Identifier */
  key_t              Key;              /* Key */
  int                Num_Semaphores;   /* Number of semaphores in set */
  char               Damaged;          /* Damaged flag */
  Qp0z_ipc_Perms_t   Perms;            /* Permissions */
  char               Auth_Delete;      /* Authorized to delete flag */
  Qp0z_ipc_Time_t    oTime;            /* Time of last semop() */
  Qp0z_ipc_Time_t    cTime;            /* Time of last change by semctl() */
  Qp0z_ipc_Profs_t   Profs;            /* Owner and creator profiles */
} Qp0z_ipc_SemaphoreSet_t;

/********************************************************************/
/* Type definition for the basic information that is returned for   */
/* a message queue.                                                 */
/********************************************************************/

typedef _Packed struct Qp0z_ipc_MessageQueue
{
  int                Identifier;       /* Identifier */
  key_t              Key;              /* Key */
  char               Damaged;          /* Damaged flag */
  Qp0z_ipc_Perms_t   Perms;            /* Permissions */
  char               Auth_Delete;      /* Authorized to delete flag */
  int                Num_Msgs;         /* Number of messages on queue */
  int                Total_Msg_Size;   /* Size of all messages on queue */
  int                Max_Msg_Size;     /* Maximum size of all messages */
  int                Num_Waiters_Rcv;  /* Number waiting to receive msg */
  int                Num_Waiters_Snd;  /* Number waiting to send msg */
  Qp0z_ipc_Time_t    rTime;            /* Time of last msgrcv() */
  Qp0z_ipc_Time_t    sTime;            /* Time of last msgsnd() */
  Qp0z_ipc_Time_t    cTime;            /* Time of last change by msgctl() */
  Qp0z_ipc_Profs_t   Profs;            /* Owner and creator profiles */
} Qp0z_ipc_MessageQueue_t;

/********************************************************************/
/* Type definition for the basic information that is returned for   */
/* shared memory.                                                   */
/********************************************************************/

typedef _Packed struct Qp0z_ipc_SharedMemory
{
  int                Identifier;       /* Identifier */
  key_t              Key;              /* Key */
  char               Damaged;          /* Damaged flag */
  Qp0z_ipc_Perms_t   Perms;            /* Permissions */
  char               Marked_Deleted;   /* Marked to be deleted flag */
  char               Auth_Delete;      /* Authorized to delete flag */
  char               Teraspace;        /* Teraspace flag @B2A*/
  char               Resize;           /* Resizeable flag @B2A*/
  char               Reserved;         /* @B2C*/
  size_t             Segment_Size;     /* Size of segment */
  int                Num_Attached;     /* Number attached to segment */
  Qp0z_ipc_Time_t    aTime;            /* Time of last shmat() */
  Qp0z_ipc_Time_t    dTime;            /* Time of last shmdt() */
  Qp0z_ipc_Time_t    cTime;            /* Time of last change by shmctl() */
  Qp0z_ipc_Profs_t   Profs;            /* Owner and creator profiles */
} Qp0z_ipc_SharedMemory_t;

#pragma datamodel(pop)       /* @B3A*/

#endif /* __qp0zipc_h */

#ifdef __ILEC400__
  #pragma checkout(resume)
#endif
