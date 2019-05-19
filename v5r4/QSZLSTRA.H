 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QSZLSTRA                                   */
 /*                                                                */
 /* Descriptive Name: List Registered Application Information API  */
 /*                                                                */
 /* 5722-SS1  (C) Copyright IBM Corp. 2000                         */
 /* All rights reserved.                                           */
 /* US Government Users Restricted Rights -                        */
 /* Use, duplication or disclosure restricted                      */
 /* by GSA ADP Schedule Contract with IBM Corp.                    */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /* Description:  Include Header File for the List Registered      */
 /*               Application Information OPM API.                 */
 /*                                                                */
 /* Header Files Included: None.                                   */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: None.                                          */
 /*                                                                */
 /* Function Prototype List: QSZLSTRA                              */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= D9773400     5D10  990912 ROCH:     New Include           */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/
#ifndef QSZLSTRA_h
#define QSZLSTRA_h
#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(P128)      /* @B1A*/
#endif                       /* @B1A*/

/*******************************************************************/
/*  Prototype for calling Software Product API QSZLSTRA            */
/*******************************************************************/
  #ifdef __ILEC400__
       #pragma linkage (QSZLSTRA,OS,nowiden)
  #else
       extern "OS"
  #endif
 void QSZLSTRA(
              void *,           /* Application info. path name In  */
              void *,           /* Application info. path name Out */
              int *,            /* Continuation Handle Input       */
              int *,            /* Continuation Handle Output      */
              void *);          /* Error code                      */

#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(pop)       /* @B1A*/
#endif                       /* @B1A*/
#endif
