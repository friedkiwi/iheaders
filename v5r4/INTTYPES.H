/* begin_generated_IBM_copyright_prolog                              */
/* This is an automatically generated copyright prolog.              */
/* After initializing,  DO NOT MODIFY OR MOVE                        */
/* ----------------------------------------------------------------- */
/*                                                                   */
/* Product(s):                                                       */
/*     5722-SS1                                                      */
/*                                                                   */
/* (C)Copyright IBM Corp.  2002, 2005                                */
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
#ifndef __inttypes_h
  #define __inttypes_h

#ifdef __cplusplus
   #pragma info(none)
#else
   #pragma nomargins nosequence
   #pragma checkout(suspend)
#endif

/*** START HEADER FILE SPECIFICATIONS ********************************/
/*                                                                   */
/* Header File Name:  inttypes.h                                     */
/*                                                                   */
/* Descriptive Name: Fixed size integral types                       */
/*                                                                   */
/* Description:                                                      */
/*                                                                   */
/*          Defines additional integral types                        */
/*                                                                   */
/* Header Files Included:                                            */
/*                                                                   */
/*          <stdint.h>                                               */
/*                                                                   */
/* Change Activity:                                                  */
/*                                                                   */
/*   CFD List:                                                       */
/*                                                                   */
/*  FLAG REASON   LEVEL      DATE   PGMR  CHANGE DESCRIPTION         */
/*  ---- -------- ---------- ------ ----- -------------------------- */
/*  $A0  D9882201 v5r2m0.xpf 010309 ROCH: New for _XOPEN_SOURCE      */
/*  $A1  P9948714 v5r2m0.xpf 010608 ROCH: Support _LONG_LONG         */
/*  $B0           v5r4m0.xpf 050404 ROCH: Additional macros.  Move   */
/*                                        typedefs to <stdint.h>     */
/*                                                                   */
/*   End CFD List.                                                   */
/*                                                                   */
/*   Additional notes about the Change Activity:                     */
/*                                                                   */
/* End Change Activity                                               */
/*                                                                   */
/*** END HEADER FILE SPECIFICATIONS **********************************/

/*********************************************************************/
/* Header files                                                      */
/*********************************************************************/
#include <stdint.h>

/*********************************************************************/
/* Macros for format specifiers                                      */
/*********************************************************************/
#if !defined(__cplusplus) || defined(__STDC_FORMAT_MACROS)

#define PRId8             "hd"
#define PRId16            "hd"
#define PRId32            "d"
#ifdef _LONG_LONG
#define PRId64            "lld"
#endif

#define PRIdLEAST8        PRId8
#define PRIdLEAST16       PRId16
#define PRIdLEAST32       PRId32
#ifdef _LONG_LONG
#define PRIdLEAST64       PRId64
#endif

#define PRIdFAST8         PRId8
#define PRIdFAST16        PRId16
#define PRIdFAST32        PRId32
#ifdef _LONG_LONG
#define PRIdFAST64        PRId64
#endif

#ifdef _LONG_LONG
#define PRIdMAX           PRId64
#else
#define PRIdMAX           PRId32
#endif

#define PRIi8             "hi"
#define PRIi16            "hi"
#define PRIi32            "i"
#ifdef _LONG_LONG
#define PRIi64            "lli"
#endif

#define PRIiLEAST8        PRIi8
#define PRIiLEAST16       PRIi16
#define PRIiLEAST32       PRIi32
#ifdef _LONG_LONG
#define PRIiLEAST64       PRIi64
#endif

#define PRIiFAST8         PRIi8
#define PRIiFAST16        PRIi16
#define PRIiFAST32        PRIi32
#ifdef _LONG_LONG
#define PRIiFAST64        PRIi64
#endif

#ifdef _LONG_LONG
#define PRIiMAX           PRIi64
#else
#define PRIiMAX           PRIi32
#endif

#define PRIo8             "ho"
#define PRIo16            "ho"
#define PRIo32            "o"
#ifdef _LONG_LONG
#define PRIo64            "llo"
#endif

#define PRIoLEAST8        PRIo8
#define PRIoLEAST16       PRIo16
#define PRIoLEAST32       PRIo32
#ifdef _LONG_LONG
#define PRIoLEAST64       PRIo64
#endif

#define PRIoFAST8         PRIo8
#define PRIoFAST16        PRIo16
#define PRIoFAST32        PRIo32
#ifdef _LONG_LONG
#define PRIoFAST64        PRIo64
#endif

#ifdef _LONG_LONG
#define PRIoMAX           PRIo64
#else
#define PRIoMAX           PRIo32
#endif

#define PRIu8             "hu"
#define PRIu16            "hu"
#define PRIu32            "u"
#ifdef _LONG_LONG
#define PRIu64            "llu"
#endif

#define PRIuLEAST8        PRIu8
#define PRIuLEAST16       PRIu16
#define PRIuLEAST32       PRIu32
#ifdef _LONG_LONG
#define PRIuLEAST64       PRIu64
#endif

#define PRIuFAST8         PRIu8
#define PRIuFAST16        PRIu16
#define PRIuFAST32        PRIu32
#ifdef _LONG_LONG
#define PRIuFAST64        PRIu64
#endif

#ifdef _LONG_LONG
#define PRIuMAX           PRIu64
#else
#define PRIuMAX           PRIu32
#endif

#define PRIx8             "hx"
#define PRIx16            "hx"
#define PRIx32            "x"
#ifdef _LONG_LONG
#define PRIx64            "llx"
#endif

#define PRIxLEAST8        PRIx8
#define PRIxLEAST16       PRIx16
#define PRIxLEAST32       PRIx32
#ifdef _LONG_LONG
#define PRIxLEAST64       PRIx64
#endif

#define PRIxFAST8         PRIx8
#define PRIxFAST16        PRIx16
#define PRIxFAST32        PRIx32
#ifdef _LONG_LONG
#define PRIxFAST64        PRIx64
#endif

#ifdef _LONG_LONG
#define PRIxMAX           PRIx64
#else
#define PRIxMAX           PRIx32
#endif

#define PRIX8             "hX"
#define PRIX16            "hX"
#define PRIX32            "X"
#ifdef _LONG_LONG
#define PRIX64            "llX"
#endif

#define PRIXLEAST8        PRIX8
#define PRIXLEAST16       PRIX16
#define PRIXLEAST32       PRIX32
#ifdef _LONG_LONG
#define PRIXLEAST64       PRIX64
#endif

#define PRIXFAST8         PRIX8
#define PRIXFAST16        PRIX16
#define PRIXFAST32        PRIX32
#ifdef _LONG_LONG
#define PRIXFAST64        PRIX64
#endif

#ifdef _LONG_LONG
#define PRIXMAX           PRIX64
#else
#define PRIXMAX           PRIX32
#endif

#define SCNd16            "hd"
#define SCNd32            "d"
#ifdef _LONG_LONG
#define SCNd64            "lld"
#endif

#define SCNdLEAST16       SCNd16
#define SCNdLEAST32       SCNd32
#ifdef _LONG_LONG
#define SCNdLEAST64       SCNd64
#endif

#define SCNdFAST16        SCNd16
#define SCNdFAST32        SCNd32
#ifdef _LONG_LONG
#define SCNdFAST64        SCNd64
#endif

#ifdef _LONG_LONG
#define SCNdMAX           SCNd64
#else
#define SCNdMAX           SCNd32
#endif

#define SCNi16            "hi"
#define SCNi32            "i"
#ifdef _LONG_LONG
#define SCNi64            "lli"
#endif

#define SCNiLEAST16       SCNi16
#define SCNiLEAST32       SCNi32
#ifdef _LONG_LONG
#define SCNiLEAST64       SCNi64
#endif

#define SCNiFAST16        SCNi16
#define SCNiFAST32        SCNi32
#ifdef _LONG_LONG
#define SCNiFAST64        SCNi64
#endif

#ifdef _LONG_LONG
#define SCNiMAX           SCNi64
#else
#define SCNiMAX           SCNi32
#endif

#define SCNo16            "ho"
#define SCNo32            "o"
#ifdef _LONG_LONG
#define SCNo64            "llo"
#endif

#define SCNoLEAST16       SCNo16
#define SCNoLEAST32       SCNo32
#ifdef _LONG_LONG
#define SCNoLEAST64       SCNo64
#endif

#define SCNoFAST16        SCNo16
#define SCNoFAST32        SCNo32
#ifdef _LONG_LONG
#define SCNoFAST64        SCNo64
#endif

#ifdef _LONG_LONG
#define SCNoMAX           SCNo64
#else
#define SCNoMAX           SCNo32
#endif

#define SCNu16            "hu"
#define SCNu32            "u"
#ifdef _LONG_LONG
#define SCNu64            "llu"
#endif

#define SCNuLEAST16       SCNu16
#define SCNuLEAST32       SCNu32
#ifdef _LONG_LONG
#define SCNuLEAST64       SCNu64
#endif

#define SCNuFAST16        SCNu16
#define SCNuFAST32        SCNu32
#ifdef _LONG_LONG
#define SCNuFAST64        SCNu64
#endif

#ifdef _LONG_LONG
#define SCNuMAX           SCNu64
#else
#define SCNuMAX           SCNu32
#endif

#define SCNx16            "hx"
#define SCNx32            "x"
#ifdef _LONG_LONG
#define SCNx64            "llx"
#endif

#define SCNxLEAST16       SCNx16
#define SCNxLEAST32       SCNx32
#ifdef _LONG_LONG
#define SCNxLEAST64       SCNx64
#endif

#define SCNxFAST16        SCNx16
#define SCNxFAST32        SCNx32
#ifdef _LONG_LONG
#define SCNxFAST64        SCNx64
#endif

#ifdef _LONG_LONG
#define SCNxMAX           SCNx64
#else
#define SCNxMAX           SCNx32
#endif

#endif /* !defined(__cplusplus) || defined(__STDC_FORMAT_MACROS) */

#ifdef __cplusplus
    #pragma info(restore)
#else
    #pragma checkout(resume)
#endif

#endif /* #ifndef __inttypes_h */
