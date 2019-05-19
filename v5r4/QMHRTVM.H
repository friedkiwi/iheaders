 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QMHRTVM                                    */
 /*                                                                */
 /* Descriptive Name: Retrieve Message API.                        */
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
 /* Description: The Retrieve Message API retrieves the message    */
 /*              description of a predefined message.              */
 /*                                                                */
 /* Header Files Included: None.                                   */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: Qmh_Rtvm_RTVM0100_t                            */
 /*                 Qmh_Rtvm_RTVM0200_t                            */
 /*                 Qmh_Rtvm_RTVM0300_t                            */
 /*                 Qmh_Rtvm_RTVM0400_t                            */
 /*                                                                */
 /* Function Prototype List: QMHRTVM                               */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= D2862000     3D10  940424 RGARVEY : New Include           */
 /* $A1= D9805500 v5r1m0.xpf 000116 LIGGETT: RTVM0040 format       */
 /* $B1= D98212   v5r1m0.xpf 000116 LIGGETT: Teraspace             */
 /* $01= P9948688 v5r1m0f.xpf 010612 LIGGETT: Remove trailing      */
 /*                                           blanks               */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

 #ifndef QMHRTVM_h
 #define QMHRTVM_h
 #if (__OS400_TGTVRM__>=510)  /* @B1A*/
 #pragma datamodel(P128)      /* @B1A*/
 #endif                       /* @B1A*/

 /******************************************************************/
 /* Prototype for calling Message Handler API QMHRTVM              */
 /******************************************************************/
 #ifdef __ILEC400__
      #pragma linkage (QMHRTVM,OS,nowiden)
 #else
      extern "OS"
 #endif
 void QMHRTVM (void *,           /* Message information            */
               int,              /* Length of message information  */
               char *,           /* Format name                    */
               char *,           /* Message identifier             */
               void *,           /* Qualified message file name    */
               void *,           /* Message data                   */
               int,              /* Length of message data         */
               char *,           /* Replace substitution values    */
               char *,           /* Return format control          */
               void *,           /* Error Code                     */
               ...   );          /* Optional parameter group:
                                      Retrieve option
                                      Convert to CCSID
                                      Message data CCSID           */

 /******************************************************************/
 /* Type Definition for the RTVM0100 format.                       */
 /****                                                          ****/
 /* NOTE: The following type definition only defines the fixed     */
 /*       portion of the format.  Any varying length field will    */
 /*       have to be defined by the user.                          */
 /******************************************************************/
 typedef _Packed struct Qmh_Rtvm_RTVM0100
    {
       int  Bytes_Return;
       int  Bytes_Available;
       int  Length_Message_Returned;
       int  Length_Message_Available;
       int  Length_Help_Returned;
       int  Length_Help_Available;
     /*char Message[];*/         /* Varying length                 */
     /*char Message_Help[];*/    /* Varying length                 */
    } Qmh_Rtvm_RTVM0100_t;

 /******************************************************************/
 /* Type Definition for the RTVM0200 format.                       */
 /****                                                          ****/
 /* NOTE: The following type definition only defines the fixed     */
 /*       portion of the format.  Any varying length field will    */
 /*       have to be defined by the user.                          */
 /******************************************************************/
 typedef _Packed struct Qmh_Rtvm_RTVM0200
    {
       int  Bytes_Return;
       int  Bytes_Available;
       int  Message_Severity;
       int  Alert_Index;
       char Alert_Option[9];
       char Log_Indicator[1];
       char Reserved[2];
       int  Length_Reply_Returned;
       int  Length_Reply_Available;
       int  Length_Message_Returned;
       int  Length_Message_Available;
       int  Length_Help_Returned;
       int  Length_Help_Available;
     /*char Default_Reply[];*/   /* Varying length                 */
     /*char Message[];*/         /* Varying length                 */
     /*char Message_Help[];*/    /* Varying length                 */
    } Qmh_Rtvm_RTVM0200_t;


 /******************************************************************/
 /* Type Definition for the Substitution Variable Format.          */
 /****                                                          ****/
 /* NOTE: The following type definition only defines the fixed     */
 /*       portion of the format.  Any varying length field will    */
 /*       have to be defined by the user.                          */
 /******************************************************************/
 typedef _Packed struct Qmh_Subst_Variable_Format
    {
       int  Length_Subst_Replace_Data;
       int  Field_Size_Or_Decimal_Position;
       char Subst_Variable_Type[10];
    /* char Reserved[];*/        /* Varying length                 */
    } Qmh_Subst_Variable_Format_t;

 /******************************************************************/
 /* Type Definition for the Valid Reply Values Entry.              */
 /****                                                          ****/
 /* NOTE: The following type definition only defines the fixed     */
 /*       portion of the entry.  Any varying length field will     */
 /*       have to be defined by the user.                          */
 /******************************************************************/
 typedef _Packed struct Qmh_Valid_Reply_Entry
    {
       char Valid_Reply_Value[32];
     /*char Reserved[];*/        /* Varying length                 */
    } Qmh_Valid_Reply_Entry_t;

 /******************************************************************/
 /* Type Definition for the Special Values Entry.                  */
 /****                                                          ****/
 /* NOTE: The following type definition only defines the fixed     */
 /*       portion of the entry.  Any varying length field will     */
 /*       have to be defined by the user.                          */
 /******************************************************************/
 typedef _Packed struct Qmh_Special_Reply_Value_Entry
    {
     char From_Value[32];
     char To_Value[32];
     /*char Reserved[];*/        /* Varying length                 */
    } Qmh_Special_Reply_Value_Entry_t;


 /******************************************************************/
 /* Type Definition for the Relational Test Entry.                 */
 /****                                                          ****/
 /* NOTE: The following type definition only defines the fixed     */
 /*       portion of the entry.  Any varying length field will     */
 /*       have to be defined by the user.                          */
 /******************************************************************/
 typedef _Packed struct Qmh_Relational_Test_Entry
    {
       char Relational_Operator[10];
       char Reserved[2];
       int  Length_Relational_Value;
     /*char Relational_Value[];*/  /* Varying length               */
    } Qmh_Relational_Test_Entry_t;


 /******************************************************************/
 /* Type Definition for the Dump List Entry                        */
 /******************************************************************/
 typedef int Qmh_Dump_List_Entry_t;


 /******************************************************************/
 /* Type Definition for the RTVM0300 format.                       */
 /****                                                          ****/
 /* NOTE: The following type definition only defines the fixed     */
 /*       portion of the format.  Any varying length field will    */
 /*       have to be defined by the user.                          */
 /******************************************************************/
 typedef _Packed struct Qmh_Rtvm_RTVM0300
    {
       int  Bytes_Return;
       int  Bytes_Available;
       int  Message_Severity;
       int  Alert_Index;
       char Alert_Option[9];
       char Log_Indicator[1];
       char Message_ID[7];
       char Reserved[3];
       int  Number_Replace_Data_Formats;
       int  Text_CCSID_Convert_Status;
       int  Data_CCSID_Convert_Status;
       int  Text_CCSID_Returned;
       int  Offset_Reply_Text;
       int  Length_Reply_Returned;
       int  Length_Reply_Available;
       int  Offset_Message_Returned;
       int  Length_Message_Returned;
       int  Length_Message_Available;
       int  Offset_Help_Returned;
       int  Length_Help_Returned;
       int  Length_Help_Available;
       int  Offset_Formats;
       int  Length_Formats_Returned;
       int  Length_Formats_Available;
       int  Length_Format_Element;
     /*char Reserved2[];*/            /* Varying length            */
     /*char Default_Reply[];*/        /* Varying length            */
     /*char Message[];*/              /* Varying length            */
     /*char Message_Help[];*/         /* Varying length            */
     /*Qmh_Subst_Variable_Format_t Replace_Data_Formats[];*//*
                                         Varying length            */
    } Qmh_Rtvm_RTVM0300_t;

 /******************************************************************/
 /* Type Definition for the RTVM0400 format.                       */
 /****                                                          ****/
 /* NOTE: The following type definition only defines the fixed     */
 /*       portion of the format.  Any varying length field will    */
 /*       have to be defined by the user.                          */
 /******************************************************************/
 typedef _Packed struct Qmh_Rtvm_RTVM0400
    {
       int  Bytes_Return;
       int  Bytes_Available;
       int  Message_Severity;
       int  Alert_Index;
       char Alert_Option[9];
       char Log_Indicator[1];
       char Message_ID[7];
       char Reserved[3];
       int  Number_Replace_Data_Formats;
       int  Text_CCSID_Convert_Status;
       int  Data_CCSID_Convert_Status;
       int  Text_CCSID_Returned;
       int  Offset_Reply_Text;
       int  Length_Reply_Returned;
       int  Length_Reply_Available;
       int  Offset_Message_Returned;
       int  Length_Message_Returned;
       int  Length_Message_Available;
       int  Offset_Help_Returned;
       int  Length_Help_Returned;
       int  Length_Help_Available;
       int  Offset_Formats;
       int  Length_Formats_Returned;
       int  Length_Formats_Available;
       int  Length_Format_Element;
       char Reply_Type[10];
       char Reserved2[2];
       int  Maximum_Reply_Length;
       int  Maximum_Reply_Dec_Positions;
       int  Offset_Valid_Replies;
       int  Number_Valid_Replies;
       int  Length_Valid_Replies_Returned;
       int  Length_Valid_Replies_Available;
       int  Length_Valid_Reply_Entry;
       int  Offset_Special_Value;
       int  Number_Special_Value;
       int  Length_Special_Value_Returned;
       int  Length_Special_Value_Available;
       int  Length_Special_Value_Entry;
       int  Offset_Lower_Range;
       int  Length_Lower_Range_Returned;
       int  Length_Lower_Range_Available;
       int  Offset_Upper_Range;
       int  Length_Upper_Range_Returned;
       int  Length_Upper_Range_Available;
       int  Offset_Rel_Test;
       int  Length_Rel_Test_Returned;
       int  Length_Rel_Test_Available;
       char Message_Creation_Date[7];
       char Reserved3;
       int  Message_Creation_Level;
       char Message_Modification_Date[7];
       char Reserved4;
       int  Message_Modification_Level;
       int  Stored_Message_CCSID;
       int  Offset_Dump_List;
       int  Number_Dump_List_Entries;
       int  Length_Dump_List_Returned;
       int  Length_Dump_List_Available;
       char Default_Program_Name[10];
       char Default_Program_Library[10];
     /*char Reserved4[];*/            /* Varying length            */
     /*char Default_Reply[];*/        /* Varying length            */
     /*char Message[];*/              /* Varying length            */
     /*char Message_Help[];*/         /* Varying length            */
     /*Qmh_Subst_Variable_Format_t Replace_Data_Formats[];*//*
                                         Varying length            */
     /*Qmh_Valid_Reply_Entry_t Valid_Reply_Entries[];*//*
                                         Varying length            */
     /*Qmh_Special_Reply_Value_Entry_t
       Special_Reply_Value_Entries[];*//*
                                         Varying length            */
     /*char Lower_Range_Value[];*/    /* Varying length            */
     /*char Upper_Range_Value[];*/    /* Varying length            */
     /*Qmh_Relational_Test_Entry_t Relational_Test_Entry[];*//*
                                         Varying length            */
     /*Qmh_Dump_List_Entry_t;*/       /* Varying length            */
    } Qmh_Rtvm_RTVM0400_t;

 #if (__OS400_TGTVRM__>=510)  /* @B1A*/
 #pragma datamodel(pop)       /* @B1A*/
 #endif                       /* @B1A*/

 #endif
