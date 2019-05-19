/*** START HEADER FILE SPECIFICATIONS *****************************/
/*                                                                */
/* Header File Name: H/QUSLSPL                                    */
/*                                                                */
/* Descriptive Name: List spooled files.                          */
/*                                                                */
/* 5763-SS1, 5722-SS1(C) Copyright IBM Corp. 1994,2003            */
/* All rights reserved.                                           */
/* US Government Users Restricted Rights -                        */
/* Use, duplication or disclosure restricted                      */
/* by GSA ADP Schedule Contract with IBM Corp.                    */
/*                                                                */
/* Licensed Materials-Property of IBM                             */
/*                                                                */
/*                                                                */
/* Description: The List Spooled Files API is similar to the      */
/*              Work with Spooled Files command or the Work with  */
/*              Job command.                                      */
/*                                                                */
/* Header Files Included: None.                                   */
/*                                                                */
/* Macros List: None.                                             */
/*                                                                */
/* Structure List: Qus_SPLF_I_t                                   */
/*                 Qus_SPLF_I2_t                                  */
/*                 Qus_SPLF_H_t                                   */
/*                 Qus_SPLF0200_t                                 */
/*                 Qus_SPLF0100_t                                 */
/*                 Qus_SPLF0300_t                                 */
/*                                                                */
/* Function Prototype List: QUSLSPL                               */
/*                                                                */
/* Change Activity:                                               */
/*                                                                */
/* CFD List:                                                      */
/*                                                                */
/* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
/* ---- ------------ ----- ------ --------- ----------------------*/
/* $A0= D2862000     3D10  940316 XZS2523:  New Include           */
/* $A1= D9492900     4D30  970728 DWIGHT :  Support for HSM.      */
/* $A2= D9567000     5D10  990114 RJOHNSON: New format for faster */
/*                                          listing of spooled    */
/*                                          files.                */
/* $A3= D97260       5D20  010105 ROCH:     Decouple Splf from    */
/*                                          Job.                  */
/* $A4= D97259.1     5D30  020404 ROCH:     Support Spooled files */
/*                                          and output queues on  */
/*                                          an IASP.              */
/*                                                                */
/* End CFD List.                                                  */
/*                                                                */
/*  Additional notes about the Change Activity                    */
/* End Change Activity.                                           */
/*** END HEADER FILE SPECIFICATIONS *******************************/

#ifndef QUSLSPL_h
#define QUSLSPL_h
#if (__OS400_TGTVRM__>=510)
#pragma datamodel(P128)
#endif

/******************************************************************/
/*  Prototype for calling List Spooled File API QUSLSPL           */
/******************************************************************/
  #ifdef __ILEC400__
      #pragma linkage (QUSLSPL,OS,nowiden)
 #else
      extern "OS"
 #endif
void QUSLSPL  (void *,           /* User space and library name   */
               char *,           /* Format name                   */
               char *,           /* User name                     */
               void *,           /* Output queue and library name */
               char *,           /* Form type                     */
               char *,           /* User-specified data           */
               ...);             /* Optional Parameter Group 1:
                                      Error code
                                    Optional Parameter Group 2:
                                      Qualified Job Name
                                      Keys for fields to return
                                      Number of fields to return
                                    Optional Parameter Group 3:
                                      Auxiliary storage pool
                                    Optional Parameter Group 4:
                                      Job system name
                                      Start Splf create date
                                      Start Splf create time
                                      End Splf create date
                                      End Splf create time
                                    Optional Parameter Group 5:
                                      ASP device name
                                                                  */


/******************************************************************/
/* Input Parameter Section.                                       */
/******************************************************************/
typedef _Packed struct Qus_SPLF_I
{
    char User_Space[10];
    char User_Space_Lib[10];
    char Format_Name[8];
    char User_Name[10];
    char Output_Queue_Name[10];
    char Output_Queue_Lib[10];
    char Form_Type[10];
    char User_Data[10];
    char Qual_Job_Name[26];
    int  Num_Keys_Spec;
  /*int  Keys[];*/              /* Varying length                 */
} Qus_SPLF_I_t;

/******************************************************************/
/* Input Parameter Section #2 used when Optional Parameter group 3*/
/* or 4 is specified.                                             */
/******************************************************************/
typedef _Packed struct Qus_SPLF_I2
{
    char User_Space[10];
    char User_Space_Lib[10];
    char Format_Name[8];
    char User_Name[10];
    char Output_Queue_Name[10];
    char Output_Queue_Lib[10];
    char Form_Type[10];
    char User_Data[10];
    char Qual_Job_Name[26];
    int  Offset_Keys_Spec;
    int  Num_Keys_Spec;
    int  Auxiliary_Storage_Pool;
    char Job_System_Name_Spec[8];
    char Start_Splf_Crt_Date_Spec[7];
    char Start_Splf_Crt_Time_Spec[6];
    char End_Splf_Crt_Date_Spec[7];
    char End_Splf_Crt_Time_Spec[6];
    char ASP_Device_Name_Spec[10];
  /*int  Keys[];*/              /* Varying length                 */
} Qus_SPLF_I2_t;

/******************************************************************/
/* Header Section.                                                */
/******************************************************************/

typedef _Packed struct Qus_SPLF_H
{
    char User_Name[10];
    char Output_Queue_Name[10];
    char Output_Queue_Lib[10];
    char UsrSpc_Name[10];
    char UsrSpc_Lib[10];
    char Qualified_Job_Name[26];
    char Qual_Job_System_Name[8];
    char Qual_Start_Splf_Crt_Date[7];
    char Qual_Sart_Splf_Crt_Time[6];
    char Qual_End_Splf_Crt_Date[7];
    char Qual_End_Splf_Crt_Time[6];
} Qus_SPLF_H_t;

/******************************************************************/
/* Structure for SPLF0100 format                                  */
/******************************************************************/

typedef _Packed struct Qus_SPLF0100
{
    char User_Name[10];
    char Output_Queue[10];
    char Output_Queue_Lib[10];
    char Form_Type[10];
    char User_Data[10];
    char Int_Job_ID[16];
    char Int_Splf_ID[16];
    char Reserved[2];
    int  Auxiliary_Storage_Pool;
} Qus_SPLF0100_t;

/******************************************************************/
/* Type definition for the SPLF0200 format.                       */
/*******                                                          */
/* NOTE:  The following type definition only defines the fixed    */
/*        portion of the format. Any varying length field will    */
/*        have to be defined by the user.                         */
/******************************************************************/

typedef _Packed struct Qus_LSPL_Key_Info
{
    int  Len_Field_Info_Retd;
    int  Key_Field_for_Field_Retd;
    char Type_of_Data[1];
    char Reserv3[3];
    int  Data_Length;
  /*char Data[];*/              /* Varying length                 */
  /*char Reserved[];*/          /* Varying length                 */
} Qus_LSPL_Key_Info_t;

typedef _Packed struct Qus_SPLF0200
{
    int  Num_Fields_Retd;
  /*Qus_LSPL_Key_Info_t Key_Info;*//*Varying length               */
} Qus_SPLF0200_t;

/******************************************************************/
/* Structure for SPLF0300 format                                  */
/******************************************************************/

typedef _Packed struct Qus_SPLF0300
{
     char Job_Name[10];
     char User_Name[10];
     char Job_Number[6];
     char Spooled_File_Name[10];
     int  Spooled_File_Nbr;
     int  Spooled_File_Status;
     char Splf_Open_Date[7];
     char Splf_Open_Time[6];
     char Splf_Schedule;
     char Splf_System_Name[10];
     char User_Data[10];
     char Form_Type[10];
     char Output_Queue[10];
     char Output_Queue_Lib[10];
     int  Auxiliary_Storage_Pool;
     int  Spooled_File_Size;
     int  Splf_Size_Multipler;
     int  Splf_Total_Pages;
     int  Splf_Number_Copies;
     char Spooled_File_Priority;
     char Reserved[3];
     int  Ipp_Job_Id;
} Qus_SPLF0300_t;
#if (__OS400_TGTVRM__>=510)
#pragma datamodel(pop)
#endif
#endif
