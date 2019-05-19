/* begin_generated_IBM_copyright_prolog                              */
/* This is an automatically generated copyright prolog.              */
/* After initializing,  DO NOT MODIFY OR MOVE                        */
/* ----------------------------------------------------------------- */
/*                                                                   */
/* Product(s):                                                       */
/*     5722-SS1                                                      */
/*                                                                   */
/* (C)Copyright IBM Corp.  2003, 2009                                */
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
 /* Header File Name: H/QPQOLPM                                    */
 /*                                                                */
 /* Descriptive Name: Retrieve List of PDF Map Information API     */
 /*                                                                */
 /* 5722-SS1  (C) Copyright IBM Corp. 2002, 2009                   */
 /* All rights reserved.                                           */
 /* US Government Users Restricted Rights -                        */
 /* Use, duplication or disclosure restricted                      */
 /* by GSA ADP Schedule Contract with IBM Corp.                    */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /*                                                                */
 /* Description: The List of PDF Map Information API retrieves     */
 /*              entries from a PDF map. Values specifed with the  */
 /*              FLTR0100 format determine which entries are       */
 /*              retrieved.                                        */
 /*                                                                */
 /* Header Files Included: qpqmap.h                                */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: Qpq_PDFM0100_t                                 */
 /*                 Qpq_PDFM0200_t                                 */
 /*                 Qpq_FLTR0100_t                                 */
 /*                 Qpq_Mail_Information_Entry_t                   */
 /*                                                                */
 /* Function Prototype List: QPQOLPM                               */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0=D99558     v5r3m0.xpf 021014 JKLAR:  New part              */
 /* $A1=P9A31781   v5r3m0.xpf 021014 JKLAR:  Security additions    */
 /*                                                                */
 /* $A2=PFW538415  v5r4m0f.xpf 101207 JKLAR: Remove extra int from */
 /*                                    struct Qpq_OLPM0100. The    */
 /*                                    extra int caused a mis-     */
 /*                                    mapping of PDF map object   */
 /*                                    entries.                    */
 /*                                    Add text description field  */
 /*                                    to Qpq_OLPM0200. The lack   */
 /*                                    of this field caused a mis- */
 /*                                    mapping of PDF map object   */
 /*                                    entries.                    */
 /* End CFD List.                                                  */
 /*                                                                */
 /* End Change Activity.                                           */
 /******************************************************************/


#ifndef QPQOLPM_h
#define QPQOLPM_h

#include <qpqmap.h>

#pragma datamodel(P128)

/*********************************************************************/
/* Prototypes for calling QPQOLPM                                    */
/* Open List of PDF Map Information API                              */
/*********************************************************************/
#ifdef __ILEC400__
#pragma linkage (QPQOLPM,OS,nowiden)
#else
   extern "OS"
#endif

     void QPQOLPM(void *,              /* Receiver Variable             */
		  signed int,           /* Receiver Variable Length      */
		  char *,               /* List information              */
		  signed int,           /* Number of records to return   */
		  char *,               /* Format name                   */
		  char *,               /* Filter information            */
		  char *,               /* Format of  filter information */
		  void *,               /* Qualified AFP Object Name     */
		  void *);              /* Error code                    */

/*******************************************************************/
/* Structure for OLPM0100 Format                                   */
/*******************************************************************/
   typedef _Packed struct Qpq_OLPM0100 {
       unsigned int Sequence_Number;
       char Output_Queue_Name_Input_Splf[10];
       char Output_Queue_Lib_Input_Splf[10];
       char Spooled_File_Name_Input_Splf[10];
       char Job_Name_Input_Splf[10];
       char User_Name_Input_Splf[10];
       char User_Data_Input_Splf[10];
       char Form_Type_Input_Splf[10];
       char Mail_Tag_Input_Splf[250];
       char Segmented_Entry;
       char Text_Description[50];
       char Reserved;
   }Qpq_OLPM0100_t;

/*******************************************************************/
/* Structure for OLPM0200 Format                                   */
/*******************************************************************/
   typedef _Packed struct Qpq_OLPM0200 {
       signed int Length_PDF_Map_Entry;
       unsigned int Sequence_Number;
       signed int Offset_Mail_Entry;
       signed int Length_Mail_Entry;
       signed int Offset_PDF_Stmf_Info;
       signed int Length_PDF_Stmf_Info;
       signed int Offset_PDF_Splf_Info;
       signed int Length_PDF_Splf_Info;
       signed int Offset_AFPDS_Splf_Info;
       signed int Length_AFPDS_Splf_Info;
       char Output_Queue_Name_Input_Splf[10];
       char Output_Queue_Lib_Input_Splf[10];
       char Spooled_File_Name_Input_Splf[10];
       char Job_Name_Input_Splf[10];
       char User_Name_Input_Splf[10];
       char User_Data_Input_Splf[10];
       char Form_Type_Input_Splf[10];
       char Mail_Tag_Input_Splf[250];
       char Segmented_Entry;
       char Text_Description[50];                           /* @A2A*/
       char Reserved;
   }Qpq_OLPM0200_t;

/*******************************************************************/
/* Definition for FLTR0100 format                                  */
/*******************************************************************/
   typedef _Packed struct Qpq_FLTR0100 {
       signed int Length_Filter_Information;
       signed int Filter_Sequence_Number;
       char Filter_Output_Queue_Name[10];
       char Filter_Output_Queue_Library[10];
       char Filter_Spooled_File_Name[10];
       char Filter_Job_Name[10];
       char Filter_User_Name[10];
       char Filter_User_Data[10];
       char Filter_Form_Type[10];
       char Filter_Mail_Tag[250];
   }Qpq_FLTR0100_t;

/*******************************************************************/
/* Structure for Mail Information Entry                            */
/*******************************************************************/
   typedef _Packed struct Qpq_Mail_Information_Entry {
       signed int Offset_Message_Text;
       signed int Length_Message_Text;
       signed int Offset_Subject;
       signed int Length_Subject;
       signed int CCSID_Message_Text_And_Subject;
       signed int Offset_ReplyTo_Address;
       signed int Length_ReplyTo_Address;
       signed int Offset_TO_Addresses;
       signed int Number_TO_Addresses;
       signed int Length_TO_Addresses;
       signed int Offset_CC_Addresses;
       signed int Number_CC_Addresses;
       signed int Length_CC_Addresses;
       signed int Offset_BCC_Addresses;
       signed int Number_BCC_Addresses;
       signed int Length_BCC_Addresses;
       signed int Offset_Body_Entries;
       signed int Number_Body_Entries;
       signed int Length_Body_Entries;
       signed int Offset_Attachment_Entries;
       signed int Number_Attachment_Entries;
       signed int Length_Attachment_Entries;
       signed int Offset_TO_Stmf;
       signed int Length_TO_Stmf;
       signed int Offset_CC_Stmf;
       signed int Length_CC_Stmf;
       signed int Offset_BCC_Stmf;
       signed int Length_BCC_Stmf;
       signed int Offset_PDF_File_Email;
       signed int Length_PDF_File_Email;
       char Mail_Sender[10];
       char PDF_File_User_Password[10];
       char PDF_File_Owner_Password[10];
       char PDF_File_Encryption_Level;
       char PDF_File_Print;
       char PDF_File_Copy;
       char PDF_File_Change;
       char PDF_File_Change_Comments;
       char PDF_File_Content_Access;
       char PDF_File_Document_Assembly;
       char Use_TO_Stmf;
       char Use_CC_Stmf;
       char Use_BCC_Stmf;
   }Qpq_Mail_Information_Entry_t;

#pragma datamodel(pop)

#endif
