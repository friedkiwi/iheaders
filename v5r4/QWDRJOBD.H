/* begin_generated_IBM_copyright_prolog                              */
/* This is an automatically generated copyright prolog.              */
/* After initializing,  DO NOT MODIFY OR MOVE                        */
/* ----------------------------------------------------------------- */
/*                                                                   */
/* Product(s):                                                       */
/*     5763-SS1                                                      */
/*     5716-SS1                                                      */
/*     5769-SS1                                                      */
/*     5722-SS1                                                      */
/*                                                                   */
/* (C)Copyright IBM Corp.  1994, 2005                                */
/*                                                                   */
/* All rights reserved.                                              */
/* US Government Users Restricted Rights -                           */
/* Use, duplication or disclosure restricted                         */
/* by GSA ADP Schedule Contract with IBM Corp.                       */
/*                                                                   */
/* Licensed Materials-Property of IBM                                */
/*                                                                   */
/*  ---------------------------------------------------------------  */
/*                                                                   */
/* end_generated_IBM_copyright_prolog                                */

 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QWDRJOBD                                   */
 /*                                                                */
 /* Descriptive Name: Retrieve Job Description Information API     */
 /*                                                                */
 /* Description: The Retrieve Job Description Information API      */
 /*              retrieves information from a job description      */
 /*              object and places it into a single variable in the*/
 /*              calling program.                                  */
 /*                                                                */
 /* Header Files Included: None.                                   */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List:  Qwd_JOBD0100_t                                */
 /*                  Qwd_Jobd_ASP_Group_List_t                     */
 /*                                                                */
 /* Function Prototype List: QWDRJOBD                              */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= D2862000     3D10  940424 ROCH:     New Include           */
 /* $A1= D9423200     3D70  960204 ROCH:     Add CYMD_Date         */
 /* $A2= D9477926     4D20  970618 ROCH: Add Allow_Multiple_Threads*/
 /* $A3= D9860301   v5r2m0  010223 ROCH:     Add IASP support      */
 /* $A4= D9945401   v5r3m0  021227 ROCH:     Add DDM_Conversation  */
 /* $A5= D9983601   v5r4m0  040905 ROCH:     Add job log output    */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

 #ifndef QWDRJOBD_h
 #define QWDRJOBD_h
#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(P128)      /* @B1A*/
#endif                       /* @B1A*/

 /******************************************************************/
 /*  Prototype for QWDRJOBD API                                    */
 /******************************************************************/
 #ifdef  __ILEC400__
       #pragma linkage(QWDRJOBD,OS,nowiden)
 #else
       extern "OS"
 #endif
 void QWDRJOBD(void *,           /* Receiver variable              */
               int,              /* Length of receiver variable    */
               char *,           /* Format name                    */
               void *,           /* Qualified job description name */
               void *);          /* Error code                     */

 /******************************************************************/
 /* Type Definition for the JOBD0100 format.                       */
 /****                                                          ****/
 /* NOTE: The following type definition only defines the fixed     */
 /*       portion of the format.  Any varying length field will    */
 /*       have to be defined by the user.                          */
 /******************************************************************/
 typedef _Packed struct Qwd_Jobd_ASP_List{
      char ASP_Name[10];
     /*char Reserved[];*/ /* Varying length */
 } Qwd_Jobd_ASP_Group_List_t;

 typedef _Packed struct Qwd_JOBD0100
    {
       int  Bytes_Returned;
       int  Bytes_Available;
       char Job_Description_Name[10];
       char Job_Description_Lib_Name[10];
       char User_Name[10];
       char Job_Date[8];
       char Job_Switches[8];
       char Job_Queue_Name[10];
       char Job_Queue_Lib_Name[10];
       char Job_Queue_Priority[2];
       char Hold_Job_Queue[10];
       char Output_Queue_Name[10];
       char Output_Queue_Lib_Name[10];
       char Output_Queue_Priority[2];
       char Printer_Device_Name[10];
       char Print_Text[30];
       int  Syntax_Check_Severity;
       int  End_Severity;
       int  Message_Log_Severity;
       char Message_Log_Level;
       char Message_Log_Text[10];
       char Log_CL_Programs[10];
       char Inquiry_Message_Reply[10];
       char Device_Recovery_Action[13];
       char Time_Slice_End_Pool[10];
       char Accounting_Code[15];
       char Routing_Data[80];
       char Text_Description[50];
       char Reserved;
       int  Offset_Initial_Lib_List;
       int  Number_Libs_In_Lib_list;
       int  Offset_Request_Data;
       int  Length_Request_Data;
       int  Job_Message_Queue_Max_Size;
       char Job_Message_Queue_Full_Action[10];
       char CYMD_Date[10];
       char Allow_Multiple_Threads[10];
       char Spooled_File_Action[10];
       int  Initial_ASP_Group_Info_Offset;
       int  Number_ASP_Group_Info_Entries;
       int  Length_ASP_Group_Info_Entry;
       char DDM_Conversation[10];
       char Job_Log_Output[10];
     /*char Reserved2[];*/       /* Varying length                 */
     /*char Initial_Lib_List[][11];*//* Varying length             */
     /*char Request_Data[];*/    /* Varying length                 */
     /*Qwd_Jobd_ASP_Group_List_t ASP_Groups[];*/ /* Varying length */
    } Qwd_JOBD0100_t;

#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(pop)       /* @B1A*/
#endif                       /* @B1A*/
 #endif
