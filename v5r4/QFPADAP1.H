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
 /******************************************************************/
 /*                                                                */
 /* WARNING:          This macro/include is a CUE.                 */
 /*                   This macro/include provides an interface     */
 /*                   that is externally documented to customers   */
 /*                   or is function that any user could create.   */
 /*                   Any changes to this part MUST be upward      */
 /*                   compatible at compile and run time.          */
 /*                   This interface may be generated as in-line   */
 /*                   code in customer programs.                   */
 /*                                                                */
 /*                   CSTATUS:  OT                                 */
 /*                                                                */
 /******************************************************************/
 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QFPADAP1                                   */
 /*                                                                */
 /* Descriptive Name: Monitored Resource Entry (MRE) APIs          */
 /*                                                                */
 /*                                                                */
 /*                                                                */
 /******************************************************************/
 /* Description: The Retrieve Monitored Resource Info              */
 /*              (QfpadRtvMonitoredResourceInfo) API lists         */
 /*                                 monitored resource information.*/
 /*              - Qfpad_DENR0100 - Basic monitored resource info. */
 /*              - Qfpad_DENR0200 - Detail monitored resource info.*/
 /*              - Qfpad_EENT0100 - Monitored resource input       */
 /*                                information.                    */
 /*              - Qfpad_SRVI0100 - Server information.            */
 /******************************************************************/
 /* Description: Add Monitored Resource Entry                      */
 /*              (QfpadAddMonitoredResourceEntry) API adds a       */
 /*                                               monitored        */
 /*                                               resource entry.  */
 /*              - Qfpad_EENT0100 - Monitored resource input       */
 /*                                 information.                   */
 /*              - Qfpad_SRVI0100 - Server information.            */
 /*              - Qfpad_ATRI0100 - Attribute information.         */
 /******************************************************************/
 /******************************************************************/
 /*              The Remove Monitored Resource Entry               */
 /*              (QfpadRmvMonitoredResourceEntry) API removes a    */
 /*                                          monitored resource    */
 /*                                          entry.                */
 /*              - Qfpad_ENTI0100 - Monitored resource input       */
 /*                                 information.                   */
 /*              - Qfpad_SRVI0100 - Server information.            */
 /******************************************************************/
 /******************************************************************/
 /*                                                                */
 /* Header Files Included: None.                                   */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List:                                                */
 /* Qfpad_Attrib               (Attribute record)                  */
 /* Qfpad_Status               (Status record)                     */
 /* Qfpad_Value                (Attribute Value Record)            */
 /* Qfpad_DENR0100             (Basic Monitored Resource Info)     */
 /* Qfpad_DENR0200             (Detailed Monitored Resource Info)  */
 /*                                                                */
 /* Service Program:         QFPADAP1                              */
 /*                                                                */
 /* Function Prototype List: QfpadRtvMonitoredResourceInfo         */
 /*                          QfpadAddMonitoredResourceEntry        */
 /*                          QfpadRmvMonitoredResourceEntry        */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON     LEVEL DATE   PGMR        CHANGE DESCRIPTION    */
 /* ---- ---------- ----- ------ ---------   ----------------------*/
 /* $A0= D99682     5D40  040204 ROCH:       New Include           */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

 #ifndef QFPADAP1_H
 #define QFPADAP1_H

 #pragma datamodel(P128)

 /******************************************************************/
 /* Prototype for calling Retrieve Monitored Resource Info         */
 /* (QfpadRtvMonitoredResourceInfo) API                            */
 /******************************************************************/
 #ifdef  __ILEC400__
     #pragma argument(QfpadRtvMonitoredResourceInfo,OS,nowiden)
   void QfpadRtvMonitoredResourceInfo(
                               char *,   /* Receiver variable              */
                               int,      /* Length of receiver variable    */
                               char *,   /* Format of receiver variable    */
                               char *,   /* Manager type                   */
                               char *,   /* Monitored resource info        */
                               int,      /* Length monitored resource info */
                               char *,   /* Format monitored resource info */
                               char *,   /* Server information             */
                               int,      /* Length of server information   */
                               char *,   /* Format of server information   */
                               void *,   /* Server defined output          */
                               void *);  /* Error code                     */
 #else
   extern "C"
   void QfpadRtvMonitoredResourceInfo(
                               char *,   /* Receiver variable              */
                               int  *,   /* Length of receiver variable    */
                               char *,   /* Format of receiver variable    */
                               char *,   /* Manager type                   */
                               char *,   /* Monitored resource info        */
                               int  *,   /* Length monitored resource info */
                               char *,   /* Format monitored resource info */
                               char *,   /* Server information             */
                               int  *,   /* Length of server information   */
                               char *,   /* Format of server information   */
                               void *,   /* Server defined output          */
                               void *);  /* Error code                     */
 #endif


 /******************************************************************/
 /* Add Monitored Resource Entry                                   */
 /* (QfpadAddMonitoredResourceEntry) API                           */
 /******************************************************************/
 #ifdef  __ILEC400__
   #pragma argument(QfpadAddMonitoredResourceEntry,OS,nowiden)
   void QfpadAddMonitoredResourceEntry(
                           char *,   /* Manager type                   */
                           char *,   /* Monitored resource info        */
                           int,      /* Length monitored resource info */
                           char *,   /* Format monitored resource info */
                           char *,   /* Attribute information          */
                           int,      /* Length of attribute info       */
                           char *,   /* Format of attribute info       */
                           char *,   /* Server information             */
                           int,      /* Length of server information   */
                           char *,   /* Format of server information   */
                           void *,   /* Server defined output          */
                           void *);  /* Error code                     */
 #else
   extern "C"
   void QfpadAddMonitoredResourceEntry(
                           char *,   /* Manager type                   */
                           char *,   /* Monitored resource info        */
                           int  *,   /* Length monitored resource info */
                           char *,   /* Format monitored resource info */
                           char *,   /* Attribute information          */
                           int  *,   /* Length of attribute info       */
                           char *,   /* Format of attribute info       */
                           char *,   /* Server information             */
                           int  *,   /* Length of server information   */
                           char *,   /* Format of server information   */
                           void *,   /* Server defined output          */
                           void *);  /* Error code                     */
 #endif

 /******************************************************************/
 /* Prototype for calling Remove Monitored Resource Entry          */
 /* (QfpadRmvMonitoredResourceEntry) API                           */
 /******************************************************************/
 #ifdef  __ILEC400__
   #pragma argument(QfpadRmvMonitoredResourceEntry,OS,nowiden)
   void QfpadRmvMonitoredResourceEntry(
                              char *,   /* Manager type                   */
                              char *,   /* Monitored resource info        */
                              int,      /* Length monitored resource info */
                              char *,   /* Format monitored resource info */
                              char *,   /* Server information             */
                              int,      /* Length of server information   */
                              char *,   /* Format of server information   */
                              void *,   /* Server defined output          */
                              void *);  /* Error code                     */
 #else
   extern "C"
   void QfpadRmvMonitoredResourceEntry(
                              char *,   /* Manager type                   */
                              char *,   /* Monitored resource info        */
                              int  *,   /* Length monitored resource info */
                              char *,   /* Format monitored resource info */
                              char *,   /* Server information             */
                              int  *,   /* Length of server information   */
                              char *,   /* Format of server information   */
                              void *,   /* Server defined output          */
                              void *);  /* Error code                     */
 #endif

 /******************************************************************/
 /* Type Definition for EENT0100 format                            */
 /******************************************************************/
 typedef _Packed struct Qfpad_EENT0100
 {
   char Monitored_Resource_Input_Type[10];
   char Monitored_Resource_Input_Lib[10];
   int Len_Of_Monitored_Resource_Name;
   /*char Monitored_Resource_Input_Name[];*/
 } Qfpad_EENT0100_t;

 /******************************************************************/
 /* Server Information (SRVI0100 Format) Field Descriptions        */
 /******************************************************************/
 typedef _Packed struct Qfpad_SRVI0100
 {
   int Length_Of_Svr_Def_Out;
   char Cluster_Name[10];
   char Cluster_Domain_Name[10];
   char Results_Info[30];           /* Ignored for retrieve API     */
 } Qfpad_SRVI0100_t;

 /******************************************************************/
 /* Attribute Array Field Descriptions                             */
 /******************************************************************/
 typedef _Packed struct Qfpad_Attrib_Array
 {
   int Disp_Next_Attrib_Entry;
   int Length_Attrib_Name;
   /*char Attrib_Name[];*/
 } Qfpad_Attrib_Array_t;

 /******************************************************************/
 /* Attribute Information (ATRI0100 Format) Field Descriptions     */
 /******************************************************************/
 typedef _Packed struct Qfpad_ATRI0100
 {
   int Num_Attrib_Entries;
   int Offset_Attrib_Array;
   /*Qfpad_Attrib_Array_t Attrib_Array[];*/
 } Qfpad_ATRI0100_t;

 /******************************************************************/
 /* Attribute List Entry Format Information                        */
 /******************************************************************/
 typedef _Packed struct Qfpad_Attrib
 {
   int Disp_To_Next_Entry;
   int Global_Status;
   int Data_Type;
   int Disp_To_Attrib_Name;
   int Length_Of_Attrib_Name;
   int Disp_To_Attrib_Value;
   int Length_Of_Attrib_Value;
   /*char Attrib_Name[];*/
   /*char Attrib_Value[];*/
 } Qfpad_Attrib_t;

 typedef _Packed struct Qfpad_Message
 {
   char Message_Id[7];
   char Message_File[10];
   char Message_Lib[10];
   char Reserved;
   int Disp_Msg_Replacement_Data;
   int Length_Of_Msg_Replacement_Data;
   int Msg_Replacement_Data_CCSID;
   /*char Message_Replacement_Data[];*/
 } Qfpad_Message_t;

 /******************************************************************/
 /* Header for DENR0100 and DENR0200 formats                       */
 /******************************************************************/
 typedef _Packed struct Qfpad_DENR_header
 {
   int Bytes_Returned;
   int Bytes_Available;
   int Offset_To_First_Record;
   int Length_Of_Fixed_Portion;
   int Num_Records_Returned;
 } Qfpad_DENR_header_t;

 /******************************************************************/
 /* DENR0100 Format Information                                    */
 /******************************************************************/
 typedef _Packed struct Qfpad_DENR0100
 {
   int Disp_To_Next_Record;
   char Monitored_Resource_Type[10];
   char Monitored_Resource_Lib[10];
   int Global_Status;
   int Resource_Status;
   int Disp_To_Name;
   int Length_Of_Name;
   int Disp_To_Node_Array;
   int Length_Of_Node_Array_Entry;
   int Num_Node_Array_Entries;
   int Disp_To_Msg_Info;
   int Length_Of_Msg_Info;
   /*char Monitored_Resource_Name[];*/
   /*char Node_Array[];*/
   /*Qfpad_Message_t Msg_Info[];*/
 } Qfpad_DENR0100_t;

 /******************************************************************/
 /* DENR0200 Format Information                                    */
 /******************************************************************/
 typedef _Packed struct Qfpad_DENR0200
 {
   int Disp_To_Next_Record;
   char Monitored_Resource_Type[10];
   char Monitored_Resource_Lib[10];
   int Global_Status;
   int Resource_Status;
   int Disp_To_Resource_Name;
   int Length_Of_Resource_Name;
   int Disp_To_Attrib_List;
   int Length_Of_Attrib_List;
   int Num_Attrib_List_Entries;
   /*char Monitored_Resource_Name[];*/
   /*Qfpad_Attrib_t Attrib_List[];*/
 } Qfpad_DENR0200_t;

 #pragma datamodel(pop)

 #endif /* QFPADAP1_H */
