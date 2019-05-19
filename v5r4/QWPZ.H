 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QWPZ                                       */
 /*                                                                */
 /* Descriptive Name: Common structures for component WPZ APIs.    */
 /*                                                                */
 /* 5716-SS1, 5722-SS1 (C) Copyright IBM Corp. 1994,2002           */
 /* All rights reserved.                                           */
 /* US Government Users Restricted Rights -                        */
 /* Use, duplication or disclosure restricted                      */
 /* by GSA ADP Schedule Contract with IBM Corp.                    */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /*                                                                */
 /* Description: Contains the: - Option specific input information */
 /*                              for Host Print Transform API.     */
 /*                            - Option specific output            */
 /*                              output information for Host Print */
 /*                              Transform API.                    */
 /*                                                                */
 /* Header Files Included: None.                                   */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: Qwpz_HPT_Opt_SpecIn_t                          */
 /*                 Qwpz_HPT-Opt_SpecOut_t                         */
 /*                                                                */
 /* Function Prototype List: none.                                 */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= D9171000     3D60  941110 Stangler: New Include           */
 /* $A1= P3978202     3D60  950116 Stangler: Changes reserved flds */
 /* $A2= P3605656     3D70  951113 Stangler: Changes reserved in   */
 /*                                          output specific info  */
 /* $A3= D97116.2     4D40  980609 Stangler: Add paper sizes to    */
 /*                                          input  specific info  */
 /* $A4= P9934931     5D10  001009 TSL:      Teraspace Stage 2     */
 /* $A5= D97260       5D20  010105 ROCH:     Decouple Splf from Job*/
 /* $A6= D97260.2     5D20  010731 ROCH:     Decouple Splf - phase2*/
 /* $A7= D98795       5D20  010827 TSL:      Add writer info parms */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

#ifndef QWPZ_h
#define QWPZ_h

#if (__OS400_TGTVRM__>=510)                                 /* @A4A*/
   #pragma datamodel(P128)                                  /* @A4A*/
#endif                                                      /* @A4A*/

/*****************************************************************/
/* Structure for Option specific input information               */
/****                                                            */
/*  NOTE:  The following type definition only defines the fixed  */
/*         portion of the format.  Any varying length fields must*/
/*         be defined by the user.                               */
/*****************************************************************/
typedef _Packed struct Qwpz_HPT_Opt_SpecIn
{
     char Reserved_1[16];
     char Reserved_2[10];
     char Printer_Device_Name[10];
     char Reserved_3[20];
     char Reserved_4[20];
     char Reserved_5[10];
     char Reserved_6[10];
     char Int_Job_ID[16];
     char Int_Splf_ID[16];
     char Job_Name[10];
     char Usr_Name[10];
     char Job_Number[6];
     char Splf_Name[10];
     int  Splf_Number;
     char Reserved_7[12];
     int  Reserved_8;
     int  Reserved_9;
     char Reserved_10[10];
     char Return_Align_Data;
     char Reserved_11[5];
     int  Number_Complete_Pages;
     char Workstation_Cust_Object[10];
     char Workstation_Cust_Object_Lib[10];
     char Manufacturer_Type_Model[15];
     char Paper_Source_1[10];
     char Paper_Source_2[10];
     char Envelope_Source[10];
     char Reserved_12;
     char Job_System_Name[8];
     char Splf_Create_Date[7];
     char Reserved_13;
     char Splf_Create_Time[6];
} Qwpz_HPT_Opt_SpecIn_t;

/*****************************************************************/
/* Structure for Option specific output information              */
/****                                                            */
/*  NOTE:  The following type definition only defines the fixed  */
/*         portion of the format.  Any varying length fields must*/
/*         be defined by the user.                               */
/*****************************************************************/
typedef _Packed struct Qwpz_HPT_Opt_SpecOut
{
     int  Reserved_1;
     char Transform_File;
     char Pass_Input_Data;
     char Reserved_2[2];
     char Done_Transforming_File;
     char Reserved_3[3];
     int  Vertical_Pos_Command_Offset;
     int  Vertical_Pos_Command_Length;
     int  Print_Data_Offset;
     int  Print_Data_Length;
     int  Carriage_Return_Command_Offset;
     int  Carriage_Return_Command_Length;
     int  Form_Feed_Command_Offset;
     int  Form_Feed_Command_Length;
  /* char Carriage_Return_Commands[];     */
  /* char Form_Feed_Commands[];           */
} Qwpz_HPT_Opt_SpecOut_t;

#if (__OS400_TGTVRM__>=510)                                 /* @A4A*/
   #pragma datamodel(pop)                                   /* @A4A*/
#endif                                                      /* @A4A*/


#endif
