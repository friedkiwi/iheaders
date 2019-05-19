 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QMHSNDPM                                   */
 /*                                                                */
 /* Descriptive Name: Send Program Message API.                    */
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
 /* Description: The Send Program Message API sends a message      */
 /*              to a call message queue or the external message   */
 /*              queue.                                            */
 /*                                                                */
 /* Header Files Included: None.                                   */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: None.                                          */
 /*                                                                */
 /* Function Prototype List: QMHSNDPM                              */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= D2862000     3D10  940424 RGARVEY : New Include           */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

 #ifndef QMHSNDPM_h
 #define QMHSNDPM_h
#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(P128)      /* @B1A*/
#endif                       /* @B1A*/

 /******************************************************************/
 /* Prototype for calling Message Handler API QMHSNDPM             */
 /******************************************************************/
#ifdef __ILEC400__
     #pragma linkage(QMHSNDPM,OS,nowiden)
#else
     extern "OS"
#endif
 void QMHSNDPM (char *,           /* Message identifier             */
                void *,           /* Qualified message file name    */
                void *,           /* Message data or text           */
                int,              /* Length of message data or text */
                char *,           /* Message type                   */
                void *,           /* Call stack entry               */
                int,              /* Call stack counter             */
                void *,           /* Message key                    */
                void *,           /* Error code                     */
                ...);             /* Group 1 Optionals:
                                        Length of call stack entry.
                                        Call stack entry
                                           qualification.
                                        Display program messages
                                           screen wait time.
                                     Group 2 Optionals:
                                        Call stack entry data type.
                                        Coded Character Set Id.     */

#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(pop)       /* @B1A*/
#endif                       /* @B1A*/
 #endif
