 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: ESYRGAPP                                     */
 /*                                                                */
 /* Descriptive Name: Register Application For Certificate Use     */
 /*                   Exit Program.                                */
 /*                                                                */
 /* 5722-SS1  (C) Copyright IBM Corp. 2001                         */
 /* All rights reserved.                                           */
 /* US Government Users Restricted Rights -                        */
 /* Use, duplication or disclosure restricted                      */
 /* by GSA ADP Schedule Contract with IBM Corp.                    */
 /*                                                                */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /*                                                                */
 /* Description: The Register Application For Certificate Use      */
 /*              exit program provides the notification of a       */
 /*              update to the registration information for an     */
 /*              application.                                      */
 /*                                                                */
 /* Header Files Included: None.                                   */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: Qsy_Reg_Cert_App_Info_t                        */
 /*                                                                */
 /* Function Prototype List: None.                                 */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON    LEVEL DATE   PGMR   CHANGE DESCRIPTION          */
 /* ---- --------- ----- ------ ------ ------------------          */
 /* $A0= D9788002  5D10  990609 ROCH:  New Include                 */
 /* $A1= P9934931  5D10  001107 ROCH:  Teraspace stage 2           */
 /*								   */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

 #ifndef ESYRGAPP_h
 #define ESYRGAPP_h

 #if (__OS400_TGTVRM__>=510)                                 /*@A1A*/
     #pragma datamodel(P128)                                 /*@A1A*/
 #endif                                                      /*@A1A*/

 /******************************************************************/
 /* Type Definition for the Register Application For Certificate   */
 /* Use exit program information.                                  */
 /******************************************************************/
 typedef _Packed struct Qsy_Reg_Cert_App_Info
    {
       char Exitpt_Name[20];
       char Exitpt_Fmt[8];
       char Application_ID[100];
       char Current_Client_Auth_Required;
       char New_Client_Auth_Required;
       char Current_Client_Auth_Supported;
       char New_Client_Auth_Supported;
       char Current_Limit_Trusted_CAs;
       char New_Limit_Trusted_CAs;
    } Qsy_Reg_Cert_App_Info_t;

 #if (__OS400_TGTVRM__>=510)                                 /*@A1A*/
     #pragma datamodel(pop)                                  /*@A1A*/
 #endif                                                      /*@A1A*/

#endif
