 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QHFOPNDR                                   */
 /*                                                                */
 /* Descriptive Name: Open Directory API                           */
 /*                                                                */
 /* 5763-SS1  (C) Copyright IBM Corp. 1994,1994                    */
 /* All rights reserved.                                           */
 /* US Government Users Restricted Rights -                        */
 /* Use, duplication or disclosure restricted                      */
 /* by GSA ADP Schedule Contract with IBM Corp.                    */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /*                                                                */
 /* Description: The Open Directory API opens the specified        */
 /*              directory so its directory entries can be read.   */
 /*                                                                */
 /* Header Files Included: H/QHF                                   */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: None.(Formats stored in QHF Include)           */
 /*                                                                */
 /* Function Prototype List: QHFOPNDR                              */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= D2862000     3D10  940410 DETTMAN:  New Include           */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

 #ifndef QHFOPNDR_h
 #define QHFOPNDR_h

 /******************************************************************/
 /* Includes for structures used by API                            */
 /******************************************************************/
 #include <qhf.h>
#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(P128)      /* @B1A*/
#endif                       /* @B1A*/

 /******************************************************************/
 /*  Prototype for QHFOPNDR API                                    */
 /******************************************************************/
 #ifdef  __ILEC400__
       #pragma linkage(QHFOPNDR,OS,nowiden)
 #else
       extern "OS"
 #endif
 void QHFOPNDR(void *,           /* Directory handle               */
               void *,           /* Path name                      */
               int,              /* Path name length               */
               char *,           /* Open information               */
               void *,           /* Attribute selection table      */
               int,              /* Length of attr selection table */
               void *);          /* Error code                     */

#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(pop)       /* @B1A*/
#endif                       /* @B1A*/
 #endif
