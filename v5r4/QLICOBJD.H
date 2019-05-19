 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QLICOBJD                                   */
 /*                                                                */
 /* Descriptive Name: Change Object Description API                */
 /*                                                                */
 /* 5763-SS1, 5716-SS1                                             */
 /* (C) Copyright IBM Corp. 1994,1996                              */
 /* All rights reserved.                                           */
 /* US Government Users Restricted Rights -                        */
 /* Use, duplication or disclosure restricted                      */
 /* by GSA ADP Schedule Contract with IBM Corp.                    */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /* This header file is an external product interface, all         */
 /* modifications must be upward compatible.                       */
 /*                                                                */
 /* Description: The Change Object Description API lets you change */
 /*              object information for a specific object.         */
 /*                                                                */
 /* Header Files Included: <qus.h>                                 */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: None.                                          */
 /*                                                                */
 /* Function Prototype List: QLICOBJD                              */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= D2862000     3D10  940424 ROCH:     New Include           */
 /* $A1= P3622343     3D70  960612 CEMAROLT: Include changes.      */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

 #ifndef QLICOBJD_h
 #define QLICOBJD_h

 #include <qus.h>                                           /* @A1C*/
#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(P128)      /* @B1A*/
#endif                       /* @B1A*/

 /******************************************************************/
 /*  Prototype for QLICOBJD API                                    */
 /******************************************************************/
 #ifdef  __ILEC400__
       #pragma linkage(QLICOBJD,OS,nowiden)
 #else
       extern "OS"
 #endif
 void QLICOBJD(char *,           /* Returned library name          */
               void *,           /* Qualified object name          */
               char *,           /* Object type                    */
               void *,           /* Changed object information     */
               void *);          /* Error code                     */

#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(pop)       /* @B1A*/
#endif                       /* @B1A*/
 #endif
