/*** START HEADER FILE SPECIFICATIONS ********************************/
/*                                                                   */
/* Header File Name: H/QTEDMPV                                       */
/*                                                                   */
/* Descriptive Name: Dump Module Variable API.                       */
/*                                                                   */
/* 5763-SS1,5722-SS1  (C) Copyright IBM Corp. 1994,2001              */
/* All rights reserved.                                              */
/* US Government Users Restricted Rights -                           */
/* Use, duplication or disclosure restricted                         */
/* by GSA ADP Schedule Contract with IBM Corp.                       */
/*                                                                   */
/* Licensed Materials-Property of IBM                                */
/*                                                                   */
/*                                                                   */
/* Description: Include header file for the QTEDMPV API.             */
/*                                                                   */
/* Header Files Included: QTEDBGS.h                                  */
/*                                                                   */
/* Macros List: None.                                                */
/*                                                                   */
/* Structure List: Receiver variable sections for                    */
/*                 Dump Module Variables API.                        */
/*                                                                   */
/* Function Prototype List: QteDumpModuleVariables                   */
/*                                                                   */
/* Change Activity:                                                  */
/*                                                                   */
/* CFD List:                                                         */
/*                                                                   */
/* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION       */
/* ---- ------------ ----- ------ --------- -------------------------*/
/* $A0= D2862000     3D10  940222 Debug   : New Include              */
/* $H1= D9552900     4D40  980902 Debug   : Add new variable types   */
/* $H2= D98212.3    v5r1m0 010400 ROCH    : Teraspace stage 2        */
/*                                                                   */
/* End CFD List.                                                     */
/*                                                                   */
/*  Additional notes about the Change Activity                       */
/* End Change Activity.                                              */
/*** END HEADER FILE SPECIFICATIONS **********************************/

#ifndef _QTEDMPV_H
#define _QTEDMPV_H

/*-------------------------------------------------------------------*/
/* Includes used by QteDumpModuleViews API                           */
/*-------------------------------------------------------------------*/
#include <qtedbgs.h>                /* Source Debugger APIs          */
#if (__OS400_TGTVRM__>=510)                                   /* @H2A*/
#pragma datamodel(P128)                                       /* @H2A*/
#endif                                                        /* @H2A*/

/*-------------------------------------------------------------------*/
/* Type definitions for use in Dump Module Variables API.            */
/*-------------------------------------------------------------------*/

typedef char _TE_DUMP_HANDLE_T[16];


/*********************************************************************/
/* Prototype for Dump Module Variable API.                           */
/*********************************************************************/
void QteDumpModuleVariables(
              char *,               /* Receiver variable             */
              long int *,           /* Length of receiver variable   */
              _TE_FORMAT_T,         /* Format name                   */
              _TE_OBJLIB_T *,       /* Program name and library      */
              _TE_NAME_T,           /* Program type                  */
              _TE_NAME_T,           /* Module name                   */
              long int *,           /* Data option                   */
              _TE_DUMP_HANDLE_T,    /* Continuation handle           */
              _TE_ERROR_CODE_T *);  /* Error code                    */

/*-------------------------------------------------------------------*/
/* Type definitions for the receiver variable in the Dump Module     */
/* Variables API. The receiver variable contains:                    */
/*    - A receiver variable header section                           */
/*    - A module variable section for each variable returned by the  */
/*      Dump Module Variables API consisting of:                     */
/*      + A fixed length header section                              */
/*      + A variable length section containing the information       */
/*        requested for the module variable.                         */
/*-------------------------------------------------------------------*/

typedef struct _TE_DUMP_REC_VAR_HEADER
{ long int BytesReturned;
  long int BytesAvailable;
  long int NumVarSections;
  _TE_NAME_T ReturnedLib;
  _TE_NAME_T Reserved;
  _TE_DUMP_HANDLE_T
       ContinuationHandle;
}_TE_DUMP_REC_VAR_HEADER_T;

typedef struct _TE_DUMP_MOD_VAR_HEADER
{ long int VarSectionLength;
  long int OffsetNextVar;
  long int VarEntryType;
}_TE_DUMP_MOD_VAR_HEADER_T;

typedef struct _TE_DUMP_SCALAR_ENTRY
{ long int VarType;
  long int TotalDigits;
  long int Precision;
  long int ScalingFactor;
  long int OffsetVarName;
  long int LengthVarName;
  long int LengthDefaultValue;
  long int LengthHexValue;
  long int StringContent;
  long int PrefixLength;
}_TE_DUMP_SCALAR_ENTRY_T;

typedef struct _TE_DUMP_ARRAY_ENTRY
{ long int NumArrayEntries;
  long int OffsetFirstVar;
  long int OffsetDimensions;
  long int OffsetName;
  long int NumDimensions;
  long int NameLength;
}_TE_DUMP_ARRAY_ENTRY_T;

typedef struct _TE_DUMP_BLOCK_ENTRY
{ long int BlockNumber;
  long int OffsetName;
  long int NameLength;
}_TE_DUMP_BLOCK_ENTRY_T;

/*-------------------------------------------------------------------*/
/* Constants - Data option parameter values.                         */
/*-------------------------------------------------------------------*/

#define  _TE_kDataOption_Name  0
#define  _TE_kDataOption_Value 1
#define  _TE_kDataOption_Hex   2

/*-------------------------------------------------------------------*/
/* Constants - Variable entry types.                                 */
/*-------------------------------------------------------------------*/

#define  _TE_kVarEntryT_Scalar 0
#define  _TE_kVarEntryT_Array  1
#define  _TE_kVarEntryT_Block  2

/*-------------------------------------------------------------------*/
/* Constants - Variable types.                                       */
/*-------------------------------------------------------------------*/

#define  _TE_kVarT_None       0
#define  _TE_kVarT_8bChar     1
#define  _TE_kVarT_16bChar    2
#define  _TE_kVarT_32bOrd     3
#define  _TE_kVarT_16bCard    4
#define  _TE_kVarT_32bCard    5
#define  _TE_kVarT_16bInt     6
#define  _TE_kVarT_32bInt     7
#define  _TE_kVarT_32bFloat   8
#define  _TE_kVarT_64bFloat   9
#define  _TE_kVarT_128bPtr   10
#define  _TE_kVarT_FString   11
#define  _TE_kVarT_Packed    12
#define  _TE_kVarT_ZonedTES  13
#define  _TE_kVarT_ZonedLES  14
#define  _TE_kVarT_ZonedTSS  15
#define  _TE_kVarT_ZonedLSS  16
#define  _TE_kVarT_16bBinD   17
#define  _TE_kVarT_32bBinD   18
#define  _TE_kVarT_64bBinD   19
#define  _TE_kVarT_32bIndex  20
#define  _TE_kVarT_8bCard    21
#define  _TE_kVarT_8bInt     22
#define  _TE_kVarT_64bCard   23
#define  _TE_kVarT_64bInt    24
#define  _TE_kVarT_VString   25

/*-------------------------------------------------------------------*/
/* Constants - String type descriptors.                              */
/*-------------------------------------------------------------------*/

#define  _TE_kStrT_None          0
#define  _TE_kStrT_NullTUnicode  1
#define  _TE_kStrT_Pre2Unicode   2
#define  _TE_kStrT_Pre4Unicode   3
#define  _TE_kStrT_FUnicode      4
#define  _TE_kStrT_VUnicode      5
#define  _TE_kStrT_NullTGraphic  6
#define  _TE_kStrT_Pre2Graphic   7
#define  _TE_kStrT_Pre4Graphic   8
#define  _TE_kStrT_FGraphic      9
#define  _TE_kStrT_VGraphic     10
#define  _TE_kStrT_Date         11
#define  _TE_kStrT_PDate        12
#define  _TE_kStrT_Time         13
#define  _TE_kStrT_PTime        14
#define  _TE_kStrT_Timestamp    15

#if (__OS400_TGTVRM__>=510)                                  /* @H2A*/
#pragma datamodel(pop)                                       /* @H2A*/
#endif                                                       /* @H2A*/

#endif /* _QTEDMPV_H */

