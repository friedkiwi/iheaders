#ifdef __ILEC400__
  #pragma nomargins nosequence
  #pragma checkout(suspend)
#endif

#ifndef __qp0zolsm_h
#define __qp0zolsm_h

/*** START HEADER FILE SPECIFICATIONS *****************************/
/*                                                                */
/* Header File Name: QP0ZOLSM                                     */
/*                                                                */
/* Descriptive Name: Open list of semaphores in a semaphore set   */
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
/* Description: The QP0ZOLSM API generates a list of semaphores   */
/*              in a specific semaphore set, that is determined   */
/*              by the selection parameters.                      */
/*                                                                */
/* Macros List: None.                                             */
/*                                                                */
/* Structure List:                                                */
/*     Qp0z_Olsem_Waiter                                          */
/*     Qp0z_Olsem_LSEM0100                                        */
/*                                                                */
/* Function Prototype List:                                       */
/*     QP0ZOLSM                                                   */
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
/* Prototype for call to QP0ZOLSM API                             */
/******************************************************************/

#ifdef  __ILEC400__
#pragma linkage(QP0ZOLSM,OS,nowiden)
#else
extern "OS"
#endif

  void   QP0ZOLSM  (void *,     /* Receiver variable              */
                    int   ,     /* Length of receiver variable    */
                    void *,     /* List information               */
                    int   ,     /* Number of records to return    */
                    char *,     /* Format name                    */
                    int   ,     /* Semaphore set identifier       */
                    void *      /* Error code                     */
                    );


/*******************************************************************/
/* Type definition for each job waiting on the semaphore value     */
/*******************************************************************/
typedef _Packed struct Qp0z_Olsem_Waiter
{
  int                   Wait_Value;    /* Value waiting for */
  Qp0z_ipc_JobInfo_t    Waiting_Job;   /* Waiting job ID */
} Qp0z_Olsem_Waiter_t;

/*******************************************************************/
/* Type Definition for the Open list of semaphores                 */
/* Format name:        LSEM0100                                    */
/*******************************************************************/

typedef _Packed struct Qp0z_Olsem_LSEM0100
{
  int                Entry_Length;     /* Length of entry */
  int                Semaphore_Number; /* Semaphore number */
  int                Value;            /* Semaphore value */
  int                Waiter_Array_Offset; /* Offset to waiting jobs */
  int                Total_Waiters;    /* Number of waiting jobs */
  int                Size_Of_Waiter;   /* Size of waiter info */
  int                Waiters_For_Zero; /* Number waiting for zero value */
  int                Waiters_For_Pos;  /* Number waiting for positive value */
  Qp0z_ipc_JobInfo_t Last_Change_Job;  /* Last change job ID */
  pid_t              Last_Change_Pid;  /* Last change process ID */
  /*Qp0z_Olsem_Waiter_t waiters[1]; */ /* VARYING LENGTH */
} Qp0z_Olsem_LSEM0100_t;

#pragma datamodel(pop)       /* @B1A*/

#endif /* __qp0zolsm_h */

#ifdef __ILEC400__
  #pragma checkout(resume)
#endif
