 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QYDOADDV                                   */
 /*                                                                */
 /* Descriptive Name: Add trusted certificate to                   */
 /*                   *SIGNATUREVERIFICATION certificate store.    */
 /*                                                                */
 /* 5722-SS1                                                       */
 /* (C) Copyright IBM Corp. 2002,2002                              */
 /* All rights reserved.                                           */
 /* US Government Users Restricted Rights -                        */
 /* Use, duplication or disclosure restricted                      */
 /* by GSA ADP Schedule Contract with IBM Corp.                    */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /* Description: The Add Verifier API imports a certificate to the */
 /*              *SIGNATUREVERIFICATION certificate store.         */
 /*                                                                */
 /* Header Files Included:                                         */
 /*        qusec.h       Error code structure                      */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: None.                                          */
 /*                                                                */
 /* Function Prototype List: QYDOADDV                              */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL  DATE   PGMR      CHANGE DESCRIPTION   */
 /* ---- ------------ -----  ------ --------- ---------------------*/
 /* $A0= D98608       v5r2m0 010606 ROCH:     New Include          */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/
#ifndef QYDOADDV_h
#define QYDOADDV_h

#include <qusec.h>                 /* Error code structure         */
#if (__OS400_TGTVRM__>=510)
#pragma datamodel(P128)
#endif


/*******************************************************************/
/*  Prototype for calling Add Verifier API QYDOADDV                */
/*******************************************************************/
#ifdef __ILEC400__
#pragma linkage (QYDOADDV,OS,nowiden)
#else
   extern "OS nowiden"
#endif


     void  QYDOADDV (char *,       /* path name to file containing
                                      certificate to be added         */
                  int  *,          /* length of path name             */
                  char *,          /* format name of path name        */
                  char *,          /* label to assign to certificate  */
                  int  *,          /* length of label                 */
                  void *);         /* error code                      */

#if (__OS400_TGTVRM__>=510)
   #pragma datamodel(pop)
#endif
#endif
