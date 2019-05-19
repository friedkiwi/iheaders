 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QOLRECV                                    */
 /*                                                                */
 /* Descriptive Name: Receive Data                                 */
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
 /* Description: The Receive Data API performs an input operation  */
 /*              on a link that is currently enabled in the job in */
 /*              which the application program is running.         */
 /*                                                                */
 /* Header Files Included: None.                                   */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: Qol_Recv_Diagnostic_Data_t                     */
 /*                 Qol_Recv_General_LAN_t                         */
 /*                 Qol_Input_Buffer_LAN_t                         */
 /*                 Qol_Input_Buffer_X25_t                         */
 /*                 Qol_Input_Data_XB001_X25_SVC_t                 */
 /*                 Qol_Input_Data_XB001_X25_PVC_t                 */
 /*                 Qol_Input_Data_XB101_X25_t                     */
 /*                 Qol_Input_Data_XB201_X25_t                     */
 /*                 Qol_Input_Data_XB301_X25_t                     */
 /*                                                                */
 /* Function Prototype List: QOLRECV                               */
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

 #ifndef QOLRECV_h
 #define QOLRECV_h
#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(P128)      /* @B1A*/
#endif                       /* @B1A*/

 /******************************************************************/
 /* Prototype for calling Receive Data API QOLRECV                 */
 /******************************************************************/

 #ifdef __ILEC400__
      #pragma linkage (QOLRECV,OS,nowiden)
 #else
      extern "OS"
 #endif

 void QOLRECV (int  *,           /* Return Code                    */
               int  *,           /* Reason Code                    */
               int  *,           /* UECP ID                        */
               int  *,           /* PCEP ID                        */
               char *,           /* Operation                      */
               int  *,           /* Number of Data Units           */
               char *,           /* Data Available                 */
               void *,           /* Diagnostic Data                */
               char *);          /* Communications Handle          */

 /******************************************************************/
 /* Type Definition for Diagnostic data                            */
 /******************************************************************/

 typedef _Packed struct Qol_Recv_Diagnostic_Data
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
    } Qol_Recv_Diagnostic_Data_t;

 /******************************************************************/
 /* Type Definition for General LAN Information                    */
 /******************************************************************/

 typedef _Packed struct Qol_Recv_General_LAN
    {
       short Length_Of_General_Info;
       char  Sending_Address[6];
       char  DSAP_Address;
       char  SSAP_Address;
       char  Reserved_1[2];
       short Length_Of_Routing_Info;
       short Length_Of_User_Data;
    } Qol_Recv_General_LAN_t;

 /******************************************************************/
 /* Type Definition for LAN Buffer Descriptor                      */
 /******************************************************************/

 typedef _Packed struct Qol_Input_Buffer_LAN
    {
       short Length_Of_Data;
       char  Reserved_1[30];
    } Qol_Input_Buffer_LAN_t;

 /******************************************************************/
 /* Type Definition for X25 Buffer Descriptor                      */
 /******************************************************************/

 typedef _Packed struct Qol_Input_Buffer_X25
    {
       short Length_Of_Data;
       char  More_Data;
       char  Qualified_Data;
       char  Interrupt_Packet;
       char  Delivery_Confirmation;
       char  Reserved_1[26];
    } Qol_Input_Buffer_X25_t;

 /******************************************************************/
 /* Type Definition for X25 Operation X'B001' Data Unit            */
 /******************************************************************/

 typedef _Packed struct Qol_Input_Data_XB001_X25_SVC
    {
       char  Reserved_1[2];
       char  Logical_Channel_ID[2];
       short Transmit_Packet_Size;
       short Transmit_Window_Size;
       short Receive_Packet_Size;
       short Receive_Window_Size;
       char  Reserved_2[32];
       char  Delivery_Confirmation;
       char  Reserved_3[11];
       char  Length_Of_Facilities_Info;
       char  Facilities_Info[109];
       char  Reserved_4[48];
       short Length_Of_Call_Clear_User_Data;
       char  Call_Clear_User_Data[128];
       char  Reserved_5[168];
    } Qol_Input_Data_XB001_X25_SVC_t;

 /******************************************************************/
 /* Type Definition for X25 Operation X'B001' Data Unit PVC        */
 /******************************************************************/

 typedef _Packed struct Qol_Input_Data_XB001_X25_PVC
    {
       char  Reserved_1[4];
       short Transmit_Packet_Size;
       short Transmit_Window_Size;
       short Receive_Packet_Size;
       short Receive_Window_Size;
       char  Reserved_2[500];
    } Qol_Input_Data_XB001_X25_PVC_t;

 /******************************************************************/
 /* Type Definition for X25 Operation X'B101' Data Unit            */
 /******************************************************************/

 typedef _Packed struct Qol_Input_Data_XB101_X25
    {
       char  Clear_Type[2];
       char  Cause_Code;
       char  Diagnostic_Code;
       char  Reserved_1[4];
       char  Length_of_Facilities_Info;
       char  Facilities_Info[109];
       char  Reserved_2[48];
       short Length_Of_Clear_User_Data;
       char  Clear_User_Data[128];
       char  Reserved_3[216];
    } Qol_Input_Data_XB101_X25_t;

 /******************************************************************/
 /* Type Definition for X25 Operation X'B201' Data Unit            */
 /******************************************************************/

 typedef _Packed struct Qol_Input_Data_XB201_X25
    {
       char  Reserved_1[2];
       char  Logical_Channel_ID[2];
       short Transmit_Packet_Size;
       short Transmit_Window_Size;
       short Receive_Packet_Size;
       short Receive_Window_Size;
       char  Reserved_2[7];
       char  Length_Of_Calling_DTE_Addr;
       char  Calling_DTE_Addr[16];
       char  Reserved_3[8];
       char  Delivery_Confirmation;
       char  Reserved_4[9];
       char  Reverse_Charge;
       char  Fast_Select;
       char  Length_Of_Facilities_Info;
       char  Facilities_Info[109];
       char  Reserved_5[48];
       short Length_Of_Call_User_Data;
       char  Call_User_Data[128];
       int   Called_DTE_Add_Len;
       char  Called_DTE_Add[16];
       char  Reserved_6[111];

    } Qol_Input_Data_XB201_X25_t;

 /******************************************************************/
 /* Type Definition for X25 Operation X'B301' Data Unit            */
 /******************************************************************/

 typedef _Packed struct Qol_Input_Data_XB301_X25
    {
       char  Reserved_1[8];
       char  Length_Of_Facilities_Info;
       char  Facilities_Info[109];
       char  Reserved_2[48];
       short Length_Of_Clear_User_Data;
       char  Clear_User_Data[128];
       char  Reserved_3[216];
    } Qol_Input_Data_XB301_X25_t;

#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(pop)       /* @B1A*/
#endif                       /* @B1A*/
 #endif
