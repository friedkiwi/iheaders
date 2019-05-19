 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: ESYUPDCA                                     */
 /*                                                                */
 /* Descriptive Name: Update Certificate Authority (CA) Trust      */
 /*                   Exit Program.                                */
 /*                                                                */
 /* 5722-SS1  (C) Copyright IBM Corp. 2001                         */
 /* All rights reserved.                                           */
 /* US Government Users Restricted Rights -                        */
 /* Use, duplication or disclosure restricted                      */
 /* by GSA ADP Schedule Contract with IBM Corp.                    */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /*                                                                */
 /* Description: The Update Certificate Authority (CA) Trust exit  */
 /*              program provides the notification of when a       */
 /*              Certificate Authority (CA) certificate is added   */
 /*              to or removed from the list of trusted CA         */
 /*              certificates for registered applications that use */
 /*              certificates.                                     */
 /*                                                                */
 /* Header Files Included: None.                                   */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: Qsy_Update_CA_Trust_Info_t                     */
 /*                                                                */
 /* Function Prototype List: None.                                 */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= D9788016     5D10  000709 ROCH:     New Include           */
 /* $A1= P9934931     5D10  001107 ROCH:     Teraspace stage 2     */
 /*                                                                */
 /* End CFD List.                                                  */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

 #ifndef ESYUPDCA_h
 #define ESYUPDCA_h

 #if (__OS400_TGTVRM__>=510)                                 /*@A1A*/
     #pragma datamodel(P128)                                 /*@A1A*/
 #endif                                                      /*@A1A*/

 /******************************************************************/
 /* Type Definition for the Update Certificate Authority (CA) Trust*/
 /* exit program information.                                      */
 /******************************************************************/
 typedef _Packed struct Qsy_Update_CA_Trust_Info
    {
       char Exitpt_Name[20];
       char Exitpt_Fmt[8];
       char Application_ID[100];
       char Action;
       char CA_Cert_ID_Type;
       char Reserved[2];
       int  Offset_CA_Cert_ID;
       int  Length_CA_Cert_ID;
     /*char CA_Cert_ID[];*/               /*Varying length        */
    } Qsy_Update_CA_Trust_Info_t;

 #if (__OS400_TGTVRM__>=510)                                 /*@A1A*/
     #pragma datamodel(pop)                                  /*@A1A*/
 #endif                                                      /*@A1A*/

#endif
