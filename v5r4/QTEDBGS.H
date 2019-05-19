/* begin_generated_IBM_copyright_prolog                              */
/* This is an automatically generated copyright prolog.              */
/* After initializing,  DO NOT MODIFY OR MOVE                        */
/* ----------------------------------------------------------------- */
/*                                                                   */
/* Product(s):                                                       */
/*     5763-SS1                                                      */
/*     5722-SS1                                                      */
/*                                                                   */
/* (C)Copyright IBM Corp.  1994, 2005                                */
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
/*** START HEADER FILE SPECIFICATIONS ********************************/
/*                                                                   */
/* Header File Name: H/QTEDBGS                                       */
/*                                                                   */
/* Descriptive Name: Source Debugger APIs.                           */
/*                                                                   */
/* Description: Include header file for the QTEDBGS APIs.            */
/*                                                                   */
/* Header Files Included: H/QTES                                     */
/*                                                                   */
/* Macros List: None.                                                */
/*                                                                   */
/* Structure List: Receiver variables for Retrieve Module Views      */
/*                 Receiver variables for Retrieve Stopped Position  */
/*                 Receiver variables for Retrieve View Text         */
/*                 Receiver variables for Retrieve View File         */
/*                 Receiver variables for Map View Position          */
/*                 Receiver variables for Submit Debug Command       */
/*                 Receiver variable for Retrieve View Line Info     */
/*                 Receiver variable for Retrieve Statement View     */
/*                                                                   */
/* Function Prototype List: QteStartSourceDebug                      */
/*                          QteEndSourceDebug                        */
/*                          QteRegSrvEntPntStpHdlr                   */
/*                          QteRetrieveDebugAttribute                */
/*                          QteSetDebugAttribute                     */
/*                          QteRetrieveModuleViews                   */
/*                          QteRegisterDebugView                     */
/*                          QteRemoveDebugView                       */
/*                          QteRetrieveStoppedPosition               */
/*                          QteAddBreakpoint                         */
/*                          QteRemoveBreakpoint                      */
/*                          QteRemoveAllBreakpoints                  */
/*                          QteStep                                  */
/*                          QteRetrieveViewText                      */
/*                          QteRetrieveViewFile                      */
/*                          QteMapViewPosition                       */
/*                          QteSubmitDebugCommand                    */
/*                          QteRetrieveViewLineInformation           */
/*                          QteRetrieveStatementView                 */
/*                                                                   */
/* Change Activity:                                                  */
/*                                                                   */
/* CFD List:                                                         */
/*                                                                   */
/* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION       */
/* ---- ------------ ----- ------ --------- -------------------------*/
/* $A0= D2862000     3D10  940222 ROCH    : New Include              */
/* $A1= D9172200     3D60  940912 ROCH    : Support RetrieveView @A1A*/
/*                                           LineInformation API @A1A*/
/* $A2= D9191500     3D60  941005 ROCH    : Support Retrieve     @A2A*/
/*                                           StatementView API   @A2A*/
/* $A3= D9123600     3D60  941207 ROCH    : Added kStringF_E     @A3A*/
/*                                           expression type.    @A3A*/
/* $A4= D9421104     3D70  960306 ROCH    : Add Watch support    @A4A*/
/* $A5= D9421100     3D70  960403 ROCH    : Add statement info.  @A5A*/
/*                                           Retrieve Statement  @A5A*/
/*                                           View API.           @A5A*/
/* $A6= D9496001     4D10  961106 ROCH    : Support for Unicode  @A6A*/
/*                                          and ASCII format     @A6A*/
/* $A7= D9480301     4D20  961022 ROCH    : Add threads support. @A7A*/
/*                                          Rmv _Packed from struc   */
/*                                          within typedefs for iCC. */
/* $A8= D9489401     4D20  970310 ROCH    : Add JAVA support     @A8A*/
/* $A9= P3663050     4D30  971118 ROCH    : Integer/cardinal 64  @A9A*/
/* $AA= D9552900     4D40  980810 ROCH    : Cardinal 8           @AAA*/
/* $AB= D98212.3    v5r1m0 010400 ROCH    : Teraspace stage 2        */
/* $B1= D98788      v5r2m0 010601 ROCH    : Service entry points     */
/* $B2= P9954120     5D20  010916 ROCH    : QteRegSrvEntPntStpHdlr   */
/* $C1= P9957389     5D30  020722 ROCH    : Correct struct typedef   */
/* $D1= D93009       5D40  040825 ROCH    : UTF-32 Unicode support   */
/*                                                                   */
/* End CFD List.                                                     */
/*                                                                   */
/*  Additional notes about the Change Activity                       */
/* End Change Activity.                                              */
/*** END HEADER FILE SPECIFICATIONS **********************************/

#ifndef _QTEDBGS_H
#define _QTEDBGS_H


/*-------------------------------------------------------------------*/
/* Includes used by Source Debugger APIs                             */
/*-------------------------------------------------------------------*/

#include <qtes.h>                   /* Common names include          */

#if (__OS400_TGTVRM__>=510)                                   /* @ABA*/
#pragma datamodel(P128)                                       /* @ABA*/
#endif                                                        /* @ABA*/

/*********************************************************************/
/* Prototype for Start Source Debug API.                             */
/*********************************************************************/
#ifdef __ILEC400__
    #pragma argument (QteStartSourceDebug,OS,nowiden)
 #else
    extern "C"
 #endif

void QteStartSourceDebug(
              _TE_OBJLIB_T *,       /* Program stop handler name     */
              _TE_ERROR_CODE_T *);  /* Error code                    */

/*********************************************************************/
/* Prototype for End Source Debug API.                               */
/*********************************************************************/
#ifdef __ILEC400__
    #pragma argument (QteEndSourceDebug,OS,nowiden)
 #else
    extern "C"
 #endif
void QteEndSourceDebug(
              _TE_ERROR_CODE_T *);  /* Error code                    */


/*********************************************************************/
/* Prototype for Register Service Entry Point Program Stop Handler   */
/* Exit Program Debug API.                                       @B2A*/
/*********************************************************************/
#ifdef __ILEC400__
    #pragma argument (QteRegSrvEntPntStpHdlr,OS,nowiden)
 #else
    extern "C"
 #endif

void QteRegSrvEntPntStpHdlr(
              _TE_OBJLIB_T *,       /* Service entry point hdlr name */
              _TE_ERROR_CODE_T *);  /* Error code                    */

/*********************************************************************/
/* Prototype for Retrieve Debug Attribute API.                       */
/*********************************************************************/
#ifdef __ILEC400__
    #pragma argument (QteRetrieveDebugAttribute,OS,nowiden)
 #else
    extern "C"
 #endif
void QteRetrieveDebugAttribute(
              _TE_NAME_T,           /* Debug attribute name          */
              _TE_NAME_T,           /* Debug attribute value         */
              _TE_ERROR_CODE_T *);  /* Error code                    */

/*********************************************************************/
/* Prototype for Set Debug Attribute API.                            */
/*********************************************************************/
#ifdef __ILEC400__
    #pragma argument (QteSetDebugAttribute,OS,nowiden)
 #else
    extern "C"
 #endif
void QteSetDebugAttribute(
              _TE_NAME_T,           /* Debug attribute name          */
              _TE_NAME_T,           /* Debug attribute value         */
              _TE_ERROR_CODE_T *);  /* Error code                    */

/*********************************************************************/
/* Prototype for Retrieve Module Views API.                          */
/*********************************************************************/
#ifdef __ILEC400__
    #pragma argument (QteRetrieveModuleViews,OS,nowiden)
 #else
    extern "C"
 #endif
void QteRetrieveModuleViews(
              char *,               /* Receiver variable             */
              long int *,           /* Length of receiver variable   */
              _TE_FORMAT_T,         /* Format name                   */
              void *,               /* Program or class file name    */
              _TE_NAME_T,           /* Program type                  */
              void *,               /* Module name or returned       */
                                    /* class file information size   */
              void *,               /* Returned library name or      */
                                    /* class file information        */
              _TE_ERROR_CODE_T *);  /* Error code                    */

/*-------------------------------------------------------------------*/
/* Type definition for the VEWL0100 format of receiver variable in   */
/* the Retrieve Module Views API.                                    */
/*-------------------------------------------------------------------*/

typedef _Packed struct {
  long int BytesReturned;
  long int BytesAvailable;
  long int NumberElements;
          struct {
    _TE_NAME_T ModuleName;
    _TE_NAME_T ViewType;
    _TE_COMPILER_ID_T CompilerID;
    _TE_NAME_T MainIndicator;
    _TE_TIMESTAMP_T TimeStamp;
    _TE_TEXTDESC_T ViewDescription;
    char Reserved[3];
    long int ViewNumber;
    long int NumViews;
  } Element[1];
} _TE_VEWL0100_T;

#define _TE_kViewHdrSize 12
#define _TE_kViewElemSize (sizeof(_TE_VEWL0100_T)-_TE_kViewHdrSize)

/*-------------------------------------------------------------------*/
/* Type definition for the returned library parameter when the       */
/* program type is *CLASS.                                           */
/*-------------------------------------------------------------------*/

typedef _Packed struct {
  long int BytesReturned;
  long int BytesAvailable;
  long int ClassPathNameOffset;
  long int ClassPathNameLength;
/*char Reserved[];*/
/*char ClassPathName[];*/
} _TE_RETURNLIB_T;

/*********************************************************************/
/* Prototype for Register Debug View API.                            */
/*********************************************************************/
void QteRegisterDebugView(
              long int *,           /* Returned view ID              */
              long int *,           /* Returned number of lines      */
              void *,               /* Returned library name or      */
                                    /* class file information        */
              _TE_TIMESTAMP_T,      /* Returned view timestamp       */
              void *,               /* Program or class file name    */
              _TE_NAME_T,           /* Program type                  */
              void *,               /* Module name or returned       */
                                    /* class file information size   */
              long int *,           /* View number                   */
              _TE_ERROR_CODE_T *);  /* Error code                    */

/*********************************************************************/
/* Prototype for Remove Debug View API.                              */
/*********************************************************************/
void QteRemoveDebugView(
              long int *,           /* View ID                       */
              _TE_ERROR_CODE_T *);  /* Error code                    */

/*********************************************************************/
/* Prototype for Retrieve Stopped Position API.                      */
/*********************************************************************/
void QteRetrieveStoppedPosition(
              char *,               /* Receiver variable             */
              long int *,           /* Length of receiver variable   */
              long int *,           /* View ID                       */
              _TE_ERROR_CODE_T *);  /* Error code                    */

/*-------------------------------------------------------------------*/
/* Type definition for the receiver variable in the Retrieve         */
/* Stopped Position API.                                             */
/*-------------------------------------------------------------------*/
typedef _Packed struct {
  long int BytesReturned;
  long int BytesAvailable;
  long int NumElements;
          struct {
    long int LineNumber;
    long int ColumnNumber;
  } PosElem[1];
} _TE_POSITION_INFORMATION_T;

/*********************************************************************/
/* Prototype for Add Breakpoint API.                                 */
/*********************************************************************/
void QteAddBreakpoint(
              long int *,           /* View ID                       */
              long int *,           /* Line number                   */
              long int *,           /* Column number                 */
              long int *,           /* Line in statement view        */
              _TE_ERROR_CODE_T *);  /* Error code                    */

/*********************************************************************/
/* Prototype for Remove Breakpoint API.                              */
/*********************************************************************/
void QteRemoveBreakpoint(
              long int *,           /* View ID                       */
              long int *,           /* Line number                   */
              long int *,           /* Column number                 */
              long int *,           /* Line in statement view        */
              _TE_ERROR_CODE_T *);  /* Error code                    */

/*********************************************************************/
/* Prototype for Remove All Breakpoints API.                         */
/*********************************************************************/
void QteRemoveAllBreakpoints(
              long int *,           /* View ID                       */
              _TE_NAME_T,           /* Remove type                   */
              _TE_ERROR_CODE_T *);  /* Error code                    */

/*********************************************************************/
/* Prototype for Step API.                                           */
/*********************************************************************/
void QteStep(
              long int *,           /* View ID                       */
              long int *,           /* Step count                    */
              _TE_NAME_T,           /* Step type                     */
              _TE_ERROR_CODE_T *);  /* Error code                    */

/*********************************************************************/
/* Prototype for Retrieve View Text API.                             */
/*********************************************************************/
void QteRetrieveViewText(
              char *,               /* Receiver variable             */
              long int *,           /* Length of receiver variable   */
              long int *,           /* View ID                       */
              long int *,           /* Start line number             */
              long int *,           /* Number of lines               */
              long int *,           /* Line length                   */
              _TE_ERROR_CODE_T *);  /* Error code                    */

/*-------------------------------------------------------------------*/
/* Type definition for the receiver variable in the Retrieve View    */
/* Text API.                                                         */
/*-------------------------------------------------------------------*/
typedef _Packed struct {
  long int BytesReturned;
  long int BytesAvailable;
  long int NumLines;
  long int LineLength;
  char Text[1];
} _TE_TEXT_BUFFER_T;

/*-------------------------------------------------------------------*/
/* Type Definition for each statement view text line in the          */
/* Retrieve View Text API.                                           */
/*-------------------------------------------------------------------*/
typedef struct {
  _TE_NAME_T Proc;
  _TE_NAME_T Stmt;
  _TE_NAME_T Type;
  char ProcName[255];
} _TE_STMT_VIEW_TEXT_T;

/*********************************************************************/
/* Prototype for Retrieve Statement View API                         */
/*********************************************************************/
void QteRetrieveStatementView(
              char *,               /* Receiver variable             */
              long int *,           /* Length of receiver var        */
              long int *,           /* View ID                       */
              long int *,           /* Start line number             */
              long int *,           /* Number of lines               */
              _TE_ERROR_CODE_T *);  /* Error code                    */

/*-------------------------------------------------------------------*/
/* Type Definition for each statement view line in the               */
/* Retrieve Statement View API.                                      */
/*-------------------------------------------------------------------*/
typedef struct {
  long int StmtNum;
  long int StmtType;
  long int StmtProcInfoOffset;
} _TE_STMT_VIEW_LINE_T;

/*-------------------------------------------------------------------*/
/* Type Definition for each range of statement lines in the          */
/* Retrieve Statement View API.                                      */
/*-------------------------------------------------------------------*/
typedef struct {
  long int LowLine;
  long int HighLine;
} _TE_STMT_VIEW_RANGE_T;

/*-------------------------------------------------------------------*/
/* Type Definition for procedure information in the                  */
/* Retrieve Statement View API.                                      */
/*-------------------------------------------------------------------*/
typedef struct {
  long int NextProcInfoOffset;
  long int ProcId;
  long int ProcNameOffset;
  long int ProcNameLength;
  long int LineRangeOffset;
  long int NumStmtLineRanges;
/*char Reserved[];*/
/*_TE_STMT_VIEW_RANGE_T       StmtRange[];*/
} _TE_STMT_VIEW_PROC_T;

/*-------------------------------------------------------------------*/
/* Type Definition for additional statement view line information    */
/* in the Retrieve Statement View API.                               */
/*-------------------------------------------------------------------*/
typedef struct {
  long int StmtNameOffset;
  long int StmtNameLength;
} _TE_STMT_VIEW_LINE_INFO_T;

/*-------------------------------------------------------------------*/
/* Type definition for the receiver variable in the Retrieve         */
/* Statement View API.                                               */
/*-------------------------------------------------------------------*/
typedef _Packed struct {
  long int BytesReturned;
  long int BytesAvailable;
  long int ViewLineOffset;
  long int NumLines;
  long int LineLength;
  long int FirstProcInfoOffset;
  long int FirstStmtLineInfoOffset;
/*char Reserved[];*/
/*_TE_STMT_VIEW_LINE_T         StmtLine[];*/
} _TE_STMT_BUFFER_T;

/*********************************************************************/
/* Prototype for Retrieve View File API.                             */
/*********************************************************************/
void QteRetrieveViewFile(
              char *,               /* Text descriptor receiver      */
                                    /* variable.                     */
              long int *,           /* Length of text descriptor     */
                                    /* receiver variable             */
              char *,               /* File name receiver variable   */
              long int *,           /* Length of file name receiver  */
                                    /* variable                      */
              _TE_FORMAT_T,         /* Format of file name receiver  */
                                    /* variable                      */
              long int *,           /* View ID                       */
              _TE_ERROR_CODE_T *);  /* Error code                    */

/*-------------------------------------------------------------------*/
/* Type definition for the text descriptor receiver variable in the  */
/* Retrieve View File API.                                           */
/*-------------------------------------------------------------------*/
typedef _Packed struct {
  long int BytesReturned;
  long int BytesAvailable;
  long int NumDescriptors;
          struct {
    long int FileNameIndex;
    long int LineNumber;
    long int NumberOfLines;
  } Elem[1];
} _TE_TEXT_DESCRIPTOR_T;

/*-------------------------------------------------------------------*/
/* Type definition for the file name receiver variable in the        */
/* Retrieve View File API.                                           */
/*-------------------------------------------------------------------*/
typedef _Packed struct {
  long int BytesReturned;
  long int BytesAvailable;
  long int NumFileEntries;
          struct {
    long int FileNameOffset;
    long int FileNameLength;
    char FileFormat[8];
    long int ReadFlag;
    long int CCSID;
    char CountryID[2];
    char LanguageID[3];
    char Reserved[3];
  } Elem[1];
} _TE_FILE_NAME_T;

/*-------------------------------------------------------------------*/
/* Type definitions for the file names contained in the file names   */
/* buffer following all elements in the file name receiver variable  */
/* above. The format to be used is named in the FileFormat variable. */
/* This typedef is used with the Retrieve View File API.             */
/*-------------------------------------------------------------------*/
typedef _Packed struct {
  _TE_NAME_T FileName;
  _TE_NAME_T FileLibrary;
  _TE_NAME_T FileMember;
} _TE_RTVF0100_T;

typedef _Packed struct {
  char FileName[1];
} _TE_RTVF0200_T;

/*********************************************************************/
/* Prototype for Map View Position API.                              */
/*********************************************************************/
void QteMapViewPosition(
              char *,               /* Receiver variable             */
              long int *,           /* Length of receiver variable   */
              long int *,           /* From view ID                  */
              long int *,           /* From line number              */
              long int *,           /* From column number            */
              long int *,           /* To view ID                    */
              _TE_ERROR_CODE_T *);  /* Error code                    */

/*-------------------------------------------------------------------*/
/* Type definition for the receiver variable in the Map View         */
/* Position API.                                                     */
/*-------------------------------------------------------------------*/
typedef _Packed struct {
  long int BytesReturned;
  long int BytesAvailable;
  long int NumElements;
          struct {
    long int LineNumber;
    long int ColumnNumber;
  } MapElem[1];
} _TE_MAPP0100_T;

/*********************************************************************/
/* Prototype for Retrieve View Line Information API                  */
/*********************************************************************/
void QteRetrieveViewLineInformation(
              char *,               /* Receiver variable             */
              long int *,           /* Length of receiver variable   */
              _TE_FORMAT_T,         /* Format of receiver variable   */
              long int *,           /* View ID                       */
              long int *,           /* Start line number             */
              long int *,           /* Number of lines               */
              _TE_ERROR_CODE_T *);  /* Error code                    */

/*-------------------------------------------------------------------*/
/* Type definitions for the RTVL0100 format of the receiver variable */
/* in the Retrieve View Line Information API.                        */
/*-------------------------------------------------------------------*/
typedef _Packed struct {
  char LineDisposition;
/*char Reserved[];*/
} _TE_RTVL0100_ARRAY_ELEMENT_T;

typedef _Packed struct {
  long int BytesReturned;
  long int BytesAvailable;
  long int OffsetToArray;
  long int NumberOfArrayElements;
  long int LengthOfArrayElement;
/*char Reserved[];*/
/*_TE_RTVL0100_ARRAY_ELEMENT_T LineInfo[];*/
} _TE_RTVL0100_HEADER_T;

#define _TE_NOTEXECUTABLE '0'
#define _TE_EXECUTABLE    '1'

/*********************************************************************/
/* Prototype for Submit Debug Command API.                           */
/*********************************************************************/
void QteSubmitDebugCommand(
              char *,               /* Receiver variable             */
              long int *,           /* Length of receiver variable   */
              long int *,           /* View ID                       */
              char *,               /* Input buffer                  */
              long int *,           /* Input buffer length           */
              _TE_COMPILER_ID_T,    /* Compiler ID                   */
              _TE_ERROR_CODE_T *);  /* Error code                    */

/*-------------------------------------------------------------------*/
/* Typedef _TE_EXPRESSION_T defines the type of the expression       */
/* returned from the Submit Debug Command API for an                 */
/* ExpressionTypeR record.                                           */
/*-------------------------------------------------------------------*/
typedef enum {
     kNoType__E
    ,kChar__8_E
    ,kChar_16_E
    ,kBool_32_E
    ,kCard_16_E
    ,kCard_32_E
    ,kInt__16_E
    ,kInt__32_E
    ,kReal_32_E
    ,kReal_64_E
    ,kSpcPtr__E
    ,kFncPtr__E
    ,kMchAdr__E
    ,kRecord__E
    ,kArray___E
    ,kEnum____E
    ,kString__E
    ,kPacked__E
    ,kZonedTE_E
    ,kZonedTS_E
    ,kZonedLE_E
    ,kZonedLS_E
    ,kBinD_16_E
    ,kBinD_32_E
    ,kBinD_64_E
    ,kTable___E
    ,kInd_____E
    ,kDate____E
    ,kTime____E
    ,kTstamp__E
    ,kFixedL__E
    ,kStringF_E
    ,kStringU_E
    ,kStringA_E
    ,kInt__64_E
    ,kSChar_8_E
    ,kCard_64_E
    ,kCard__8_E
    ,kStringW_E                                                /*@D1A*/
    ,kHex_____E = 100
} _TE_EXPRESSION_T;

/*-------------------------------------------------------------------*/
/* Typedef _TE_RESULT_KIND_T defines the result record types that    */
/* can be returned in the results array entries of the receiver      */
/* variable in the Submit Debug Command API.                         */
/*-------------------------------------------------------------------*/
typedef enum {
     _TE_kSentinelR
    ,_TE_kStepR
    ,_TE_kBreakR
    ,_TE_kClearBreakpointR
    ,_TE_kClearPgmR
    ,_TE_kBreakPositionR
    ,_TE_kEvaluateR
    ,_TE_kExpressionTextR
    ,_TE_kExpressionValueR
    ,_TE_kExpressionTypeR
    ,_TE_kQualifyR
    ,_TE_kTypeR
    ,_TE_kTypeDescR
    ,_TE_kDecimalR
    ,_TE_kArrayR
    ,_TE_kDimensionR
    ,_TE_kWatchR
    ,_TE_kWatchNumberR
    ,_TE_kClearWatchNumberR
    ,_TE_kClearWatchR
    ,_TE_kTBreakR
    ,_TE_kSBreakR
} _TE_RESULT_KIND_T;

/*-------------------------------------------------------------------*/
/* Typedef _TE_RESULTS_T defines the results records returned in     */
/* the receiver variable of the Submit Debug Command API.            */
/*-------------------------------------------------------------------*/
typedef struct _TE_RESULTS_T {
    _TE_RESULT_KIND_T ResultKind;
    /*---------------------------------------------------------------*/
    /* Result Record Formats                                         */
    /*---------------------------------------------------------------*/
    union {
         /*----------------------------------------------------------*/
         /* Step Record Format                                       */
         /*----------------------------------------------------------*/
         struct Step {
              unsigned long StepCount;
         } Step;

         /*----------------------------------------------------------*/
         /* Break Record Format                                      */
         /*----------------------------------------------------------*/
         struct Break {
              unsigned long BreakResultsCount;
         } Break;

         /*----------------------------------------------------------*/
         /* ClearBreakpoint Record Format                            */
         /*----------------------------------------------------------*/
         struct ClearBreakpoint {
              unsigned long Line;
         } ClearBreakpoint;

         /*----------------------------------------------------------*/
         /* ClearPgm Record Format                                   */
         /*----------------------------------------------------------*/

         /*----------------------------------------------------------*/
         /* BreakPosition Record Format                              */
         /*----------------------------------------------------------*/
         struct BreakPosition {
              unsigned long Line;
         } BreakPosition;

         /*----------------------------------------------------------*/
         /* Qualify Record Format                                    */
         /*----------------------------------------------------------*/
         struct Qualify {
              unsigned long Line;
         } Qualify;

         /*----------------------------------------------------------*/
         /* Evaluate  Record Format                                  */
         /*----------------------------------------------------------*/
         struct Evaluate {
              unsigned long EvalCount;
         } Evaluate;

         /*----------------------------------------------------------*/
         /* ExpressionText Record Format                             */
         /*----------------------------------------------------------*/
         struct ExpressionText {
              unsigned long oExpressionText;
              unsigned long ExpressionTextLength;
         } ExpressionText;

         /*----------------------------------------------------------*/
         /* ExpressionValue Record Format                            */
         /*----------------------------------------------------------*/
         struct ExpressionValue {
              unsigned long oExpressionValue;
              unsigned long ExpressionValueLength;
         } ExpressionValue;

         /*----------------------------------------------------------*/
         /* ExpressionType Record Format                             */
         /*----------------------------------------------------------*/
         struct ExpressionTypeT {                             /* @C1C*/
              _TE_EXPRESSION_T ExpressionType;
         } ExpressionType;

         /*----------------------------------------------------------*/
         /* Type Record Format                                       */
         /*----------------------------------------------------------*/
         struct Type {
              unsigned long TypeCount;
         } Type;

         /*----------------------------------------------------------*/
         /* Type Description                                         */
         /*----------------------------------------------------------*/
         struct TypeDesc {
              unsigned long Type;
              unsigned long Length;
         } TypeDesc;

         /*----------------------------------------------------------*/
         /* Decimal                                                  */
         /*----------------------------------------------------------*/
         struct Decimal {
              unsigned long TotalDigits;
              unsigned long FractDigits;
         } Decimal;

         /*----------------------------------------------------------*/
         /* Array                                                    */
         /*----------------------------------------------------------*/
         struct Array {
              unsigned long Dimensions;
         } Array;

         /*----------------------------------------------------------*/
         /* Dimension                                                */
         /*----------------------------------------------------------*/
         struct Dimension {
              unsigned long LowBound;
              unsigned long HighBound;
         } Dimension;

         /*----------------------------------------------------------*/
         /* Watch Record Format                                      */
         /*----------------------------------------------------------*/
         struct Watch {
              unsigned long WatchCount;
         } Watch;

         /*----------------------------------------------------------*/
         /* Watch Number Record Format                               */
         /*----------------------------------------------------------*/
         struct WatchNumberT {                                /* @C1C*/
              unsigned long WatchNumber;
              unsigned long WatchLength;
         } WatchNumber;

         /*----------------------------------------------------------*/
         /* Clear Watch Number Record Format                         */
         /*----------------------------------------------------------*/
         struct ClearWatchNumber {
              unsigned long WatchNumber;
         } ClearWatchNumber;

         /*----------------------------------------------------------*/
         /* Clear Watch Record Format                                */
         /*----------------------------------------------------------*/

         /*----------------------------------------------------------*/
         /* TBreak Record Format                                     */
         /*----------------------------------------------------------*/
         struct TBreak {
              unsigned long TBreakResultsCount;
         } TBreak;

    } V;
} _TE_RESULTS_T;

/*-------------------------------------------------------------------*/
/* Typedef _TE_OUTPUT_BUFFER_HDR_T defines the fields in the receiver*/
/* variable header for the Submit Debug Command API.                 */
/*-------------------------------------------------------------------*/
typedef struct {
    unsigned long BytesReturned;
    unsigned long BytesAvailable;
    unsigned long EntryCount;
} _TE_OUTPUT_BUFFER_HDR_T;

/*-------------------------------------------------------------------*/
/* Typedef _TE_RESULT_BUFFER_T defines the fields in the receiver    */
/* variable header and results records for the Submit Debug API.     */
/* This typedef defines the receiver variable parameter.             */
/*-------------------------------------------------------------------*/
typedef struct _TE_RESULT_BUFFER_T {
    _TE_OUTPUT_BUFFER_HDR_T Header;
    _TE_RESULTS_T Data[1];
} _TE_RESULT_BUFFER_T;

#if (__OS400_TGTVRM__>=510)                                   /* @ABA*/
#pragma datamodel(pop)                                        /* @ABA*/
#endif                                                        /* @ABA*/

#endif

