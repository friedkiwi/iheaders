 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: EDLTPRF1                                     */
 /*                                                                */
 /* Descriptive Name: Delete User Profile Exit Program             */
 /*                                                                */
 /* 5763-SS1, 5722-SS1  (C) Copyright IBM Corp. 1996, 2001         */
 /* All rights reserved.                                           */
 /* US Government Users Restricted Rights -                        */
 /* Use, duplication or disclosure restricted                      */
 /* by GSA ADP Schedule Contract with IBM Corp.                    */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /*                                                                */
 /* Description: The Delete User Profile exit program provides     */
 /*              the notification of profiles being deleted.       */
 /*                                                                */
 /* Header Files Included: None.                                   */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: Qsy_Delete_Profile_Info_t (format 1)           */
 /*                                                                */
 /* Function Prototype List: None.                                 */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= D94085.6     3D70  960306 ROCH:     New Include           */
 /* $A1= P9934931     5D10  001107 ROCH:     Teraspace stage 2     */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

 #ifndef EDLTPRF1_h
 #define EDLTPRF1_h

 #if (__OS400_TGTVRM__>=510)                                 /*@A1A*/
     #pragma datamodel(P128)                                 /*@A1A*/
 #endif                                                      /*@A1A*/

 /******************************************************************/
 /* Type Definition for the Post-delete exit program information   */
 /******************************************************************/
 typedef _Packed struct Qsy_Delete_Profile_Info
    {
       char Exitpgm_name[20];
       char Exitpgm_fmt[8];
       char User_profile[10];
    } Qsy_Delete_Profile_Info_t;

 #if (__OS400_TGTVRM__>=510)                                 /*@A1A*/
     #pragma datamodel(pop)                                  /*@A1A*/
 #endif                                                      /*@A1A*/

#endif
