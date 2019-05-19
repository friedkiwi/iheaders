 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QPQAPME                                    */
 /*                                                                */
 /* Descriptive Name: Add PDF Map Entry API                        */
 /*                                                                */
 /* 5722-SS1  (C) Copyright IBM Corp. 2002, 2003                   */
 /* All rights reserved.                                           */
 /* US Government Users Restricted Rights -                        */
 /* Use, duplication or disclosure restricted                      */
 /* by GSA ADP Schedule Contract with IBM Corp.                    */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /*                                                                */
 /* Description: The Add PDF Map Entry API inserts an entry into   */
 /*              the specified PDF map.                            */
 /*                                                                */
 /* Header Files Included: None                                    */
 /*                                                                */
 /* Macros List: qpqmap.h                                          */
 /*                                                                */
 /* Structure List: Qpq_APMail_Information_Entry_t                 */
 /*                 Qpq_APME0100_t                                 */
 /*                 Qpq_PMAP0100_t                                 */
 /*                                                                */
 /* Function Prototype List: QPQAPME                               */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0=D99558   v5r3m0.xpf 021014 JKLAR:  New part                */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /* End Change Activity.                                           */
 /******************************************************************/

#ifndef QPQAPME_h
#define QPQAPME_h

#include <qpqmap.h>

#pragma datamodel(P128)

/*********************************************************************/
/* Prototypes for calling QPQADDPDF                                  */
/*********************************************************************/
#ifdef __ILEC400__
#pragma linkage (QPQAPME,OS,nowiden)
#else
   extern "OS"
#endif

     void QPQAPME(char *,  /* Returned library name           */
		  void *,   /* Qualified PDF map object name   */
		  void *,   /* PDF map entry spooled file attributes */
		  int,      /* Length of PDF map entry spooled file attributes */
		  char *,   /* Format of PDF map entry spooled file attributes */
		  char *,  /* PDF mapping action           */
		  int,     /* Length of PDF mapping action     */
		  int,     /* Add type                         */
		  void *); /* Error code                       */


/*******************************************************************/
/* Structure for Mail Information Entry                            */
/*******************************************************************/
   typedef _Packed struct Qpq_APMail_Information_Entry {
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
       char PDF_File_Encryption_Level[10];
       char PDF_File_Print[10];
       char PDF_File_Copy[10];
       char PDF_File_Change[10];
       char PDF_File_Change_Comments[10];
       char PDF_File_Content_Access[10];
       char Use_TO_Stmf;
       char Use_CC_Stmf;
       char Use_BCC_Stmf;
       char Reserved[43];
   }Qpq_APMail_Information_Entry_t;


/*******************************************************************/
/* Definition for PDF map entry spooled file attributes            */
/*******************************************************************/
   typedef _Packed struct Qpq_APME0100 {
       unsigned int Sequence_Number;
       char Output_Queue_Name[10];
       char Output_Queue_Library[10];
       char Spooled_File_Name[10];
       char Job_Name[10];
       char User_Name[10];
       char User_Data[10];
       char Form_Type[10];
       char Mail_Tag[250];
       char Reserved[2];
   }Qpq_APME0100_t;

/*******************************************************************/
/* Structure for PMAP0100 Format                                   */
/*******************************************************************/
   typedef _Packed struct Qpq_PMAP0100 {
       int Offset_Mail_Info;
       int Length_Mail_Info;
       int Offset_PDF_Stmf_Info;
       int Length_PDF_Stmf_Info;
       int Offset_PDF_Splf_Info;
       int Length_PDF_Splf_Info;
       int Offset_AFPDS_Splf_Info;
       int Length_AFPDS_Splf_Info;
       char Segmented_Entry;
       char Text_Description[50];
       char Reserved[49];
   }Qpq_PMAP0100_t;

#pragma datamodel(pop)

#endif
