 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QYDOSGNO                                   */
 /*                                                                */
 /* Descriptive Name: Sign object with digitial signature.         */
 /*                                                                */
 /* 5722-SS1                                                       */
 /* (C) Copyright IBM Corp. 2000,2002                              */
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
 /* Function Prototype List: QYDOSGNO                              */
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
#ifndef QYDOSGNO_h
#define QYDOSGNO_h

#include <qusec.h>                 /* Error code structure         */
#if (__OS400_TGTVRM__>=510)
#pragma datamodel(P128)
#endif

#include <qydocommon.h>           /* data structures shared by
				     YDO APIs                  @01A*/

/*******************************************************************/
/*  Prototype for calling Sign Object API QYDOSGNO                 */
/*******************************************************************/
#ifdef __ILEC400__
#pragma linkage (QYDOSGNO,OS,nowiden)
#else
   extern "OS nowiden"
#endif



 void  QYDOSGNO  (char *,               /* path name to object         */
		  int  *,               /* length of path name         */
		  char *,               /* format name                 */
		  char *,               /* application identifier (ID) */
		  int  *,               /* length of  application ID   */
		  char *,               /* replace duplicate signature */
		  Qydo_Multi_Objects_T *, /* how to handle multiple
					     objects                   */
		  int  * ,              /* length of multiple objects
					   structure to use
					 (0=no mult.object structure)  */
		  void *);          /* error code                  */

#if (__OS400_TGTVRM__>=510)
#pragma datamodel(pop)
#endif
#endif
