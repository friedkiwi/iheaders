 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QMHPRMM                                    */
 /*                                                                */
 /* Descriptive Name: Promote Message.                             */
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
 /* Description: The Promote Message API promotes an escape or     */
 /*              status message that has been sent to a call stack */
 /*              entry.                                            */
 /*                                                                */
 /* Header Files Included: pointer.h                               */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: None.                                          */
 /*                                                                */
 /* Function Prototype List: QMHPRMM                               */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= D2862000     3D10  931201 DPOHLSON  New Include           */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

 #ifndef QMHPRMM_h
 #define QMHPRMM_h

 #ifndef  __pointer_h
       #include <pointer.h>
 #endif
#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(P128)      /* @B1A*/
#endif                       /* @B1A*/

 /******************************************************************/
 /* Prototype for calling Message Handler API QMHPRMM              */
 /******************************************************************/
 #ifdef __ILEC400__
      #pragma linkage (QMHPRMM,OS,nowiden)
 #else
      extern "OS"
 #endif
 void QMHPRMM (_INVPTR *,        /* Call stack entry pointer       */
               int,              /* Call stack counter             */
               void *,           /* Message key                    */
               char *,           /* Message identifier             */
               void *,           /* Qualified message file name    */
               void *,           /* Message data                   */
               int,              /* Length of message data         */
               char *,           /* Message type                   */
               int,              /* Message severity               */
               char *,           /* Log option                     */
               char *,           /* Priority                       */
               void *,           /* New message key                */
               void *);          /* Error code                     */

#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(pop)       /* @B1A*/
#endif                       /* @B1A*/
 #endif
