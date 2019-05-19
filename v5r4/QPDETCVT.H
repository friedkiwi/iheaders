/* begin_generated_IBM_copyright_prolog                              */
/* This is an automatically generated copyright prolog.              */
/* After initializing,  DO NOT MODIFY OR MOVE                        */
/* ----------------------------------------------------------------- */
/*                                                                   */
/* Product(s):                                                       */
/*     5722-SS1                                                      */
/*                                                                   */
/* (C)Copyright IBM Corp.  2005, 2005                                */
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
/* Header File Name: QPDETCVT                                     */
/*                                                                */
/* Descriptive Name: Convert Format Of Service Information API    */
/*                                                                */
/* Description: This include describes the data input to the      */
/* conversion routine for converting a message or a LIC Log to an */
/* XML object.                                                    */
/*                                                                */
/* Header Files Included: None                                    */
/*                                                                */
/* Macros List: None                                              */
/*                                                                */
/* Structure List: Qpdet_CVTR0100                                 */
/*                 Qpdet_CVTS0100                                 */
/*                 Qpdet_CVTS0200                                 */
/*                 Qpdet_CVTS0300                                 */
/*                 Qpdet_CVTS0400                                 */
/*                                                                */
/* Function Prototype List:QPDETCVT.                              */
/*                                                                */
/* Change Activity:                                               */
/* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
/* ---- ----------- -----  ------ --------- ----------------------*/
/* $A0= D93040      v5r4m0 052404           New part              */
/* End Change Activity.                                           */
/******************************************************************/

#ifndef qpdetcvt_h
#define qpdetcvt_h

#if (__OS400_TGTVRM__>=510)
    #pragma datamodel(P128)
#endif

#ifdef  __ILEC400__
   #pragma linkage(QPDETCVT,OS,nowiden)
#else
   extern "OS"
#endif
void QPDETCVT (void *, /* Receiver Variable                */
               int,    /* Length Of Receiver Variable      */
               void *,  /* FormatOf Receiver Variable       */
               void *,  /* InformationTo Convert            */
               void * , /* Format O f Information ToConvert */
               void*   /* Error code   */
               );

/******************************************************************/
/* Format for receiver variable                                   */
/******************************************************************/
typedef _Packed struct  Qpdet_CVTR0100{
      int  Bytes_Returned;
      int  Bytes_Available;
      int  XML_Data_Length;
/*      char XML_Data[]; */
} Qpdet_CVTR0100t;

/******************************************************************/
/* Convert Format Of Service Information called with LIC Log data */
/* This structure is filled in with what LIC Log data is          */
/* available.  The data available will vary depending on the      */
/* the source of the LIC Log.                                     */
/******************************************************************/
typedef _Packed struct  Qpdet_CVTS0100{
     int    Length_of_Watch_Information;
     char   Liclog_Major_Code[4];
     char   Liclog_Minor_Code[4];
     char   Liclog_Identifier[8];
     char   Liclog_Timestamp[8];
     char   Liclog_TDE_Number[8];
     char   Task_Name[16];
     char   Server_Type[30];
     char   Exception_ID[2];
     char   LIC_Job_Name[10];
     char   LIC_User_Name[10];
     char   LIC_Job_Number[6];
     char   Reserved[4];
     char   Thread_ID[8];
     char   Liclog_Mod_Comp_Bin_Timestamp[8];
     char   Liclog_Module_Offset[8];
     char   Liclog_Module_RU_Name[8];
     char   LIC_Module_Name[48];
     char   LIC_Module_Entry_Point_Name[128];
     char   Reserved1[2];
     int    Offset_To_Comparison_Data;
     int    Length_Of_Comparison_Data;
     char   Liclog_Comparison_Data[];
    } Qpdet_CVTS0100t;

/******************************************************************/
/* Convert Format Of Service Information called with watch        */
/* message data. This structure is filled in with what message    */
/* data is available.                                             */
/******************************************************************/
typedef _Packed struct  Qpdet_CVTS0200{
     int   Length_of_Watch_Information;
     char  Message_Identifier[7];
     char  Reserved[1];
     char  To_Message_Queue_Name[10];
     char  To_Message_Queue_Lib[10];
     char  Job_Name[10];
     char  Job_User_Name[10];
     char  Job_Number[6];
     char  Reserved1[4];
     char  Sending_Program_Name[256];
     char  Sending_Module_Name[10];
     int   Offset_Sending_Proc_Name;
     int   Length_Sending_Proc_Name;
     char  Receiving_Program_Name[10];
     char  Receiving_Module_Name[10];
     int   Offset_Receiving_Proc_Name;
     int   Length_Receiving_Proc_Name;
     int   Message_Severity;
     char  Message_Type[10];
     char  Message_Timestamp[8];
     char  Message_Key[4];
     char  Message_File_Name[10];
     char  Message_File_Library_Name[10];
     char  Reserved2[2];
     int   Offset_to_Comparison_Data;
     int   Length_of_Comparison_Data;
     char  Compare_Against[10];
     char  Reserved3[2];
     int   Comparison_Data_CCSID;
     int   Offset_Where_Comparison_Found;
     int   Offset_Replacement_Data;
     int   Length_Replacement_Data;
     int   Replacement_Data_CCSID;
     char  Sending_Procedure_Name[];
     char  Receiving_Procedure_Name[];
     char  Message_Comparison_Data[];
     char  Message_Replacement_Data[];
 } Qpdet_CVTS0200t;

/******************************************************************/
/* Convert Format Of Service Information called with QGYOLMSG     */
/* API  message data . This structure is filled in with what      */
/* message data is available.                                     */
/******************************************************************/
typedef _Packed struct  Qpdet_CVTS0300_Msg{
      int   Displacement_Next_Entry;
      int   Displacement_Fields_Returned;
      int   Number_Fields_Returned;
      int   Message_Severity;
      char  Message_Identifier[7];
      char  Message_Type[2];
      char  Message_Key[4];
      char  Message_File_Name[10];
      char  Message_File_Library[10];
      char  Message_Queue[10];
      char  Message_Queue_Library[10];
      char  Date_Sent[7];
      char  Time_Sent[6];
      char  Micro_Seconds[6];
    /*char  Reserved[];*/
} Qpdet_CVTS0300_Msg_t;

 typedef _Packed struct  Qpdet_CVTS0300_Field{
   int  Displacement_Next_Field;
   int  Length_Of_Field;
   int  Identifier_Field;
   char Type_Of_Data[1];
   char Status_Of_Data[1];
   char Reserved[14];
   int  Length_Of_Data;
   char Data[];
 /*char Reserved2[]; */
} Qpdet_CVTS0300_Field_t;

typedef  _Packed struct Qpdet_CVTS0300{
     int Length_Of_Fixed_Header;
     int Offset_To_First_Message;
     int Number_Of_Messages;
   /*Qpdet_CVTS0300_Msg Message[];*/
   /*Qpdet_CVTS0300_Field Fields[];*/
} Qpdet_CVTS0300_t;


/******************************************************************/
/* Convert Format Of Service Information called with QGYOLJBL     */
/* API  message data. This structure is filled in with what is    */
/* message data available.                                        */
/******************************************************************/
typedef _Packed struct  Qpdet_CVTS0400_Msg{
      int  Displacement_Next_Entry;
      int  Displacement_Fields;
      int  Number_Fields;
      int  Message_Severity;
      char Message_Identifier[7];
      char Message_Type[2];
      char Message_Key[4];
      char Message_File_Name[10];
      char Message_File_Library[10];
      char Date_Sent[7];
      char Time_Sent[6];
      char Microseconds[6];
    /*char Reserved[]; */
} Qpdet_CVTS0400_Msg_t;

   typedef _Packed struct  Qpdet_CVTS0400_Fields{
    int  Displacement_to_Next_Field;
    int  Length_of_Field_Information;
    int  Identifier_Field;
    char Type_of_Data[1];
    char Status_of_Data[1];
    char Reserved2[14];
    int  Length_of_Data;
    char Data[];
} Qpdet_CVTS0400_Fields_t;

typedef  _Packed struct Qpdet_CVTS0400{
   int  Length_Of_Fixed_Header;
   int  Offset_To_First_Message;
   int  Number_Of_Messages;
   char Job_Name[10];
   char Job_User_Name[10];
   char Job_Number[6];
 /*Qpdet_CVTS0400_Msg Message[];*/
 /*Qpdet_CVTS0400_Fields Fields[];*/
} Qpdet_CVTS0400_t;


#if (__OS400_TGTVRM__>=510)
 #pragma datamodel(pop)
#endif

#endif
