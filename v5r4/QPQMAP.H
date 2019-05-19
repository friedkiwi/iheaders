 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QPQMAP                                     */
 /*                                                                */
 /* Descriptive Name: Structs used by APIs QPQOLPM and QPQAPME     */
 /*                                                                */
 /* 5722-SS1  (C) Copyright IBM Corp. 2003                         */
 /* All rights reserved.                                           */
 /* US Government Users Restricted Rights -                        */
 /* Use, duplication or disclosure restricted                      */
 /* by GSA ADP Schedule Contract with IBM Corp.                    */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /*                                                                */
 /* Description: Structures used by APIs QPQOLPM and QPQAPME.      */
 /*              QPQOLPM.H and QPQAPME.H includes this file.       */
 /*                                                                */
 /* Header Files Included: None                                    */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: Qpq_File_Name_Entry_t                          */
 /*                 Qpq_Email_Address_Entry_t                      */
 /*                 Qpq_Stream_File_Entry_t                        */
 /*                 Qpq_PDF_Stream_File_Entry_t                    */
 /*                 Qpq_PDF_Spooled_File_Entry_t                   */
 /*                 Qpq_AFPDS_Spooled_File_Entry_t                 */
 /*                                                                */
 /* Function Prototype List: None                                  */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0=D99558        v5r3m0.xpf 030212 JKLAR:  New part           */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /* End Change Activity.                                           */
 /******************************************************************/

#ifndef QPQMAP_h
#define QPQMAP_h

#pragma datamodel(P128)

/*******************************************************************/
/* Definition for PDF file for E-mail                              */
/*******************************************************************/
   typedef char Qpq_File_Name_Entry_t[80];

/*******************************************************************/
/* Definition for E-mail Address Entry                             */
/*******************************************************************/
   typedef char Qpq_Email_Address_Entry_t[80];

/*******************************************************************/
/* Definition for Stream File Entry                                */
/*******************************************************************/
   typedef char Qpq_Stream_File_Entry_t[255];

/*******************************************************************/
/* Definition for PDF Stream File Entry                            */
/*******************************************************************/
   typedef _Packed struct Qpq_PDF_Stream_File_Entry {
       signed int Offset_PDF_Stmf;
       signed int Length_PDF_Stmf;
       char Public_Authority[10];
       char Reserved[2];
   }Qpq_PDF_Stream_File_Entry_t;

/*******************************************************************/
/* Definition for PDF Spooled File Entry                           */
/*******************************************************************/
   typedef _Packed struct Qpq_PDF_Spooled_File_Entry {
       char PDF_Output_Queue_Name[10];
       char PDF_Output_Queue_Library[10];
       char PDF_Spooled_File_Name[10];
       char PDF_User_Data[10];
       char PDF_Form_Type[10];
       char PDF_User_Defined_Data[255];
       char Reserved[3];
   }Qpq_PDF_Spooled_File_Entry_t;

/*******************************************************************/
/* Definition for AFPDS Spooled File Entry                         */
/*******************************************************************/
   typedef _Packed struct Qpq_AFPDS_Spooled_File_Entry {
       char AFPDS_Output_Queue_Name[10];
       char AFPDS_Output_Queue_Library[10];
       char AFPDS_Spooled_File_Name[10];
       char AFPDS_User_Data[10];
       char AFPDS_Form_Type[10];
       char AFPDS_User_Defined_Data[255];
       char Reserved[3];
   }Qpq_AFPDS_Spooled_File_Entry_t;

#pragma datamodel(pop)

#endif
