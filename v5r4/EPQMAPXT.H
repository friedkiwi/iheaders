/* begin_generated_IBM_copyright_prolog                              */
/* This is an automatically generated copyright prolog.              */
/* After initializing,  DO NOT MODIFY OR MOVE                        */
/* ----------------------------------------------------------------- */
/*                                                                   */
/* Product(s):                                                       */
/*     5722-SS1                                                      */
/*                                                                   */
/* (C)Copyright IBM Corp.  2000, 2007                                */
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
/* ----------------------------------------------------------------- */

/*** START HEADER FILE SPECIFICATIONS *****************************/
/*                                                                */
/* Header File Name: H/EPQMAPXT                                   */
/*                                                                */
/* Descriptive Name: Email Exit Program Interface                 */
/*                                                                */
/* Description: The Email Exit Program Interface                  */
/*              - Describes the interface between PSF/400 and a   */
/*                user defined exit program (e-mail mapping       */
/*                program).                                       */
/*                                                                */
/* Header Files Included: H/EPQMAPXT                              */
/* Header Files Included: H/EPQMAPXT                              */
/*                                                                */
/* Macros List: none.                                             */
/*                                                                */
/* Structure List: Qpq_Email_Exit_I_t                             */
/*                 Qpq_Email_Exit_O_t                             */
/*                 Qpq_Email_Exit_E_t                             */
/*                 Qpq_All_Stream_Files_t                         */
/*                 Qpq_PDF_Spooled_File_t                         */
/*                 Qpq_Stream_File_t                              */
/*                 Qpq_PDF_Encryption_t                           */
/*                                                                */
/* Function Prototype List: none.                                 */
/*                                                                */
/* Change Activity:                                               */
/*                                                                */
/* CFD List:                                                      */
/*                                                                */
/* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
/* ---- ------------ ----- ------ --------- ----------------------*/
/* $A0= D98184       5D10  991202 HERMAN  : New Include           */
/* $A1= P9953931     5D20  010926 MCR     : Changes w/D98880      */
/* $B1= D99198       5D30  020830 MCR     : Changes w/D99198      */
/* $A2=P9A95904   v5r3m0f.xpf 050603 JKLAR: Add support for mail  */
/*                                        sender in extension area*/
/* $J6=P9B07263   v5r4m0fpga.xpf 050809 JKLAR: Add field to       */
/*                                   specify offset to message    */
/*                                   text. SMTP only.             */
/* $JE=P9C19044  v5r4m0f.xpf 080121 JKLAR: Add flag for email     */
/*                                   delimiter                    */
/* END CHANGE ACTIVITY                                            */
/*** END HEADER FILE SPECIFICATIONS *******************************/
#ifndef _EPQMAPXT_h
#define _EPQMAPXT_h

/*********************************************************************/
/* Structure for Option Specific input information to mapping program*/
/*********************************************************************/

typedef _Packed struct Qpq_Email_Exit_I
{
     char Qualified_Job_Name[26];
     char Spooled_File_Name[10];
     int  Spooled_File_Number;
     char Mail_Tag[250];
     char File_Path_And_Name[340];
     char Mail_Server_Type;
     char Reserved[1];
     int  Path_Name_CCSID;
     char Mail_Sender[10];
     char User_Data[10];
     char Job_System_Name[8];
     char Creation_Time_Stamp[8];
     char Output_Queue[10];
     char Output_Queue_Library[10];
     char PDF_Mapping_Object_Name[10];
     char PDF_Mapping_Object_Library[10];
     char Formtype[10];                        /* @B1A */
} Qpq_Email_Exit_I_t;                          /* @A1C*/

/******************************************************************/
/* Structure for Option Specific Output Information From Mapping    */
/* Program.                                                       */
/******************************************************************/

typedef _Packed struct Qpq_Email_Exit_O
{
    char PDF_File_Disposition[1];
    char Call_Exit_Program_Again[1];
    char Reserved1[2];
    int  Message_Text_Length;
    int  Mail_address_data_length;
    char Message_text_data[255];                 /* @A1C*/
    char PDF_Email_Comma_Delimiter[1];           /* @JEC*/
    int  Offset_To_Extension_Area;
    int  CCSID_Message_Text_And_Subject;
    char PDF_Stream_File_Disposition[1];        /*@B1A*/
    char PDF_Spooled_File_Disposition[1];       /*@B1A*/
    char PDF_Error_Disposition[1];              /*@B1A*/
    char AFP_Spooled_File_Disposition[1];      /*@B1A*/
    int  Message_Text_Offset;                  /* @J6A*/
    char Reserved3[3];                         /* @J6C*/
    /*char Email_addresses[]; */                /* Varying length */
} Qpq_Email_Exit_O_t;                           /*@A1C */



typedef _Packed struct Qpq_All_Stream_Files
{
    int  Total_Length;
    int  Number_Stream_Files;
    /* Qpq_Stream_File_t  Stream_File_Information[]; */
} Qpq_All_Stream_Files_t;                        /* A1A */

typedef _Packed struct Qpq_Stream_File
{
    int  Total_Length;
    int  Length_Format_Structure;
    int  Offset_Path_Name;
    int  Length_Path_Name;
    char Use_Specified_Directory;
    char Reserved3[3];
    /*char Path_Name[]; */                       /* Varying length */
} Qpq_Stream_File_t;                             /*@A1A */


typedef _Packed struct Qpq_PDF_Spooled_File
{
   char Output_Queue_Name[10];
   char Output_Queue_Library[10];
   char Spooled_File_Name[10];
   char User_Data[10];
   char User_Defined_Data[255];
   char Formtype[10];
}Qpq_PDF_Spooled_File_t;                         /* @B1A */

typedef _Packed struct Qpq_AFP_Spooled_File
{
   char Output_Queue_Name[10];
   char Output_Queue_Library[10];
   char Spooled_File_Name[10];
   char User_Data[10];
   char User_Defined_Data[255];
   char Formtype[10];
}Qpq_AFP_Spooled_File_t;                         /* @B1A */



typedef _Packed struct Qpq_PDF_Encryption
{
   char PDF_Owner_Password[32];
   char PDF_User_Password[32];
   char PDF_Printing[1];
   char PDF_Changing_Document[1];
   char PDF_Copy[1];
   char PDF_Encryption_Level[1];
   char PDF_Content_Access_Enablement[1];
   char PDF_Comment_Changing[1];
   char PDF_Document_Assembly[1];
}  Qpq_PDF_Encryption_t;                        /* @B1A */


/******************************************************************/
/* Structure for Extension Area                                   */
/******************************************************************/
typedef _Packed struct Qpq_Email_Exit_E
{
    int  Length_Extension_Area;
    int  Offset_Subject;
    int  Length_Subject;
    int  Offset_ReplyTo;
    int  Length_ReplyTo;
    int  Offset_CC;
    int  Length_CC;
    int  Offset_BCC;
    int  Length_BCC;
    int  Offset_Path_Body;
    int  Offset_Attachments_Directory;
    int  Length_Attachments_Directory;
    int  Offset_Attachments;
    int  Offset_PDF_File_Path;                   /*@B1A */
    int  Length_PDF_File_Path;                   /*@B1A */
    int  Offset_PDF_File_Name;                   /*@B1A */
    int  Length_PDF_File_Name;                   /*@B1A */
    int  Offset_PDF_File_Authority;              /*@B1A */
    int  Length_PDF_File_Authority;              /*@B1A */
    int  Offset_PDF_Spooledfile;                 /*@B1A */
    int  Length_PDF_Spooledfile;                 /*@B1A */
    int  Offset_AFP_Spooledfile;                 /*@B1A */
    int  Length_AFP_Spooledfile;                 /*@B1A */
    int  Offset_PDF_Encryption;                  /*@B1A */
    int  Length_PDF_Encryption;                  /*@B1A */
    char Mail_Sender[10];                       /*@A2C */
    /* Order of the following variables is discretionary */
    /*char Subject_String[]; */                  /* Varying length */
    /*char ReplyTo[]; */                         /* Varying length */
    /*char CC_Email_Addresses[]; */              /* Varying length */
    /*char BCC_Email_Addresses[]; */             /* Varying length */
    /*char Attachments_Directory[]; */           /* Varying length */
    /*Qpq_All_Stream_Files_t Attachments[]; */   /* Varying length */
    /*Qpq_All_Stream_Files_t Path_Body[];   */   /* Varying length */
    /*char PDF_File_Name[]; */                   /* Varying length */
    /*char PDF_File_Authority[]; */              /* Varying length */
    /*Qpq_PDF_Spooled_File PDF_Spool_File[];*/   /* Varying length */
    /*Qpq_AFP_Spooled_File AFP_Spool_File[];*/   /* Varying length */
    /*Qpq_PDF_Encryption   PDF_Encryption[];*/   /* Varying length  */
} Qpq_Email_Exit_E_t;                            /*@B1C */
 #endif
