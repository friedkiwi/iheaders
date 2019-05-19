#ifndef __ILEC400__
  extern "C" {
#else
  #pragma nomargins nosequence
  #pragma checkout(suspend)
#endif


/*** START HEADER FILE SPECIFICATIONS ********************************/
/*                                                                   */
/* Header File Name       : qp0wpid.h                                */
/*                                                                   */
/* Descriptive Name       : Common Include Definitions for Process   */
/*                          Table functions                          */
/*                                                                   */
/*  5716-SS1, 5769-SS1                                               */
/*  (C) Copyright IBM Corp. 1995, 1998                               */
/*  All rights reserved.                                             */
/*  US Government Users Restricted Rights -                          */
/*  Use, duplication or disclosure restricted                        */
/*  by GSA ADP Schedule Contract with IBM Corp.                      */
/*                                                                   */
/*  Licensed Materials-Property of IBM                               */
/*                                                                   */
/* Description            : This file includes the common structures */
/*                          and definitions for the Process Table    */
/*                          functions                                */
/*                                                                   */
/* Header Files Included  : sys/types.h                              */
/*                                                                   */
/* Macros List            : QP0W_CURRENT_PROCESS                     */
/*                          QP0W_NO_PARENT                           */
/*                          QP0W_PID_TERMINATED                      */
/*                          QP0W_PID_STOPPED                         */
/*                          QP0W_PID_SIGNALSTOP                      */
/*                          QP0W_INVALID_PID                         */
/*                          QP0W_INVALID_PPID                        */
/*                          QP0W_INVALID_PGID                        */
/*                                                                   */
/* Structure List         : QP0W_PID_Data_T                          */
/*                          QP0W_PID_Entries_T                       */
/*                          QP0W_Job_ID_T                            */
/*                                                                   */
/* Function Prototype List: Qp0wChkPid                               */
/*                          Qp0wChkChld                              */
/*                          Qp0wChkPgrp                              */
/*                          Qp0wGetJobNumber                         */
/*                          Qp0wGetPid                               */
/*                          Qp0wGetPPid                              */
/*                          Qp0wGetPgrp                              */
/*                          Qp0wGetPidNoInit                         */
/*                                                                   */
/* Change Activity        :                                          */
/*                                                                   */
/*  CFD List:                                                        */
/*                                                                   */
/*   $A0=D2863600 3D60 950424 ROCH    : Process Table support        */
/*                                                                   */
/*  End CFD List.                                                    */
/*                                                                   */
/*  Additional notes about the Change Activity                       */
/*                                                                   */
/*                                                                   */
/*  End Change Activity.                                             */
/*                                                                   */
/*********************************************************************/

#ifndef __qp0wpid_h
  #define __qp0wpid_h  1


#ifndef __QBFC_EXTERN
    #ifdef __ILEC400__
        #define QBFC_EXTERN extern
    #else
        #define QBFC_EXTERN extern "C"
    #endif

    #define __QBFC_EXTERN
#endif


/*--------------------------------------------------------------------*/
/*                         I N C L U D E S                            */
/*--------------------------------------------------------------------*/

#ifndef __types_h
    #include <sys/types.h>
#endif

#if (__OS400_TGTVRM__>=510)  /* @B1A*/
    #pragma datamodel(P128)  /* @B1A*/
#endif                       /* @B1A*/


/*--------------------------------------------------------------------*/
/*                        C O N S T A N T S                           */
/*--------------------------------------------------------------------*/

/*--------------------------------------------------------------------*/
/* The following set of constants may be used to set or test the      */
/* values required by or returned by the check process ID functions.  */
/*--------------------------------------------------------------------*/

#define QP0W_CURRENT_PROCESS      0   /* Operation is for current process */
#define QP0W_NO_PARENT            1   /* Process does not have a parent */

#define QP0W_PID_TERMINATED  0x00000008  /* Process is active */
#define QP0W_PID_STOPPED     0x00000004  /* Process is stopped */
#define QP0W_PID_CHILDWAIT   0x00000002  /* Process is in wait on child */
#define QP0W_PID_SIGNALSTOP  0x00000001  /* Process is stopped by signal */

#define QP0W_INVALID_PID          1   /* Invalid pid value */
#define QP0W_INVALID_PPID         1   /* Invalid ppid value */
#define QP0W_INVALID_PGID         1   /* Invalid pgrp value */


/*--------------------------------------------------------------------*/
/*                T Y P E   D E C L A R A T I O N S                   */
/*--------------------------------------------------------------------*/


/*--------------------------------------------------------------------*/
/* Type Name: QP0W_PID_Data_T                                         */
/*                                                                    */
/* Purpose:   Maps the process data for a individual process table    */
/*            entry.                                                  */
/*                                                                    */
/*--------------------------------------------------------------------*/

typedef struct QP0W_PID_Data_T {
    pid_t         pid;               /* process ID */
    pid_t         ppid;              /* parent process ID */
    pid_t         pgrp;              /* process group ID */
    int           status;            /* Status (active or terminated) */
    unsigned int  exit_status;       /* Exit status (if terminated) */
} QP0W_PID_Data_T;



/*--------------------------------------------------------------------*/
/* Type Name: QP0W_PID_Entries_T                                      */
/*                                                                    */
/* Purpose:   Input/output template for returning the process data    */
/*            for multiple process entries from the Process Table.    */
/*                                                                    */
/*--------------------------------------------------------------------*/

typedef struct QP0W_PID_Entries_T {
    int          entries_prov;      /* Number entries provided (input) */
    int          entries_could;     /* Number entries available (output) */
    int          entries_return;    /* Number entries returned (output) */
    pid_t        pid;               /* Process ID or Process Group ID (input) */
    QP0W_PID_Data_T  entry[1];      /* Process entry information (output) */
} QP0W_PID_Entries_T;



/*--------------------------------------------------------------------*/
/* Type Name: QP0W_Job_ID_T                                           */
/*                                                                    */
/* Purpose:   Input/output template for returning the qualified job   */
/*            name and internal job identifier for a process          */
/*                                                                    */
/*--------------------------------------------------------------------*/

typedef struct QP0W_Job_ID_T {
    char    jobname[10];            /* Job name                       */
    char    username[10];           /* User name                      */
    char    jobnumber[6];           /* Job number                     */
    char    jobid[16];              /* Internal job identifier        */
} QP0W_Job_ID_T;



/*--------------------------------------------------------------------*/
/*            F I L E   S C O P E D   V A R I A B L E S               */
/*--------------------------------------------------------------------*/


/*--------------------------------------------------------------------*/
/*                           M A C R O S                              */
/*--------------------------------------------------------------------*/


/*--------------------------------------------------------------------*/
/*              F U N C T I O N   P R O T O T Y P E S                 */
/*--------------------------------------------------------------------*/

QBFC_EXTERN int Qp0wChkPid( pid_t pid, QP0W_PID_Data_T *pidinfo );
QBFC_EXTERN int Qp0wChkChld( QP0W_PID_Entries_T *chldinfo );
QBFC_EXTERN int Qp0wChkPgrp( QP0W_PID_Entries_T *mbrinfo );
QBFC_EXTERN int Qp0wGetJobID( pid_t pid, QP0W_Job_ID_T *jobinfo );
QBFC_EXTERN pid_t Qp0wGetPid( void );
QBFC_EXTERN pid_t Qp0wGetPPid( void );
QBFC_EXTERN pid_t Qp0wGetPgrp( void );
QBFC_EXTERN pid_t Qp0wGetPidNoInit( void );

#if (__OS400_TGTVRM__>=510)  /* @B1A*/
    #pragma datamodel(pop)   /* @B1A*/
#endif                       /* @B1A*/

#endif        /*  __qp0wpid_h */


#ifndef __ILEC400__
  }
#else
  #pragma checkout(resume)
#endif
