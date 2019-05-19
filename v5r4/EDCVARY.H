 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: EDCVARY                                      */
 /*                                                                */
 /* Descriptive Name: Vary configuration Exit Program              */
 /*                                                                */
 /* 5722-SS1  (C) Copyright IBM Corp. 2003                         */
 /* All rights reserved.                                           */
 /* US Government Users Restricted Rights -                        */
 /* Use, duplication or disclosure restricted                      */
 /* by GSA ADP Schedule Contract with IBM Corp.                    */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /*                                                                */
 /* Description: The vary configuration exit program provides      */
 /*              the notification of objects being varied.         */
 /*                                                                */
 /* Header Files Included: None.                                   */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: Qdc_Vary_Config_Info_100t                      */
 /*                 Qdc_Vary_Config_Info_200t                      */
 /*                                                                */
 /* Function Prototype List: None.                                 */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= D99409       5D30  021001 MARYHS:   New Include           */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

 #ifndef EDCVARY_h
 #define EDCVARY_h

 /******************************************************************/
 /* Type Definition for the Vary config exit point information     */
 /* for exit point formats PRON0100 (Pre vary on) and              */
 /* PROF0100 (Pre vary off).                                       */
 /******************************************************************/
 typedef _Packed struct Qdc_Vary_Config_Info_100t
    {
       char ObjectName_0100[10];
       char ObjectType_0100[10];
       char ExitpgmFmt_0100[8];
       int forcedVary;
    } Qdc_Vary_Config_Info_100t;

 /******************************************************************/
 /* Type Definition for the Vary config exit point information     */
 /* for exit point formats PSON0200 (Post vary on) and             */
 /* PSOF0200 (Post vary off).                                      */
 /******************************************************************/
 typedef _Packed struct Qdc_Vary_Config_Info_200t
    {
       char ObjectName_0200[10];
       char ObjectType_0200[10];
       char ExitpgmFmt_0200[8];
       int  varyStatus;
    } Qdc_Vary_Config_Info_200t;

 #endif
