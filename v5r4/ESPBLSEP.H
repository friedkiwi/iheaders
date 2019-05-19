/*** START HEADER FILE SPECIFICATIONS ********************************/
/*                                                                   */
/* Header File Name: H/ESPBLSEP                                      */
/*                                                                   */
/* Descriptive Name: Build Customized Separator Page Exit Program    */
/*                                                                   */
/* 5763-SS1, 5722-SS1 (C) Copyright IBM Corp. 1994,2002              */
/* All rights reserved.                                              */
/* US Government Users Restricted Rights -                           */
/* Use, duplication or disclosure restricted                         */
/* by GSA ADP Schedule Contract with IBM Corp.                       */
/*                                                                   */
/* Licensed Materials-Property of IBM                                */
/*                                                                   */
/*                                                                   */
/* Description: An exit program can be specified on the separator    */
/*              program parameter of the printer device description. */
/*              If a separator exit program is specified on the      */
/*              printer device description, the system printer calls */
/*              this program to create the separator page.  This     */
/*              separator page is used instead of the system         */
/*              separator page.                                      */
/*                                                                   */
/* Header Files Included: None.                                      */
/*                                                                   */
/* Macros List: None.                                                */
/*                                                                   */
/* Structure List: Qsp_Sep_Data_Format_t                             */
/*                 Qsp_Sep_Info_Format_t                             */
/*                                                                   */
/* Function Prototype List: None.                                    */
/*                                                                   */
/* Change Activity:                                                  */
/*                                                                   */
/* CFD List:                                                         */
/*                                                                   */
/* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION       */
/* ---- ------------ ----- ------ --------- ----------------------   */
/* $A0= D2862000     3D10  940424 ROCH:     New Include              */
/* $A1= P9934931     5D10  001006 ROCH:     Teraspace stage 2        */
/* $A2= D97260       5D20  010105 ROCH:     Decouple Splf from Job.  */
/*                                                                   */
/* End CFD List.                                                     */
/*                                                                   */
/*  Additional notes about the Change Activity                       */
/* End Change Activity.                                              */
/*** END HEADER FILE SPECIFICATIONS **********************************/

#ifndef ESPBLSEP_h
 #define ESPBLSEP_h
#if (__OS400_TGTVRM__>=510)
  #pragma datamodel(P128)
#endif
 /********************************************************************/
 /*  Typedef for Separator Data Format structure                     */
 /********************************************************************/

 typedef _Packed struct Qsp_Sep_Data_Format {
       char  Transform_Option[10];
       char  Reserved1[2];
       int   Page_Rotation;
       int   Page_Length;
       int   Page_Width;
       int   Lines_Per_Inch;
       int   Characters_Per_Inch;
       int   DBCS_Characters_Per_Inch;
       char  DBCS_Character_Rotation[10];
       char  Page_Measurement_Method[10];
       char  Print_Quality[10];
       char  Overlay_Name[10];
       char  Overlay_Library_Name[10];
       char  Reserved2[98];
       int   Length_Of_User_Data;
       int   Record_Length_Of_User_Data;
     /*char  User_Data[];*/       /* Varying length                  */
 } Qsp_Sep_Data_Format_t;

 /********************************************************************/
 /*  Typedef for Separator Information structure                     */
 /********************************************************************/

 typedef _Packed struct Qsp_Sep_Info_Format {
       char  Internal_Job_ID[16];
       char  Internal_Spooled_File_ID[16];
       char  Job_Name[10];
       char  User_Name[10];
       char  Job_Number[6];
       char  Spooled_File_Name[10];
       int   Spooled_File_Num;
       char  Printer_Device_Name[10];
       char  Printer_Data_Stream_Type[10];
       char  Type_Separactor[10];
       char  Job_System_Name[8];
       char  Splf_Create_Date[7];
       char  Reserved2[1];
       char  Splf_Create_Time[6];
       char  Reserved[50];
 } Qsp_Sep_Info_Format_t;

#if (__OS400_TGTVRM__>=510)
    #pragma datamodel(pop)
#endif

#endif
