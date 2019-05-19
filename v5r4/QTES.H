/*** START HEADER FILE SPECIFICATIONS ********************************/
/*                                                                   */
/* Header File Name: H/QTES                                          */
/*                                                                   */
/* Descriptive Name: Debugger Common Variable Name Include           */
/*                                                                   */
/* 5763-SS1,5722-SS1  (C) Copyright IBM Corp. 1994,2001              */
/* All rights reserved.                                              */
/* US Government Users Restricted Rights -                           */
/* Use, duplication or disclosure restricted                         */
/* by GSA ADP Schedule Contract with IBM Corp.                       */
/*                                                                   */
/* Licensed Materials-Property of IBM                                */
/*                                                                   */
/* Description: Include header file containing variable names for    */
/*              use in Debugger APIs.                                */
/*                                                                   */
/* Header Files Included: None.                                      */
/*                                                                   */
/* Macros List: None.                                                */
/*                                                                   */
/* Structure List: Object name and library variable for several APIs */
/*                 Error code variable for all APIs                  */
/*                                                                   */
/* Function Prototype List: None.                                    */
/*                                                                   */
/* Change Activity:                                                  */
/*                                                                   */
/* CFD List:                                                         */
/*                                                                   */
/* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION       */
/* ---- ------------ ----- ------ --------- -------------------------*/
/* $A0= D2862000     3D10  940524 ROCH    : New Include              */
/* $A1= D3480301     4D20  961022 ROCH    : Add Thread ID            */
/* $A2= D98212.3    v5r1m0 010400 ROCH    : Teraspace stage 2        */
/*                                                                   */
/* End CFD List.                                                     */
/*                                                                   */
/*  Additional notes about the Change Activity                       */
/* End Change Activity.                                              */
/*** END HEADER FILE SPECIFICATIONS **********************************/

/*-------------------------------------------------------------------*/
/* Type definitions for use in Debugger APIs.                        */
/*-------------------------------------------------------------------*/

#ifndef _QTES_H
#define _QTES_H

#if (__OS400_TGTVRM__>=510)                                   /* @A2A*/
    #pragma datamodel(P128)                                   /* @A2A*/
#endif                                                        /* @A2A*/

typedef char _TE_NAME_T[10];
typedef char _TE_FORMAT_T[8];
typedef char _TE_PROCESSOR_ID_T[20];
typedef char _TE_COMPILER_ID_T[20];
typedef char _TE_TIMESTAMP_T[13];
typedef char _TE_THREADID_T[8];                              /* @A1A */

typedef struct {
  _TE_NAME_T obj;
  _TE_NAME_T lib;
} _TE_OBJLIB_T;

typedef unsigned long _TE_CCSID_T;

typedef _Packed struct {
  long int BytesProvided;
  long int BytesAvailable;
  char ExceptionID[7];
  char Reserved1[1];
  char Data[64];
} _TE_ERROR_CODE_T;

typedef char _TE_TEXTDESC_T[50];

#if (__OS400_TGTVRM__>=510)                                   /* @A2A*/
    #pragma datamodel(pop)                                    /* @A2A*/
#endif                                                        /* @A2A*/

#endif

