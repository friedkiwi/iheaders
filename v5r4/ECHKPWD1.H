/* begin_generated_IBM_copyright_prolog                              */
/* This is an automatically generated copyright prolog.              */
/* After initializing,  DO NOT MODIFY OR MOVE                        */
/* ----------------------------------------------------------------- */
/*                                                                   */
/* Product(s):                                                       */
/*     5722-SS1                                                     */
/*                                                                   */
/* (C)Copyright IBM Corp.  2005, 2005                                */
/*                                                                   */
/* All rights reserved.                                              */
/* US Government Users Restricted Rights -                           */
/* Use, duplication or disclosure restricted                         */
/* by GSA ADP Schedule Contract with IBM Corp.                       */
/*                                                                   */
/* Licensed Materials-Property of IBM                                */
/*                                                                   */
/*  ---------------------------------------------------------------  */
/*                                                                   */
/* end_generated_IBM_copyright_prolog                                */
#ifndef ECHKPWD1_H
#define ECHKPWD1_H
 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: ECHKPWD1                                     */
 /*                                                                */
 /* Descriptive Name: Validate Password Exit Program               */
 /*                                                                */
 /*                                                                */
 /* Description: The Check Password exit program provides          */
 /*              notification of a password being checked by       */
 /*              CHGUSRPRF (QSYUP).                                */
 /*                                                                */
 /* Header Files Included: None.                                   */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: Qsy_Chk_Password_Info_t                        */
 /*                                                                */
 /* Function Prototype List: None.                                 */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL  DATE   PGMR     CHANGE DESCRIPTION    */
 /* ---- ------------ ------ ------ -------- ----------------------*/
 /* $A0= D99718       v5r4m0 030825 ROCH      New Include          */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

#if (__OS400_TGTVRM__>=510)
    #pragma datamodel(P128)
#endif

 /******************************************************************/
 /* Type Definition for the Check Password exit point info         */
 /******************************************************************/
 typedef _Packed struct Qsy_Chk_Password_Info
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
    } Qsy_Chk_Password_Info_t;

#if (__OS400_TGTVRM__>=510)
    #pragma datamodel(pop)
#endif

#endif /* ECHKPWD1_H */
