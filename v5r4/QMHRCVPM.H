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
/* (C)Copyright IBM Corp.  1994, 2003                                */
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
 /* Header File Name: QMHRCVPM                                     */
 /*                                                                */
 /* Descriptive Name: Receive Program Message.                     */
 /*                                                                */
 /* Description: The Receive Program Message API receives a message*/
 /*              from a call message queue or external message     */
 /*              queue and returns information describing the      */
 /*              message.                                          */
 /*                                                                */
 /* Header Files Included: None.                                   */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: Qmh_Rcvpm_RCVM0100_t                           */
 /*                 Qmh_Rcvpm_RCVM0200_t                           */
 /*                 Qmh_Rcvpm_RCVM0300_5                           */
 /*                 Qmh-Rcvpm_Sender_t                             */
 /*                                                                */
 /* Function Prototype List: QMHRCVPM                              */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON    LEVEL  DATE   PGMR      CHANGE DESCRIPTION      */
 /* ---- --------- ------ ------ --------- ----------------------- */
 /* $A0= D2862000  v3r1m0 940424 ROCH:     New Include             */
 /* $A1= D91766    v3r6m0 950215 ROCH:     Support long sending/   */
 /*                                        receiving names on the  */
 /*                                        sender information      */
 /*                                        returned by RCVM0300.   */
 /* $A2= D98871    v5r2m0 010902 ROCH:     Add microseconds        */
 /* $A3= D99526    v5r3m0 030131 ROCH:     Add actual user name    */
 /* $B2= D9931502  v5r3m0 030430 ROCH:     Document optional parm  */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

 #ifndef QMHRCVPM_h
 #define QMHRCVPM_h
#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(P128)      /* @B1A*/
#endif                       /* @B1A*/

 /******************************************************************/
 /* Prototype for calling Message Handler API QMHRCVPM             */
 /******************************************************************/
#ifdef __ILEC400__
     #pragma linkage(QMHRCVPM,OS,nowiden)
#else
     extern "OS"
#endif
 void QMHRCVPM (void *,          /* Message information            */
                int,             /* Length of message information  */
                char *,          /* Format name                    */
                void *,          /* Call stack entry               */
                int,             /* Call stack counter             */
                char *,          /* Message type                   */
                void *,          /* Message key                    */
                int,             /* Wait time                      */
                char *,          /* Message action                 */
                void *,          /* Error code                     */
                ...);            /* Group 1 Optionals:
                                       Length of call stack entry.
                                       Call stack entry
                                          qualification.
                                    Group 2 Optionals:
                                       Call stack entry data type.
                                       Coded Character Set Id.
                                    Group 3 Optionals:
                                       Allow default reply rejection.
                                                               @B2A*/


 /******************************************************************/
 /* Type Definition for the RCVM0100 format.                       */
 /****                                                          ****/
 /* NOTE: The following type definition only defines the fixed     */
 /*       portion of the format.  Any varying length field will    */
 /*       have to be defined by the user.                          */
 /******************************************************************/
 typedef _Packed struct Qmh_Rcvpm_RCVM0100
    {
       int  Bytes_Returned;
       int  Bytes_Available;
       int  Message_Severity;
       char Message_Id[7];
       char Message_Type[2];
       char Message_Key[4];
       char Reserved[7];
       int  CCSID_Convert_Status;
       int  CCSID_Returned;
       int  Data_Returned;
       int  Data_Available;
     /*char Message_Data[];*/     /* Varying length                */
    } Qmh_Rcvpm_RCVM0100_t;

 /******************************************************************/
 /* Type Definition for the RCVM0200 format.                       */
 /****                                                          ****/
 /* NOTE: The following type definition only defines the fixed     */
 /*       portion of the format.  Any varying length field will    */
 /*       have to be defined by the user.                          */
 /******************************************************************/
 typedef _Packed struct Qmh_Rcvpm_RCVM0200
    {
       int  Bytes_Returned;
       int  Bytes_Available;
       int  Message_Severity;
       char Message_Id[7];
       char Message_Type[2];
       char Message_Key[4];
       char Message_File_Name[10];
       char Message_File_Library[10];
       char Message_Library_Used[10];
       char Send_Job[10];
       char Send_User_Profile[10];      /* User name from qualified
                                           job name.          @A3C*/
       char Send_Job_Number[6];
       char Send_Program_Name[12];
       char Send_Instruction_Num[4];
       char Send_Date[7];
       char Send_Time[6];
       char Receive_Program_Name[10];
       char Receive_Instruction_Num[4];
       char Send_Type[1];
       char Receive_Type[1];
       char Reserved[1];
       int  Text_CCSID_Convert_Status;
       int  Data_CCSID_Convert_Status;
       char Alert_Option[9];
       int  Text_CCSID_Returned;
       int  Data_CCSID_Returned;
       int  Length_Data_Returned;
       int  Length_Data_Available;
       int  Length_Message_Returned;
       int  Length_Message_Available;
       int  Length_Help_Returned;
       int  Length_Help_Available;
     /*char Message_Text[];*/     /* Varying length                */
     /*char Message[];*/          /* Varying length                */
     /*char Message_Help[];*/     /* Varying length                */
    } Qmh_Rcvpm_RCVM0200_t;

 /******************************************************************/
 /* Type Definition for the RCVM0300 format.                       */
 /****                                                          ****/
 /* NOTE: The following type definition only defines the fixed     */
 /*       portion of the format.  Any varying length field will    */
 /*       have to be defined by the user.                          */
 /******************************************************************/
 typedef _Packed struct Qmh_Rcvpm_RCVM0300
    {
       int  Bytes_Returned;
       int  Bytes_Available;
       int  Message_Severity;
       char Message_Id[7];
       char Message_Type[2];
       char Message_Key[4];
       char Message_File_Name[10];
       char Message_File_Library[10];
       char Message_Library_Used[10];
       char Alert_Option[9];
       int  Text_CCSID_Convert_Status;
       int  Data_CCSID_Convert_Status;
       int  Text_CCSID_Returned;
       int  Data_CCSID_Returned;
       int  Length_Data_Returned;
       int  Length_Data_Available;
       int  Length_Message_Returned;
       int  Length_Message_Available;
       int  Length_Help_Returned;
       int  Length_Help_Available;
       int  Length_Send_Returned;
       int  Length_Send_Available;
     /*char Message_Text[];*/     /* Varying length                */
     /*char Message[];*/          /* Varying length                */
     /*char Message_Help[];*/     /* Varying length                */
     /*char Send_Information[];*/ /* Varying length                */
    } Qmh_Rcvpm_RCVM0300_t;

 /******************************************************************/
 /* Type Definition for the senders information returned by        */
 /* the RCVM0300 format.                                           */
 /******************************************************************/
 typedef _Packed struct Qmh_Rcvpm_Sender
    {
       char Send_Job[10];
       char Send_User_Profile[10];      /* User name from qualified
                                           job name.          @A3C*/
       char Send_Job_Number[6];
       char Send_Date[7];
       char Send_Time[6];
       char Send_Type[1];
       char Receive_Type[1];
       char Send_Program_Name[12];
       char Send_Module_Name[10];
       char Send_Procedure_Name[256];
       char Reserved[1];
       int  Send_Statements_Available;
       char Send_Statements[30];
       char Receive_Program_Name[10];
       char Receive_Module_Name[10];
       char Receive_Procedure_Name[256];
       char Reserved2[10];
       int  Receive_Statements_Available;
       char Receive_Statements[30];
       char Reserved3[2];
       int  Displacement_Long_Snd_Pgm;
       int  Length_Long_Snd_Pgm;
       int  Displacement_Long_Snd_Proc;
       int  Length_Long_Snd_Proc;
       int  Displacement_Long_Rcv_Proc;
       int  Length_Long_Rcv_Proc;
       char Send_Time_Microseconds[6];                      /* @A2A*/
       char Send_User_Name[10];        /* Actual sending user  @A3A*/
     /*char Reserved4[];*/                       /* Varying length */
     /*char Long_Snd_Pgm[];*/                    /* Varying length */
     /*char Long_Snd_Proc[];*/                   /* Varying length */
     /*char Long_Rcv_Proc[];*/                   /* Varying length */
    } Qmh_Rcvpm_Sender_t;

#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(pop)       /* @B1A*/
#endif                       /* @B1A*/

 #endif
