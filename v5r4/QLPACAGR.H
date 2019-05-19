 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QLPACAGR                                   */
 /*                                                                */
 /* Descriptive Name: Accept Software Agreement API                */
 /*                                                                */
 /* 5722-SS1  (C) Copyright IBM Corp. 2001                         */
 /* All rights reserved.                                           */
 /* US Government Users Restricted Rights -                        */
 /* Use, duplication or disclosure restricted                      */
 /* by GSA ADP Schedule Contract with IBM Corp.                    */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /* Description:  Accept Software Agreement API records the        */
 /*               user's acceptance of the software agreement for  */
 /*               a specific product, release, option.             */
 /*                                                                */
 /* Header Files Included: None.                                   */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: None.                                          */
 /*                                                                */
 /* Function Prototype List: QLPACAGR                              */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG Track      Release        DATE   Userid     Comments      */
 /* ---- --------- -------------- ------  -------   ---------------*/
 /*  $A0=D98751.10 v5r2m0.xpf     010916  KHANSEN : New  Include   */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/
#ifndef QLPACAGR_h
#define QLPACAGR_h
#if (__OS400_TGTVRM__>=520)
#pragma datamodel(P128)
#endif

/*******************************************************************/
/*  Prototype for calling Software Product API QLPACAGR            */
/*******************************************************************/
  #ifdef __ILEC400__
       #pragma linkage (QLPACAGR,OS,nowiden)
  #else
       extern "OS"
  #endif
 void QLPACAGR(char *,          /* Product ID                     */
               char *,            /* Release                        */
               char *,            /* Option                         */
               void *);           /* Error code                     */

#if (__OS400_TGTVRM__>=520)
#pragma datamodel(pop)
#endif
#endif
