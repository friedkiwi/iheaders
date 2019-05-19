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
/*** START HEADER FILE SPECIFICATIONS ********************************/
/*                                                                   */
/* Header File Name: H/QLPCDRST                                      */
/*                                                                   */
/* Descriptive Name: Handle CDROM premastering state API             */
/*                                                                   */
/* Description: The Handle CDROM premastering state API handles      */
/*              the enabling, disabling, and querying of the CDROM   */
/*              premastering state.                                  */
/*                                                                   */
/* Header Files Included: qlp                                        */
/*                                                                   */
/* Macros List: None.                                                */
/*                                                                   */
/* Structure List: None. (Structures included in QLP)                */
/*                                                                   */
/* Function Prototype List: QLPCDRST.                                */
/*                                                                   */
/* Change Activity:                                                  */
/*                                                                   */
/* CFD List:                                                         */
/*                                                                   */
/* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION       */
/* ---- ------------ ----- ------ --------- ------------------------ */
/* $A0= D9157100     3D60  941016 BLOCKER:  New Include              */
/* $A1= P3984880     3D60  950317 BLOCKER:  Add __cpluscplus defs    */
/* $A2= PTH01765     3D60  950816 BLOCKER:  restored --> restore     */
/* $A3= P9A33063 v5r3m0.xpf 030706 BLOCKER:  Change  h/qp.h to qlp.h */
/*                                                                   */
/* End CFD List.                                                     */
/*                                                                   */
/*  Additional notes about the Change Activity                       */
/* End Change Activity.                                              */
/*** END HEADER FILE SPECIFICATIONS **********************************/

#ifndef QLPCDRST_h
 #define QLPCDRST_h

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
 /*  Prototype for QLPCDRST API                                    */
 /******************************************************************/
 #ifdef __cplusplus
    extern "OS"
 #else
    #pragma linkage (QLPCDRST,OS,nowiden)
 #endif
 void QLPCDRST (void *,   /* User space Name            */
                char *,   /* User space format          */
                int  ,    /* Current CD-ROM state       */
                char *,   /* Distribution setmap ID used*/
                int  ,    /* Requested CDROM state      */
                char *,   /* Distribution setmap ID     */
                int  ,    /* Option                     */
                void *);  /* Error Code                 */

#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(pop)       /* @B1A*/
#endif                       /* @B1A*/

#ifdef __cplusplus
  #pragma info(restore)
 }
#endif

#endif                            /* #ifndef QLPCDRST_h             */


