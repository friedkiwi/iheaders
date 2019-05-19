 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QMHRSNEM                                   */
 /*                                                                */
 /* Descriptive Name: Resend Escape Message.                       */
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
 /* Description: The Resend Escape Message API resends an escape   */
 /*              message from the current call stack entry to the  */
 /*              previous call stack entry in the call stack or to */
 /*              any call stack entry that is earlier if the       */
 /*              optional parameters are used.                     */
 /*                                                                */
 /* Header Files Included: pointer.h                               */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: Qmh_Rsnem_RSNM0100_t                           */
 /*                 Qmh_Rsnem_RSNM0200_t                           */
 /*                                                                */
 /* Function Prototype List: QMHRSNEM                              */
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

 #ifndef QMHRSNEM_h
 #define QMHRSNEM_h

 #ifndef  __pointer_h
       #include <pointer.h>
 #endif
#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(P128)      /* @B1A*/
#endif                       /* @B1A*/

 /******************************************************************/
 /* Prototype for calling Message Handler API QMHRSNEM             */
 /******************************************************************/
#ifdef __ILEC400__
     #pragma linkage(QMHRSNEM,OS,nowiden)
#else
     extern "OS"
#endif
 void QMHRSNEM (void *,           /* Message key                   */
                void *,           /* Error code                    */
                ...);             /* Optionals:
                                       To call stack entry.
                                       Length of call stack entry
                                          parameter.
                                       Format of call stack entry
                                          parameter.
                                       From call stack entry addr.
                                       From call stack counter.    */

 /******************************************************************/
 /* Type Definition for the RSNM0100 format.                       */
 /****                                                          ****/
 /* NOTE: The following type definition only defines the fixed     */
 /*       portion of the format.  Any varying length field will    */
 /*       be defined by the user.                                  */
 /******************************************************************/
 typedef _Packed struct Qmh_Rsnem_RSNM0100
 {
    int  Call_Counter;
    char Call_Stack_Entry[20];
    int  Length_Call_Entry;
  /*char Call_Entry_Id[];*/      /* varying length                 */
 } Qmh_Rsnem_RSNM0100_t;


 /******************************************************************/
 /* Type Definition for the RSNM0200 format.                       */
 /******************************************************************/
 typedef _Packed struct Qmh_Rsnem_RSNM0200
 {
    _INVPTR Call_Stack_Entry;
    int  Call_Counter;
    char Pointer_Qualifier[10];
 } Qmh_Rsnem_RSNM0200_t;

#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(pop)       /* @B1A*/
#endif                       /* @B1A*/
 #endif
