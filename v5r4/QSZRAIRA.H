 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QSZRAIRA                                   */
 /*                                                                */
 /* Descriptive Name: Registered Application Information           */
 /*                   Repository APIs                              */
 /*                                                                */
 /* 5722-SS1  (C) Copyright IBM Corp. 2000                         */
 /* All rights reserved.                                           */
 /* US Government Users Restricted Rights -                        */
 /* Use, duplication or disclosure restricted                      */
 /* by GSA ADP Schedule Contract with IBM Corp.                    */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /* Description: Include Header File for the Registered            */
 /*              Application Information Repository APIs.          */
 /*                                                                */
 /* Header Files Included: None.                                   */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: None.                                          */
 /*                                                                */
 /* Function Prototype List: QszUpdRegAppInfoRepository            */
 /*                          QszDltRegAppFiles                     */
 /*                          QszListRegAppInfo                     */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= D9773400     5D10  990912 ROCH      New Include           */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

#ifndef QSZRAIRA_h
#define QSZRAIRA_h
#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(P128)      /* @B1A*/
#endif                       /* @B1A*/


#ifdef __cplusplus
  extern "C" {
  #pragma info(none)
#endif

/*******************************************************************/
/*  Prototype for Update Registered Application Info Repository API*/
/*******************************************************************/
#ifdef __cplusplus
void QszUpdRegAppInfoRepository (
              void *,             /* Application info. path name   */
              int  *,             /* Function                      */
              void *);            /* Error code                    */
#else
  #pragma argument (QszUpdRegAppInfoRepository, OS, nowiden)
void QszUpdRegAppInfoRepository (
              void *,             /* Application info. path name   */
              int  *,             /* Function                      */
              void *);            /* Error code                    */
#endif
/*******************************************************************/
/* Prototype for Delete Registered Application Files API           */
/*******************************************************************/
#ifdef __cplusplus
void QszDltRegAppFiles (
              void *,             /* Application info. path name   */
              void *);            /* Error code                    */
#else
  #pragma argument (QszDltRegAppFiles, OS, nowiden)
void QszDltRegAppFiles (
              void *,             /* Application info. path name   */
              void *);            /* Error code                    */
#endif
/*******************************************************************/
/*  Prototype for List Registered Application Information API      */
/*******************************************************************/
#ifdef __cplusplus
void QszListRegAppInfo (
              void *,            /* Application info. path name In */
              void *,            /* Application info. path name Out*/
              int  *,            /* Continuation Handle Input      */
              int  *,            /* Continuation Handle Output     */
              void *);           /* Error code                     */
#else
  #pragma argument (QszListRegAppInfo, OS, nowiden)
void QszListRegAppInfo (
              void *,            /* Application info. path name In */
              void *,            /* Application info. path name Out*/
              int  *,            /* Continuation Handle Input      */
              int  *,            /* Continuation Handle Output     */
              void *);           /* Error code                     */

#endif

#ifdef __cplusplus
  #pragma info(restore)
 }
#endif
#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(pop)       /* @B1A*/
#endif                       /* @B1A*/
#endif
