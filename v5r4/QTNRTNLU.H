 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QTNRTNLU                                   */
 /*                                                                */
 /* Descriptive Name: Return LU6.2 Partners.                       */
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
 /* Description: The Return LU6.2 Partners API identifies all the  */
 /*              LU6.2 partner logical unit (LU) names that are    */
 /*              known to this system.                             */
 /*                                                                */
 /* Header Files Included:                                         */
 /*        qusec.h       Error code structure                      */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON   VERSION     DATE       PGMR AND COMMENTS         */
 /* ---- -------- ----------  ---------- ------------------------- */
 /* $A0= D9959400 v5r3m0.xpf  02/12/2003 RANDYJ: New Include       */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*** END HEADER FILE SPECIFICATIONS *******************************/
#ifndef QTNRTNLU_h
#define QTNRTNLU_h

#include <qusec.h>                 /* Error code structure         */
#if (__OS400_TGTVRM__>=510)
#pragma datamodel(P128)
#endif

/*******************************************************************/
/*  Prototype for calling Return LU6.2 Partners API (QTNRTNLU)     */
/*******************************************************************/
#ifdef __ILEC400__
#pragma linkage (QTNRTNLU,OS,nowiden)
#else
   extern "OS nowiden"
#endif

     void  QTNRTNLU (...);        /* Optional Parameter Group:
                                        void *   error code        */


#if (__OS400_TGTVRM__>=510)
#pragma datamodel(pop)
#endif
#endif
