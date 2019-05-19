 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QYDOSGNB                                   */
 /*                                                                */
 /* Descriptive Name: Sign buffer with digital signature.          */
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
 /* Header Files Included:                                         */
 /*        qusec.h       Error code structure                      */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: None.                                          */
 /*                                                                */
 /* Function Prototype List: QYDOSGNB                              */
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
#ifndef QYDOSGNB_h
#define QYDOSGNB_h

#include <qusec.h>                 /* Error code structure         */
#if (__OS400_TGTVRM__>=510)
#pragma datamodel(P128)
#endif

#include <qydocommon.h>            /* data structures common to
                                      YDO APIs                     */

/*******************************************************************/
/*  Prototype for calling Sign Buffer API QYDOSGNB                 */
/*******************************************************************/
#ifdef __ILEC400__
#pragma linkage (QYDOSGNB,OS,nowiden)
#else
   extern "OS nowiden"
#endif



     void  QYDOSGNB (
                  char *,          /* buffer to sign                  */
                  Qydo_data_description_T *, /* identify data to sign,
                                           (this points to the first
                                            array element, there can be
                                            many elements depending on
                                            the next parm (number)    */
                  int  *,          /* number of data descriptions     */
                  char *,          /* application identifier (ID)     */
                  int  *,          /* length of  application ID       */
                  void *,          /* resulting signature             */
                  int  * ,         /* length of resulting signature   */
                  char *,          /* format of resulting signature   */
                  void *);         /* error code                      */

#if (__OS400_TGTVRM__>=510)
   #pragma datamodel(pop)
#endif
#endif
