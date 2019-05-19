#ifdef __ILEC400__
  #pragma nomargins nosequence
  #pragma checkout(suspend)
#endif

#ifndef __qp0zolip_h
#define __qp0zolip_h

/*** START HEADER FILE SPECIFICATIONS *****************************/
/*                                                                */
/* Header File Name: QP0ZOLIP                                     */
/*                                                                */
/* Descriptive Name: Open List of interprocess communication      */
/*                   objects.                                     */
/*                                                                */
/* 5763-SS1  (C) Copyright IBM Corp. 1997,1997                    */
/* All rights reserved.                                           */
/* US Government Users Restricted Rights -                        */
/* Use, duplication or disclosure restricted                      */
/* by GSA ADP Schedule Contract with IBM Corp.                    */
/*                                                                */
/* Licensed Materials-Property of IBM                             */
/*                                                                */
/*                                                                */
/* Description: The QP0ZOLIP API generates a list of IPC objects  */
/*              and descriptive information based on specified    */
/*              selection parameters.                             */
/*                                                                */
/* Macros List: None.                                             */
/*                                                                */
/* Structure List:                                                */
/*     Qp0z_Olipc_FilterInfo                                      */
/*     Qp0z_Olipc_LMSQ0100                                        */
/*     Qp0z_Olipc_LNSM0100                                    @B1A*/
/*     Qp0z_Olipc_LSHM0100                                        */
/*     Qp0z_Olipc_LSST0100                                        */
/*     Qp0z_Olipc_LUSM0100                                    @B1A*/
/*     Qp0z_Olipc_Waiter                                      @B1A*/
/*                                                                */
/* Function Prototype List:                                       */
/*     QP0ZOLIP                                                   */
/*                                                                */
/* Change Activity:                                               */
/*                                                                */
/* CFD List:                                                      */
/*                                                                */
/* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
/* ---- ------------ ----- ------ --------- ----------------------*/
/* $A0= D95191       4D20  970401 ROCH      New Include           */
/* $B1= D95601       4D40  980428 ROCH      Add Named and Unnamed */
/*                                          semaphore support     */
/* $B2= D9776700     5D10  991205 ROCH      Added datamodel pragma*/
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

#include <qp0zipc.h>

#pragma datamodel(P128)      /* @B2A*/

/******************************************************************/
/* Prototype for call to QP0ZOLIP API                             */
/******************************************************************/

#ifdef  __ILEC400__
#pragma linkage(QP0ZOLIP,OS,nowiden)
#else
extern "OS"
#endif

  void   QP0ZOLIP  (void *,     /* Receiver variable              */
                    int   ,     /* Length of receiver variable    */
                    void *,     /* List information               */
                    int   ,     /* Number of records to return    */
                    char *,     /* Format name                    */
                    void *,     /* Filter information             */
                    char *,     /* Filter format name             */
                    void *      /* Error code                     */
                    );



/*******************************************************************/
/* Type Definition for Filter Field Information                    */
/*   NOTE:  This type definition only defines fixed portions of    */
/*          the format.  Any varying length fields must be         */
/*          specified by the user.                                 */
/*******************************************************************/

typedef _Packed struct Qp0z_Olipc_FilterInfo
{
  char  Filter_On_Key;                 /* Filter on key */
  char  Reserved[3];                   /* Reserved */
  key_t Minimum_Key;                   /* Minimum key */
  key_t Maximum_Key;                   /* Maximum key */
  int   Offset_To_Owners;              /* Offset to owner profiles array */
  int   Number_Of_Owners;              /* Number of owner profiles */
  int   Offset_To_Creators;            /* Offset to creator profiles array */
  int   Number_Of_Creators;            /* Number of creator profiles */
  /*char  OwnerList[10][1];*/                    /* VARYING LENGTH */
  /*char  CreatorList[10][1];*/                  /* VARYING LENGTH */
} Qp0z_Olipc_FilterInfo_t;

/*******************************************************************/
/* Type Definition for the Open list of semaphore set IPC objects  */
/* Format name:        LSST0100                                    */
/*******************************************************************/

typedef _Packed struct Qp0z_Olipc_LSST0100
{
  Qp0z_ipc_SemaphoreSet_t Basic_Info;
} Qp0z_Olipc_LSST0100_t;


/*******************************************************************/
/* Type Definition for the Open list of message queue IPC objects  */
/* Format name:        LMSQ0100                                    */
/*******************************************************************/

typedef _Packed struct Qp0z_Olipc_LMSQ0100
{
  Qp0z_ipc_MessageQueue_t Basic_Info;
} Qp0z_Olipc_LMSQ0100_t;

/*******************************************************************/
/* Type Definition for the Open list of shared memory IPC objects  */
/* Format name:        LSHM0100                                    */
/*******************************************************************/

typedef _Packed struct Qp0z_Olipc_LSHM0100
{
  Qp0z_ipc_SharedMemory_t Basic_Info;
} Qp0z_Olipc_LSHM0100_t;


/*******************************************************************/
/* Type Definition for the Waiter information                  @B1A*/
/*******************************************************************/

typedef _Packed struct Qp0z_Olipc_Waiter {
  Qp0z_ipc_JobInfo_t Waiting_Job;      /* Waiting job ID */
  Qp0z_ipc_ThreadInfo_t Waiting_Thread; /* Waiting thread ID */
} Qp0z_Olipc_WaiterInfo_t;


/*******************************************************************/
/* Type Definition for Open list of named semaphores               */
/* Format name: LNSM0100                                           */
/* NOTE: This type definition only defines fixed portions of       */
/*       the format. Any varying length fields must be             */
/*       specified by the user.                                @B1A*/
/*******************************************************************/

typedef _Packed struct Qp0z_Olipc_LNSM0100
{
  int Entry_Length;                    /* Length of entry */
  int Value;                           /* Value */
  int Max_Value;                       /* Maximum value */
  int Waiters_Offset;                  /* Offset to waiting threads */
  int Num_Waiters;                     /* Number of waiting threads */
  int Name_Offset;                     /* Offset to name */
  int Name_Size;                       /* Length of name */
  char Title[16];                      /* Title */
  char Marked_Deleted;                 /* Marked to be deleted flag */
  char Auth_Delete;                    /* Authorized to delete flag */
  char Creator[10];                    /* Creator's user profile */
  char Creator_Group[10];              /* Creator's group profile */
  Qp0z_ipc_Perms_t Perms;              /* Permissions */
  Qp0z_ipc_JobInfo_t Last_Post_Job;    /* Last sem_post() job ID */
  Qp0z_ipc_ThreadInfo_t Last_Post_Thread; /* Last sem_post() thread ID */
  Qp0z_ipc_JobInfo_t Last_Wait_Job;    /* Last sem_wait() job ID */
  Qp0z_ipc_ThreadInfo_t Last_Wait_Thread; /* Last sem_wait() thread ID */
  /*Qp0z_Olipc_WaiterInfo_t Waiters[];*/ /* VARYING LENGTH */
  /*char * Name[];*/                     /* null terminated name */
} Qp0z_Olipc_LNSM0100_t;


/*******************************************************************/
/* Type Definition for open list of unnamed semaphores             */
/* Format name: LUSM0100                                           */
/* NOTE: This type definition only defines fixed portions of       */
/* the format. Any varying length fields must be                   */
/* specified by the user.                                      @B1A*/
/*******************************************************************/
typedef _Packed struct Qp0z_Olipc_LUSM0100
{
  int Entry_Length;                    /* Length of entry */
  int Value;                           /* Value */
  int Max_Value;                       /* Maximum value */
  int Waiters_Offset;                  /* Offset to waiting threads */
  int Num_Waiters;                     /* Number of waiting threads */
  int reserved;                        /* Reserved */
  char Title[16];                      /* Title */
  Qp0z_ipc_JobInfo_t Last_Post_Job;    /* Last sem_post() job ID */
  Qp0z_ipc_ThreadInfo_t Last_Post_Thread; /* Last sem_post() thread ID */
  Qp0z_ipc_JobInfo_t Last_Wait_Job;    /* Last sem_wait() job ID */
  Qp0z_ipc_ThreadInfo_t Last_Wait_Thread; /* Last sem_wait() thread ID */
  /*Qp0z_Olipc_WaiterInfo_t Waiters[];*/ /* VARYING LENGTH */
} Qp0z_Olipc_LUSM0100_t;

#pragma datamodel(pop)       /* @B2A*/

#endif /* __qp0zolip_h */

#ifdef __ILEC400__
  #pragma checkout(resume)
#endif
