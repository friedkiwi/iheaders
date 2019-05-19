/* begin_generated_IBM_copyright_prolog                              */
/* This is an automatically generated copyright prolog.              */
/* After initializing,  DO NOT MODIFY OR MOVE                        */
/* ----------------------------------------------------------------- */
/*                                                                   */
/* Product(s):                                                       */
/*     5722-SS1                                                      */
/*                                                                   */
/* (C)Copyright IBM Corp.  2005, 2005                                */
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
 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QLPALCSP                                   */
 /*                                                                */
 /* Descriptive Name: Allocate additional LIC space API            */
 /*                                                                */
 /* 5722-SS1  (C) Copyright IBM Corp. 2005                         */
 /* All rights reserved.                                           */
 /* US Government Users Restricted Rights -                        */
 /* Use, duplication or disclosure restricted                      */
 /* by GSA ADP Schedule Contract with IBM Corp.                    */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /* Description:  This API should be used prior to upgrading to    */
 /*               the next release of operating system to have     */
 /*               Licensed Internal Code (LIC) allocate any        */
 /*               additional LIC space required for that release.  */
 /*               All of the space can be allocated during the     */
 /*               next IPL or some of the space can be allocated   */
 /*               immediately with the rest allocated during the   */
 /*               next IPL.                                        */
 /*                                                                */
 /*             Note: Once the additional LIC space has been       */
 /*                   allocated, the space cannot be returned      */
 /*                   to the user. However, this API can be used   */
 /*                   to toggle the action for LIC to allocate     */
 /*                   this space during the next IPL on and off as */
 /*                   many times as necessary prior to performing  */
 /*                   the IPL.                                     */
 /*                                                                */
 /*               To determine whether or not the release being    */
 /*               installed requires any additional space, review  */
 /*               the iSeries Information Center for information   */
 /*               about allocating additional LIC space. See the   */
 /*               topic on preparation tasks for upgrading or      */
 /*               replacing software.                              */
 /*                                                                */
 /* Header Files Included: None.                                   */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: None.                                          */
 /*                                                                */
 /* Function Prototype List: QLPALCSP                              */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG Track      Release        DATE   Userid     Comments      */
 /* ---- --------- -------------- ------  -------   ---------------*/
 /*  $A0=D99919.1  v5r4m0.xpf     040704  ROCH:     New  Include   */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/
#ifndef QLPALCSP_h
#define QLPALCSP_h
#if (__OS400_TGTVRM__>=520)
#pragma datamodel(P128)
#endif

/*******************************************************************/
/*  Prototype for calling Software Product API QLPALCSP            */
/*******************************************************************/
  #ifdef __ILEC400__
       #pragma linkage (QLPALCSP,OS,nowiden)
  #else
       extern "OS"
  #endif
 void QLPALCSP(char *,           /* Allocate space for release     */
                char *,          /* Start space allocation         */
                ...);            /* Optional parameters:           */
                                 /*  char * -- IPL required        */
                                 /*  void * -- Error code          */

#if (__OS400_TGTVRM__>=520)
#pragma datamodel(pop)
#endif
#endif
