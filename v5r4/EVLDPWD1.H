 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: EVLDPWD1                                     */
 /*                                                                */
 /* Descriptive Name: Validate Password Exit Program               */
 /*                                                                */
 /* 5722-SS1  (C) Copyright IBM Corp. 2000                         */
 /* All rights reserved.                                           */
 /* US Government Users Restricted Rights -                        */
 /* Use, duplication or disclosure restricted                      */
 /* by GSA ADP Schedule Contract with IBM Corp.                    */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /*                                                                */
 /* Description: The Validate Password exit program provides       */
 /*              notification of a password being changed by the   */
 /*              CHGPWD command or QSYCHGPW API.                   */
 /*                                                                */
 /* Header Files Included: None.                                   */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: Qsy_Vld_Password_Info_t                        */
 /*                                                                */
 /* Function Prototype List: None.                                 */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= D98311       5D10  000929 ROCH      New Include           */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

#ifndef EVLDPWD1_H
#define EVLDPWD1_H

#if (__OS400_TGTVRM__>=510)
    #pragma datamodel(P128)
#endif

 /******************************************************************/
 /* Type Definition for the Validate Password exit point info      */
 /******************************************************************/
 typedef _Packed struct Qsy_Vld_Password_Info
    {
       char Exit_Point_name[20];
       char Exit_Point_Format_Name[8];
       int  Password_Level;
       char User_Profile_Name[10];
       char Reserved[2];
       int  Offset_To_Old_Password;
       int  Length_Of_Old_Password;
       int  CCSID_Of_Old_Password;
       int  Offset_To_New_Password;
       int  Length_Of_New_Password;
       int  CCSID_Of_New_Password;
     /*char Old_Password[]; */
     /*char New_Password[]; */
    } Qsy_Vld_Password_Info_t;

#if (__OS400_TGTVRM__>=510)
    #pragma datamodel(pop)
#endif

#endif /* EVLDPWD1_H */
