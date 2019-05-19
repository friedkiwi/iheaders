#ifdef __ILEC400__
  #pragma nomargins nosequence
  #pragma checkout(suspend)
#endif

#ifndef __qp0zripc_h
#define __qp0zripc_h

/*** START HEADER FILE SPECIFICATIONS *****************************/
/*                                                                */
/* Header File Name: QP0ZRIPC                                     */
/*                                                                */
/* Descriptive Name: Retrieve detailed information about an       */
/*                   interprocess communication object.           */
/*                                                                */
/* 5769-SS1  (C) Copyright IBM Corp. 1998,1998                    */
/* All rights reserved.                                           */
/* US Government Users Restricted Rights -                        */
/* Use, duplication or disclosure restricted                      */
/* by GSA ADP Schedule Contract with IBM Corp.                    */
/*                                                                */
/* Licensed Materials-Property of IBM                             */
/*                                                                */
/*                                                                */
/* Description: The QP0ZRIPC API generates detailed information   */
/*              for a single IPC object based on specified        */
/*              selection parameters.                             */
/*                                                                */
/* Macros List: None.                                             */
/*                                                                */
/* Structure List:                                                */
/*     Qp0z_Ripc_AttachInfo                                       */
/*     Qp0z_Ripc_MessageEnt                                       */
/*     Qp0z_Ripc_RMSQ0100                                         */
/*     Qp0z_Ripc_RSHM0100                                         */
/*     Qp0z_Ripc_RSST0100                                         */
/*     Qp0z_Ripc_WaitOnRcv                                        */
/*     Qp0z_Ripc_WaitOnSnd                                        */
/*                                                                */
/* Function Prototype List:                                       */
/*     QP0ZRIPC                                                   */
/*                                                                */
/* Change Activity:                                               */
/*                                                                */
/* CFD List:                                                      */
/*                                                                */
/* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
/* ---- ------------ ----- ------ --------- ----------------------*/
/* $A0= D95191       4D20  970401 ROCH      New Include           */
/* $B1= D9776700     5D10  991205 ROCH      Added datamodel pragma*/
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

#include <qp0zipc.h>

#pragma datamodel(P128)      /* @B1A*/

/******************************************************************/
/* Prototype for call to QP0ZRIPC API                             */
/******************************************************************/

#ifdef  __ILEC400__
#pragma linkage(QP0ZRIPC,OS,nowiden)
#else
extern "OS"
#endif

  void   QP0ZRIPC  (void *,     /* Receiver variable              */
                    int   ,     /* Length of receiver variable    */
                    char *,     /* Format name                    */
                    int   ,     /* Identifier                     */
                    void *      /* Error code                     */
                    );



/*******************************************************************/
/* Type Definition for Retrieve an IPC object                      */
/* Format name:        RSST0100                                    */
/*******************************************************************/

typedef _Packed struct Qp0z_Ripc_RSST0100
{
  int                     Bytes_Returned;   /* Bytes returned */
  int                     Bytes_Available;  /* Bytes available */
  Qp0z_ipc_SemaphoreSet_t Basic_Info;       /* Basic info */
} Qp0z_Ripc_RSST0100_t;

/********************************************************************/
/* Type definition for each message on the message queue            */
/********************************************************************/

typedef _Packed struct Qp0z_Ripc_MessageEnt
{
  int                Message_Type;     /* Message type */
  int                Message_Size;     /* Message size */
} Qp0z_Ripc_MessageEnt_t;

/*******************************************************************/
/* Type definition for each job waiting to receive a message       */
/*******************************************************************/

typedef _Packed struct Qp0z_Ripc_WaitOnRcv
{
  int                   Message_Type;  /* Message type */
  Qp0z_ipc_JobInfo_t    Waiting_Job;   /* Waiting job ID */
} Qp0z_Ripc_WaitOnRcv_t;

/*******************************************************************/
/* Type definition for each job waiting to send a message          */
/*******************************************************************/

typedef _Packed struct Qp0z_Ripc_WaitOnSnd
{
  int                   Message_Size;  /* Message size */
  Qp0z_ipc_JobInfo_t    Waiting_Job;   /* Waiting job ID */
} Qp0z_Ripc_WaitOnSnd_t;

/*******************************************************************/
/* Type Definition for Retrieve an IPC object                      */
/* Format name:        RMSQ0100                                    */
/*   NOTE:  This type definition only defines fixed portions of    */
/*          the format.  Any varying length fields must be         */
/*          specified by the user.                                 */
/*******************************************************************/

typedef _Packed struct Qp0z_Ripc_RMSQ0100
{
  int                     Bytes_Returned;     /* Bytes returned */
  int                     Bytes_Available;    /* Bytes available */
  Qp0z_ipc_MessageQueue_t Basic_Info;         /* Basic info */
  Qp0z_ipc_JobInfo_t      Last_msgsnd_Job;    /* Last msgsnd() job ID */
  pid_t                   Last_msgsnd_Pid;    /* Last msgsnd() process ID */
  Qp0z_ipc_JobInfo_t      Last_msgrcv_Job;    /* Last msgrcv() job ID */
  pid_t                   Last_msgrcv_Pid;    /* Last msgrcv() process ID */
  int                     Message_Info_Offset; /* Offset to message info */
  int                     Message_Info_Size;  /* Size of message info */
  int                     Rcv_Waiter_Offset;  /* Offset to rcv waiter info */
  int                     Rcv_Waiter_Size;    /* Size of rcv waiter info */
  int                     Snd_Waiter_Offset;  /* Offset to send waiter info */
  int                     Snd_Waiter_Size;    /* Size of send waiter info */
  /*Qp0z_Ripc_MessageEnt_t  msgs[1]; */       /* VARYING LENGTH */
  /*Qp0z_Ripc_WaitOnRcv_t   rcvWaiters[1]; */ /* VARYING LENGTH */
  /*Qp0z_Ripc_WaitOnSnd_t   sndWaiters[1]; */ /* VARYING LENGTH */
} Qp0z_Ripc_RMSQ0100_t;

/*******************************************************************/
/* Type definition for each job attached to the shared memory      */
/*******************************************************************/

typedef _Packed struct Qp0z_Ripc_AttachInfo
{
  int                   Num_Times;     /* Number of times attached */
  Qp0z_ipc_JobInfo_t    Attached_Job;  /* Attached job ID */
} Qp0z_Ripc_AttachInfo_t;


/*******************************************************************/
/* Type Definition for Retrieve an IPC object                      */
/* Format name:        RSHM0100                                    */
/*   NOTE:  This type definition only defines fixed portions of    */
/*          the format.  Any varying length fields must be         */
/*          specified by the user.                                 */
/*******************************************************************/

typedef _Packed struct Qp0z_Ripc_RSHM0100
{
  int                     Bytes_Returned;      /* Bytes returned */
  int                     Bytes_Available;     /* Bytes available */
  Qp0z_ipc_SharedMemory_t Basic_Info;          /* Basic info */
  Qp0z_ipc_JobInfo_t      Last_Att_Det_Job;    /* Last operation job ID */
  pid_t                   Last_Att_Det_Pid;    /* Last operation process ID */
  int                     Attach_Entries_Offset; /* Offset to attach info */
  int                     Num_Attach_Entries;  /* Number of attach entries */
  int                     Attach_Entries_Size; /* Size of attach info */
  /*Qp0z_Ripc_AttachInfo_t  attaches[1]; */    /* VARYING LENGTH */

} Qp0z_Ripc_RSHM0100_t;

#pragma datamodel(pop)       /* @B1A*/

#endif /* __qp0zripc_h */

#ifdef __ILEC400__
  #pragma checkout(resume)
#endif
