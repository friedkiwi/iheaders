/* begin_generated_IBM_copyright_prolog                              */
/* This is an automatically generated copyright prolog.              */
/* After initializing,  DO NOT MODIFY OR MOVE                        */
/* ----------------------------------------------------------------- */
/*                                                                   */
/* Product(s):                                                       */
/*     5722-SS1                                                      */
/*                                                                   */
/* (C)Copyright IBM Corp.  2002, 2005                                */
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
 /* Header File Name: H/QTARDSTS                                   */
 /*                                                                */
 /*                                                                */
 /* Description: Retrieve Device Status (QTARDSTS) API             */
 /*                                                                */
 /* Header Files Included: None.                                   */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Function Prototype List: QTARDSTS                              */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0  D98498.3     5D20  010617 ROCH      Creation              */
 /* $A0  D98498       5D20  010819 ROCH      New fields            */
 /* $A0  P9953400     5D20  010917 ROCH      Add CUE header        */
 /* $A1  D99239.1     5D30  020601 ROCH      New fields for V5R3   */
 /* $A2  D99794.23    5D40  111504 ROCH      New fields for V5R4   */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/
 #ifndef QTARDSTS_h
 #define QTARDSTS_h
 #pragma datamodel(P128)

 /******************************************************************/
 /* Prototype for calling Control Device               (QTARDSTS)  */
 /******************************************************************/
 #ifdef  __ILEC400__
       #pragma linkage(QTARDSTS,OS,nowiden)
 #else
       extern "OS"
 #endif


 void QTARDSTS (char *,          /* Receiver variable              */
                int,               /* Length of receiver variable    */
                char *,            /* Format Name                    */
                char *,            /* Device Description             */
                char *,            /* Resource Name                  */
                void *);           /* Error code                     */


 /******************************************************************/
 /* Type Definition for the RDST0100 format.                       */
 /******************************************************************/

 typedef _Packed struct Qta_RDST0100
    {
       int  Bytes_Returned;
       int  Bytes_Available;
       int  Offset_to_current_ctg_info;
       int  Number_of_current_ctg_info;
       int  Length_of_current_ctg_info;
       int  Offset_to_device_info;
       int  Number_of_device_info;
       int  Length_of_device_info;
       int  Offset_to_label_info;
       int  Number_of_label_info;
       int  Length_of_label_info;
       int  Offset_to_position_info;
       int  Number_of_position_info;
       int  Length_of_position_info;
       int  Offset_to_tape_MLB_info;
       int  Number_of_tape_MLB_info;
       int  Length_of_tape_MLB_info;
    } Qta_RDST0100_t;

 typedef _Packed struct Qta_cartridge_info
    {
     char Volume_ID[6];
     char Cartridge_ID[6];
     char Current_density[10];
     char Write_protected;
     char Catalog_name[10];
     char Mounted_volume[6];
    } Qta_cartridge_info_t;

 typedef _Packed struct Qta_device_info
    {
     char Current_command[10];
     char Job_using_device[26];
     char Category_mounted;
     char Category_name[10];
     char Category_system[8];
     char Cartridge_mounted[6];
     char Cartridge_order;
     char Target_category[10];
     char Target_system[8];
     char Mount_Id[10];
    } Qta_device_info_t;

 typedef _Packed struct Qta_label_info
    {
     char Label_type;
     char Tape_encoding;
     char Current_file_seqn[10];
     char Current_vol_seqn[10];
     char Volume_label[80];
     char Tape_label1[80];
     char Tape_label2[80];
    } Qta_label_info_t;

 typedef _Packed struct Qta_position_info
    {
     char Leave_processing;
     char At_logical_EOT;
     char At_logical_BOT;
     char Reserved1;
     int Current_TM_count;
    } Qta_position_info_t;

 typedef _Packed struct Qta_library_info
    {
     int Number_used_slots;
     int Number_available_slots;
     int Number_highcap_slots;
     int Number_IE_slots;
    } Qta_library_info_t;

 /******************************************************************/
 /* Constant for format name                                       */
 /******************************************************************/
 #define RDST0100 "RDST0100"

 #pragma datamodel(pop)
 #endif

