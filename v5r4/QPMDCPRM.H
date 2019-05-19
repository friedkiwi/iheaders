/*** START HEADER FILE SPECIFICATIONS ********************************/
/*                                                                   */
/* Header File Name: H/QPMDCPRM                                      */
/*                                                                   */
/* Descriptive Name: Collection Services User-Defined Categories     */
/*                                                                   */
/* 5722-SS1  (C) Copyright IBM Corp. 2001                            */
/* All rights reserved.                                              */
/* US Government Users Restricted Rights -                           */
/* Use, duplication or disclosure restricted                         */
/* by GSA ADP Schedule Contract with IBM Corp.                       */
/*                                                                   */
/* Licensed Materials-Property of IBM                                */
/*                                                                   */
/*                                                                   */
/* Description: This header file contains declarations of            */
/*              parameter structure, passed by Collection Services   */
/*              to a data collection program, which is               */
/*              registered to collect data for a user-defined        */
/*              performance category.                                */
/*                                                                   */
/*                                                                   */
/* Header Files Included: None.                                      */
/*                                                                   */
/* Macros List: None.                                                */
/*                                                                   */
/* Structure List: Qpm_DC_Parm_t                                     */
/*                                                                   */
/* Function Prototype List: None.                                    */
/*                                                                   */
/* Change Activity:                                                  */
/*                                                                   */
/* CFD List:                                                         */
/*                                                                   */
/* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION       */
/* ---- ------------ ----- ------ --------- ------------------------ */
/*      D98669        5D20 010214 AP:       New File                 */
/*                                                                   */
/* End CFD List.                                                     */
/*                                                                   */
/*  Additional notes about the Change Activity                       */
/* End Change Activity.                                              */
/*** END HEADER FILE SPECIFICATIONS **********************************/
#ifndef    __QPMDCPRM_H
 #define  __QPMDCPRM_H

#if (__OS400_TGTVRM__>=510)
#pragma datamodel(P128)
#endif

/* Manifest constants                                                */

/* For a formatName field                                            */

#define   PM_FORMAT_01       "PMDC0100"

/* For requestType field                                             */

#define   PM_DOBEGIN         10
#define   PM_DOEND           20
#define   PM_DOCOLLECT       30
#define   PM_DOSHUTDOWN      40

/* For requestModifier field                                         */

#define   PM_CALL_NORMAL     10
#define   PM_CALL_CONTINUE   20

/* For moreData field                                                */

#define   PM_NO_MORE_DATA    0
#define   PM_MORE_DATA       1

 /********************************************************************/
 /* Data collection program receives following parameters:           */
 /*    - data request - see Qpm_DC_Parm_t structure below            */
 /*    - data buffer  - place where data will be returned            */
 /*    - work area    - place where control information can be saved */
 /*    - return code  - 4-byte binary field                          */
 /********************************************************************/

 /********************************************************************/
 /*  Typedef for parameter structure                                 */
 /********************************************************************/

 typedef _Packed struct Qpm_DC_Parm {

     /* Input fields - set by Collection Services                    */

     char     formatName[8];
     char     categoryName[10];
     char     rsvd1[2];
     int      requestType;
     int      requestModifier;
     int      dataBufferLength;
     int      parmOffset;
     int      parmLength;
     int      workAreaLength;
     char     rsvd2[4];
     char     intervalKey[8];
     char     intervalTimestamp[8];

     /* Output fields - set by data collection program               */

     int      bytesProvided;
     int      moreData;
     char     rsvd3[8];

} Qpm_DC_Parm_t;


#if (__OS400_TGTVRM__>=510)
#pragma datamodel(pop)
#endif

#endif
