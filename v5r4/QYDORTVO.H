#ifdef __cplusplus
  #pragma info(none)
#else
  #pragma nomargins nosequence
  #pragma checkout(suspend)
#endif
/*** START HEADER FILE SPECIFICATIONS ********************************/
/*                                                                   */
/* Header File Name: H/QYDORTVO                                      */
/*                                                                   */
/* Descriptive Name: Retrieve Digital Signatures API                 */
/*                                                                   */
/* 5722-SS1  (C) Copyright IBM Corp. 1999,2001                       */
/* All rights reserved.                                              */
/* US Government Users Restricted Rights -                           */
/* Use, duplication or disclosure restricted                         */
/* by GSA ADP Schedule Contract with IBM Corp.                       */
/*                                                                   */
/* Licensed Materials-Property of IBM                                */
/*                                                                   */
/*                                                                   */
/* Description: The qydortvo API retrieves fields of the digital     */
/*              signatures of the object specified by the first two  */
/*              parameters of the API.                               */
/*                                                                   */
/* Header Files Included: H/QYDORTVR                                 */
/*                                                                   */
/* Macros List: None.                                                */
/*                                                                   */
/* Structure List: None.                                             */
/*                                                                   */
/* Function Prototype List: QYDORTVO.                                */
/*                                                                   */
/* Change Activity:                                                  */
/*                                                                   */
/* CFD List:                                                         */
/*                                                                   */
/* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION       */
/* ---- ------------ ----- ------ --------- ------------------------ */
/* $A0= D97545       5D10  991012 ROCH:     New Include              */
/* $02= P9926280     5D10  000410 ROCH:     Updates                  */
/*                                                                   */
/* End CFD List.                                                     */
/*                                                                   */
/*  Additional notes about the Change Activity                       */
/* End Change Activity.                                              */
/*** END HEADER FILE SPECIFICATIONS **********************************/

#ifndef QYDORTVO_h
 #define QYDORTVO_h
#include "qusec.h"
#include "qydortvr.h"
#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(P128)      /* @B1A*/
#endif                       /* @B1A*/
 /********************************************************************/
 /* Includes for structures.                                         */
 /********************************************************************/

 /********************************************************************/
 /*  Prototype for QYDORTVO  API                                     */
 /********************************************************************/
 #ifdef __ILEC400__
    #pragma linkage (QYDORTVO,OS,nowiden)
 #else
    extern "OS"
 #endif
   void  QYDORTVO(    char *,      /* path name to object          */
                      int  *,      /* length of path name          */
                      char *,      /* format name of object        */
                      char *,      /* Receiver variable            */
                      int  *,      /* Length of Receiver           */
                      char *,      /* Format of Receiver           */
                      void *);     /* error code                   */

#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(pop)       /* @B1A*/
#endif                       /* @B1A*/
#endif /*QYDORTVO_h*/

#ifdef __cplusplus
    #pragma info(restore)
#else
    #pragma checkout(resume)
#endif
