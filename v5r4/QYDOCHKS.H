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
 /* Header File Name: H/QYDOCHKS                                   */
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
 /* $A1= P9A33442     v5r3m0 06/24/2003 ROCH:   allow both C and   */
 /*                                             C++ to avoid parms */
 /* End CFD List.                                                  */
 /*                                                                */
 /*** END HEADER FILE SPECIFICATIONS *******************************/
#ifndef QYDOCHKS_h
#define QYDOCHKS_h

#include <qusec.h>                 /* Error code structure         */
#if (__OS400_TGTVRM__>=510)
#pragma datamodel(P128)
#endif

/*******************************************************************/
/*  Prototype for calling Check System API  QYDOCHKS               */
/*******************************************************************/
#ifdef __ILEC400__
#pragma linkage (QYDOCHKS,OS,nowiden)

     void  QYDOCHKS ();             /* Optional Parameter Group:
                                         char *  path name to report errors
                                         int  *  length of path name
                                                 (0 = no file)
                                         char *  format of path name
                                                 'OBJN0100' = simple path name,
                                                 'OBJN0200' = LG path name
                                         char *  format of results file content
                                                 'RSLT0100' = basic info
                                         void *  error code                  */
#else
   extern "OS nowiden"

     void  QYDOCHKS ( ... );        /* Optional Parameter Group:
                                         char *  path name to report errors
                                         int  *  length of path name
                                                 (0 = no file)
                                         char *  format of path name
                                                 'OBJN0100' = simple path name,
                                                 'OBJN0200' = LG path name
                                         char *  format of results file content
                                                 'RSLT0100' = base info
                                         void *  error code                  */
#endif

#if (__OS400_TGTVRM__>=510)
#pragma datamodel(pop)
#endif
#endif
