 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QYDOBUFFER                                 */
 /*                                                                */
 /* Descriptive Name: Support digital signatures of buffers.       */
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
 /* Description: The Sign Buffer API digitally signs a series      */
 /*              of bytes and returns the resulting signature for  */
 /*              later use to check to see if they have changed.   */
 /*                                                                */
 /*              The Verify Buffers API checks the signatures      */
 /*              of a series of bytes to see if they have changed. */
 /*                                                                */
 /* Header Files Included:                                         */
 /*        qusec.h       Error code structure                      */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: None.                                          */
 /*                                                                */
 /* Function Prototype List: QydoSignBuffer, QydoVerifyBuffer      */
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
#ifndef QYDOBUFFER_h
#define QYDOBUFFER_h

#include <qusec.h>                 /* Error code structure         */
#if (__OS400_TGTVRM__>=510)
#pragma datamodel(P128)
#endif

#include <qydocommon.h>

/*******************************************************************/
/*  Prototype for calling Sign Buffer API QYDOBUFFER                */
/*******************************************************************/
#ifndef __ILEC400__
   extern "C" {
#else
   #pragma nomargins nosequence
   #pragma checkout(suspend)
#endif



     void  QydoSignBuffer (
                  char * volatile, /* buffer to sign                  */
                  Qydo_data_description_T * volatile, /* identify data to sign,
                                           (this points to the first
                                            array element, there can be
                                            many elements depending on
                                            the next parm (number)    */
                  int  * volatile, /* number of data descriptions     */
                  char * volatile, /* application identifier (ID)     */
                  int  * volatile, /* length of  application ID       */
                  void * volatile, /* resulting signature             */
                  int  * volatile, /* length of resulting signature   */
                  char * volatile, /* format of resulting signature   */
                  void * volatile); /* error code                     */


       void  QydoVerifyBuffer (
                 char * volatile,  /* buffer to verify                */
                 Qydo_data_description_T * volatile, /* identify data to verify,
                                           (this points to the first
                                            array element, there can be
                                            many elements depending on
                                            the next parm (number)    */
                  int  * volatile, /* number of data descriptions      */
                  char * volatile, /* signature to verify             */
                  int  * volatile, /* length of signature to verify   */
                  char * volatile, /* certificate to verify with      */
                  int  *  volatile,/* length of certificate to verify
                                      with                            */
                  char * volatile, /* format of certificate to verify
                                      with                            */
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
