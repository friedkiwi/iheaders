 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: ESYDRAPP                                     */
 /*                                                                */
 /* Descriptive Name: Deregister Application For Certificate Use   */
 /*                   Exit Program.                                */
 /*                                                                */
 /* 5769-SS1, 5722-SS1  (C) Copyright IBM Corp. 1999, 2001         */
 /* All rights reserved.                                           */
 /* US Government Users Restricted Rights -                        */
 /* Use, duplication or disclosure restricted                      */
 /* by GSA ADP Schedule Contract with IBM Corp.                    */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /*                                                                */
 /* Description: The Deregister Application For Certificate Use    */
 /*              exit program provides the notification of an      */
 /*              attempt to deregister an application that uses    */
 /*              certificates.                                     */
 /*                                                                */
 /* Header Files Included: None.                                   */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: Qsy_Dereg_Cert_App_Info_t                      */
 /*                                                                */
 /* Function Prototype List: None.                                 */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= D9714500     4D40  980819 ROCH:     New Include           */
 /* $01= P3677328     4D40  980902 ROCH:     Update copyright      */
 /*                                          (prolog chg only).    */
 /* $02= P9934931     5D10  001107 ROCH:     Teraspace stage 2     */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

 #ifndef ESYDRAPP_h
 #define ESYDRAPP_h

 #if (__OS400_TGTVRM__>=510)                                 /*@02A*/
     #pragma datamodel(P128)                                 /*@02A*/
 #endif                                                      /*@02A*/

 /******************************************************************/
 /* Type Definition for the Deregister Application For Certificate */
 /* Use exit program information.                                  */
 /******************************************************************/
 typedef _Packed struct Qsy_Dereg_Cert_App_Info
    {
       char Exitpt_Name[20];
       char Exitpt_Fmt[8];
       char Application_ID[100];
    } Qsy_Dereg_Cert_App_Info_t;

 #if (__OS400_TGTVRM__>=510)                                 /*@02A*/
     #pragma datamodel(pop)                                  /*@02A*/
 #endif                                                      /*@02A*/

#endif
