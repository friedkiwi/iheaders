 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QYDOADD1                                   */
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
 /* Function Prototype List: QYDOADD1                              */
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
#ifndef QYDOADD1_h
#define QYDOADD1_h

#include <qusec.h>                 /* Error code structure         */
#if (__OS400_TGTVRM__>=510)
#pragma datamodel(P128)
#endif


/*******************************************************************/
/*  Prototype for calling Add Verifier API QYDOADD1                */
/*******************************************************************/
#ifndef __ILEC400__
   extern "C" {
#else
   #pragma nomargins nosequence
   #pragma checkout(suspend)
#endif


     void  QydoAddVerifier (
                  char * volatile, /* path name to file containing
                                      certificate to be added         */
                  int  * volatile,  /* length of path name            */
                  char * volatile,  /* format name of path name       */
                  char * volatile,  /* label to assign to certificate */
                  int  * volatile,  /* length of label                */
                  void * volatile); /* error code                     */


#ifndef __ILEC400__
  }
#else
  #pragma checkout(resume)
#endif
#if (__OS400_TGTVRM__>=510)
  #pragma datamodel(pop)
#endif

#endif
