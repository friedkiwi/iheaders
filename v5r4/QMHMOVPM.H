 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QMHMOVPM                                   */
 /*                                                                */
 /* Descriptive Name: Move Program Message.                        */
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
 /* Description: The Move Program Message API moves messages from  */
 /*              a call message queue in the call stack to the     */
 /*              call message queue of an earlier call stack entry.*/
 /*                                                                */
 /* Header Files Included: None.                                   */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: None.                                          */
 /*                                                                */
 /* Function Prototype List: QMHMOVPM                              */
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

 #ifndef QMHMOVPM_h
 #define QMHMOVPM_h
#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(P128)      /* @B1A*/
#endif                       /* @B1A*/

 /******************************************************************/
 /* Prototype for calling Message Handler API QMHMOVPM             */
 /******************************************************************/
#ifdef __ILEC400__
     #pragma linkage (QMHMOVPM,OS,nowiden)
#else
     extern "OS"
#endif
 void QMHMOVPM (void *,          /* Message key                    */
                void *,          /* Message types                  */
                int,             /* Number of message types        */
                void *,          /* To call stack entry            */
                int,             /* Call stack counter             */
                void *,          /* Error code                     */
                ...);            /* Group 1 Optionals:
                                       Length of call stack entry.
                                       To call stack entry
                                          qualification.
                                    Group 2 Optionals:
                                       To call stack entry data
                                          type.
                                       From call stack entry.
                                       From call stack counter.    */

#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(pop)       /* @B1A*/
#endif                       /* @B1A*/
 #endif
