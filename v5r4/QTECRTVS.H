/* begin_generated_IBM_copyright_prolog                              */
/* This is an automatically generated copyright prolog.              */
/* After initializing,  DO NOT MODIFY OR MOVE                        */
/* ----------------------------------------------------------------- */
/*                                                                   */
/* Product(s):                                                       */
/*     5763-SS1                                                      */
/*     5722-SS1                                                      */
/*                                                                   */
/* (C)Copyright IBM Corp.  1994, 2003                                */
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

/*** START HEADER FILE SPECIFICATIONS ********************************/
/*                                                                   */
/* Header File Name: H/QTECRTVS                                      */
/*                                                                   */
/* Descriptive Name: View Creation APIs.                             */
/*                                                                   */
/* Description: Include header file for the QTECRTVS APIs.           */
/*                                                                   */
/* Header Files Included: H/QTES                                     */
/*                                                                   */
/* Macros List: None.                                                */
/*                                                                   */
/* Structure List: File name formats for Start View Creation         */
/*                 File name formats for Add View File               */
/*                 Map formats for Add View Map                      */
/*                 Text formats for Add View Text                    */
/*                                                                   */
/* Function Prototype List: QteStartViewCreation                     */
/*                          QteEndViewCreation                       */
/*                          QteAddViewDescription                    */
/*                          QteAddViewFile                           */
/*                          QteAddViewMap                            */
/*                          QteAddViewText                           */
/*                                                                   */
/* Change Activity:                                                  */
/*                                                                   */
/* CFD List:                                                         */
/*                                                                   */
/* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION       */
/* ---- ------------ ----- ------ --------- -------------------------*/
/* $A0= D2862000     3D10  940222 ROCH    : New Include              */
/* $A1= D9736700     4D40  980827 ROCH    : Added new format to      */
/*                                          QteAddViewText           */
/* $A2=D98212.3     v5r1m0 010400 ROCH    : Teraspace stage 2        */
/* $B1=D98662       v5r2m0 010815 ROCH    : SQL support              */
/* $C1=D99571       v5r3m0 030316 ROCH    : Added new format to      */
/*                                          QteStartViewCreation     */
/*                                                                   */
/* End CFD List.                                                     */
/*                                                                   */
/*  Additional notes about the Change Activity                       */
/* End Change Activity.                                              */
/*** END HEADER FILE SPECIFICATIONS **********************************/

#ifndef _QTECRTVS_H
#define _QTECRTVS_H


/*-------------------------------------------------------------------*/
/* Includes used by View Creation APIs                               */
/*-------------------------------------------------------------------*/

#include <qtes.h>                   /* Common names include          */
#if (__OS400_TGTVRM__>=510)                                   /* @A2A*/
#pragma datamodel(P128)                                       /* @A2A*/
#endif                                                        /* @A2A*/


/*********************************************************************/
/* Prototype for Start View Creation API.                            */
/*********************************************************************/
#ifdef __ILEC400__                                            /* @B1A*/
    #pragma argument (QteStartViewCreation,OS,nowiden)        /* @B1A*/
 #else                                                        /* @B1A*/
    extern "C"                                                /* @B1A*/
 #endif                                                       /* @B1A*/

void QteStartViewCreation(
              void *,               /* Input file description buffer */
              void *,               /* Output file description buffer*/
              _TE_FORMAT_T,         /* Format name                   */
              _TE_NAME_T,           /* Discard previous view *YES,*NO*/
              _TE_PROCESSOR_ID_T,   /* Processor ID                  */
              _TE_CCSID_T *,        /* View CCSID                    */
              _TE_ERROR_CODE_T *);  /* Error code                    */

/*-------------------------------------------------------------------*/
/* Type definition for the FILA0100 format. This format is           */
/* used in the Start View Creation API and the Add View File API.    */
/*-------------------------------------------------------------------*/
typedef _Packed struct {
  _TE_NAME_T File;
  _TE_NAME_T Lib;
  _TE_NAME_T Mbr;
} _TE_FILA0100_T;

/*********************************************************************/
/* Prototype for End View Creation API.                              */
/*********************************************************************/
#ifdef __ILEC400__                                            /* @B1A*/
    #pragma argument (QteEndViewCreation,OS,nowiden)          /* @B1A*/
 #else                                                        /* @B1A*/
    extern "C"                                                /* @B1A*/
 #endif                                                       /* @B1A*/

void QteEndViewCreation(
              _TE_ERROR_CODE_T *);  /* Error code                    */

/*********************************************************************/
/* Prototype for Add View Description API.                           */
/*********************************************************************/
#ifdef __ILEC400__                                            /* @B1A*/
    #pragma argument (QteAddViewDescription,OS,nowiden)       /* @B1A*/
 #else                                                        /* @B1A*/
    extern "C"                                                /* @B1A*/
 #endif                                                       /* @B1A*/

void QteAddViewDescription(
              long int *,           /* Previous view number          */
              _TE_NAME_T,           /* View type                     */
              _TE_NAME_T,           /* View input/output indication  */
              _TE_NAME_T,           /* Create map indication         */
              _TE_TEXTDESC_T,       /* View descriptive text         */
              long int *,           /* Returned view number          */
              _TE_ERROR_CODE_T *);  /* Error code                    */

/*********************************************************************/
/* Prototype for Add View File API.                                  */
/*********************************************************************/
#ifdef __ILEC400__                                            /* @B1A*/
    #pragma argument (QteAddViewFile,OS,nowiden)              /* @B1A*/
 #else                                                        /* @B1A*/
    extern "C"                                                /* @B1A*/
 #endif                                                       /* @B1A*/

void QteAddViewFile(
              void *,               /* File descriptor buffer        */
              long int *,           /* Number of file entries        */
              _TE_FORMAT_T,         /* Format name                   */
              long int *,           /* View number                   */
              _TE_ERROR_CODE_T *);  /* Error code                    */

/*-------------------------------------------------------------------*/
/* Type definition for the FILA0200 format. This format is           */
/* used in the Add View File API and the Start View Creation API.    */
/* This set of fields is repeated number of file entries times in the*/
/* file descriptor buffer for the Add View File API.                 */
/* Following all entries is the file names buffer.               @C1C*/
/*-------------------------------------------------------------------*/
typedef _Packed struct {
  long int NameOffset;
  long int NameLength;
  long int ReadFlag;
  long int CCSID;
  char CountryID[2];
  char LanguageID[3];
  char Reserved[3];
} _TE_FILA0200_T;

/*********************************************************************/
/* Prototype of Add View Map API.                                    */
/*********************************************************************/
#ifdef __ILEC400__                                            /* @B1A*/
    #pragma argument (QteAddViewMap,OS,nowiden)               /* @B1A*/
 #else                                                        /* @B1A*/
    extern "C"                                                /* @B1A*/
 #endif                                                       /* @B1A*/

void QteAddViewMap(
              void *,               /* Map descriptor buffer         */
              long int *,           /* Number of map entries         */
              _TE_FORMAT_T,         /* Format name                   */
              long int *,           /* From view number              */
              long int *,           /* To view number                */
              _TE_ERROR_CODE_T *);  /* Error code                    */

/*-------------------------------------------------------------------*/
/* Type definition for the MAPA0100 format used in the Add View      */
/* Map API. This set of fields is repeated number of map entries     */
/* times in the map descriptor buffer.                               */
/*-------------------------------------------------------------------*/
typedef _Packed struct {
  long int FromFile;
  long int FromLine;
  long int FromCol;
  long int ToFile;
  long int ToLine;
  long int ToCol;
  long int MapType;
} _TE_MAPA0100_T;

/*********************************************************************/
/* Prototype of Add View Text API.                                   */
/*********************************************************************/
#ifdef __ILEC400__                                            /* @B1A*/
    #pragma argument (QteAddViewText,OS,nowiden)              /* @B1A*/
 #else                                                        /* @B1A*/
    extern "C"                                                /* @B1A*/
 #endif                                                       /* @B1A*/

void QteAddViewText(
              long int *,           /* View number                   */
              void *,               /* Text descriptor buffer        */
              long int *,           /* Number of text entries        */
              _TE_FORMAT_T,         /* Format name                   */
              char[],               /* Supplied text buffer          */
              long int *,           /* Length of supplied text buffer*/
              _TE_ERROR_CODE_T *);  /* Error code                    */

/*-------------------------------------------------------------------*/
/* Type definitions for the text formats used in the Add View        */
/* Text API. This set of fields is repeated number of text entries   */
/* times in the text descriptor buffer, with all entries using       */
/* the format selected in the format name parameter.                 */
/*-------------------------------------------------------------------*/
typedef _Packed struct {
  _TE_NAME_T TextLocation;
  char reserved1[2];
  long int FileIndex;
  long int oText;
  long int NumLines;
  long int FromLine;
} _TE_TXTA0100_T;

typedef _Packed struct {
  long int oText;
} _TE_TXTA0101_T;

typedef _Packed struct {
  long int ProcID;
  long int StmtID;
  char StmtType;
} _TE_TXTA0102_T;

typedef _Packed struct {
  long int oText;
} _TE_TXTA0103_T;

#if (__OS400_TGTVRM__>=510)                             /* @A2A*/
#pragma datamodel(pop)                                  /* @A2A*/
#endif                                                  /* @A2A*/

#endif
