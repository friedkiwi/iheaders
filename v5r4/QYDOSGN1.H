 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QYDOSGN1                                   */
 /*                                                                */
 /* Descriptive Name: Sign object with digitial signature.         */
 /*                                                                */
 /* 5769-SS1                                                       */
 /* (C) Copyright IBM Corp. 1999,2000                              */
 /* All rights reserved.                                           */
 /* US Government Users Restricted Rights -                        */
 /* Use, duplication or disclosure restricted                      */
 /* by GSA ADP Schedule Contract with IBM Corp.                    */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /* Description: The Sign Object API digitally signs an object     */
 /*              so the object can be check (verified) later to    */
 /*              see if its contents have changed. The signature   */
 /*              can also be used to find who owns the object.     */
 /*                                                                */
 /* Header Files Included:                                         */
 /*        qusec.h       Error code structure                      */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: None.                                          */
 /*                                                                */
 /* Function Prototype List: QYDOSGN1                              */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= D97545       5D10  990618 ROCH:     New Include           */
 /* $01= D98608       5D20  010821 ROCH:     move multi.objects    */
 /*                                          struct to qydocommon  */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/
#ifndef QYDOSGN1_h
#define QYDOSGN1_h

#include <qusec.h>                 /* Error code structure         */
#include <qydocommon.h>            /* for Qydo_Multi_Objects_T @01C*/
#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(P128)      /* @B1A*/
#endif                       /* @B1A*/

/*******************************************************************/
/*  Prototype for calling Sign Object API QYDOSGN1                 */
/*******************************************************************/
#ifndef __ILEC400__
   extern "C" {
#else
   #pragma nomargins nosequence
   #pragma checkout(suspend)
#endif


 void  QydoSignObject(char * volatile,  /* path name to object         */
                      int  * volatile,  /* length of path name         */
                      char * volatile,  /* format name                 */
                      char * volatile,  /* application identifier (ID) */
                      int  * volatile,  /* length of application ID    */
		      char * volatile,  /* replace duplicate signature */
		      Qydo_Multi_Objects_T * volatile, /* how to handle
					   multiple objects            */
		      int  * volatile,  /* length of multiple objects
					   structure to use
					 (0=no mult.object structure)  */
                      void * volatile); /* error code              */

#ifndef __ILEC400__
  }
#else
  #pragma checkout(resume)
#endif
#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(pop)       /* @B1A*/
#endif                       /* @B1A*/

#endif
