/* begin_generated_IBM_copyright_prolog                              */
/* This is an automatically generated copyright prolog.              */
/* After initializing,  DO NOT MODIFY OR MOVE                        */
/* ----------------------------------------------------------------- */
/*                                                                   */
/* Product(s):                                                       */
/*     5722-SS1                                                      */
/*                                                                   */
/* (C)Copyright IBM Corp.  2003, 2003                                */
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
 /* Header File Name: H/QYDOCHK1                                   */
 /*                                                                */
 /* Descriptive Name: Check operating system for corruption.       */
 /*                                                                */
 /* 5722-SS1                                                       */
 /* (C) Copyright IBM Corp. 2003,2003                              */
 /* All rights reserved.                                           */
 /* US Government Users Restricted Rights -                        */
 /* Use, duplication or disclosure restricted                      */
 /* by GSA ADP Schedule Contract with IBM Corp.                    */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /* Description: The Check System API provided an extra layer of   */
 /*              protection for the code needed to verify          */
 /*              signatures.                                       */
 /*                                                                */
 /* Header Files Included:                                         */
 /*        qusec.h       Error code structure                      */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL  DATE       PGMR    CHANGE DESCRIPTION */
 /* ---- ------------ -----  ---------- ------- ------------------ */
 /* $A0= D99478       v5r3m0 08/20/2002 ROCH:   New Include        */
 /* End CFD List.                                                  */
 /*                                                                */
 /*** END HEADER FILE SPECIFICATIONS *******************************/
#ifndef QYDOCHK1_h
#define QYDOCHK1_h

#include <qusec.h>                 /* Error code structure         */
#if (__OS400_TGTVRM__>=510)
#pragma datamodel(P128)
#endif

/*******************************************************************/
/*  Prototype for calling Check System API  QYDOCHKS               */
/*******************************************************************/
#ifndef __ILEC400__
   extern "C" {
#else
#pragma nomargins nosequence
#pragma checkout(suspend)
#endif

  void  QydoCheckSystem (char * volatile, /*   path name to report
                                       errors                        */
                         int  * volatile, /*   length of path name
                                       (0 = no file)                 */
                         char *  volatile,  /*  format of path name
                                       'OBJN0100' = simple path name,
                                       'OBJN0200' = LG path name     */
                         char *  volatile,  /*  format of results file
                                       content
                                       'RSLT0100' = basic info       */
                         void *  volatile);  /*  error code          */


#ifndef __ILEC400__
   }
#else
#pragma checkout(resume)
#endif

#if (__OS400_TGTVRM__>=510)
#pragma datamodel(pop)
#endif
#endif
