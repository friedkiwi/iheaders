/* begin_generated_IBM_copyright_prolog                              */
/* This is an automatically generated copyright prolog.              */
/* After initializing,  DO NOT MODIFY OR MOVE                        */
/* ----------------------------------------------------------------- */
/*                                                                   */
/* Product(s):                                                       */
/*     5763-SS1                                                      */
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
 /* Header File Name: H/QMHSNDRM                                   */
 /*                                                                */
 /* Descriptive Name: Send Reply Message API.                      */
 /*                                                                */
 /* Description: The Send Reply Message API sends a reply message  */
 /*              to the sender of an inquiry message.              */
 /*                                                                */
 /* Header Files Included: None.                                   */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: None.                                          */
 /*                                                                */
 /* Function Prototype List: QMHSNDRM                              */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= D2862000     3D10  931201 ROCH      New Include           */
 /* $B2= D9931502     5D30  030430 ROCH      Document optional parm*/
 /*                                          added in V5R2M0       */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

 #ifndef QMHSNDRM_h
 #define QMHSNDRM_h
#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(P128)      /* @B1A*/
#endif                       /* @B1A*/

 /******************************************************************/
 /* Prototype for calling Message Handler API QMHSNDRM             */
 /******************************************************************/
 #ifdef __ILEC400__
      #pragma linkage (QMHSNDRM,OS,nowiden)
 #else
      extern "OS"
 #endif
 void QMHSNDRM (void *,          /* Message key                    */
                void *,          /* Qualified message queue name   */
                char *,          /* Message reply text             */
                int,             /* Length of message reply text   */
                char *,          /* Remove message option          */
                void *,          /* Error code                     */
                ...);            /* Optional parameter group 1:
                                       Coded Character Set Id
                                    Optional parameter group 2:
                                       Allow default reply rejection.
                                                               @B2A*/

#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(pop)       /* @B1A*/
#endif                       /* @B1A*/
 #endif
