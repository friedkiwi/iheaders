 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QSYLAUTU                                   */
 /*                                                                */
 /* Descriptive Name: List Authorized Users.                       */
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
 /* Description: The List Authorized Users API puts a list of      */
 /*              authorized system users into a user space.        */
 /*                                                                */
 /* Header Files Included: h/qsy                                   */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: Qsy_LAUTU_Input_T                              */
 /*                 Qsy_AUTU0100_List_T                            */
 /*                 Qsy_AUTU0200_List_T                            */
 /*                                                                */
 /* Function Prototype List: QSYLAUTU                              */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= D2862000     3D10  931222 XZY0432:  New Include.          */
 /* $01= P3985077     3D60  950317 SUDARMAN: Change header file    */
 /*                                          declaration           */
 /* $02= P3984844     3D60  950317 BUDNIK:   Fix input parm section*/
 /* $03= D94598       3D70  960421 SWATOSH:  Add user/group field  */
 /*                                           and grp members field*/
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

 #ifndef QSYLAUTU_h
 #define QSYLAUTU_h

  #include <qsy.h>                                          /* @01C*/
#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(P128)      /* @B1A*/
#endif                       /* @B1A*/

 /******************************************************************/
 /* Prototype for calling Security API QSYLAUTU                    */
 /******************************************************************/
  #ifdef __ILEC400__
       #pragma linkage (QSYLAUTU,OS,nowiden)
  #else
       extern "OS"
  #endif
 void QSYLAUTU (void *,          /* Qualified User Space Name      */
                char *,          /* Format Name                    */
                void *);         /* Error code                     */

 /******************************************************************/
 /* Record structure for Input Parameter Section                   */
 /******************************************************************/
 typedef struct Qsy_LAUTU_Input
    {
       Qsy_Qual_Name_T Object;
       char  Format_Name[8];
    } Qsy_LAUTU_Input_T;

 /******************************************************************/
 /* Record structure for AUTU0100 format                           */
 /******************************************************************/
 typedef struct Qsy_AUTU0100_List
    {
       char  User_Profile[10];
       char  Group_Profile[10];
       int   Supp_Group_Number;
       char  Supp_Group_Names[15][10];
       char  User_Group_Indicator;
       char  Group_Members_Indicator;
    } Qsy_AUTU0100_List_T;

 /******************************************************************/
 /* Record structure for AUTU0200 format                           */
 /******************************************************************/
 typedef struct Qsy_AUTU0200_List
    {
       char  User_Profile[10];
       char  Group_Profile[10];
       char  Profile_Text[50];
       char  Reserved[2];
       int   Supp_Group_Number;
       char  Supp_Group_Names[15][10];
       char  User_Group_Indicator;
       char  Group_Members_Indicator;
    } Qsy_AUTU0200_List_T;
#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(pop)       /* @B1A*/
#endif                       /* @B1A*/
 #endif
