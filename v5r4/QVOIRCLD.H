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
 /* Header File Name: H/QVOIRCLD                                   */
 /*                                                                */
 /* Descriptive Name: Retrieve Image Catalog Details               */
 /*                                                                */
 /* Description: Retrieve Image Catalog Details (QVOIRCLD) API     */
 /*                                                                */
 /* Header Files Included: None.                                   */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Function Prototype List: QVOIRCLD                              */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON   LEVEL   DATE   PGMR CHANGE DESCRIPTION           */
 /* ---- -------- ------  ------ ---- ---------------------------- */
 /* $A0  D99794   V5R4M0  040331 CRW: New Include                  */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/
 #ifndef QVOIRCLD_h
 #define QVOIRCLD_h
 #pragma datamodel(P128)

 /******************************************************************/
 /* Prototype for calling Retrieve Image Catalog Details (QVOIRCLD)*/
 /******************************************************************/
 #ifdef  __ILEC400__
       #pragma linkage(QVOIRCLD,OS,nowiden)
 #else
       extern "OS"
 #endif


 void QVOIRCLD (void *,          /* Receiver variable              */
                int,             /* Length of receiver variable    */
                char *,          /* Format name                    */
                char *,          /* Qualified image catalog name   */
                void *);         /* Error code                     */


 /******************************************************************/
 /* Type Definition for the RCLD0100 format.                       */
 /******************************************************************/

 typedef _Packed struct Qvoi_RCLD0100
    {
       int  Bytes_Returned;
       int  Bytes_Available;
       char Image_Catalog_Type[1];
       char Image_Catalog_Status[1];
       char Reference_Catalog_Indicator[1];
       char Dependent_Catalog_Indicator[1];
       char Image_Catalog_Text[50];
       char Virtual_Device_Name[10];
       int  Catalog_Directory_Offset;
       int  Number_Of_Directories;
       int  Catalog_Directory_Length;
       int  Image_Catalog_CCSID;
       int  Offset_To_First_Catalog_Entry;
       int  Number_Of_Returned_Entries;
       int  Image_Catalog_Entry_Length;
       int  Total_Number_Of_Entries;
       char Reference_Catalog[10];
       char Reference_Catalog_Library[10];
       /*char Reserved[]; */                     /* Varying length */
       /*char Directory[]; */                    /* Varying length */
     } Qvoi_RCLD0100_t;


 typedef _Packed struct Qvoi_Optical_Entry_Info
    {
     int  Optical_Entry_Index;
     char Optical_Entry_Status[1];
     char Optical_Entry_Text[100];
     char Optical_Entry_Write_Protect[1];
     char Optical_Entry_Volume[32];
     char Optical_Entry_Access[1];
     char Reserved[1];
     int  Optical_Image_Size;
     int  Optical_Entry_File_Name_Length;
     char Optical_Entry_File_Name[512];
    } Qvoi_Optical_Entry_Info_t;

 typedef _Packed struct Qvoi_Tape_Entry_Info
    {
     int                 Tape_Entry_Index;
     char                Tape_Entry_Status[1];
     char                Tape_Entry_Text[100];
     char                Tape_Entry_Write_Protect[1];
     char                Tape_Entry_Volume[6];
     unsigned int        Tape_Entry_Max_Size;
     unsigned long long  Tape_Entry_Bytes_Avail;
     unsigned long long  Tape_Entry_Bytes_Used;
     unsigned int        Tape_Entry_Percentage_Used;
     unsigned int        Tape_Entry_First_Seqnbr;
     unsigned int        Tape_Entry_Last_Seqnbr;
     char                Reserved_1[1];
     char                Tape_Entry_Density[10];
     char                Tape_Entry_Volume_Type[1];
     int                 Tape_Entry_File_Name_Length;
     char                Tape_Entry_File_Name[512];
    } Qvoi_Tape_Entry_Info_t;

 /******************************************************************/
 /* Constants for format name                                      */
 /******************************************************************/
 #define RCLD0100 "RCLD0100"
 #define RCLD0200 "RCLD0200"
 #define RCLD0300 "RCLD0300"

 #pragma datamodel(pop)
 #endif
