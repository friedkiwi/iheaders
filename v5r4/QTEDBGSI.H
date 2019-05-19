/*** START HEADER FILE SPECIFICATIONS ********************************/
/*                                                                   */
/* Header File Name: H/QTEDBGSI                                      */
/*                                                                   */
/* Descriptive Name: Source Debugger APIs.                           */
/*                                                                   */
/* 5769-SS1,5722-SS1                                                 */
/* (C) Copyright IBM Corp. 1999,2001                                 */
/* All rights reserved.                                              */
/* US Government Users Restricted Rights-                            */
/* Use, duplication or disclosure restricted                         */
/* by GSA ADP Schedule Contract with IBM Corp.                       */
/* Licensed Materials-Property of IBM                                */
/*                                                                   */
/*                                                                   */
/* Description: Include header file for the QTEDBGSI APIs.           */
/*                                                                   */
/* Header Files Included: H/QTES                                     */
/*                                                                   */
/* Macros List: None.                                                */
/*                                                                   */
/* Structure List: Receiver variables for Retrieve Source Path Name  */
/*                                                                   */
/* Function Prototype List: QteRetrieveSourcePathName                */
/*                                                                   */
/* Change Activity:                                                  */
/*                                                                   */
/* CFD List:                                                         */
/*                                                                   */
/* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION       */
/* ---- ------------ ----- ------ --------- -------------------------*/
/* $A0= D9750600     4D50  990509 ROCH    : New Include              */
/* $A1= D98212.3    v5r1m0 010400 ROCH    : Teraspace stage 2        */
/*                                                                   */
/* End CFD List.                                                     */
/*                                                                   */
/*  Additional notes about the Change Activity                       */
/* End Change Activity.                                              */
/*** END HEADER FILE SPECIFICATIONS **********************************/

#ifndef _QTEDBGSI_H
#define _QTEDBGSI_H


/*-------------------------------------------------------------------*/
/* Includes used by Source Debugger APIs                             */
/*-------------------------------------------------------------------*/

#include <qtes.h>                   /* Common names include          */

#if (__OS400_TGTVRM__>=510)                                   /* @A1A*/
#pragma datamodel(P128)                                       /* @A1A*/
#endif                                                        /* @A1A*/

/*********************************************************************/
/* Prototype for Retrieve Source Path Name API.                      */
/*********************************************************************/
#ifdef __ILEC400__
    #pragma argument (QteRetrieveSourcePathName,OS,nowiden)
 #else
    extern "C"
 #endif
void QteRetrieveSourcePathName(
              char *,               /* Receiver variable             */
              long int *,           /* Length of receiver variable   */
              _TE_FORMAT_T,         /* Format name                   */
              void *,               /* Source file name              */
              _TE_ERROR_CODE_T *);  /* Error code                    */

/*-------------------------------------------------------------------*/
/* Type definition for the SRCP0100 format of receiver variable in   */
/* the Retrieve Source Path Name API.                                */
/*-------------------------------------------------------------------*/

typedef _Packed struct {
  long int BytesReturned;
  long int BytesAvailable;
  long int OffsetToSourcePathName;
  long int LengthOfSourcePathName;
} _TE_SRCP0100_T;

#if (__OS400_TGTVRM__>=510)                                  /* @A1A*/
#pragma datamodel(pop)                                       /* @A1A*/
#endif                                                       /* @A1A*/

#endif
