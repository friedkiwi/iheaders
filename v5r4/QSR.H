/* begin_generated_IBM_copyright_prolog                              */
/* This is an automatically generated copyright prolog.              */
/* After initializing,  DO NOT MODIFY OR MOVE                        */
/* ----------------------------------------------------------------- */
/*                                                                   */
/* Product(s):                                                       */
/*     5769-SS1                                                      */
/*     5722-SS1                                                      */
/*                                                                   */
/* (C)Copyright IBM Corp.  1998, 2005                                */
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
#ifdef __cplusplus
   #pragma info(none)
#else
   #pragma nomargins nosequence
   #pragma checkout(suspend)
#endif
/*** START HEADER FILE SPECIFICATIONS *****************************/
/*                                                                */
/* Header File Name:  H/QSR                                       */
/*                                                                */
/* Descriptive Name: Common structures for save/restore APIs      */
/*                                                                */
/* Description: This header file defines common structures        */
/*              used by the save/restore APIs.                    */
/*                                                                */
/* Header Files Included: None                                    */
/*                                                                */
/* Macros List: None                                              */
/*                                                                */
/* Structure List: Qsr_MDFN0100_t                                 */
/*                 Qsr_TAPE0100_t                                 */
/*                 Qsr_TAPE0100_Device_t                          */
/*                 Qsr_TAPE0100_File_t                            */
/*                 Qsr_TAPE0200_t                                 */
/*                 Qsr_TAPE0200_Device_t                          */
/*                 Qsr_TAPE0200_File_t                            */
/*                 Qsr_Record_t                                   */
/*                 Qsr_User_Space_t                               */
/*                 Qsr_SPLFDTA_t                                  */
/*                 Qsr_SPLFDTA_List_Entry_t                       */
/*                 Qsr_SPLFDTA_ID_t                               */
/*                 Qsr_SPLFDTA_Attrs_t                            */
/*                                                                */
/*                                                                */
/* Change Activity:                                               */
/*                                                                */
/* CFD List:                                                      */
/*                                                                */
/* FLAG REASON       LEVEL DATE   PGMR     CHANGE DESCRIPTION     */
/* ---- ------------ ----- ------ -------- ---------------------- */
/* $A0= P3671746     4D40  980822 ROCH    :New Include            */
/* $01= D9821201     5D10  991107 ROCH    :Teraspace stage 2      */
/* $TJ= D9965404     5D40  040229 ROCH    :S/R spooled files      */
/* $TR= D9311501     5D40  040801 ROCH    :Add new formats        */
/*                                                                */
/* End CFD List.                                                  */
/*                                                                */
/*  Additional notes about the Change Activity                    */
/* End Change Activity.                                           */
/*** END HEADER FILE SPECIFICATIONS *******************************/

#ifndef QSR_h
#define QSR_h

#if (__OS400_TGTVRM__>=510)                                /* @01A*/
   #pragma datamodel(P128)                                 /* @01A*/
#endif                                                     /* @01A*/
/******************************************************************/
/* Type Definitions                                               */
/****                                                         *****/
/* NOTE: The following type definitions only define the fixed     */
/*       portion of the formats.  Any varying length fields will  */
/*       have to be defined by the user.                          */
/******************************************************************/

/******************************************************************/
/* Type Definitions for the Media Definition                      */
/*                                                                */
/* APIs: QSRCRTMD, QsrCreateMediaDefinition                       */
/*       QSRRTVMD, QsrRetrieveMediaDefinition                     */
/******************************************************************/

typedef struct Qsr_MDFN0100 {
    int Bytes_Returned;
    int Bytes_Available;
    char Format_Name[8];
} Qsr_MDFN0100_t;                                          /* @TRA*/

typedef struct Qsr_TAPE0100 {
    int Bytes_Returned;
    int Bytes_Available;
    int Maximum_Resources;
    int Minimum_Resources;
    int Offset_First_Device;
    int Device_Count;
    /*char Device[]; */         /*  Varying length field          */
} Qsr_TAPE0100_t;

typedef struct Qsr_TAPE0100_Device {
    int Offset_Next_Device;
    char Device_Name[10];
    char reserved[2];
    int Offset_First_File;
    int File_Count;
    /*char Filess[]; */         /* Varying length field           */
} Qsr_TAPE0100_Device_t;

typedef struct Qsr_TAPE0100_File {
    int Offset_Next_File;
    int Sequence_Number;
    int Offset_First_Volume_Id;
    int Volume_Id_Count;
    int Volume_Id_Length;
    int Starting_Volume;
    /*char Volume_Ids[]; */     /* Varying length field           */
} Qsr_TAPE0100_File_t;

typedef struct Qsr_TAPE0200 {
    int Bytes_Returned;
    int Bytes_Available;
    int Maximum_Resources;
    int Minimum_Resources;
    int Offset_First_Device;
    int Device_Count;
    int Header_Length;
    int Device_Allocation;
    int Save_Format;
    /*char Device[]; */         /*  Varying length field          */
} Qsr_TAPE0200_t;                                          /* @TRA*/

typedef struct Qsr_TAPE0200_Device {
    int Offset_Next_Device;
    char Device_Name[10];
    char reserved[2];
    int Offset_First_File;
    int File_Count;
    int Device_Length;
    /*char Files[]; */          /* Varying length field           */
} Qsr_TAPE0200_Device_t;                                   /* @TRA*/

typedef struct Qsr_TAPE0200_File {
    int Offset_Next_File;
    int Sequence_Number;
    int Offset_First_Volume_Id;
    int Volume_Id_Count;
    int Volume_Id_Length;
    int Starting_Volume;
    int File_Length;
    /*char Volume_Ids[]; */     /* Varying length field           */
} Qsr_TAPE0200_File_t;                                     /* @TRA*/

/******************************************************************/
/* Type Definitions for the User Space.                           */
/*                                                                */
/* APIs: QSRRSTO                                                  */
/*       QSRSAVO                                                  */
/******************************************************************/
typedef _Packed struct Qsr_Record {
    long Record_Length;
    int Key_Number;
    long Data_Length;
    /*char Key_Data[];*/                 /* Varying length field  */
} Qsr_Record_t;                                            /* @TJA*/

typedef _Packed struct Qsr_User_Space {
    long Number_Records;
    /*Qsr_Record_t Array[];*/            /* Varying length field  */
} Qsr_User_Space_t;                                        /* @TJA*/

typedef _Packed struct Qsr_SPLFDTA {
    int Spooled_File_Data;
    int Header_Length;
    int Offset_List;
} Qsr_SPLFDTA_t;                                           /* @TJA*/

typedef _Packed struct Qsr_SPLFDTA_List_Entry {
    int Entry_Length;
    int Offset_Next_Entry;
    int Include_Omit;
    int Format;
    int Offset_Criteria;
    int Offset_New_Attributes;
} Qsr_SPLFDTA_List_Entry_t;                                /* @TJA*/

typedef _Packed struct Qsr_SPLFDTA_ID {
    int ID_Length;
    char Job_Name[10];
    char User_Name[10];
    char Job_Number[6];
    char Spooled_File_Name[10];
    int Spooled_File_Number;
    char Job_System_Name[8];
    char Creation_Date[7];
    char Creation_Time[6];
} Qsr_SPLFDTA_ID_t;                                        /* @TJA*/

typedef _Packed struct Qsr_SPLFDTA_Attrs {
    int Attrs_Length;
    char Output_Queue_Name[10];
    char Output_Queue_Library[10];
    char Spooled_File_Name[10];
    char Job_Name[10];
    char User_Name[10];
    char Job_Number[6];
    char User_Specified_Data[10];
    char Job_System_Name[8];
    char Form_Type[10];
    char Start_Creation_Date_Time[13];
    char End_Creation_Date_Time[13];
} Qsr_SPLFDTA_Attrs_t;                                     /* @TJA*/


#if (__OS400_TGTVRM__>=510)				  /* @01A*/
    #pragma datamodel(pop)                                /* @01A*/
#endif                                                    /* @01A*/


#endif  /* QSR_h */

#ifdef __cplusplus
    #pragma info(restore)
#else
    #pragma checkout(resume)
#endif

