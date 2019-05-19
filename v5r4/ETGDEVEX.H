 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: ETGDEVEX                                     */
 /*                                                                */
 /* Descriptive Name: Telnet Server Device Exit Program            */
 /*                                                                */
 /* 5769-SS1, 5769-TC1 (C) Copyright IBM Corp. 1997,1999.          */
 /* All rights reserved.                                           */
 /* US Government Users Restricted Rights -                        */
 /* Use, duplication or disclosure restricted                      */
 /* by GSA ADP Schedule Contract with IBM Corp.                    */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /* Description: The TELNET server device exit program provides    */
 /*              device initialization and termination for         */
 /*              clients.                                          */
 /*                                                                */
 /* Header Files Included: None.                                   */
 /*                                                                */
 /* Macros List: QTG_DSPD0100                                      */
 /*                                                                */
 /* Structure List: Qtg_User_Description_t                         */
 /*                 Qtg_DSPD0100_t                                 */
 /*                 Qtg_Device_Description_t                       */
 /*                 Qtg_Connection_Description_t                   */
 /*                                                                */
 /* Function Prototype List: None.                                 */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= D95486       4D20  970423 JSS       New Include           */
 /* $A1= P3698701     4D50  990625 JSS       Add local IP address, */
 /*      P9900631                            SSL flag, DCM flag    */
 /*                                          and client cert.      */
 /* $A2= P9914943     5D10  000103 JSTEVENS  TERASPACE HEADER      */
 /*                                          FILES                 */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /*                                                                */
 /* $A2 - Updates for Teraspace compiler support.                  */
 /* $A1 - Local IP address is the host adapter IP address, where   */
 /*       the IP can vary on a multi-homed host.   IP address is   */
 /*       is for the client, Local IP address is for the server.   */
 /*     - New Secure Sockets Layer flag will indicate if the       */
 /*       connection is SSL or non-SSL.                            */
 /*     - A client certificate will be supplied.                   */
 /*     - New flag to indicate if the Digital Certificate Manager  */
 /*       is configured to require a valid client certificate      */
 /*       before a session can be established.                     */
 /*                                                                */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

 #ifndef ETGDEVEX_h
 #define ETGDEVEX_h

 #if (__OS400_TGTVRM__>=510)                                /* @A2A*/
 #pragma datamodel(P128)                                    /* @A2A*/
 #endif                                                     /* @A2A*/

 /******************************************************************/
 /* Type Definition for the User Description Information           */
 /******************************************************************/
 typedef _Packed struct Qtg_User_Description
    {
       int  Length_user_description;
       char User_profile[10];
       char Current_library[10];
       char Program_to_call[10];
       char Initial_menu[10];
    } Qtg_User_Description_t;

 /******************************************************************/
 /* Structures used by Device Description Information              */
 /******************************************************************/
 #define QTG_DSPD0100         "DSPD0100"

 typedef _Packed struct Qtg_DSPD0100
    {
       char Keyboard_identifier[3];
       char Reserved[1];
       int  Code_page;
       int  Char_set;
    } Qtg_DSPD0100_t;

 /******************************************************************/
 /* Type Definition for the Device Description Information         */
 /******************************************************************/
 typedef _Packed struct Qtg_Device_Description
    {
       char Device_name[10];
       char Device_format[8];
       char Reserved[2];
       int  Offset_to_device_attributes;
       int  Length_device_attributes;
       /*Qtg_DSPD0100_t Display_device;  */     /* Varying length */
    } Qtg_Device_Description_t;

 /******************************************************************/
 /* Type Definition for the Connection Description Information     */
 /******************************************************************/
 typedef _Packed struct Qtg_Connection_Description
    {
       int   Length_connection_description;
       char  Internet_address[20];
       char  Secure_password_valid[1];
       char  Workstation_type[14];
       char  Secure_sockets_layer[1];
       char  Local_internet_address[20];
       char  Client_authentication_level[1];
       char  Reserved[3];
       int   Client_certificate_validate_rc;
       int   Offset_to_client_certificate;
       unsigned int Client_certificate_length;
       /*char Client_certificate[1];     */     /* Varying length */
    } Qtg_Connection_Description_t;

 #if (__OS400_TGTVRM__>=510)                               /* @A2A*/
 #pragma datamodel(pop)                                    /* @A2A*/
 #endif                                                    /* @A2A*/

 #endif
