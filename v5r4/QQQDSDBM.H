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
 /* Header File Name: H/QQQDSDBM                                   */
 /*                                                                */
 /* Descriptive Name: Include for Dump SQL Database Monitor        */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /* Description: The Dump SQL Database Monitor API dumps the SQL   */
 /*              database monitor that has been gathered.          */
 /*                                                                */
 /* Header Files Included: None.                                   */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: None.                                          */
 /*                                                                */
 /* Function Prototype List: QQQDSDBM                              */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON    LEVEL  DATE   PGMR     CHANGE DESCRIPTION       */
 /* ---- --------- -----  ------ -------- -------------------------*/
 /* $A0=           v5r4m0 050531 ktrisko: New include              */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

 #ifndef QQQDSDBM_h
 #define QQQDSDBM_h
 #if (__OS400_TGTVRM__>=510)
      #pragma datamodel(P128)
 #endif

 /*******************************************************************/
 /*  Prototype for calling Dump SQL Database Monitor    (QQQDSDBM)  */
 /*******************************************************************/
 #ifdef __ILEC400__
     #pragma linkage (QQQDSDBM,OS,nowiden)
 #else
     extern "OS"
 #endif

 void QQQDSDBM(char *,            /* Memory handle to dump          */
               void *,            /* Job or memory handle name      */
               int,               /* Number of types to dump        */
               void *,            /* Subtypes and files array       */
               void *);           /* Error code                     */

 #if (__OS400_TGTVRM__>=510)
      #pragma datamodel(pop)
 #endif

 #endif
