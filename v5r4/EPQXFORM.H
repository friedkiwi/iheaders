 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/EPQXFORM                                   */
 /*                                                                */
 /* Descriptive Name: IPDS to PDF Transform Exit Interface         */
 /*                                                                */
 /* 5722-SS1  (C) Copyright IBM Corp. 2000,2000                    */
 /* All rights reserved.                                           */
 /* US Government Users Restricted Rights -                        */
 /* Use, duplication or disclosure restricted                      */
 /* by GSA ADP Schedule Contract with IBM Corp.                    */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
  /*                                                                */
 /*                                                                */
 /* Description: The IPDS to PDF Transform Exit Interface          */
 /*              - Describes the interface between PSF/400 and a   */
 /*                user defined exit program (email mapping        */
 /*                program).                                       */
 /*                                                                */
 /* Header Files Included: H/EPQXFORM                              */
 /*                                                                */
 /* Macros List: none.                                             */
 /*                                                                */
 /* Structure List: Qpq_Xform_Exit_I_t                             */
 /*                                                                */
 /* Function Prototype List: none.                                 */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= D98184       5D10  991202 HERMAN  : New Include           */
 /* $A1= P9953931     5D20  010926 MCR       Changes w/D98880      */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/
#ifndef _EPQXFORM_h
#define _EPQXFORM_h

/*******************************************************************/
/* Structure for Option Specific input information to IPDS to PDF  */
/* Transform Exit.                                                 */
/*******************************************************************/

typedef _Packed struct Qpq_Xform_Exit_I
{
     char Device_Type[10];
     char Paper_Size_Drawer1[10];
     char Paper_Size_Drawer2[10];
     char File_Directory[256];
     char Writer_Port[5];
     char Writer_Msgq_Name[10];
     char Writer_Msgq_Library_Name[10];
     char Output_Queue[10];
     char Output_Queue_Library[10];
     char Printer_FontID[10];
     char Device_Name[10];
     char Inline_Font_Indicator;
     char Group_Boundary_Operation;
     } Qpq_Xform_Exit_I_t;
#endif
