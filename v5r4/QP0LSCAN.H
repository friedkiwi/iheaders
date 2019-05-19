/* begin_generated_IBM_copyright_prolog                              */
/* This is an automatically generated copyright prolog.              */
/* After initializing,  DO NOT MODIFY OR MOVE                        */
/* ----------------------------------------------------------------- */
/*                                                                   */
/* Product(s):                                                       */
/*     5722-SS1                                                      */
/*                                                                   */
/* (C)Copyright IBM Corp.  2003, 2003                                */
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
#ifdef __cplusplus
   #pragma info(none)
#else
   #pragma nomargins nosequence
   #pragma checkout(suspend)
#endif
/*** START HEADER FILE SPECIFICATIONS ********************************/
/*                                                                   */
/* Header File Name       :  H/QP0LSCAN                              */
/*                                                                   */
/* Descriptive Name       :  Scan related include for:               */
/*                           QIBM_QP0L_SCAN_OPEN (IFS Open Exit Pgm) */
/*                           QIBM_QP0L_SCAN_CLOSE(IFS Close Exit Pgm)*/
/*                           and other integrated file system APIs   */
/*                           which deal with scan information.       */
/*                                                                   */
/* Description            :  This file contains the structures for   */
/*                           the scan-related exit programs etc.     */
/*                                                                   */
/* Macros List            :                                          */
/*                           QP0L_SCAN_CALL_ADDL                     */
/*                           QP0L_SCAN_CALL_FIRST                    */
/*                           QP0L_SCAN_CLOSE                         */
/*                           QP0L_SCAN_FAILURE                       */
/*                           QP0L_SCAN_FAIL_WANT_MODIFY              */
/*                           QP0L_SCAN_MODIFY                        */
/*                           QP0L_SCAN_NO                            */
/*                           QP0L_SCAN_NOT_REQUIRED                  */
/*                           QP0L_SCAN_OPEN                          */
/*                           QP0L_SCAN_PENDING_CVN                   */
/*                           QP0L_SCAN_REQUIRED                      */
/*                           QP0L_SCAN_ROOT_QOPENSYS_UDFS            */
/*                           QP0L_SCAN_SUCCESS                       */
/*                           QP0L_SCAN_YES                           */
/*                           QP0L_SCCL0100                           */
/*                           QP0L_SCOP0100                           */
/*                                                                   */
/* Type Definition List   :                                          */
/*                           Qp0l_Scan_Exit_Information_t            */
/*                           Qp0l_Scan_Program_Data_t                */
/*                           Qp0l_Scan_Key_t                         */
/*                           Qp0l_Scan_KeySign_t                     */
/*                           Qp0l_Scan_Status_Information_t          */
/*                                                                   */
/* Structure List         :                                          */
/*                           Qp0l_Scan_Exit_Information              */
/*                           Qp0l_Scan_Program_Data                  */
/*                           Qp0l_Scan_Status_Information            */
/*                                                                   */
/* Class List             :  None.                                   */
/*                                                                   */
/* Function Prototype List:  None.                                   */
/*                                                                   */
/* Change Activity        :                                          */
/*                                                                   */
/* CFD List               :                                          */
/*                                                                   */
/* FLAG REASON     LEVEL   DATE   PGMR      CHANGE DESCRIPTION       */
/* ---- --------   -----   ------ --------- -----------------------  */
/* $A0=D9868002     5D30   020330 ROCH    : New Include              */
/* $A1=P9A52232    v5r3m0f 040107 ROCH    : Add cplusplus ifdef to   */
/*                                          end of header            */
/*                                                                   */
/* End CFD List.                                                     */
/*                                                                   */
/*  Additional notes about the Change Activity                       */
/*                                                                   */
/* End Change Activity.                                              */
/*                                                                   */
/*** END HEADER FILE SPECIFICATIONS **********************************/

#ifndef _QP0LSCAN_h
#define _QP0LSCAN_h

#pragma datamodel(P128)

/******************************************************************/
/* Type Definitions                                               */
/******************************************************************/

typedef char Qp0l_Scan_Key_t[20];           /* Scan Key             */
typedef char Qp0l_Scan_KeySign_t[12];       /* Scan Key Signature   */

/***   START OF STRUCTURE DESCRIPTION   ******************************/
/*                                                                   */
/* Structure Name   :  Qp0l_Scan_Program_Data_t                      */
/*                                                                   */
/* Structure Purpose:  This structure is used to package the         */
/*                     information required when registering         */
/*                     a scan-related exit program.                  */
/*                                                                   */
/***   END OF STRUCTURE DESCRIPTION   ********************************/
typedef _Packed struct Qp0l_Scan_Program_Data
{                                     /*                          */
  char                 userProfile[10]; /* User profile           */
  Qp0l_Scan_Key_t      scanKey;         /* Scan key               */
  Qp0l_Scan_KeySign_t  scanKeySignature;/* Scan key signature     */
} Qp0l_Scan_Program_Data_t;           /*                          */

/***   START OF STRUCTURE DESCRIPTION   ******************************/
/*                                                                   */
/* Structure Name   :  Qp0l_Scan_Exit_Information_t                  */
/*                                                                   */
/* Structure Purpose:  This structure is used to package the         */
/*                     information that is passed from the system    */
/*                     to a scan-related exit program.               */
/*                                                                   */
/***   END OF STRUCTURE DESCRIPTION   ********************************/
typedef _Packed struct Qp0l_Scan_Exit_Information_t
{                                     /*                          */
  int           InfoLength;           /* Length of exit info
                                          in buffer (bytes)       */
  char          ExitPointName[20];    /* Exit point name          */
  char          ExitPointFormat[8];   /* Exit point format name   */
  int           LengthStatus;         /* Length of status information
                                          buffer allocated (bytes)*/
  int           ScanDescriptor;       /* Scan descriptor          */
  unsigned int  FromCCSID;            /* From CCSID               */
  unsigned int  ToCCSID;              /* To CCSID                 */
  unsigned int  LastFailCCSID;        /* Last Failure CCSID       */
  int           oflags;               /* Oflags                   */
  char          FileID[16];           /* File identifier          */
  char          ObjType[10];          /* Object type              */
  char          FileSystem;           /* File system indicator    */
  char          AddlCall;             /* Additional call          */
  char          ObjModified;          /* Object modified since
                                         last scan                */
  char          SignDiff;             /* Scan signatures are
                                         different                */
  char          CallAfterFailure;     /* Call after previous
                                         failure                  */
} Qp0lScan_Exit_Information_t;        /*                          */

/***   START OF STRUCTURE DESCRIPTION   ******************************/
/*                                                                   */
/* Structure Name   :  Qp0l_Scan_Status_Information_t                */
/*                                                                   */
/* Structure Purpose:  This structure is used to package the         */
/*                     information that is passed from the scan      */
/*                     related exit program back to the system.      */
/*                                                                   */
/***   END OF STRUCTURE DESCRIPTION   ********************************/
typedef _Packed struct Qp0l_Scan_Status_Information
{                                     /*                          */
  int           InfoLength;           /* Length of status info
                                          in buffer (in bytes)    */
  unsigned int  FailingCCSID;         /* Failing CCSID            */
  char          UpdateScanInfo;       /* Update object scan
                                         information              */
  char          ScanStatus;           /* Scan status              */
} Qp0l_Scan_Status_Information_t;     /*                          */


/*********************************************************************/
/* Macro constants common to the scan-related exit programs and to   */
/*  other integrated file system APIs.                               */
/*********************************************************************/
/* Values used generically in several fields                         */
#define QP0L_SCAN_NO           0
#define QP0L_SCAN_YES          1

/* Values for Scan status                                            */
#define QP0L_SCAN_REQUIRED              0
#define QP0L_SCAN_SUCCESS               1
#define QP0L_SCAN_FAILURE               2
#define QP0L_SCAN_FAIL_WANT_MODIFY      3
#define QP0L_SCAN_MODIFY                4
#define QP0L_SCAN_PENDING_CVN           5
#define QP0L_SCAN_NOT_REQUIRED          6

/*********************************************************************/
/* Macro constants common to just the scan-related exit programs     */
/*********************************************************************/
/* Values for the Additional call field                              */
#define QP0L_SCAN_CALL_FIRST   0
#define QP0L_SCAN_CALL_ADDL    1

/* Values for exit point names                                       */
#define QP0L_SCAN_OPEN   "QIBM_QP0L_SCAN_OPEN "
#define QP0L_SCAN_CLOSE  "QIBM_QP0L_SCAN_CLOSE"

/* Value for exit program format names                               */
#define QP0L_SCOP0100  "SCOP0100"
#define QP0L_SCCL0100  "SCCL0100"

/* Values for the File systems field                                 */
#define QP0L_SCAN_ROOT_QOPENSYS_UDFS        0

#pragma datamodel(pop)
#endif /* _QP0LSCAN_h */

#ifdef __cplusplus                                            /* @A1A*/
    #pragma info(restore)                                     /* @A1A*/
#else                                                         /* @A1A*/
    #pragma checkout(resume)                                  /* @A1A*/
#endif                                                        /* @A1A*/
