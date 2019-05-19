/* begin_generated_IBM_copyright_prolog                              */
/* This is an automatically generated copyright prolog.              */
/* After initializing,  DO NOT MODIFY OR MOVE                        */
/* ----------------------------------------------------------------- */
/*                                                                   */
/* Product(s):                                                       */
/*     5716-SS1                                                      */
/*     5769-SS1                                                      */
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
 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QLPCDROM                                   */
 /*                                                                */
 /* Descriptive Name: CDROM premastering APIs.                     */
 /*                                                                */
 /* Description: APIs that are in the QLPCDROM service program.    */
 /*                                                                */
 /* Header Files Included: qlp                                     */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: None.  (Formats stored in QLP Include)         */
 /*                                                                */
 /* Function Prototype List: QlpGenCdPremasteringInfo              */
 /*                          QlpHandleCdState                      */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= D9157100     3D60  941016 BLOCKER:  New Include           */
 /* $A1= P3984880     3D60  950317 BLOCKER:  Add __cplusplus defs  */
 /* $A2= PTH01765     3D60  950816 BLOCKER:  restored --> restore  */
 /* $A3=P9A33063 v5r3m0.xpf 030706 BLOCKER: Change h/qp.h to qlp.h */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

#ifndef QLPCDROM_h
 #define QLPCDROM_h

 #ifdef __cplusplus
   extern "C" {
   #pragma info(none)
 #endif

 /******************************************************************/
 /*  Header Included.                                              */
 /******************************************************************/
 #ifndef QLP_h
   #include <qlp.h>
 #endif
#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(P128)      /* @B1A*/
#endif                       /* @B1A*/

 /******************************************************************/
 /* Prototype for calling QlpGenCdPremasteringInfo API             */
 /******************************************************************/

 #ifdef __cplusplus
    void QlpGenCdPremasteringInfo
                          (void *,   /* User space Name            */
                           char *,   /* User space format          */
                           char *,   /* Distribution Setmap ID     */
                           int  ,    /* CDROM size in bytes        */
                           char *,   /* CDROM volume ID prefix     */
                           void *);  /* Error Code                 */
 #else
    #pragma argument (QlpGenCdPremasteringInfo,OS,nowiden)
    void QlpGenCdPremasteringInfo
                          (void *,   /* User space Name            */
                           char *,   /* User space format          */
                           char *,   /* Distribution Setmap ID     */
                           int *,    /* CDROM size in bytes        */
                           char *,   /* CDROM volume ID prefix     */
                           void *);  /* Error Code                 */
 #endif

 /******************************************************************/
 /* Prototype for calling QlpHandleCdState API.                    */
 /******************************************************************/

 #ifdef __cplusplus
    void QlpHandleCdState
                          (void *,   /* User space name            */
                           char *,   /* User space format name     */
                           int  ,    /* Current CD-ROM state       */
                           char *,   /* Distribution setmap ID used*/
                           int  ,    /* Requested CDROM state      */
                           char *,   /* Distribution setmap ID     */
                           int  ,    /* Option                     */
                           void *);  /* Error Code                 */
 #else
    #pragma argument (QlpHandleCdState,OS,nowiden)
    void QlpHandleCdState
                          (void *,   /* User space name            */
                           char *,   /* User space format name     */
                           int *,    /* Current CD-ROM state       */
                           char *,   /* Distribution setmap ID used*/
                           int *,    /* Requested CDROM state      */
                           char *,   /* Distribution setmap ID     */
                           int *,    /* Option                     */
                           void *);  /* Error Code                 */
 #endif
#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(pop)       /* @B1A*/
#endif                       /* @B1A*/

#ifdef __cplusplus
  #pragma info(restore)
 }
#endif

#endif                            /* #ifndef QLPCDROM_h             */

