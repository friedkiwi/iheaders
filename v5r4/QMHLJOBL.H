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
/* (C)Copyright IBM Corp.  1995, 2005                                */
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
 /* Header File Name: H/QMHLJOBL                                   */
 /*                                                                */
 /* Descriptive Name: List Job Log Messages API                    */
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
 /* Description: The List Job Log Messages list messages sent to   */
 /*              the job message queue of a job.                   */
 /*                                                                */
 /* Header Files Included:  None.                                  */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: Qmh_Ljobl_Input_t                              */
 /*                 Qmh_Ljobl_Header_t                             */
 /*                 Qmh_Ljobl_LJOB0100_t                           */
 /*                 Qmh_Ljobl_JSLT0100_t                           */
 /*                 Qmh_Ljobl_JSLT0200_t                           */
 /*                                                                */
 /* Function Prototype List: QMHLJOBL                              */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= D2862000     3D10  940424 RGARVEY : New Include           */
 /* $A1= D98871     v5r2m0  010902 LIGGETT:  Add microseconds      */
 /* $A2= D99895.1   v5r4m0  040801 LIGGETT:  Add thread ID         */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

 #ifndef QMHLJOBL_h
 #define QMHLJOBL_h
#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(P128)      /* @B1A*/
#endif                       /* @B1A*/

 /******************************************************************/
 /* Prototype for calling Message Handler API QMHLJOBL             */
 /******************************************************************/
#ifdef __ILEC400__
     #pragma linkage (QMHLJOBL,OS,nowiden)
#else
     extern "OS"
#endif
 void QMHLJOBL (char *,          /* Qualified user space name      */
                char *,          /* Format name                    */
                void *,          /* Message selection information  */
                int,             /* Size of message selection info */
                char *,          /* Format message selection info  */
                void *);         /* Error code                     */

 /******************************************************************/
 /* Type Definition for the input parameter section format for the */
 /* QMHLJOBL API.                                                  */
 /****                                                          ****/
 /* NOTE: The following type definition only defines the fixed     */
 /*       portion of the format.  The array of identifiers of      */
 /*       fields to return specified, and call message queue       */
 /*       specified are each varying length and immediately follow */
 /*       what is defined here.                                    */
 /******************************************************************/
 typedef _Packed struct Qmh_Ljobl_Input
    {
       char Userspace_Name[10];
       char Userspace_Library[10];
       char Format_Name[8];
       char Message_Selection[8];
       int  Size_Message_Selection;
       int  Max_Messages_Requested;
       char List_Direction[10];
       char Job_Name[10];
       char User_Profile[10];
       char Job_Number[6];
       char Internal_Job_Id[16];
       char Start_Message_Key[4];
       int  Max_Message_Length;
       int  Max_Message_Help_Length;
       int  Offset_Field_Id_Return;
       int  Number_Field_Return;
       int  Offset_Message_Queue;
       int  Length_Message_Queue;
       int  Coded_Character_Set_ID;
     /*char Reserved[];*/             /* varying length            */
     /*int  Id_Field_Return[];*/      /* varying length            */
     /*char Call_message_Queue[];*/   /*varying length             */
    } Qmh_Ljobl_Input_t;

 /******************************************************************/
 /* Type Definition for the header space format of the userspace   */
 /* for the QMHLJOBL API.                                          */
 /******************************************************************/
 typedef _Packed struct Qmh_Ljobl_Header
    {
       char Userspace_Name[10];
       char Userspace_Library[10];
       char Start_Message_Key[4];
       char End_Message_Key[4];
       char Job_Name_Used[10];
       char User_Profile_Used[10];
       char Job_Number_Used[6];
       char Reserved[2];
       int  Coded_Character_Set_ID;
    } Qmh_Ljobl_Header_t;


 /******************************************************************/
 /* Type Definition for the LJOB0100 repeating fields format in    */
 /* the userspace for the QMHLJOBL API.                            */
 /****                                                          ****/
 /* NOTE: The following type definition only defines the fixed     */
 /*       portion of the format.  The repeating fields returned    */
 /*       for each identifier field immediately follow what is     */
 /*       defined here.                                            */
 /******************************************************************/
 typedef _Packed struct Qmh_Ljobl_LJOB0100_Field
    {
       int  Offset_Next_Field;
       int  Length_Field_Return;
       int  Id_Field;
       char Type_Data[1];
       char Status_Data[1];
       char Reserved[14];
       int  Length_Data;
     /*char Data[];*/                 /* varying length            */
     /*char Reserved2[];*/            /* varying length            */
    } Qmh_Ljobl_LJOB0100_Field_t;


 /******************************************************************/
 /* Type Definition for the LJOB0100 format in the userspace for   */
 /* the QMHLJOBL API.                                              */
 /****                                                          ****/
 /* NOTE: The following type definition only defines the fixed     */
 /*       portion of the format.  The repeating fields returned    */
 /*       for each identifier field immediately follow what is     */
 /*       defined here.                                            */
 /******************************************************************/
 typedef _Packed struct Qmh_Ljobl_LJOB0100
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
       char Send_Date[7];
       char Send_Time[6];
       char Send_Time_Microseconds[6];                      /* @A1A*/
    char  Thread_ID[8];                                     /* @A2A*/
     /*char Reserved[];*/             /* varying length            */
     /*Qmh_Ljobl_LJOB0100_Field_t Element[];*/ /* varying length   */
    } Qmh_Ljobl_LJOB0100_t;


 /******************************************************************/
 /* Type Definition for the JSLT0100 format of the userspace for   */
 /* the QMHLJOBL API.                                              */
 /****                                                          ****/
 /* NOTE: The following type definition only defines the fixed     */
 /*       portion of the format.  The array of identifiers of      */
 /*       fields to return, and call message queue name are each   */
 /*       varying length and immediately follow what is defined.   */
 /******************************************************************/
 typedef _Packed struct Qmh_Ljobl_JSLT0100
    {
       int  Max_Messages_Requested;
       char List_Direction[10];
       char Qualified_Job_Name[10];
       char Qualified_User_Name[10];
       char Qualified_Job_Number[6];
       char Internal_Job_Id[16];
       char Starting_Message_Key[4];
       int  Length_Max_Message;
       int  Length_Max_Help;
       int  Offset_Field_Returned;
       int  Number_Field_Returned;
       int  Offset_Message_Name;
       int  Length_Message_Name;
     /*int  Id_Field_Return[];*/      /* Varying length            */
     /*char Call_Message_Queue[];*/   /* Varying length            */
    } Qmh_Ljobl_JSLT0100_t;

 /******************************************************************/
 /* Type Definition for the JSLT0200 format of the userspace for   */
 /* the QMHLJOBL API.                                              */
 /****                                                          ****/
 /* NOTE: The following type definition only defines the fixed     */
 /*       portion of the format.  The array of identifiers of      */
 /*       fields to return, and call message queue name are each   */
 /*       varying length and immediately follow what is defined    */
 /*                                                                */
 /******************************************************************/
 typedef _Packed struct Qmh_Ljobl_JSLT0200
    {
       int  Max_Messages_Requested;
       char List_Direction[10];
       char Qualified_Job_Name[10];
       char Qualified_User_Name[10];
       char Qualified_Job_Number[6];
       char Internal_Job_Id[16];
       char Starting_Message_Key[4];
       int  Length_Max_Message;
       int  Length_Max_Help;
       int  Offset_Field_Returned;
       int  Number_Field_Returned;
       int  Offset_Call_Message_Queue;
       int  Length_Message_Name;
       int  Coded_Character_Set_ID;
       int  Reserved;
     /*int  Id_Field_Return[];*/      /* varying length            */
     /*char Call_Message_Queue[];*/   /* varying length            */
    } Qmh_Ljobl_JSLT0200_t;

#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(pop)       /* @B1A*/
#endif                       /* @B1A*/
 #endif
