 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: EJOBNTFY                                     */
 /*                                                                */
 /* Descriptive Name: Job Notification Exit Point Declares         */
 /*                                                                */
 /* 5722-SS1  (C) Copyright IBM Corp.  2002                        */
 /* All rights reserved.                                           */
 /* US Government Users Restricted Rights -                        */
 /* Use, duplication or disclosure restricted                      */
 /* by GSA ADP Schedule Contract with IBM Corp.                    */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /*                                                                */
 /* Description: The Job Notification Exit Point can be used to    */
 /*              log notification messages to data queues when     */
 /*              an OS/400 job goes through certain transitions.   */
 /*              Refer to the exit point documentation in the      */
 /*              information center for additional information.    */
 /*                                                                */
 /* Header Files Included: None.                                   */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List:  Qwt_Job_Start_End_Notify_t                    */
 /*                  Qwt_Job_Queue_Notify_t                        */
 /*                                                                */
 /* Function Prototype List: None.                                 */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= D98603       5D20  010403 ROCH:     New Include           */
 /* $01= D98359       5D30  020719 ROCH:     add new fields        */
 /* $02= P9A10011     5D30  020812 ROCH:     add job type/subtype  */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

 #ifndef EJOBNTFY_h
 #define EJOBNTFY_h

 #if (__OS400_TGTVRM__>=510)
     #pragma datamodel(P128)
 #endif

 /******************************************************************/
 /* Type Definition for the Job Start and Job End Notification     */
 /* Messages                                                       */
 /******************************************************************/
 typedef _Packed struct Qwt_Job_Start_End_Notify
    {
       char Message_Identifier[10];
       char Message_Format[2];
       char Internal_Job_Identifier[16];
       char Qualified_Job_Name[26];
       char Qualified_Job_Queue_Name[20];                   /* @01C*/
       char Timestamp_Job_Entered_System[8];                /* @01A*/
       char Timestamp_Job_Started[8];                       /* @01A*/
       char Timestamp_Job_Ended[8];                         /* @01A*/
       char Job_Type[1];                                    /* @02A*/
       char Job_Subtype[1];                                 /* @02A*/
       int  Job_End_Severity;                               /* @01A*/
       long long Processing_Unit_Time;                      /* @01A*/
       char Reserved2[32];                                  /* @01A*/
    } Qwt_Job_Start_End_Notify_t;

 /******************************************************************/
 /* Type Definition for the Job Queue Notification Messages        */
 /******************************************************************/
 typedef _Packed struct Qwt_Job_Queue_Notify
    {
       char Message_Identifier[10];
       char Message_Format[2];
       char Internal_Job_Identifier[16];
       char Qualified_Job_Name[26];
       char Qualified_Job_Queue_Name[20];
       char Timestamp_Job_Entered_System[8];                /* @01A*/
       char Reserved[16];                                   /* @02A*/
       char Job_Type[1];                                    /* @02A*/
       char Job_Subtype[1];                                 /* @02A*/
       char Reserved2[44];                                  /* @02C*/
    } Qwt_Job_Queue_Notify_t;

 #if (__OS400_TGTVRM__>=510)
     #pragma datamodel(pop)
 #endif

#endif
