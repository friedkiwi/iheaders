/* begin_generated_IBM_copyright_prolog                              */
/* This is an automatically generated copyright prolog.              */
/* After initializing,  DO NOT MODIFY OR MOVE                        */
/* ----------------------------------------------------------------- */
/*                                                                   */
/* Product(s):                                                       */
/*     5722-SS1                                                      */
/*                                                                   */
/* (C)Copyright IBM Corp.  2003, 2005                                */
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
/* ----------------------------------------------------------------- */

/* ----------------------------------------------------------------- */

#ifndef __QP0MSRTVSO_H
#define __QP0MSRTVSO_H 1

#ifdef __cplusplus
  #pragma info(none)
#else
  #pragma nomargins nosequence
  #pragma checkout(suspend)
#endif

/*** START HEADER FILE SPECIFICATION **********************************/
/*                                                                    */
/* Header File NAME:  qp0msrtvso.H                                    */
/*                                                                    */
/* Header File Description: Retrieve Synchronization Object           */
/*                          Information API definition                */
/**********************************************************************/
/*                                                                    */
/* Description: Defines macros, structures and prototypes to be used  */
/*              with the Qp0msRtvSyncObjInfo API                      */
/*                                                                    */
/* Header Files Include:  pointer.h                                   */
/*                                                                    */
/* Macros List:  None                                                 */
/*                                                                    */
/* Structure List:      Qp0ms_OPTN0100_t                              */
/*                      Qp0ms_TIDF0100_t                              */
/*                      Qp0ms_TIDF0200_t                              */
/*                      Qp0ms_Waiters_t                               */
/*                      Qp0ms_PMtxDesc_t                              */
/*                      Qp0ms_HMtxDesc_t                              */
/*                      Qp0ms_HCndDesc_t                              */
/*                      Qp0ms_STokDesc_t                              */
/*                      Qp0ms_SemDesc_t                               */
/*                      Qp0ms_PMTX0100_List_t                         */
/*                      Qp0ms_PMTX0200_List_t                         */
/*                      Qp0ms_PMTX0300_List_t                         */
/*                      Qp0ms_HMTX0100_List_t                         */
/*                      Qp0ms_HMTX0200_List_t                         */
/*                      Qp0ms_HMTX0300_List_t                         */
/*                      Qp0ms_HCND0100_List_t                         */
/*                      Qp0ms_HCND0200_List_t                         */
/*                      Qp0ms_HCND0300_List_t                         */
/*                      Qp0ms_STOK0100_List_t                         */
/*                      Qp0ms_STOK0200_List_t                         */
/*                      Qp0ms_STOK0300_List_t                         */
/*                      Qp0ms_SEMA0100_List_t                         */
/*                      Qp0ms_SEMA0200_List_t                         */
/*                      Qp0ms_SEMA0300_List_t                         */
/*                                                                    */
/* Function Prototype:  Qp0msRtvSyncObjInfo()                         */
/*                                                                    */
/* Change Activity:                                                   */
/*                                                                    */
/* CFD List:                                                          */
/*                                                                    */
/* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION        */
/* ---- ------------ ----- ------ --------- -----------------------   */
/* $A0= D99200       5D30  071802 ROCH      New Include               */
/* $B0= D99945       5D40  040630 ROCH    : Add new options and ex-   */
/*                                          tended data structures    */
/*                                                                    */
/* Additional notes about the Change Activity                         */
/*                                                                    */
/* End Change Activity                                                */
/*** END HEADER FILE SPECIFICATIONS ***********************************/

#ifndef __QBFC_EXTERN
  #ifdef __ILEC400__
    #define QBFC_EXTERN extern
  #else
    #define QBFC_EXTERN extern "C"
  #endif
  #define __QBFC_EXTERN
#endif

#include <pointer.h>

#pragma datamodel (P128)

/*--------------------------------------------------------------------*/
/*                            Macro Definitions                       */
/*--------------------------------------------------------------------*/
/*--------------------------------------------------------------------*/
/*                            Structure Definitions                   */
/*--------------------------------------------------------------------*/

/**********************************************************************/
/* The fields in the options structure specify the data that should be*/
/* retrieved                                                          */
/**********************************************************************/

typedef _Packed struct Qp0ms_OPTN0100{
  char References;           /* Addresses or replicas                 */
  char Thread_Status;        /* Waiting or holding and waiting threads*/
  char Semaphore_Filter;     /* Thread, job, or system-wide           */
  char Semaphore_Selection;  /* Pointer-based, name-based semaphores, */
                             /* or both                               */
  char Reserved[12];
} Qp0ms_OPTN0100_t;

/**********************************************************************/
/* Target identification information                                  */
/**********************************************************************/
typedef _Packed struct Qp0ms_TIDF0100{
  char    Job_Name[10];      /* Job name                              */
  char    User_Name[10];     /* User name                             */
  char    Job_Number[6];     /* Job number                            */
  char    Int_Job_ID[16];    /* Internal Job Identifier               */
  char    Reserved[11];
  char    Thread_Indicator;  /* Thread indicator specifies target     */
  char    Thread_Id[8];      /* Thread identification                 */
} Qp0ms_TIDF0100_t;

typedef _Packed struct Qp0ms_TIDF0200{
  char    Job_Name[10];      /* Job name                              */
  char    User_Name[10];     /* User name                             */
  char    Job_Number[6];     /* Job number                            */
  char    Int_Job_ID[16];    /* Internal Job Identifier               */
  char    Ref_Spec;          /* Reference specification               */
  char    Job_Spec;          /* Job specification                     */
  char    Reserved[4];
  _OPENPTR Ref_Address;      /* Reference address                     */
} Qp0ms_TIDF0200_t;


/**********************************************************************/
/* Define object descriptions for receiver template                   */
/**********************************************************************/

/* Description of a thread waiting on a synchronization object        */
typedef _Packed struct Qp0ms_Waiters{
  char Thread_Id[8];            /* Thread identifier                  */
  char Thread_Val[8];           /* Thread system-wide unique value    */
  char Job_Name[10];            /* Job name                           */
  char User_Name[10];           /* User name                          */
  char Job_Number[6];           /* Job number                         */
  char Reserved[6];
} Qp0ms_Waiters_t;

/* Description of each mutex associated with a thread                 */
typedef _Packed struct Qp0ms_PMtxDesc{
  char          Thread_Id[8];        /* Thread identifier associated  */
                                     /* with mutex                    */
  unsigned int  Num_Desc;            /* Number of descriptions for    */
                                     /* thread                        */
  unsigned int  Desc_Seq_Val;        /* Description sequence value    */
  _OPENPTR      Mutex;               /* Address of mutex or replica   */
                                     /* of mutex                      */
  char          Mutex_Name[16];
  char          Owner_Thread_Id[8];  /* Mutex owner thread identifier */
  char          Owner_Thread_Val[8]; /* Mutex owner thread unique     */
                                     /* value                         */
  char          Owner_Job_Name[10];  /* Mutex owner job name          */
  char          Owner_User_Name[10]; /* Mutex owner user name         */
  char          Owner_Job_Num[6];    /* Mutex owner job number        */
  char          Mutex_State;         /* Thread owns or waits for mutex*/
  char          Reserved;
  unsigned int  Num_Waiters;         /* Number of threads waiting on  */
                                     /* mutex                         */
} Qp0ms_PMtxDesc_t;

typedef _Packed struct Qp0ms_HMtxDesc{
  char          Thread_Id[8];         /* Thread identifier associated */
                                      /* with mutex                   */
  unsigned int  Num_Desc;             /* Number of descriptions for   */
                                      /* thread                       */
  unsigned int  Desc_Seq_Val;         /* Description sequence value   */
  _OPENPTR      Mutex;                /* Replica of mutex             */
  char          Owner_Thread_Id[8];   /* Mutex owner thread identifier*/
  char          Owner_Thread_Val[8];  /* Mutex owner thread unique    */
                                      /* value                        */
  char          Owner_Job_Name[10];   /* Mutex owner job name         */
  char          Owner_User_Name[10];  /* Mutex owner user name        */
  char          Owner_Job_Num[6];     /* Mutex owner job number       */
  char          Mutex_State;          /* Thread owns or waits for     */
                                      /* mutex                        */
  char          Reserved1[5];
  long long int Mutex_Key;            /* Mutex key                    */
  unsigned int  Num_Waiters;          /* Number of threads waiting on */
                                      /* mutex                        */
  char          Reserved2[4];
} Qp0ms_HMtxDesc_t;

typedef _Packed struct Qp0ms_HCndDesc{
  _OPENPTR      Condition;      /* Replica of condition               */
  char          Thread_Id[8];   /* Thread identifier associated with  */
                                /* condition                          */
  long long int Condition_Key;  /* Condition key                      */
  unsigned int  Num_Waiters;    /* Number of threads waiting on the   */
                                /* condition to be signaled           */
  char          Reserved[12];
} Qp0ms_HCndDesc_t;

typedef _Packed struct Qp0ms_STokDesc{
  char          Thread_Id[8];       /* Thread identifier associated   */
                                    /* with token                     */
  unsigned int  Num_Desc;           /* Number of descriptions for     */
                                    /* thread                         */
  unsigned int  Desc_Seq_Val;       /* Description sequence value     */
  _OPENPTR      Token;              /* Address of token or replica of */
                                    /* token                          */
  char          Owner_Thread_Id[8]; /* Token owner thread identifier  */
  char          Owner_Thread_Val[8];/* Token owner unique thread value*/
  char          Owner_Job_Name[10]; /* Token owner job name           */
  char          Owner_User_Name[10];/* Token owner user name          */
  char          Owner_Job_Num[6];   /* Token owner job number         */
  char          Token_State;        /* Thread owns or waits for token */
  char          Reserved1;
  unsigned int  Num_Waiters;        /* Number of threads waiting on   */
                                    /* token                          */
} Qp0ms_STokDesc_t;

typedef _Packed struct Qp0ms_SemDesc{
  char          Thread_Id[8];         /* Thread identifier associated */
                                      /* with semaphore               */
  char          Reserved1[8];
  _OPENPTR      Semaphore;            /* Replica of semaphore         */
  char          Semaphore_Title[16];  /* Semaphore title              */
  char          Semaphore_Creator[8]; /* Semaphore creator            */
  long long int Semaphore_Key;        /* Semaphore key                */
  unsigned int  Num_Waiters;          /* Number of threads waiting on */
                                      /* semaphore                    */
  unsigned int  Semaphore_Count;      /* Semaphore count              */
  unsigned int  Semaphore_Max_Count;  /* Semaphore maximum count      */
  char          Semaphore_Type;       /* Semaphore type               */
  char          Semaphore_Unlink;     /* Semaphore unlink status      */
  char          Reserved2[2];
} Qp0ms_SemDesc_t;

/*******************************************/
/* Templates for retrieved data            */
/*******************************************/

typedef _Packed struct Qp0ms_PMTX0100_List{
  int          Bytes_Returned;       /* Number of bytes returned      */
  int          Bytes_Available;      /* Number of bytes available     */
  int          Num_Threads;          /* Number of threads in job      */
  int          Num_Desc_Available;   /* Total number of mutex         */
                                     /* descriptions available        */
  int          Num_Desc_Returned;    /* Number of descriptions        */
                                     /* returned                      */
  unsigned int Desc_Offset;          /* Offset to mutex descriptions  */
  int          Desc_Length;          /* Length of the descriptions in */
                                     /* bytes                         */
  char         Reserved[4];
/*Qp0ms_PMtxDesc_t  Mutex_Desc[1];*/ /* Variable length               */
} Qp0ms_PMTX0100_List_t;

typedef _Packed struct Qp0ms_PMTX0200_List{
  int          Bytes_Returned;      /* Number of bytes returned       */
  int          Bytes_Available;     /* Number of bytes available      */
  int          Num_Threads_Waiting; /* Number of threads waiting on   */
                                    /* mutex                          */
  int          Num_Desc_Available;  /* Waiting thread descriptions    */
                                    /* available                      */
  int          Num_Desc_Returned;   /* Waiting thread descriptions    */
                                    /* returned                       */
  unsigned int Desc_Offset;         /* Offset to waiting thread       */
                                    /* descriptions                   */
  int          Desc_Length;         /* Length of waiting thread       */
                                    /* descriptions                   */
  char         Reserved1[4];
  char         Mutex_Name[16];      /* Mutex name                     */
  char         Owner_Thread_Id[8];  /* Mutex owner thread identifier  */
  char         Owner_Thread_Val[8]; /* Mutex owner thread unique value*/
  char         Owner_Job_Name[10];  /* Mutex owner job name           */
  char         Owner_User_Name[10]; /* Mutex owner user name          */
  char         Owner_Job_Num[6];    /* Mutex owner job number         */
  char         Reserved2[6];
/*Qp0ms_Waiters_t Waiter_Desc[1];*/ /* Variable length                */
} Qp0ms_PMTX0200_List_t;

typedef _Packed struct Qp0ms_PMTX0300_List{
  int          Bytes_Returned;      /* Number of bytes returned       */
  int          Bytes_Available;     /* Number of bytes available      */
  int          Num_Threads_Waiting; /* Number of threads waiting on   */
                                    /* mutex                          */
  int          Num_Desc_Available;  /* Waiting thread descriptions    */
                                    /* available                      */
  int          Num_Desc_Returned;   /* Waiting thread descriptions    */
                                    /* returned                       */
  unsigned int Desc_Offset;         /* Offset to waiting thread       */
                                    /* descriptions                   */
  int          Desc_Length;         /* Length of waiting thread       */
                                    /* descriptions                   */
  char         Reserved1[4];
  char         Mutex_Name[16];      /* Mutex name                     */
  char         Owner_Thread_Id[8];  /* Mutex lock owner thread        */
                                    /* identifier                     */
  char         Owner_Thread_Val[8]; /* Mutex lock owner thread unique */
                                    /* value                          */
  char         Owner_Job_Name[10];  /* Mutex lock owner job name      */
  char         Owner_User_Name[10]; /* Mutex lock owner user name     */
  char         Owner_Job_Num[6];    /* Mutex lock owner job number    */
  char         Reserved2[6];
  char         Last_Locker_Id[8];   /* Last Locker thread identifier  */
  char         Last_Locker_Val[8];  /* Last Locker thread unique value*/
  char         Last_Locker_Job_Name[10];  /* Last Locker job name     */
  char         Last_Locker_User_Name[10]; /* Last Locker user name    */
  char         Last_Locker_Job_Num[6];    /* Last Locker job number   */
  char         Reserved3[6];
  char         Last_Unlocker_Id[8];   /* Last Unlocker thread         */
                                      /* identifier                   */
  char         Last_Unlocker_Val[8];  /* Last Unlocker thread unique  */
                                      /* value                        */
  char         Last_Unlocker_Job_Name[10];  /* Last Unlocker job name */
  char         Last_Unlocker_User_Name[10]; /* Last Unlocker user name*/
  char         Last_Unlocker_Job_Num[6];    /* Last Unlocker job      */
                                            /* number                 */
  char         Reserved4[6];
  char         Recursive_Flag;        /* Recursive Flag               */
  char         Keep_Valid_Flag;       /* Keep Valid Flag              */
  char         Pending_State_Flag;    /* Pending State Flag           */
  char         Reserved5[13];
  unsigned long long Lock_Count;      /* Lock Count                   */
  char         Mutex_Creator[8];      /* Mutex creator program        */
  _SPCPTR      Original_Mutex_Ptr;    /* Original Mutex Pointer       */
  char         Reserved6[16];
/*Qp0ms_Waiters_t Waiter_Desc[1];*/ /* Variable length                */
} Qp0ms_PMTX0300_List_t;   /* @B0A */

typedef _Packed struct Qp0ms_HMTX0100_List{
  int          Bytes_Returned;      /* Number of bytes returned       */
  int          Bytes_Available;     /* Number of bytes available      */
  int          Num_Threads;         /* Number of threads in job       */
  int          Num_Desc_Available;  /* Number of descriptions         */
                                    /* available                      */
  int          Num_Desc_Returned;   /* Number of descriptions returned*/
  unsigned int Desc_Offset;         /* Offset to mutex descriptions   */
  int          Desc_Length;         /* Length of the descriptions in  */
                                    /* bytes                          */
  char         Reserved[4];
/*Qp0ms_HMtxDesc_t Mutex_Desc[1];*/ /* Variable length                */
} Qp0ms_HMTX0100_List_t;

typedef _Packed struct Qp0ms_HMTX0200_List{
  int          Bytes_Returned;      /* Number of bytes returned       */
  int          Bytes_Available;     /* Number of bytes available      */
  int          Num_Threads_Waiting; /* Number of threads waiting on   */
                                    /* mutex                          */
  int          Num_Desc_Available;  /* Waiting thread descriptions    */
                                    /* available                      */
  int          Num_Desc_Returned;   /* Waiting thread descriptions    */
                                    /* returned                       */
  unsigned int Desc_Offset;         /* Offset to waiting thread       */
                                    /* descriptions                   */
  int          Desc_Length;         /* Length of waiting thread       */
                                    /* descriptions                   */
  char         Reserved1[4];
  char         Mutex_Creator[8];    /* Mutex creator program          */
  long long int Mutex_Key;          /* Mutex key                      */
  char         Owner_Thread_Id[8];  /* Mutex owner thread identifier  */
  char         Owner_Thread_Val[8]; /* Mutex owner thread unique value*/
  char         Owner_Job_Name[10];  /* Mutex owner job name           */
  char         Owner_User_Name[10]; /* Mutex owner user name          */
  char         Owner_Job_Num[6];    /* Mutex owner job number         */
  char         Reserved2[6];
/*Qp0ms_Waiters_t Waiter_Desc[1];*/ /* Variable length                */
}Qp0ms_HMTX0200_List_t;

typedef _Packed struct Qp0ms_HMTX0300_List{
  int          Bytes_Returned;      /* Number of bytes returned       */
  int          Bytes_Available;     /* Number of bytes available      */
  int          Num_Threads_Waiting; /* Number of threads waiting on   */
                                    /* mutex                          */
  int          Num_Desc_Available;  /* Waiting thread descriptions    */
                                    /* available                      */
  int          Num_Desc_Returned;   /* Waiting thread descriptions    */
                                    /* returned                       */
  unsigned int Desc_Offset;         /* Offset to waiting thread       */
                                    /* descriptions                   */
  int          Desc_Length;         /* Length of waiting thread       */
                                    /* descriptions                   */
  char         Reserved1[4];
  char         Mutex_Creator[8];    /* Mutex creator program          */
  long long int Mutex_Key;          /* Mutex key                      */
  char         Owner_Thread_Id[8];  /* Mutex lock owner thread        */
                                    /* identifier                     */
  char         Owner_Thread_Val[8]; /* Mutex lock owner thread unique */
                                    /* value                          */
  char         Owner_Job_Name[10];  /* Mutex lock owner job name      */
  char         Owner_User_Name[10]; /* Mutex lock owner user name     */
  char         Owner_Job_Num[6];    /* Mutex lock owner job number    */
  char         Reserved2[6];
  char         Last_Locker_Id[8];   /* Last Locker thread identifier  */
  char         Last_Locker_Val[8];  /* Last Locker thread unique value*/
  char         Last_Locker_Job_Name[10];  /* Last Locker job name     */
  char         Last_Locker_User_Name[10]; /* Last Locker user name    */
  char         Last_Locker_Job_Num[6];    /* Last Locker job number   */
  char         Reserved3[6];
  char         Last_Unlocker_Id[8];   /* Last Unlocker thread         */
                                      /* identifier                   */
  char         Last_Unlocker_Val[8];  /* Last Unlocker thread unique  */
                                      /* value                        */
  char         Last_Unlocker_Job_Name[10];  /* Last Unlocker job name */
  char         Last_Unlocker_User_Name[10]; /* Last Unlocker user name*/
  char         Last_Unlocker_Job_Num[6];    /* Last Unlocker job      */
                                            /* number                 */
  char         Reserved4[6];
  char         Recursive_Flag;        /* Recursive Flag               */
  char         Keep_Valid_Flag;       /* Keep Valid Flag              */
  char         Pending_State_Flag;    /* Pending State Flag           */
  char         Reserved5[5];
  unsigned long long Lock_Count;      /* Lock Count                   */
  char         Reserved6[16];
/*Qp0ms_Waiters_t Waiter_Desc[1];*/ /* Variable length                */
}Qp0ms_HMTX0300_List_t; /* @B0A */

typedef _Packed struct Qp0ms_HCND0100_List{
  int          Bytes_Returned;       /* Number of bytes returned      */
  int          Bytes_Available;      /* Number of bytes available     */
  int          Num_Threads;          /* Number of threads in job      */
  int          Num_Desc_Available;   /* Number of descriptions        */
                                     /* available                     */
  int          Num_Desc_Returned;    /* Number of descriptions        */
                                     /* returned                      */
  unsigned int Desc_Offset;          /* Offset to condition           */
                                     /* descriptions                  */
  int          Desc_Length;          /* Length of the descriptions in */
                                     /* bytes                         */
  char         Reserved[4];
/*Qp0ms_HCndDesc_t  Condition_Desc[1];*/ /* Variable length           */
}Qp0ms_HCND0100_List_t;

typedef _Packed struct Qp0ms_HCND0200_List{
  int          Bytes_Returned;      /* Number of bytes returned       */
  int          Bytes_Available;     /* Number of bytes available      */
  int          Num_Threads_Waiting; /* Number of threads waiting on   */
                                    /* condition                      */
  int          Num_Desc_Available;  /* Waiting thread descriptions    */
                                    /* available                      */
  int          Num_Desc_Returned;   /* Waiting thread descriptions    */
                                    /* returned                       */
  unsigned int Desc_Offset;         /* Offset to waiting thread       */
                                    /* descriptions                   */
  int          Desc_Length;         /* Length of waiting thread       */
                                    /* descriptions                   */
  char         Reserved[4];
  char         Condition_Creator[8];/* Condition creator program      */
  long long int Condition_Key;      /* Condition key                  */
/*Qp0ms_Waiters_t Waiter_Desc[1];*/ /* Variable length                */
} Qp0ms_HCND0200_List_t;

typedef _Packed struct Qp0ms_HCND0300_List{
  int          Bytes_Returned;      /* Number of bytes returned       */
  int          Bytes_Available;     /* Number of bytes available      */
  int          Num_Threads_Waiting; /* Number of threads waiting on   */
                                    /* condition                      */
  int          Num_Desc_Available;  /* Waiting thread descriptions    */
                                    /* available                      */
  int          Num_Desc_Returned;   /* Waiting thread descriptions    */
                                    /* returned                       */
  unsigned int Desc_Offset;         /* Offset to waiting thread       */
                                    /* descriptions                   */
  int          Desc_Length;         /* Length of waiting thread       */
                                    /* descriptions                   */
  char         Reserved[4];
  char         Condition_Creator[8];/* Condition creator program      */
  long long int Condition_Key;      /* Condition key                  */
  char         Last_Waiter_Id[8];   /* Last waiter thread identifier  */
  char         Last_Waiter_Val[8];  /* Last waiter thread unique value*/
  char         Last_Waiter_Job_Name[10];  /* Last waiter job name     */
  char         Last_Waiter_User_Name[10]; /* Last waiter user name    */
  char         Last_Waiter_Job_Num[6];    /* Last waiter job number   */
  char         Reserved2[6];
  char         Last_Setter_Id[8];   /* Last setter thread identifier  */
  char         Last_Setter_Val[8];  /* Last setter thread unique value*/
  char         Last_Setter_Job_Name[10];  /* Last setter job name     */
  char         Last_Setter_User_Name[10]; /* Last setter user name    */
  char         Last_Setter_Job_Num[6];    /* Last setter job number   */
  char         Reserved3[6];
  unsigned int Reset_Mode_Flag;     /* Reset Mode Flag                */
  char         Is_Signaled_Flag;    /* Is Signaled Flag               */
  char         Reserved4[11];
/*Qp0ms_Waiters_t Waiter_Desc[1];*/ /* Variable length                */
} Qp0ms_HCND0300_List_t; /* @B0A */

typedef _Packed struct Qp0ms_STOK0100_List{
  int          Bytes_Returned;      /* Number of bytes returned       */
  int          Bytes_Available;     /* Number of bytes available      */
  int          Num_Threads;         /* Number of threads in job       */
  int          Num_Desc_Available;  /* Number of descriptions         */
                                    /* available                      */
  int          Num_Desc_Returned;   /* Number of descriptions returned*/
  unsigned int Desc_Offset;         /* Offset to token descriptions   */
  int          Desc_Length;         /* Length of the descriptions in  */
                                    /* bytes                          */
  char         Reserved[4];
/*Qp0ms_STokDesc_t Token_Desc[1];*/ /* Variable length                */
} Qp0ms_STOK0100_List_t;

typedef _Packed struct Qp0ms_STOK0200_List{
  int          Bytes_Returned;      /* Number of bytes returned       */
  int          Bytes_Available;     /* Number of bytes available      */
  int          Num_Threads_Waiting; /* Number of threads waiting on   */
                                    /* synchronization token          */
  int          Num_Desc_Available;  /* Waiting thread descriptions    */
                                    /* available                      */
  int          Num_Desc_Returned;   /* Waiting thread descriptions    */
                                    /* returned                       */
  unsigned int Desc_Offset;         /* Offset to waiting thread       */
                                    /* descriptions                   */
  int          Desc_Length;         /* Length of waiting thread       */
                                    /* descriptions                   */
  char         Reserved1[4];
  char         Token_Creator[8];    /* Synchronization token creator  */
                                    /* program                        */
  long long int Token_Val;          /* Unique system-wide value for   */
                                    /* token                          */
  char         Owner_Thread_Id[8];  /* Token owner thread identifier  */
  char         Owner_Thread_Val[8]; /* Token owner thread unique value*/
  char         Owner_Job_Name[10];  /* Token owner job name           */
  char         Owner_User_Name[10]; /* Token owner user name          */
  char         Owner_Job_Num[6];    /* Token owner job number         */
  char         Reserved2[6];
/*Qp0ms_Waiters_t Waiter_Desc[1];*/ /* Variable length                */
} Qp0ms_STOK0200_List_t;

typedef _Packed struct Qp0ms_STOK0300_List{
  int          Bytes_Returned;      /* Number of bytes returned       */
  int          Bytes_Available;     /* Number of bytes available      */
  int          Num_Threads_Waiting; /* Number of threads waiting on   */
                                    /* synchronization token          */
  int          Num_Desc_Available;  /* Waiting thread descriptions    */
                                    /* available                      */
  int          Num_Desc_Returned;   /* Waiting thread descriptions    */
                                    /* returned                       */
  unsigned int Desc_Offset;         /* Offset to waiting thread       */
                                    /* descriptions                   */
  int          Desc_Length;         /* Length of waiting thread       */
                                    /* descriptions                   */
  char         Reserved1[4];
  char         Token_Creator[8];    /* Synchronization token creator  */
                                    /* program                        */
  long long int Token_Val;          /* Unique system-wide value for   */
                                    /* token                          */
  char         Owner_Thread_Id[8];  /* Token lock owner thread        */
                                    /* identifier                     */
  char         Owner_Thread_Val[8]; /* Token lock owner thread unique */
                                    /* value                          */
  char         Owner_Job_Name[10];  /* Token lock owner job name      */
  char         Owner_User_Name[10]; /* Token lock owner user name     */
  char         Owner_Job_Num[6];    /* Token lock owner job number    */
  char         Reserved2[6];
  char         Last_Locker_Id[8];   /* Last Locker thread identifier  */
  char         Last_Locker_Val[8];  /* Last Locker thread unique value*/
  char         Last_Locker_Job_Name[10];  /* Last Locker job name     */
  char         Last_Locker_User_Name[10]; /* Last Locker user name    */
  char         Last_Locker_Job_Num[6];    /* Last Locker job number   */
  char         Reserved3[6];
  char         Last_Unlocker_Id[8];   /* Last Unlocker thread         */
                                      /* identifier                   */
  char         Last_Unlocker_Val[8];  /* Last Unlocker thread unique  */
                                      /* value                        */
  char         Last_Unlocker_Job_Name[10];  /* Last Unlocker job name */
  char         Last_Unlocker_User_Name[10]; /* Last Unlocker user name*/
  char         Last_Unlocker_Job_Num[6];    /* Last Unlocker job      */
                                            /* number                 */
  char         Reserved4[6];
/*Qp0ms_Waiters_t Waiter_Desc[1];*/ /* Variable length                */
} Qp0ms_STOK0300_List_t;

typedef _Packed struct Qp0ms_SEMA0100_List{
  int          Bytes_Returned;        /* Number of bytes returned     */
  int          Bytes_Available;       /* Number of bytes available    */
  int          Num_Desc_Available;    /* Number of descriptions       */
                                      /* available                    */
  int          Num_Desc_Returned;     /* Number of descriptions       */
                                      /* returned                     */
  unsigned int Desc_Offset;           /* Offset to semaphore          */
                                      /* information                  */
  int          Desc_Length;           /* Length of descriptions in    */
                                      /* bytes                        */
  char         Reserved1[8];
  char         Job_Name[10];          /* Associated job name          */
  char         User_Name[10];         /* Associated user name         */
  char         Job_Num[6];            /* Associated job number        */
  char         Reserved2[2];
  int          Num_Threads;           /* Number of threads in job     */
/*Qp0ms_SemDesc_t  Semaphore_Desc[1];*/ /* Variable length            */
} Qp0ms_SEMA0100_List_t;

typedef _Packed struct Qp0ms_SEMA0200_List{
  int          Bytes_Returned;       /* Number of bytes returned      */
  int          Bytes_Available;      /* Number of bytes available     */
  int          Num_Threads_Waiting;  /* Number of threads waiting on  */
                                     /* semaphore                     */
  int          Num_Desc_Available;   /* Waiting thread descriptions   */
                                     /* available                     */
  int          Num_Desc_Returned;    /* Waiting thread descriptions   */
                                     /* returned                      */
  unsigned int Desc_Offset;          /* Offset to waiting thread      */
                                     /* descriptions                  */
  int           Desc_Length;         /* Length of waiting thread      */
                                     /* descriptions                  */
  char          Reserved1[4];
  char          Semaphore_Title[16]; /* Semaphore title               */
  char          Semaphore_Creator[8];/* Semaphore creator             */
  long long int Semaphore_Key;       /* Semaphore key                 */
  unsigned int  Semaphore_Count;     /* Semaphore count               */
  unsigned int  Semaphore_Max_Count; /* Semaphore maximum count       */
  char          Semaphore_Type;      /* Semaphore type                */
  char          Semaphore_Unlink;    /* Semaphore unlink status       */
  char          Reserved2[2];
  char          Post_Thread_Id[8];   /* Last post operation thread    */
                                     /* identifier                    */
  char          Post_Thread_Val[8];  /* Last post operation thread    */
                                     /* unique                        */
                                     /* system-wide value             */
  char          Post_Job_Name[10];   /* Last post job name            */
  char          Post_User_Name[10];  /* Last post user name           */
  char          Post_Job_Num[6];     /* Last post job number          */
  char          Wait_Thread_Id[8];   /* Last wait operation thread    */
                                     /* identifier                    */
  char          Wait_Thread_Val[8];  /* Last wait operation thread    */
                                     /* unique system-wide value      */
  char          Wait_Job_Name[10];   /* Last wait job name            */
  char          Wait_User_Name[10];  /* Last wait user name           */
  char          Wait_Job_Num[6];     /* Last wait job number          */
/*Qp0ms_Waiters_t Waiter_Desc[1];*/  /* Variable length               */
} Qp0ms_SEMA0200_List_t;

typedef _Packed struct Qp0ms_SEMA0300_List{
  int          Bytes_Returned;       /* Number of bytes returned      */
  int          Bytes_Available;      /* Number of bytes available     */
  int          Num_Threads_Waiting;  /* Number of threads waiting on  */
                                     /* semaphore                     */
  int          Num_Desc_Available;   /* Waiting thread descriptions   */
                                     /* available                     */
  int          Num_Desc_Returned;    /* Waiting thread descriptions   */
                                     /* returned                      */
  unsigned int Desc_Offset;          /* Offset to waiting thread      */
                                     /* descriptions                  */
  int           Desc_Length;         /* Length of waiting thread      */
                                     /* descriptions                  */
  char          Reserved1[4];
  char          Semaphore_Title[16]; /* Semaphore title               */
  char          Semaphore_Creator[8];/* Semaphore creator             */
  long long int Semaphore_Key;       /* Semaphore key                 */
  unsigned int  Semaphore_Count;     /* Semaphore count               */
  unsigned int  Semaphore_Max_Count; /* Semaphore maximum count       */
  char          Semaphore_Type;      /* Semaphore type                */
  char          Semaphore_Unlink;    /* Semaphore unlink status       */
  char          Reserved2[2];
  char          Post_Thread_Id[8];   /* Last post operation thread    */
                                     /* identifier                    */
  char          Post_Thread_Val[8];  /* Last post operation thread    */
                                     /* unique                        */
                                     /* system-wide value             */
  char          Post_Job_Name[10];   /* Last post job name            */
  char          Post_User_Name[10];  /* Last post user name           */
  char          Post_Job_Num[6];     /* Last post job number          */
  char          Wait_Thread_Id[8];   /* Last wait operation thread    */
                                     /* identifier                    */
  char          Wait_Thread_Val[8];  /* Last wait operation thread    */
                                     /* unique system-wide value      */
  char          Wait_Job_Name[10];   /* Last wait job name            */
  char          Wait_User_Name[10];  /* Last wait user name           */
  char          Wait_Job_Num[6];     /* Last wait job number          */
  _SPCPTR      Original_Semaphore_Ptr; /* Original Semaphore Pointer  */
  char          Reserved3[16];
/*Qp0ms_Waiters_t Waiter_Desc[1];*/  /* Variable length               */
} Qp0ms_SEMA0300_List_t;

/*--------------------------------------------------------------------*/
/*                            Function Prototypes                     */
/*--------------------------------------------------------------------*/

QBFC_EXTERN void Qp0msRtvSyncObjInfo(void *, /* Receiver variable  */
                                     int *,  /* Length of receiver    */
                                     char *, /* Format name           */
                                     void *, /* Target identification */
                                     char *, /* Format of target      */
                                             /* identification        */
                                     void *, /* Options               */
                                     char *, /* Format of Options     */
                                     void *); /* Error code           */

#pragma datamodel(pop)

#ifdef __cplusplus
  #pragma info(restore)
#else
  #pragma checkout(resume)
#endif


#endif /* __QP0MSRTVSO_H */

