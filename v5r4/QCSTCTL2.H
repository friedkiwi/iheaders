
/***   START OF HEADER FILE SPECIFICATIONS   ************************/
/*                                                                  */
/* Header File Name: H/QCSTCTL2                                      */
/*                                                                  */
/* Descriptive Name: Cluster Control APIs.                          */
/*                                                                  */
/* 5722-SS1                                                         */
/* (C) Copyright IBM Corp. 2001,2001                                */
/* All rights reserved.                                             */
/* US Government Users Restricted Rights -                          */
/* Use, duplication or disclosure restricted                        */
/* by GSA ADP Schedule Contract with IBM Corp.                      */
/*                                                                  */
/* Licensed Materials-Property of IBM                               */
/*                                                                  */
/*                                                                  */
/* Description: Include header file for QCSTCTL2 service program.   */
/*                                                                  */
/* Header Files Included: qcst.H                                    */
/*                                                                  */
/* Macros List: None.                                               */
/*                                                                  */
/* Structure List: Qcst_CRSC0100_t                                  */
/*                 Qcst_CRSC0200_t                                  */
/*                                                                  */
/* Function Prototype List: QcstAdjustClusterVersion                */
/*                          QcstChgClusterResourceServices          */
/*                                                                  */
/*                                                                  */
/* Change Activity:                                                 */
/*                                                                  */
/* CFD List:                                                        */
/*                                                                  */
/* FLAG REASON   LEVEL DATE   PGMR      CHANGE DESCRIPTION          */
/* ---- -------- ----- ------ --------- --------------------------- */
/* $A0= D97869.6 5D10  000110 ROCH:     New Include                 */
/*                                                                  */
/* End CFD List.                                                    */
/*                                                                  */
/*   Additional notes about the Change Activity                     */
/*                                                                  */
/* End Change Activity.                                             */
/*                                                                  */
/***   END OF HEADER FILE SPECIFICATIONS   **************************/

#ifndef _QCSTCTL2_h
#define _QCSTCTL2_h

#if (__OS400_TGTVRM__>=510)
    #pragma datamodel(P128)
#endif

#include <qcst.h>

/********************************************************************/
/* Prototype for Adjust Cluster Version API.                        */
/********************************************************************/
#ifdef __ILEC400__
    #pragma argument (QcstAdjustClusterVersion,OS,nowiden)
#else
    extern "C"
#endif
void QcstAdjustClusterVersion (char *,  /* Request handle    */
			   char *,  /* Cluster name                 */
                           char *,  /* Cluster version info         */
                           char *,  /* Format name                  */
                           void *,  /* Result information           */
                           void *); /* Error code                   */


/********************************************************************/
/* Prototype for Change Cluster Resource Services API.              */
/********************************************************************/
#ifdef __ILEC400__
    #pragma argument (QcstChgClusterResourceServices,OS,nowiden)
#else
    extern "C"
#endif
void QcstChgClusterResourceServices
                          (char *,  /* Request handle               */
                           char *,  /* Cluster name                 */
                           char *,  /* Cluster rsc services info    */
                           int  *,  /* Length of CRS info           */
                           char *,  /* Format name                  */
                           void *,  /* Result information           */
                           void *); /* Error code                   */

/*------------------------------------------------------------------*/
/* Structure for CRSC0100 format.                                   */
/*------------------------------------------------------------------*/
typedef _Packed struct Qcst_CRSC0100 {
    int ConfigTuningLevel;
} Qcst_CRSC0100_t;

/*------------------------------------------------------------------*/
/* Structure for CRSC0200 format.                                   */
/*------------------------------------------------------------------*/
typedef _Packed struct Qcst_CRSC0200 {
    long long HeartbeatTimerRatio;   /* Receive/Send heartbeat timer ratio */
    long long MaxRetryTimerRatio;    /* Maximum retry timer ratio   */
    long long SendHeartbeatInterval; /* Send heartbeat interval     */
    long long RetryTimerValue;       /* Retry timer value           */
    long long CDATTimeoutInterval;   /* CDAT protocol timeout interval */
    long long ClusterRecoveryInterval; /* Cluster recovery interval   */
    long long MaxRetryTime;          /* Maximum retry time          */
    long long MsgFragmentSize;       /* Message fragment size       */
    long long SendQueueOverflow;     /* Send queue overflow         */
    long long BadMsgThreshold;       /* Number of bad messages threshold */
    long long AckMsgThreshold;       /* Number of ack messages threshold */
    long long UnreachHbAckThreshold; /* Unreachable heartbeat ack threshold */
    long long ReachHbAckThreshold;   /* Reachable heartbeat ack threshold */
    long long UnreachHbThreshold;    /* Unreachable heartbeat threshold */
    long long ReachHbThreshold;      /* Reachable heartbeat threshold */
    long long DelayedAckTimer;       /* Delayed ack timer           */
    long long MsgSendWindow;         /* Message send window         */
    long long EnableMulticast;       /* Enable multicast            */
    long long PerformanceClass;      /* Performance class           */
    long long AckRemoteFragments;    /* Ack remote fragments        */
} Qcst_CRSC0200_t;

#if (__OS400_TGTVRM__>=510)
    #pragma datamodel(pop)
#endif

#endif /* _QCSTCTL2_h*/

