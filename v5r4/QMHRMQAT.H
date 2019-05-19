 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QMHRMQAT                                   */
 /*                                                                */
 /* Descriptive Name: Retrieve Nonprogram Message Queue Attributes.*/
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
 /* Description: The Retrieve Nonprogram Message Queue Attributes  */
 /*              API provides information about the attribues of a */
 /*              nonprogram message queue.                         */
 /*                                                                */
 /* Header Files Included: None.                                   */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: Qmh_Rmqat_RMQA0100_t                           */
 /*                                                                */
 /* Function Prototype List: QMHRMQAT                              */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       VERS  DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----  ------ --------- ----------------------*/
 /* $A0= D2862000     3D10  940424 RGARVEY : New Include           */
 /* $A1= D9531000     4D30  971217 LLENTZ:   Add message queue full*/
 /*                                          action to RMQA0100.   */
 /* $A2= D9568100     4D40  98nnnn CALISTA:  Add allow other jobs  */
 /*                                          to reply to RMQA0100.*/
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

 #ifndef QMHRMQAT_h
 #define QMHRMQAT_h
#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(P128)      /* @B1A*/
#endif                       /* @B1A*/

 /******************************************************************/
 /* Prototype for calling Message Handler API QMHRMQAT             */
 /******************************************************************/
#ifdef __ILEC400__
     #pragma linkage (QMHRMQAT,OS,nowiden)
#else
     extern "OS"
#endif
 void QMHRMQAT (void *,          /* Message queue information      */
                int,             /* Length of message queue info   */
                char *,          /* Format name                    */
                char *,          /* Qualified message queue name   */
                void *);         /* Error code                     */

 /******************************************************************/
 /* Type Definition for the RMQA0100 format.                       */
 /****                                                          ****/
 /* NOTE: The following type definition only defines the fixed     */
 /*       portion of the format.  Any varying length field will    */
 /*       have to be defined by the user.                          */
 /******************************************************************/
 typedef _Packed struct Qmh_Rmqat_RMQA0100
    {
       int  Bytes_Return;
       int  Bytes_Available;
       char Message_Queue_Name[10];
       char Message_Queue_Library[10];
       int  Messages_On_Queue;
       int  Current_Size;
       int  Increment_Size;
       int  Number_of_Increments;
       int  Maximum_Increments;
       int  Severity_Filter;
       char Delivery_Mode[7];
       char Break_Program_Name[10];
       char Break_Program_Library[10];
       char Force_Storage[4];
       char Text_Description[50];
       char Allow_Alert_Flag;
       char Reserved[2];
       int  Coded_Character_Set_ID;
       char Message_Queue_Full_Action[10];
       char Allow_Other_Jobs_To_Reply[10];
    } Qmh_Rmqat_RMQA0100_t;

#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(pop)       /* @B1A*/
#endif                       /* @B1A*/
 #endif
