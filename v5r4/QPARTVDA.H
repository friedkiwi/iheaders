 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: QPARTVDA                                     */
 /*                                                                */
 /* Descriptive Name: Retrieve Data API.                           */
 /*                                                                */
 /* 5769-SS1  (C) Copyright IBM Corp. 1995,1998                    */
 /* All rights reserved.                                           */
 /* US Government Users Restricted Rights -                        */
 /* Use, duplication or disclosure restricted                      */
 /* by GSA ADP Schedule Contract with IBM Corp.                    */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /* Description: The Retrieve Data API retrieves up to 1K          */
 /*              bytes of user data, which was passed to this      */
 /*              system with the Start Pass-through (QPASTRPT)     */
 /*              API.                                              */
 /*                                                                */
 /* Header Files Included: None.                                   */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: None.                                          */
 /*                                                                */
 /* Function Prototype List: QPARTVDA                              */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0  P3979622     3D60  950602 RCH:      New Include           */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /* End Change Activity                                            */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

 #ifndef QPARTVDA_h
  #define QPARTVDA_h
#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(P128)      /* @B1A*/
#endif                       /* @B1A*/

  /*****************************************************************/
  /* Prototype for calling Retrieve Data API QPARTVDA              */
  /*****************************************************************/

  #ifdef  __ILEC400__
     #pragma linkage(QPARTVDA,OS,nowiden)
  #else
     extern "C"
  #endif

 void QPARTVDA(void *,          /* Receive variable               */
               int,             /* Length of receiver variable    */
               int  *,          /* Actual length of user data     */
               void *);         /* Error code                     */

#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(pop)       /* @B1A*/
#endif                       /* @B1A*/
 #endif
