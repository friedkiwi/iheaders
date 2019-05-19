/*** START HEADER FILE SPECIFICATIONS ***************************/
/*                                                              */
/* Header File Name: H/QSPROUTQ                                 */
/*                                                              */
/* Descriptive Name: Retrieve Output Queue Information.         */
/*                                                              */
/* 5763-SS1, 5722-SS1(C) Copyright IBM Corp. 1994,2003          */
/* All rights reserved.                                         */
/* US Government Users Restricted Rights -                      */
/* Use, duplication or disclosure restricted                    */
/* by GSA ADP Schedule Contract with IBM Corp.                  */
/*                                                              */
/* Licensed Materials-Property of IBM                           */
/*                                                              */
/*                                                              */
/* Description: The Retrieve Output Queue Information API       */
/*              returns information about the parameters used   */
/*              to create the queue, the current status of the  */
/*              queue, and the number of entries on the queue.  */
/*                                                              */
/*                                                              */
/* Header Files Included: None.                                 */
/*                                                              */
/* Macros List: None.                                           */
/*                                                              */
/* Structure List: Qsp_OUTQ0100_t                               */
/*                 Qsp_OUTQ0200_t                               */
/*                 Qsp_PAGENT_t                                 */
/*                 Qsp_WTRENT_t                                 */
/*                                                              */
/* Function Prototype List: QSPROUTQ.                           */
/*                                                              */
/* Change Activity:                                             */
/*                                                              */
/* CFD List:                                                    */
/*                                                              */
/* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION  */
/* ---- ------------ ----- ------ --------- --------------------*/
/* $A0= D2862000     3D10  940213 LUPA:     New Include         */
/* $A1= D9171000     3D60  950111 JCL :     Print openness      */
/* $A2= D95233       4D20  970221 BOLLIG:   added IMG CFG       */
/* $A3= D94929       4D30  970727 BOLLIG:   added SPLFASP info  */
/* $A4= D98212.4     5D10  991228 GCHANEY:Compiler directive for*/
/*                                        16 byte pointers.     */
/* $A5= D97314       5D10  000308 KJV:      Printer publishing  */
/* $A6= D97259.1     5D30  020403 ROCH:     Support for spooled */
/*                                          files and output    */
/*                                          queues on an IASP.  */
/*                                                              */
/* End CFD List.                                                */
/*                                                              */
/*  Additional notes about the Change Activity                  */
/* End Change Activity.                                         */
/*** END HEADER FILE SPECIFICATIONS *****************************/

 #ifndef QSPROUTQ_h
 #define QSPROUTQ_h
#if (__OS400_TGTVRM__>=510)
#pragma datamodel(P128)
#endif

  #ifdef __ILEC400__
       #pragma linkage (QSPROUTQ,OS,nowiden)
  #else
       extern "OS"
  #endif
 /****************************************************************/
 /* Prototype for call Retrieve Output Queue Information API     */
 /*  QSPROUTQ                                                    */
 /****************************************************************/
 void QSPROUTQ (void *,          /* Receiver variable            */
                int,             /* Length of receiver variable  */
                char *,          /* Format name                  */
                void *,          /* Qualified output queue name  */
                void *);         /* Error code                   */

 /****************************************************************/
 /* Structure for the Spooled File Size Entry                    */
 /****                                                         ***/
 /*     The following describes the spooled file size entries.   */
 /*     The spooled file size entries can be included in format  */
 /*     OUTQ0100 and OUTQ0200.                                   */
 /*                                                              */
 /*     Spool_File_Size_Offset provides the offset               */
 /*     Number_Of_Size_Entries provides the number of repeated   */
 /*     entries.                                                 */
 /*                                                              */
 /****************************************************************/

 typedef _Packed struct Qsp_PAGENT
    {
     int  Number_Of_Pages;
     char Starting_Time[8];
     char Ending_Time[8];
    } Qsp_PAGENT_t;


 /****************************************************************/
 /* Record structure for OUTQ0100 format                         */
 /****                                                         ***/
 /* NOTE: The following type definition only defines the fixed   */
 /*       portion of the format.  Any varying length field will  */
 /*       have to be defined by the user.                        */
 /****************************************************************/

 typedef _Packed struct Qsp_OUTQ0100
    {
     int  Bytes_Return;
     int  Bytes_Avail;
     char Output_Queue_Name[10];
     char Output_Queue_Lib[10];
     char Order_of_Files[10];
     char Display_Any_File[10];
     int  Job_Separators;
     char Operator_Control[10];
     char Data_Queue_Name[10];
     char Data_Queue_Lib[10];
     char Authority_to_Check[10];
     int  Number_of_Files;
     char Output_Queue_Status[10];
     char Writer_Job_Name[10];
     char Writer_Job_User[10];
     char Writer_Job_Number[6];
     char Writer_Status[10];
     char Printer_Device_Name[10];
     char Output_Queue_Descr[50];
     char Reserved2[2];
     int  Number_Of_Page_Sizes_Given;
     int  Number_Of_Writers_Started;
     int  Writers_To_Autostart;
     char Remote_System_Name_Type[1];
     char Remote_System_Name[255];
     char Remote_Printer_Queue[128];
     char Message_Queue[10];
     char Message_Queue_Library[10];
     int  Connection_Type;
     int  Destination_Type;
     char VMMVS_Class[1];
     char FCB[8];
     char Transform_SCS_To_ASCII[1];
     char Manufacturer_Type_Model[17];
     char Workstation_Cust_Obj[10];
     char Workstation_Cust_Obj_Library[10];
     char Splf_Aux_Storage_Pool[1];
     int  Spooled_File_Size_Offset;
     int  Number_Of_Size_Entries;
     int  Length_Of_Each_Size_Entry;
     char Destination_Options[128];
     char Writer_Type[1];
     char Separator_Page[1];
     char Long_Remote_Printer_Queue[255];
     char Image_Configuration_Name[10];
     char Image_Configuration_Library[10];
     char Network_Directory_Pub_Status;
     char Reserved3[2];
     int  Aux_Storage_Pool_ID;
     char ASP_Device_Name[10];
     /*Qsp_PAGENT_t Size_Data[];*//* Varying length              */
    } Qsp_OUTQ0100_t;

 /****************************************************************/
 /* Structure for the Writer Entry                               */
 /****                                                         ***/
 /*     The following describes the writer entry in format       */
 /*     OUTQ0200.                                                */
 /*                                                              */
 /*     Writer_Entry_Offset      provides the offset             */
 /*     Number_Of_Writer_Entries provides the number of repeated */
 /*     entries.                                                 */
 /*                                                              */
 /****************************************************************/

 typedef _Packed struct Qsp_WTRENT
    {
     char Writer_Job_Name[10];
     char Writer_Job_User[10];
     char Writer_Job_Number[6];
     char Writer_Status[10];
     char Printer_Device_Name[10];
    } Qsp_WTRENT_t;

 /****************************************************************/
 /* Structure for the User Option Entry                          */
 /****                                                         ***/
 /*     The following describes the user option entry in format  */
 /*     OUTQ0200.                                                */
 /*                                                              */
 /*     User_Options_Offset      provides the offset             */
 /*     Number_Of_User_Options   provides the number of repeated */
 /*     entries.                                                 */
 /*                                                              */
 /****************************************************************/
 typedef _Packed struct Qsp_OPTENT
    {
     char User_Defined_Option[10];
    } Qsp_OPTENT_t;

 /****************************************************************/
 /* Record structure for OUTQ0200 format                         */
 /****                                                         ***/
 /* NOTE: The following type definition only defines the fixed   */
 /*       portion of the format.  Any varying length field will  */
 /*       have to be defined by the user.                        */
 /****************************************************************/
 typedef _Packed struct Qsp_OUTQ0200
    {
     int  Bytes_Returned;
     int  Bytes_Available;
     char Output_Queue_Name[10];
     char Output_Queue_Lib[10];
     char Order_Of_Files[10];
     char Display_Any_File[10];
     int  Job_Separators;
     char Operator_Control[10];
     char Data_Queue_Name[10];
     char Data_Queue_Lib[10];
     char Authority_To_Check[10];
     int  Number_Of_Files;
     char Output_Queue_Status[10];
     char Output_Queue_Descr[50];
     int  Number_Of_Page_Sizes_Given;
     int  Number_Of_Writers_Started;
     int  Writers_To_Autostart;
     char Remote_System_Name_Type[1];
     char Remote_System_Name[255];
     char Remote_Printer_Queue[128];
     char Message_Queue[10];
     char Message_Queue_Library[10];
     int  Connection_Type;
     int  Destination_Type;
     char VMMVS_Class[1];
     char FCB[8];
     char Transform_SCS_To_ASCII[1];
     char Manufacturer_Type_Model[17];
     char Workstation_Cust_Obj[10];
     char Workstation_Cust_Obj_Library[10];
     char Splf_Aux_Storage_Pool[1];
     int  Spooled_File_Size_Offset;
     int  Number_Of_Size_Entries;
     int  Length_Of_Each_Size_Entry;
     int  Writer_Entry_Offset;
     int  Number_Of_Writer_Entries;
     int  Length_Of_Each_Writer_Entry;
     char Destination_Options[128];
     char Writer_Type[1];
     char Separator_Page[1];
     char Long_Remote_Printer_Queue[255];
     char Reserved2[3];
     int  User_Options_Offset;
     int  Number_Of_User_Options;
     int  Length_Of_Each_Option_Entry;
     int  User_Data_Offset;
     int  User_Data_Bytes_Returned;
     int  User_Data_Bytes_Available;
     char User_Object_Name[10];
     char User_Object_Library[10];
     char User_Object_Type[10];
     char User_Driver_Program[10];
     char User_Driver_Program_Library[10];
     char User_Transform_Program[10];
     char User_Transform_Program_Library[10];
     char Image_Configuration_Name[10];
     char Image_Configuration_Library[10];
     char Network_Directory_Pub_Status;
     char Reserved3[1];
     int  Aux_Storage_Pool_ID;
     char ASP_Device_Name[10];
     /*Qsp_PAGENT_t Size_Data[];*//* Varying length              */
     /*Qsp_WTRENT_t Writer_Data[];*//* Varying length            */
     /*Qsp_OPTENT_t User_Option_Data[];*//* Varying length       */
    } Qsp_OUTQ0200_t;

#if (__OS400_TGTVRM__>=510)
#pragma datamodel(pop)
#endif
#endif
