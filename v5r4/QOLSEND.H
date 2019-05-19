 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QOLSEND                                    */
 /*                                                                */
 /* Descriptive Name: Send Data                                    */
 /*                                                                */
 /* 5763-SS1  (C) Copyright IBM Corp. 1994,1994                    */
 /* All rights reserved.                                           */
 /* US Government Users Restricted Rights -                        */
 /* Use, duplication or disclosure restricted                      */
 /* by GSA ADP Schedule Contract with IBM Corp.                    */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /*                                                                */
 /* Description: The Send Data API performs output on a link that  */
 /*              is currently enabled in the job in which the      */
 /*              application program is running.                   */
 /*                                                                */
 /* Header Files Included: None.                                   */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: Qol_Send_Diagnostic_Data_t                     */
 /*                 Qol_Send_General_LAN_t                         */
 /*                 Qol_Output_Buffer_LAN_t                        */
 /*                 Qol_Output_Buffer_X25_t                        */
 /*                 Qol_Output_Data_XB000_X25_SVC_t                */
 /*                 Qol_Output_Data_XB000_X25_PVC_t                */
 /*                 Qol_Output_Data_XB100_X25_t                    */
 /*                 Qol_Output_Data_XB400_X25_t                    */
 /*                                                                */
 /* Function Prototype List: QOLSEND                               */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= D2862000     3D10  940424 VINING:   New Include           */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

 #ifndef QOLSEND_h
 #define QOLSEND_h
#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(P128)      /* @B1A*/
#endif                       /* @B1A*/

 /******************************************************************/
 /* Prototype for calling Send Data API QOLSEND                    */
 /******************************************************************/

 #ifdef __ILEC400__
      #pragma linkage (QOLSEND,OS,nowiden)
 #else
      extern "OS"
 #endif

 void QOLSEND (int  *,           /* Return Code                    */
               int  *,           /* Reason Code                    */
               void *,           /* Diagnostic Data                */
               int  *,           /* PCEP ID                        */
               int  *,           /* UCEP ID                        */
               int  *,           /* Provider Connection End Point  */
               char *,           /* Communications Handle          */
               char *,           /* Operation                      */
               int  *);          /* Number of Data Units           */

 /******************************************************************/
 /* Type Definition for Diagnostic data                            */
 /******************************************************************/

 typedef _Packed struct Qol_Send_Diagnostic_Data
    {
       char Reserved_1[2];
       char Error_Code[4];
       char Time_Stamp[8];
       char Error_Log_ID[4];
       char Reserved_2[10];
       char Indicators;
       char X25_Cause_Code;
       char X25_Diagnostic_Code;
       char Reserved_3;
       int  Offset_To_Error;
       char Reserved_4[4];
    } Qol_Send_Diagnostic_Data_t;

 /******************************************************************/
 /* Type Definition for General LAN Information                    */
 /******************************************************************/

 typedef _Packed struct Qol_Send_General_LAN
    {
       short Length_Of_General_Info;
       char  Destination_Address[6];
       char  DSAP_Address;
       char  SSAP_Address;
       char  Access_Control;
       char  Priority_Control;
       short Length_Of_Routing_Info;
       short Length_Of_User_Data;
    } Qol_Send_General_LAN_t;

 /******************************************************************/
 /* Type Definition for LAN Buffer Descriptor                      */
 /******************************************************************/

 typedef _Packed struct Qol_Output_Buffer_LAN
    {
       short Length_Of_Data;
       char  Reserved_1[30];
    } Qol_Output_Buffer_LAN_t;

 /******************************************************************/
 /* Type Definition for X25 Buffer Descriptor                      */
 /******************************************************************/

 typedef _Packed struct Qol_Output_Buffer_X25
    {
       short Length_Of_Data;
       char  More_Data;
       char  Qualified_Data;
       char  Interrupt_Packet;
       char  Delivery_Confirmation;
       char  Reserved_1[26];
    } Qol_Output_Buffer_X25_t;

 /******************************************************************/
 /* Type Definition for X25 Operation X'B000' Data Unit            */
 /******************************************************************/

 typedef _Packed struct Qol_Output_Data_XB000_X25_SVC
    {
       char  X02_Constant;
       char  Reserved_1[3];
       short Transmit_Packet_Size;
       short Transmit_Window_Size;
       short Receive_Packet_Size;
       short Receive_Window_Size;
       char  Reserved_2[7];
       char  Length_Of_DTE_Addr;
       char  DTE_Addr[16];
       char  Reserved_3[8];
       char  Delivery_Confirmation;
       char  Reserved_4[7];
       char  Closed_User_Group;
       char  Closed_User_Group_ID;
       char  Reverse_Charge;
       char  Fast_Select;
       char  Length_Of_Facilities_Info;
       char  Facilities_Info[109];
       char  Reserved_5[48];
       short Length_Of_Call_Clear_User_Data;
       char  Call_Clear_User_Data[128];
       char  Reserved_6[128];
       char  Control_Info;
       char  Reserved_7[3];
       int   Max_Data_Unit_Assembly_Size;
       short Automatic_Flow_Control;
       char  Reserved_8[30];
    } Qol_Output_Data_XB000_X25_SVC_t;

 /******************************************************************/
 /* Type Definition for X25 Operation X'B000' Data Unit PVC        */
 /******************************************************************/

 typedef _Packed struct Qol_Output_Data_XB001_X25_PVC
    {
       char  Reserved_1[2];
       char  Logical_Channel_ID[2];
       short Transmit_Packet_Size;
       short Transmit_Window_Size;
       short Receive_Packet_Size;
       short Receive_Window_Size;
       char  Reserved_2[32];
       char  Delivery_Confirmation;
       char  Reserved_3[427];
       char  Control_Info;
       char  Reserved_4[3];
       int   Max_Data_Unit_Assembly_Size;
       short Automatic_Flow_Control;
       char  Reserved_5[30];
    } Qol_Output_Data_XB000_X25_PVC_t;

 /******************************************************************/
 /* Type Definition for X25 Operation X'B100' Data Unit            */
 /******************************************************************/

 typedef _Packed struct Qol_Output_Data_XB100_X25
    {
       char  Reserved_1[2];
       char  Cause_Code;
       char  Diagnostic_Code;
       char  Reserved_2[4];
       char  Length_of_Facilities_Info;
       char  Facilities_Info[109];
       char  Reserved_3[48];
       short Length_Of_Clear_User_Data;
       char  Clear_User_Data[128];
       char  Reserved_4[216];
    } Qol_Output_Data_XB100_X25_t;

 /******************************************************************/
 /* Type Definition for X25 Operation X'B400' Data Unit            */
 /******************************************************************/

 typedef _Packed struct Qol_Output_Data_XB400_X25
    {
       char  Reserved_1[4];
       short Transmit_Packet_Size;
       short Transmit_Window_Size;
       short Receive_Packet_Size;
       short Receive_Window_Size;
       char  Reserved_2[32];
       char  Delivery_Confirmation;
       char  Reserved_3[11];
       char  Length_Of_Facilities_Info;
       char  Facilities_Info[109];
       char  Reserved_4[306];
       char  Control_Info;
       char  Reserved_5[3];
       int   Max_Data_Unit_Assembly_Size;
       short Automatic_Flow_Control;
       char  Reserved_6[30];
    } Qol_Output_Data_XB400_X25_t;

#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(pop)       /* @B1A*/
#endif                       /* @B1A*/
 #endif
