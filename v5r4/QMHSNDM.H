 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QMHSNDM                                    */
 /*                                                                */
 /* Descriptive Name: Send Nonprogram Message API.                 */
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
 /* Description: The Send Nonprogram Message API sends a message   */
 /*              to a nonprogram message queue so your program can */
 /*              communicate with another job or user.             */
 /*                                                                */
 /* Header Files Included: None.                                   */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: None.                                          */
 /*                                                                */
 /* Function Prototype List: QMHSNDM                               */
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

 #ifndef QMHSNDM_h
 #define QMHSNDM_h
#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(P128)      /* @B1A*/
#endif                       /* @B1A*/

 /******************************************************************/
 /* Prototype for calling Message Handler API QMHSNDM              */
 /******************************************************************/
 #ifdef __ILEC400__
      #pragma linkage (QMHSNDM,OS)
 #else
      extern "OS"
 #endif
 void QMHSNDM (char *,           /* Message identifier             */
               void *,           /* Qualified message file name    */
               void *,           /* Message data or text           */
               int,              /* Length of message data or text */
               char *,           /* Message type                   */
               void *,           /* Qualified message queue list   */
               int,              /* Number of message queues       */
               void *,           /* Qualified reply message queue  */
               void *,           /* Message key                    */
               void *,           /* Error code                     */
               ...);             /* Optional:
                                       Coded Character Set Id      */

#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(pop)       /* @B1A*/
#endif                       /* @B1A*/
 #endif
