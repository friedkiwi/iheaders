 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QOLQLIND                                   */
 /*                                                                */
 /* Descriptive Name: Query Line Description                       */
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
 /* Description: The Query Line Description API queries an existing*/
 /*              token-ring, Ethernet, FDDI, frame relay, or X.25  */
 /*              line description.                                 */
 /*                                                                */
 /* Header Files Included: None.                                   */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: Qol_General_Query_Data_t                       */
 /*                 Qol_SSAP_Configuration1_                       */
 /*                 Qol_SSAP_Configuration2_                       */
 /*                 Qol_LAN_Format1_t                              */
 /*                 Qol_LAN_Format2_t                              */
 /*                 Qol_X25_Logical_Channel1_t                     */
 /*                 Qol_X25_Logical_Channel2_t                     */
 /*                 Qol_X25_Format1_t                              */
 /*                 Qol_X25_Format2_t                              */
 /*                                                                */
 /* Function Prototype List: QOLQLIND                              */
 /*                                                                */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

 #ifndef QOLQLIND_h
 #define QOLQLIND_h
#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(P128)      /* @B1A*/
#endif                       /* @B1A*/

 /******************************************************************/
 /* Prototype for calling Query Line Descrtiption API QOLQLIND     */
 /******************************************************************/

 #ifdef __ILEC400__
      #pragma linkage (QOLQLIND,OS,nowiden)
 #else
      extern "OS"
 #endif

 void QOLQLIND (int  *,          /* Return Code                    */
                int  *,          /* Reason Code                    */
                int  *,          /* Number of Bytes                */
                void *,          /* User Buffer                    */
                char *,          /* Line Description Name          */
                char *,          /* Format                         */
                ...   );         /* Optional Parameters
                                    Optional Parameter Group 1
                int  *              Length of User Buffer
                int  *              Bytes Available                */

 /******************************************************************/
 /* Type Definition for the General Query Data                     */
 /******************************************************************/

 typedef _Packed struct Qol_General_Query_Data
    {
       char Line_Description_Name[10];
       char Line_Type;
       char Line_Status;
    } Qol_General_Query_Data_t;

 /******************************************************************/
 /* Type Definition for SSAP Configuration Data Format 1           */
 /****                                                          ****/
 /* NOTE: The following type definition only defines the fixed     */
 /*       portion of the format.  Any varying length field will    */
 /*       have to be defined by the user.                          */
 /******************************************************************/

 typedef _Packed struct Qol_SSAP_Configuration1
    {
       char  SSAP;
       char  SSAP_Type;
       short SSAP_Maximum_Frame_Size;
       short Number_Of_Group_Addresses;
     /*char  Group_Address[6][];*//* Varying length                */
    } Qol_SSAP_Configuration1_t;

 /******************************************************************/
 /* Type Definition for SSAP Configuration Data Format 2           */
 /******************************************************************/

 typedef _Packed struct Qol_SSAP_Configuration2
    {
       char  SSAP;
       char  SSAP_Type;
       short SSAP_Maximum_Frame_Size;
    } Qol_SSAP_Configuration2_t;

 /******************************************************************/
 /* Type Definition for the LAN specific format 1                  */
 /****                                                          ****/
 /* NOTE: The following type definition only defines the fixed     */
 /*       portion of the format.  Any varying length field will    */
 /*       have to be defined by the user.                          */
 /******************************************************************/
 typedef _Packed struct Qol_LAN_Format1
    {
       char  Local_Adapter_Address[6];
       char  Line_Speed;
       char  Line_Capability;
       short Line_Frame_Size;
       short Ethernet_V2_Frame_Size;
       short Number_of_SSAPs;
     /*Qol_SSAP_Configuration1_t SSAP_Configuration[];*//* Varying
                                    length                         */
    } Qol_LAN_Format1_t;

 /******************************************************************/
 /* Type Definition for the LAN specific format 2                  */
 /****                                                          ****/
 /* NOTE: The following type definition only defines the fixed     */
 /*       portion of the format.  Any varying length field will    */
 /*       have to be defined by the user.                          */
 /******************************************************************/
 typedef _Packed struct Qol_LAN_Format2
    {
       char  Local_Adapter_Address[6];
       char  Line_Speed;
       char  Line_Capability;
       short Line_Frame_Size;
       short Ethernet_V2_Frame_Size;
       char  Functional_Address[6];
       short Number_Of_Group_Addresses;
       short Group_Addresses_Offset;
       short Number_of_SSAPs;
       short SSAPs_Offset;
       int   Frame_Relay;
     /*char  Reserved[];*/       /* Varying length                 */
     /*char  Group_Address[6][];*//* Varying length                */
     /*Qol_SSAP_Configuration2_t SSAP_Configuration[];*//* Varying
                                    length                         */
    } Qol_LAN_Format2_t;

 /******************************************************************/
 /* Type Definition for X.25 Logical Channels Format 1             */
 /******************************************************************/
 typedef _Packed struct Qol_X25_Logical_Channel1
    {
       char  Logical_Channel_Group_Number;
       char  Logical_Channel_Number;
       char  Logical_Channel_Type;
       char  Logical_Channel_Direction;
    } Qol_X25_Logical_Channel1_t;

 /******************************************************************/
 /* Type Definition for X.25 Logical Channels Format 2             */
 /******************************************************************/
 typedef _Packed struct Qol_X25_Logical_Channel2
    {
       char  Logical_Channel_Group_Number;
       char  Logical_Channel_Number;
       char  Logical_Channel_Type;
       char  Logical_Channel_Type_Of_Call;
       char  Logical_Channel_Availability;
    } Qol_X25_Logical_Channel2_t;

 /******************************************************************/
 /* Type Definition for X.25 specific format 1                     */
 /****                                                          ****/
 /* NOTE: The following type definition only defines the fixed     */
 /*       portion of the format.  Any varying length field will    */
 /*       have to be defined by the user.                          */
 /******************************************************************/
 typedef _Packed struct Qol_X25_Format1
    {
       char  Local_Network_Address_Length;
       char  Local_Network_Address[9];
       char  Extended_Network_Addressing;
       char  Address_Insertion;
       char  Modulus;
       char  DCE_Support;
       short Transmit_Max_Packet_Size;
       short Receive_Max_Packet_Size;
       short Transmit_Dft_Packet_Size;
       short Receive_Dft_Packet_Size;
       char  Transmit_Dft_Window_Size;
       char  Receive_Dft_Window_Size;
       short Number_of_LCs;
     /*Qol_X25_Logical_Channel1_t X25_Configuration[];*//* Varying
                                 length                            */
    } Qol_X25_Format1_t;

 /******************************************************************/
 /* Type Definition for X.25 specific format 2                     */
 /****                                                          ****/
 /* NOTE: The following type definition only defines the fixed     */
 /*       portion of the format.  Any varying length field will    */
 /*       have to be defined by the user.                          */
 /******************************************************************/
 typedef _Packed struct Qol_X25_Format2
    {
       char  Local_Network_Address_Length;
       char  Local_Network_Address[9];
       char  Extended_Network_Addressing;
       char  Address_Insertion;
       char  Modulus;
       char  DCE_Support;
       short Transmit_Max_Packet_Size;
       short Receive_Max_Packet_Size;
       short Transmit_Dft_Packet_Size;
       short Receive_Dft_Packet_Size;
       char  Transmit_Dft_Window_Size;
       char  Receive_Dft_Window_Size;
       short Number_of_LCs;
       short Max_Frame_Size;
       char  ISDN_Interface;
       char  Call_Direction;
       short Length_Of_Call_ID_Info;
       char  Type_And_Plan;
       char  Reserved_1;
       char  Call_ID_Digits[128];
       short Length_Of_Subaddress_Info;
       char  Subaddress_Type;
       char  Reserved_2;
       char  Subaddress[128];
       short Offset_To_LCs;
     /*char  Reserved[];*/       /* Varying length                 */
     /*Qol_X25_Logical_Channel2_t X25_Configuration[];*//* Varying
                                    length                         */
    } Qol_X25_Format2_t;

#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(pop)       /* @B1A*/
#endif                       /* @B1A*/
 #endif
