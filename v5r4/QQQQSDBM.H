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
 /* Header File Name: H/QQQQSDBM                                   */
 /*                                                                */
 /* Descriptive Name: Include for Query SQL Database Monitor       */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /* Description: The Query SQL Database Monitor API returns        */
 /*              information about the activity of the SQL         */
 /*              and the original database monitor.                */
 /*                                                                */
 /* Header Files Included: None.                                   */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: None.                                          */
 /*                                                                */
 /* Function Prototype List: QQQQSDBM                              */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON    LEVEL  DATE   PGMR     CHANGE DESCRIPTION       */
 /* ---- --------- -----  ------ -------- -------------------------*/
 /* $A0=           v5r4m0 050601 ktrisko: New include              */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

 #ifndef QQQQSDBM_h
 #define QQQQSDBM_h
 #if (__OS400_TGTVRM__>=510)
      #pragma datamodel(P128)
 #endif

 /*******************************************************************/
 /*  Prototype for calling Query SQL Database Monitor   (QQQQSDBM)  */
 /*******************************************************************/
 #ifdef __ILEC400__
     #pragma linkage (QQQQSDBM,OS,nowiden)
 #else
     extern "OS"
 #endif

 void QQQQSDBM(void *,            /* Qualified job name             */
               int *,             /* Number of active monitors      */
               int,               /* Size of active monitors array  */
               void *,            /* Type of active monitors array  */
               char *,            /* Memory handle                  */
               void *);           /* Error code                     */

 #if (__OS400_TGTVRM__>=510)
      #pragma datamodel(pop)
 #endif

 #endif
