 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QMHLSTM                                    */
 /*                                                                */
 /* Descriptive Name: List Nonprogram Messages.                    */
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
 /* Description: The List Nonprogram Messages API lists messages   */
 /*              from one or two nonprogram message queues.        */
 /*                                                                */
 /* Header Files Included: None.                                   */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: Qmh_Lstm_Input_t                               */
 /*                 Qmh_Lstm_Header_t                              */
 /*                 Qmh_Lstm_LSTM0100_Field_t                      */
 /*                 Qmh_Lstm_LSTM0100_t                            */
 /*                 Qmh_Lstm_MSLT0100_t                            */
 /*                 Qmh_Lstm_MSLT0200_t                            */
 /*                                                                */
 /* Function Prototype List: QMHLSTM                               */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= D2862000     3D10  940424 RGARVEY : New Include           */
 /* $A1= D9465800     3D70  960509 LMcCrea : Add Date and Time     */
 /*                                          Selection criteria    */
 /* $A2= D98871     v5r2m0  010902 LIGGETT:  Add microseconds      */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

 #ifndef QMHLSTM_h
 #define QMHLSTM_h
#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(P128)      /* @B1A*/
#endif                       /* @B1A*/

 /******************************************************************/
 /* Prototype for calling Message Handler API QMHLSTM              */
 /******************************************************************/
#ifdef __ILEC400__
     #pragma linkage(QMHLSTM,OS,nowiden)
#else
     extern "OS"
#endif
 void QMHLSTM (char *,           /* Qualified user space name      */
               char *,           /* Format name                    */
               void *,           /* Message selection information  */
               int,              /* Size of message selection info */
               char *,           /* Format message selection info  */
               void *);          /* Error code                     */

 /******************************************************************/
 /* Type Definition for the input parameter section of the user-   */
 /* space.                                                         */
 /****                                                          ****/
 /* NOTE: The following type definition only defines the fixed     */
 /*       portion of the format.  The array of identifiers of      */
 /*       fields to return specified, and call message queue       */
 /*       specified are each varying length and immediately follow */
 /*       what is defined here.                                    */
 /******************************************************************/
 typedef _Packed struct Qmh_Lstm_Input
    {
       char Userspace_Name[10];
       char Userspace_Library[10];
       char Format_Name[8];
       char Message_Selection[8];
       int  Size_Message_Selection;
       int  Max_Messages_Requested;
       char List_Direction[10];
       char Selection_Criteria[10];
       int  Severity_Criteria;
       int  Max_Message_Length;
       int  Max_Message_Help_Length;
       int  Offset_Message_Name;
       int  Offset_Message_Key;
       int  Number_Message_Queue;
       int  Offset_Field_Return;
       int  Number_Field_Return;
       int  Coded_Character_Set_ID;
       char Date_Time_Criteria[13];                         /* @A1A*/
     /*char Reserved[];*/           /* Varying length              */
     /*char Message_Queue_Name[];*/ /* Varying length              */
     /*char Start_Message_Key[4];*/ /* Varying length              */
     /*int  Id_Field_Return[];*/    /* Varying length              */
    } Qmh_Lstm_Input_t;


 /******************************************************************/
 /* Type Definition for the header section.                        */
 /****                                                          ****/
 /* NOTE: The following type definition only defines the fixed     */
 /*       portion of the format.  The repeating fields returned    */
 /*       for each identifier field immediately follow what is     */
 /*       defined here.                                            */
 /******************************************************************/
 typedef _Packed struct Qmh_Lstm_Header
    {
       char Userspace_Name[10];
       char Userspace_Library[10];
       int  Offset_Message_Queue_Name;
       int  Offset_Start_Message_Key;
       int  Offset_End_Message_Key;
       int  Number_Message_Queue_Used;
       int  Coded_Character_Set_ID;
       char Date_Time_First_Msg[13];                        /* @A1A*/
       char Date_Time_Last_Msg[13];                         /* @A1A*/
     /*char Reserved[];*/               /* Varying length          */
     /*char Message_Queue_Name[][20];*/ /* Varying length          */
     /*char Start_Message_Key[][4];*/   /* Varying length          */
     /*char End_Message_Key[][4];*/     /* Varying length          */
    } Qmh_Lstm_Header_t;


 /******************************************************************/
 /* Type Definition for the LJOB0100 repeating fields format.      */
 /****                                                          ****/
 /* NOTE: The following type definition only defines the fixed     */
 /*       portion of the format.  The repeating fields returned    */
 /*       for each identifier field immediately follow what is     */
 /*       defined here.                                            */
 /******************************************************************/
 typedef _Packed struct Qmh_Lstm_LSTM0100_Field
    {
       int  Offset_Next_Field;
       int  Length_Field_Return;
       int  Id_Field;
       char Type_Data[1];
       char Status_Data[1];
       char Reserved[14];
       int  Length_Data;
     /*char Data[];*/                 /* Varying length            */
     /*char Reserved2[];*/            /* Varying length            */
    } Qmh_Lstm_LSTM0100_Field_t;


 /******************************************************************/
 /* Type Definition for the LSTM0100 format.                       */
 /****                                                          ****/
 /* NOTE: The following type definition only defines the fixed     */
 /*       portion of the format.  The repeating fields returned    */
 /*       for each identifier field immediately follow what is     */
 /*       defined here.                                            */
 /******************************************************************/
 typedef _Packed struct Qmh_Lstm_LSTM0100
    {
       int  Offset_Next_Entry;
       int  Offset_Field_Returned;
       int  Number_Field_Returned;
       int  Message_Severity;
       char Message_Id[7];
       char Message_Type[2];
       char Message_Key[4];
       char Message_File_Name[10];
       char Message_File_Send_Library[10];
       char Message_Queue_Name[10];
       char Message_Queue_Library[10];
       char Send_Date[7];
       char Send_Time[6];
       char Send_Time_Microseconds[6];                      /* @A2A*/
     /*char Reserved[];*/               /* Varying length          */
     /*Qmh_Lstm_LSTM0100_Field_t LSTM0100_Field[];*/ /* Varying
                                           length                  */
    } Qmh_Lstm_LSTM0100_t;


 /******************************************************************/
 /* Type Definition of the MSLT0100 format.                        */
 /****                                                          ****/
 /* NOTE: The following type definition only defines the fixed     */
 /*       portion of the format.  The array of identifiers of      */
 /*       fields to return, and call message queue name are each   */
 /*       varying length and immediately follow what is defined.   */
 /******************************************************************/
 typedef _Packed struct Qmh_Lstm_MSLT0100
    {
       int  Max_Messages_Requested;
       char List_Direction[10];
       char Selection_Criteria[10];
       int  Severity_Criteria;
       int  Max_Message_Length;
       int  Max_Message_Help_Length;
       int  Offset_Message_Queue_Name;
       int  Offset_Start_Message_Key;
       int  Number_Message_Queues;
       int  Offset_Field_Return;
       int  Number_Field_Return;
     /*char Message_Queue_Name[][20];*/ /* Varying length          */
     /*char Start_Message_Key[][4];*/   /* Varying length          */
     /*int  Id_Field_Return[];*/        /* Varying length          */
    } Qmh_Lstm_MSLT0100_t;

 /******************************************************************/
 /* Type Definition of the MSLT0200 format.                        */
 /****                                                          ****/
 /* NOTE: The following type definition only defines the fixed     */
 /*       portion of the format.  The array of identifiers of      */
 /*       fields to return, and call message queue name are each   */
 /*       varying length and immediately follow what is defined.   */
 /******************************************************************/
 typedef _Packed struct Qmh_Lstm_MSLT0200
    {
       int  Max_Messages_Requested;
       char List_Direction[10];
       char Selection_Criteria[10];
       int  Severity_Criteria;
       int  Max_Message_Length;
       int  Max_Message_Help_Length;
       int  Offset_Message_Queue_Name;
       int  Offset_Start_Message_Key;
       int  Number_Message_Queues;
       int  Offset_Field_Return;
       int  Number_Field_Return;
       int  Coded_Character_Set_ID;
       char Date_Time_Criteria[13];                         /* @A1A*/
       char Alignment_Fill[3];                              /* @A1A*/
       int  Reserved;
     /*char Message_Queue_Name[][20];*/ /* varying length          */
     /*char Start_Message_Key[][4]; */  /* varying length          */
     /*int  Id_Field_Return[]; */       /* varying length          */
    } Qmh_Lstm_MSLT0200_t;

#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(pop)       /* @B1A*/
#endif                       /* @B1A*/
 #endif
