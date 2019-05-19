/*
 *                               PrintManager
 *
 *  ekiprm.h - type and macro definitions for PrintManager
 *             programming interface
 *
 *
 *  PrintManager  (program no. 5688-179)
 *
 *  Version:  1.0
 *  Release:  1.0
 *  Level:    0.0
 *
 * 5763-SS1, 5716-SS1, 5769-SS1
 * (C) Copyright IBM Corp. 1993, 1998
 * All rights reserved.
 * US Government Users Restricted Rights -
 * Use, duplication or disclosure restricted
 * by GSA ADP Schedule Contract with IBM Corp.
 *
 * Licensed Materials-Property of IBM
 *
 * CHANGE ACTIVITY:
 *
 * FLAG REASON       LEVEL DATE   PGMR       CHANGE DESCRIPTION
 * ---- ------------ ----- ------ ---------- ------------------------
 * $A1= P3667814     4D30  980316 RKF        Add support for C++
 * $A2=D98212.1  v5r1m0 991107 gchaney: Teraspace stage 2
 *
 */

#if !defined (__EKIPRM)

#define __EKIPRM

#if (__OS400_TGTVRM__>=510)                                     /*@A2A*/
    #pragma datamodel(P128)                                     /*@A2A*/
#endif                                                          /*@A2A*/


/*-------------------------------------------------------------------*/
/* Define the handle types for a Print Manager Spool session.        */
/*-------------------------------------------------------------------*/

typedef LHANDLE   HPRM;                /* hprm- spool session        */
typedef HPRM     *PHPRM;

/*-------------------------------------------------------------------*/
/* Structures for a specifying saa print options.                    */
/*-------------------------------------------------------------------*/

typedef struct optdata1             /* Print option name and value   */
{
   PSZ     pszOption;
   ULONG   flValType;
   ULONG   cbValLength;
   PBYTE   pbValue;
} OPTDATA1;


/*-------------------------------------------------------------------*/
/* Type definitions for an array of fixed length (MAX_NAME_LEN + 1)  */
/* option names.                                                     */
/*-------------------------------------------------------------------*/

typedef  CHAR      OPTNAME[MAX_NAME_LEN + 1];
typedef  OPTNAME  *OPTLIST;


/*-------------------------------------------------------------------*/
/* Type definitions for an array of pointers to strings.             */
/*-------------------------------------------------------------------*/

typedef  PSZ      *PSZARRAY;
#define  STR_END  '\0'


/*-------------------------------------------------------------------*/
/* Mapping of long function names to short function names            */
/*-------------------------------------------------------------------*/


#if defined (USE_SHORTNAMES)
   #define PrtMgrOpen           SPROPEN
   #define PrtMgrSetOption      SPRSOPT
   #define PrtMgrQueryOption    SPRQOPT
   #define PrtMgrListOptions    SPRLOPT
   #define PrtMgrWrite          SPRWRIT
   #define PrtMgrAddFile        SPRADDF
   #define PrtMgrClose          SPRCLOS
   #define PrtMgrAbort          SPRABRT
   #define PrtMgrStartDoc       SPRSDOC
   #define PrtMgrEndDoc         SPREDOC
   #define PrtMgrAbortDoc       SPRADOC
#endif



/* Define constant for extern to support ILEC400 or C++ on AS400     */

#ifndef __QBFC_EXTERN
    #ifdef __cplusplus
        #define QBFC_EXTERN extern "C"
    #else
        #define QBFC_EXTERN extern
    #endif

    #define __QBFC_EXTERN
#endif

/*-------------------------------------------------------------------*/
/*   Spool Queue Manager Common Programming Interface (PrtMgr CPI)   */
/*                                                                   */
/*                     Function Declarations                         */
/*-------------------------------------------------------------------*/

/* Use constant for extern to support either ILEC400 or C++ on AS400 */

QBFC_EXTERN HPRM APIENTRY PrtMgrOpen (__PASSHAB    /* see ekiprod.h  */
                                PSZ  pszPrdName,
                                ULONG cbLength,
                                PBYTE pbBuffer);


QBFC_EXTERN BOOL APIENTRY PrtMgrSetOption (HPRM   hprm,
                                     PSZ    pszPrdName,
                                     ULONG  ulLevel,
                                     ULONG  cbLength,
                                     PBYTE  pbBuffer);


QBFC_EXTERN BOOL APIENTRY PrtMgrQueryOption (HPRM    hprm,
                                       ULONG   ulLevel,
                                       ULONG   cbLength,
                                       PBYTE   pbBuffer,
                                       PULONG  pulLengthNeeded);


QBFC_EXTERN BOOL APIENTRY PrtMgrListOptions (HPRM    hprm,
                                       ULONG   ulLevel,
                                       ULONG   cbLength,
                                       PBYTE   pbBuffer,
                                       PULONG  pulLengthNeeded,
                                       PULONG  pulItemsReturned,
                                       PULONG  pulItemsRemaining,
                                       PSDF    psdfContinue);


QBFC_EXTERN BOOL APIENTRY PrtMgrWrite(HPRM hprm,
                                      LONG lCount,
                                      PBYTE pbData);


QBFC_EXTERN BOOL APIENTRY PrtMgrAddFile(HPRM hprm, PSZ pszFileName);


QBFC_EXTERN BOOL APIENTRY PrtMgrClose(HPRM hprm);


QBFC_EXTERN BOOL APIENTRY PrtMgrAbort(HPRM hprm);


QBFC_EXTERN BOOL APIENTRY PrtMgrStartDoc(HPRM hprm, PSZ pszDocName);


QBFC_EXTERN USHORT APIENTRY PrtMgrEndDoc(HPRM hprm);


QBFC_EXTERN BOOL APIENTRY PrtMgrAbortDoc(HPRM hprm);


#if (__OS400_TGTVRM__>=510)                                  /*@A2A*/
    #pragma datamodel(pop)                                   /*@A2A*/
#endif                                                       /*@A2A*/

#endif                                 /* __EKIPRM */
