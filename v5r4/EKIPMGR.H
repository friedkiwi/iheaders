/*
 *                               PrintManager
 *
 *  ekipmgr.h - declarations file
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
 *  Components:        (To use, #define symbol before including file)
 *
 *    INCL_PRTMGR      PrintManager CPI declarations
 *    INCL_PRD         Print Descriptor API declarations
 *    INCL_ERRORS      Error code definitions
 *
 * CHANGE ACTIVITY:
 *
 * FLAG REASON       LEVEL DATE   PGMR       CHANGE DESCRIPTION
 * ---- ------------ ----- ------ ---------- ------------------------
 * $A1= P3667814     4D30  980316 RKF        Add support for C++
 * $A2=D98212.1  v5r1m0 991107 gchaney: Teraspace stage 2
 *
 */
#if (__OS400_TGTVRM__>=510)                              /*@A2A*/
    #pragma datamodel(P128)                              /*@A2A*/
#endif                                                   /*@A2A*/

#if !defined (__PRINTMANAGER)

#if !defined (NOSAADEFS)
   #include <ekibase.h>
   #define  NOSAADEFS
#endif


#define  INCL_PRTMGRDEFS
#define  INCL_ERRDEFS
#define  INCL_HABPARM
#define  USE_SHORTNAMES

#include <ekiprod.h>                   /* common product definitions */


/*
 *
 * PrintManager function declarations and short name mappings
 *
 */

#if defined (USE_SHORTNAMES)
   #define PrtMgrInitialize       SPRINIT
   #define PrtMgrTerminate        SPRTERM
   #define PrtMgrGetErrorInfo     SPRGERI
   #define PrtMgrGetExtErrorMsg   SPRGEEM
   #define PrtMgrFreeErrorInfo    SPRFERI
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

/* Use constant for extern to support either ILEC400 or C++ on AS400 */

QBFC_EXTERN HAB      APIENTRY  PrtMgrInitialize(USHORT fsOptions);

QBFC_EXTERN BOOL     APIENTRY  PrtMgrTerminate(HAB hab);

QBFC_EXTERN PERRINFO APIENTRY  PrtMgrGetErrorInfo(HAB hab);

QBFC_EXTERN BOOL  APIENTRY  PrtMgrFreeErrorInfo(PERRINFO pErrorInfo);

QBFC_EXTERN BOOL  APIENTRY  PrtMgrGetExtErrorMsg(PERRINFO pErrorInfo,
                                               ULONG    ulIndex,
                                               PERRMSG  pErrMsg,
                                               PULONG   pulTotalCount);


#if defined (INCL_PRTMGR)
   #include <ekiprm.h>
#endif


#if defined (INCL_PRD)
   #include <ekiprd.h>
#endif


#define  INCL_ALLERRS
#if defined (INCL_ERRORS)
   #include <ekierrs.h>
#endif


#define __PRINTMANAGER
#endif

#if (__OS400_TGTVRM__>=510)                               /*@A2A*/
    #pragma datamodel(pop)                                /*@A2A*/
#endif                                                    /*@A2A*/
