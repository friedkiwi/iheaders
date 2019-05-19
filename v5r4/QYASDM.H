/* begin_generated_IBM_copyright_prolog                              */
/* This is an automatically generated copyright prolog.              */
/* After initializing,  DO NOT MODIFY OR MOVE                        */
/* ----------------------------------------------------------------- */
/*                                                                   */
/* Product(s):                                                       */
/*     5769-SS1                                                      */
/*     5722-SS1                                                      */
/*                                                                   */
/* (C)Copyright IBM Corp.  2000, 2005                                */
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

#ifndef _QYASDM_H
#define _QYASDM_H
#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(P128)      /* @B1A*/
#endif                       /* @B1A*/

/*** START HEADER FILE SPECIFICATIONS ********************************/
/*                                                                   */
/* Header File Name       : H/QYASDM                                 */
/*                                                                   */
/* Descriptive Name       : Common DASD Management Type Definitions  */
/*                          and Defines                              */
/*                                                                   */
/*                                                                   */
/* This header file is an external product interface, all            */
/* modifications must be upward compatible.                          */
/*                                                                   */
/*                                                                   */
/* Description            : Include header file containing the       */
/*                          structure definitions and prototypes     */
/*                          for the DASD Management API's.           */
/*                                                                   */
/* Macros List            : None                                     */
/*                                                                   */
/* Structure List         : None                                     */
/*                                                                   */
/* Function Prototype List: None                                     */
/*                                                                   */
/* Restrictions           :                                          */
/*    WARNING: Variables that are declared in this include must be   */
/*             no longer than 30 characters in length!!!!!!!!!!!!!   */
/*                                                                   */
/* Change Activity        :                                          */
/*                                                                   */
/* CFD List               :                                          */
/*                                                                   */
/* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION       */
/* ---- ------------ ----- ------ --------- -----------------------  */
/* $A0= D9753800     4D50  990304 roch      New Include              */
/* $A1= D93276       5D40  050131 jgr       Add new functions        */
/*                                                                   */
/* End CFD List.                                                     */
/*                                                                   */
/*  Additional notes about the change activity                       */
/* End Change Activity.                                              */
/*                                                                   */
/*** END HEADER FILE SPECIFICATIONS **********************************/

/*********************************************************************/
/*********************************************************************/
/* Common Type Definitions.                                          */
/*********************************************************************/
/*********************************************************************/
typedef long int  Qdm_Operation_Key_t;
typedef long int  Qdm_Bytes_Available_t;
typedef long int  Qdm_Bytes_Returned_t;
typedef char      Qdm_Disk_Unit_Resrc_Name_t[10];
typedef char      Qdm_Exception_ID_t[7];
typedef char      Qdm_Exception_Data_t[30];
typedef char      Qdm_Format_Name_t[8];
typedef long int  Qdm_Len_Operation_Variable_t;
typedef long int  Qdm_Len_Exception_Data_t;
typedef long int  Qdm_Len_Receiver_Variable_t;
typedef long int  Qdm_Num_Of_Recs_t;
typedef long int  Qdm_Offset_t;
typedef char      Qdm_Session_Handle_t[8];
typedef long int  Qdm_Size_Of_Recs_t;
typedef char      Qdm_Tower_Number_t[4];

/*********************************************************************/
/*********************************************************************/
/* Start Of Common Defines.                                          */
/*********************************************************************/
/*********************************************************************/

/*********************************************************************/
/* Valid values for the operation key.                               */
/*********************************************************************/
#define QDM_CHG_STORAGE_THRESHOLD_PCT  1  /*Change the storage       */
                                          /*threshold percentage of  */
                                          /* an ASP                  */
#define QDM_ADD_DU_TO_ASP              2  /*Add disk units to an ASP */
#define QDM_SUSPEND_MIRRORED_PROT      3  /*Suspend mirrored         */
                                          /*protection on a disk unit*/
#define QDM_RESUME_MIRRORED_PROT       4  /*Resume mirrored          */
                                          /*protection on a disk unit*/
#define QDM_INC_DU_IN_DEV_PAR_PROT     5  /*Include disk unit in     */
                                          /*device parity protection */
#define QDM_REBUILD_DU_DATA            6  /*Rebuild disk unit data   */
                                          /*after a parity fault     */
#define QDM_REPLACE_MIRRORED_DU        7  /*Replace mirrored disk    */
                                          /*unit                     */
#define QDM_STRT_DEV_PAR_PROT          8  /*Start device parity      */
                                          /*protection on a          */
                                          /*controller with no       */
                                          /*configured disk units    */
#define QDM_ENABLE_RLDSRC_MIRRORING    9  /*Enable remote load       */
                                          /*source mirroring         */
#define QDM_DISABLE_RLDSRC_MIRRORING   10 /*Disable remote load      */
                                          /*source mirroring         */
#define QDM_POWER_OFF_DU               11 /*Power off a disk unit    */
#define QDM_POWER_ON_DU                12 /*Power on a disk unit     */
#define QDM_FORMAT_DU                  13 /*Format a disk unit       */
#define QDM_CLEAR_DU                   14 /*Clear a disk unit        */
#define QDM_SCAN_SURFACE_DU            15 /*Scan Surface a disk unit */
#define QDM_CHANGE_MCU                 16 /*Change multiple          */
                                          /*connection unit      @A1A*/
#define QDM_SUSP_GEOMIR                17 /*Suspend geo mirroring@A1A*/
#define QDM_RES_GEOMIR                 18 /*Resume geo mirroring @A1A*/
#define QDM_WRT_CHGS                   19 /*Write changes to disk@A1A*/
#define QDM_DETACH_GEOMIR_COPY         20 /*Detach geo mirroring @A1A*/
                                          /*copy                 @A1A*/
#define QDM_REATTACH_GEOMIR_COPY       21 /*Reattach geo         @A1A*/
                                          /*mirroring copy       @A1A*/
#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(pop)       /* @B1A*/
#endif                       /* @B1A*/

#endif /*_QYASDM_H*/
