 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QYDOVFYB                                   */
 /*                                                                */
 /* Descriptive Name: Verify digital signatures of buffers.        */
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
 /* Description: The Verify Buffer API checks the signatures       */
 /*              of a series of bytes to see if they have changed. */
 /*                                                                */
 /* Header Files Included:                                         */
 /*        qusec.h       Error code structure                      */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: None.                                          */
 /*                                                                */
 /* Function Prototype List: QYDOVFYB                              */
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
#ifndef QYDOVFYB_h
#define QYDOVFYB_h

#include <qusec.h>                 /* Error code structure         */
#if (__OS400_TGTVRM__>=510)
#pragma datamodel(P128)
#endif

#include <qydocommon.h>            /* data structures common to
                                      YDO APIs                     */

/*******************************************************************/
/*  Prototype for calling Verify Buffer API QYDOVFYB               */
/*******************************************************************/
#ifdef __ILEC400__
#pragma linkage (QYDOVFYB,OS,nowiden)
#else
   extern "OS nowiden"
#endif


     void  QYDOVFYB (
                  char *,          /* buffer to verify                */
                  Qydo_data_description_T *, /* identify data to verify,
                                           (this points to the first
                                            array element, there can be
                                            many elements depending on
                                            the next parm (number)    */
                  int  *,          /* number of data descriptions     */
                  char *,          /* signature to verify             */
                  int  *,          /* length of signature to verify   */
                  char *,          /* certificate to verify with      */
                  int  * ,         /* length of certificate to verify
                                      with                            */
                  char *,          /* format of certificate to verify
                                      with                            */
                  void *);         /* error code                      */

#if (__OS400_TGTVRM__>=510)
   #pragma datamodel(pop)
#endif
#endif
