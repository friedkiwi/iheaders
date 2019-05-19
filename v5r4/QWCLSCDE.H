 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QWCLSCDE                                   */
 /*                                                                */
 /* Descriptive Name: List Job Schedule Entries                    */
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
 /* Description: The List Job Schedule Entries API lists the       */
 /*              entries in the job schedule, QDFTJOBSCD.          */
 /*                                                                */
 /* Header Files Included: None.                                   */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List:  Qwc_Lscde_Input_t                             */
 /*                  Qwc_Lscde_Header_t                            */
 /*                  Qwc_SCDL0100_t                                */
 /*                  Qwc_SCDL0200_t                                */
 /*                                                                */
 /* Function Prototype List: QWCLSCDE                              */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= D2862000     3D10  940424 DETTMAN:  New Include           */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

 #ifndef QWCLSCDE_h
 #define QWCLSCDE_h
#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(P128)      /* @B1A*/
#endif                       /* @B1A*/

 /******************************************************************/
 /*  Prototype for QWCLSCDE API                                    */
 /******************************************************************/
 #ifdef  __ILEC400__
       #pragma linkage(QWCLSCDE,OS,nowiden)
 #else
       extern "OS"
 #endif
 void QWCLSCDE(void *,           /* User space and library name    */
               char *,           /* Format name                    */
               char *,           /* Job schedule entry name        */
               void *,           /* Continuation handle            */
               void *);          /* Error code                     */

 /******************************************************************/
 /* Type Definition for the input parameter section.               */
 /******************************************************************/
typedef _Packed struct Qwc_Lscde_Input
    {
       char User_Space_Name[10];
       char User_Space_Lib_Name[10];
       char Format_Name[8];
       char Job_Schedule_Entry_Name[10];
       char Continuation_Handle[16];
    } Qwc_Lscde_Input_t;

 /******************************************************************/
 /* Type Definition for the header section.                        */
 /******************************************************************/
 typedef _Packed struct Qwc_Lscde_Header
    {
       char Job_Schedule_Entry_Name[10];
       char Continuation_Handle[16];
    } Qwc_Lscde_Header_t;

 /******************************************************************/
 /* Type Definition for the SCDL0100 format.                       */
 /******************************************************************/
 typedef _Packed struct Qwc_SCDL0100
    {
       char Information_Status;
       char Job_Name[10];
       char Entry_Number[10];
       char Scheduled_Date[10];
       char Scheduled_Days[70];
       char Scheduled_Time[6];
       char Frequency[10];
       char Relative_Day_Of_Month[5][10];
       char Recovery_Action[10];
       char Next_Submission_Date[10];
       char Status[10];
       char Job_Queue_Name[10];
       char Job_Queue_Lib_Name[10];
       char User_Profile_Entry_Adder[10];
       char Last_Submission_Date[10];
       char Last_Submission_Time[6];
       char Text[50];
       char Reserved[23];
    } Qwc_SCDL0100_t;

 /******************************************************************/
 /* Type Definition for the SCDL0200 format.                       */
 /******************************************************************/
 typedef _Packed struct Qwc_SCDL0200
    {
       char Information_Status;
       char Job_Name[10];
       char Entry_Number[10];
       char Scheduled_Date[10];
       char Scheduled_Days[70];
       char Scheduled_Time[6];
       char Frequency[10];
       char Relative_Day_Of_Month[5][10];
       char Recovery_Action[10];
       char Next_Submission_Date[10];
       char Status[10];
       char Job_Queue_Name[10];
       char Job_Queue_Lib_Name[10];
       char User_Profile_Entry_Adder[10];
       char Last_Submission_Date[10];
       char Last_Submission_Time[6];
       char Text[50];
       char Reserved[23];
       char Job_Queue_Status[10];
       char Dates_Ommitted[20][10];
       char Job_Desc_Name[10];
       char Job_Desc_Lib_Name[10];
       char User_Profile_For_Submitted_Job[10];
       char Message_Queue_Name[10];
       char Message_Queue_Lib_Name[10];
       char Save_Entry[10];
       char Last_Submission_Job_Name[10];
       char Last_Submission_User_Name[10];
       char Last_Submission_Job_Number[6];
       char Last_Attempt_Submission_Date[10];
       char Last_Attempt_Submission_Time[6];
       char Status_Last_Attempt_Submission[10];
       char Reserved2[2];
       int  Length_Command_String;
       char Command_String[512];
    } Qwc_SCDL0200_t;

#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(pop)       /* @B1A*/
#endif                       /* @B1A*/
 #endif
