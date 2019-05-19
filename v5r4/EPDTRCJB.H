 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/EPDTRCJB                                   */
 /*                                                                */
 /* Descriptive Name: Trace Job Exit Program                       */
 /*                                                                */
 /* 5763-SS1, 5722-SS1  (C) Copyright IBM Corp. 1994,2001          */
 /* All rights reserved.                                           */
 /* US Government Users Restricted Rights -                        */
 /* Use, duplication or disclosure restricted                      */
 /* by GSA ADP Schedule Contract with IBM Corp.                    */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /*                                                                */
 /* Description: The Trace Job command calls a user-written program*/
 /*              , if one was specified on the Trace Job (TRCJOB)  */
 /*              command.                                          */
 /*                                                                */
 /* Header Files Included: None                                    */
 /*                                                                */
 /* Macros List: None                                              */
 /*                                                                */
 /* Structure List: Qsc_Trace_Record_Format_t                      */
 /*                 Qsc_Program_Flow_Trace_Data_t                  */
 /*                 Qsc_Data_Trace_Data_t                          */
 /*                 Qsc_DataManagement_Trace_Data_t                */
 /*                 Qsc_MessageHandler_Trace_Data_t                */
 /*                 Qsc_CmdAnalyzer_Trace_Data_t                   */
 /*                 Qsc_Other_Trace_Data_t                         */
 /*                 Qsc_Suspend_Trace_Data_t                       */
 /*                 Qsc_Resume_Trace_Data_t                        */
 /*                                                                */
 /* Function Prototype List: None.                                 */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   DEPT/PGMR CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= P3954178     3D10  940513 543/LUONG :New Include          */
 /* $A1= P3981592     3D60  950213 543/ROCH  :Changes for DCR 91834*/
 /* $A2= P9934931    v5r1m0 001009     ROCH  :Teraspace Stage II   */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /******************************************************************/

 #ifndef EPDTRCJB_h
 #define EPDTRCJB_h

  #if(__OS400_TGTVRM__>=510)                               /*@A2A*/
     #pragma datamodel(P128)                               /*@A2A*/
  #endif                                                   /*@A2A*/

 /******************************************************************/
 /* Record structure for program flow trace record data            */
 /******************************************************************/
 typedef _Packed struct Qsc_Program_Flow_Trace_Data {
      char   Program_Flow_Type;
      char   Time_Stamp[8];
      char   Program_Name[10];
      char   Program_Library_Name[10];
      short  Call_Stack_Counter;
      short  Number_Deleted_Records;
      char   New_Instruction_Number[2];
      char   Old_Instruction_number[2];
      char   CPU_Time_Used[4];
      int    Number_DatabasePages_Read;
      int    Number_NonDatabasePages_Read;
      int    Number_Pages_Written;
      short  Number_Transfer_To_Wait_State;
      char   ILE_Module_Name[10];
      char   ILE_Module_LibraryName[10];
      char   Procedure_Name[256];
      int    OffsetToLongProcedureName;
      int    LongProcedureNameLength;
    /*char   LongProcedure_Name[];*/         /* Varying Length      */
 } Qsc_ProgramFlow_TraceData_t;

 /*******************************************************************/
 /* Record structure for data management trace record data          */
 /*******************************************************************/
 typedef _Packed struct Qsc_DataManagement_Trace_Data {
      char   Data_Source;
      char   Time_Stamp[8];
      char   Internal_File_Name[10];
      char   Actual_File_Name[10];
      char   Actual_File_Library_Name[10];
      char   Device_Description_Name[10];
      char   Program_Device_Name[10];
 } Qsc_DataMgmt_TraceData_t;

 /*******************************************************************/
 /* Record structure for message handler trace record data          */
 /*******************************************************************/
 typedef _Packed struct Qsc_MessageHandler_Trace_Data {
      char   Data_Source;
      char   Time_Stamp[8];
      char   Trace_Record_Type;
      char   Message_Identifier[7];
      char   Message_Type;
      short  Message_Severity;
      char   Message_Queue_Name[10];
      short  Call_Stack_Number;
      char   Procedure_Name[256];
      char   ILE_Module_Name[10];
      char   ILE_Module_Library_Name[10];
      char   Message_Queue_Type;
      char   Reserved1[2];
      int    OffsetToLongProcedureName;
      int    LongProcedureNameLength;
    /*char   LongProcedure_Name[];*/         /* Varying Length      */
 } Qsc_MsgHandler_TraceData_t;

 /*******************************************************************/
 /* Record structure for command analyzer trace record data         */
 /*******************************************************************/
 typedef _Packed struct Qsc_CmdAnalyzer_Trace_Data {
      char   Data_Source;
      char   Time_Stamp[8];
      char   Command_Name[10];
      char   Command_Library_Name[10];
      char   CmdProcessing_ProgramName[10];
      char   CmdProcessing_ProgramLibName[10];
 } Qsc_CmdAnalyzer_TraceData_t;

 /*******************************************************************/
 /* Record structure for other trace record data                    */
 /*******************************************************************/
 typedef _Packed struct Qsc_Other_Trace_Data {
      char   Data_Source;
      char   Time_Stamp[8];
      char   Data[300];
 } Qsc_Other_TraceData_t;

 /*******************************************************************/
 /* Record structure for data trace record data                     */
 /*******************************************************************/
 typedef _Packed struct Qsc_Data_Trace_Data {
      union {
              Qsc_DataMgmt_TraceData_t
                  Data_Management_Trace_Data;
              Qsc_MsgHandler_TraceData_t
                  Message_Handler_Trace_Data;
              Qsc_CmdAnalyzer_TraceData_t
                  Command_Analyzer_Trace_Data;
              Qsc_Other_TraceData_t
                  Other_Trace_Data;
            } Data_Trace_Data_Categories;
 } Qsc_Data_TraceData_t;


 /*******************************************************************/
 /* Record structure for suspend trace record data                  */
 /*******************************************************************/
 typedef _Packed struct Qsc_Suspend_Trace_Data {
      char   Data_Source;
      char   Time_Stamp[8];
 } Qsc_Suspend_TraceData_t;

 /*******************************************************************/
 /* Record structure for resume trace record data                   */
 /*******************************************************************/
 typedef _Packed struct Qsc_Resume_Trace_Data {
      char   Data_Source;
      char   Time_Stamp[8];
 } Qsc_Resume_TraceData_t;

 /*******************************************************************/
 /* Record structure for trace record format                        */
 /*******************************************************************/
 typedef _Packed struct Qsc_Trace_Record_Format {
      char  Trace_Record_Type;
      union {
              Qsc_ProgramFlow_TraceData_t
                  Program_Flow_Trace_Data;
              Qsc_Data_TraceData_t
                  Data_Trace_Data;
              Qsc_Suspend_TraceData_t
                  Suspend_Trace_Data;
              Qsc_Resume_TraceData_t
                  Resume_Trace_Data;
            } Trace_Record_Data;
 } Qsc_Trace_Record_Format_t;

  #if (__OS400_TGTVRM__>=510)                              /*@A1A*/
     #pragma datamodel(pop)                                /*@A1A*/
  #endif                                                   /*@A1A*/

 #endif
