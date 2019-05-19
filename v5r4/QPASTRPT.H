 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: QPASTRPT                                     */
 /*                                                                */
 /* Descriptive Name: Start Pass-through API.                      */
 /*                                                                */
 /* 5769-SS1  (C) Copyright IBM Corp. 1995,1998                    */
 /* All rights reserved.                                           */
 /* US Government Users Restricted Rights -                        */
 /* Use, duplication or disclosure restricted                      */
 /* by GSA ADP Schedule Contract with IBM Corp.                    */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /* Description: The Start Pass-through API starts a 5250          */
 /*              pass-through session and allows up to 1K of       */
 /*              user specified data to be passed to the target    */
 /*              system.                                           */
 /*                                                                */
 /* Header Files Included: None.                                   */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: Qpa_PAST0100_t                                 */
 /*                                                                */
 /* Function Prototype List: QPASTRPT                              */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0  P3979622     3D60  950602 RCH:      New Include           */
 /* $A1  D9831100     5D10  000719 SAIED:    Change password length*/
 /* End CFD List.                                                  */
 /*                                                                */
 /* End Change Activity                                            */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

 #ifndef QPASTRPT_h
  #define QPASTRPT_h
#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(P128)      /* @B1A*/
#endif                       /* @B1A*/

  /*****************************************************************/
  /* Prototype for calling Start Pass-through API QPASTRPT         */
  /*****************************************************************/

  #ifdef  __ILEC400__
     #pragma linkage(QPASTRPT,OS,nowiden)
  #else
     extern "C"
  #endif

 void QPASTRPT(void *,          /* Pass-through information       */
               int,             /* Length of pass-through infor   */
               char *,          /* Format name                    */
               char *,          /* User data                      */
               int,             /* Length of user data            */
               void *);         /* Error code                     */

 /******************************************************************/
 /* Type definition for PAST0100                                   */
 /******************************************************************/

 typedef _Packed struct Qpa_PAST0100
    {
       char Remote_Location_Name[8];
       char Virtual_Controller[10];
       char Mode_Name[8];
       char Local_Location_Name[8];
       char Remote_Netid[8];
       char System_Request_Pgm_Name[10];
       char System_Request_Pgm_Lib[10];
       char Remote_User_Id[10];
       char Remote_Password[128];                       /* @A1C */
       char Initial_Program[10];
       char Initial_Menu[10];
       char Current_Library[10];
       char Display_Option;
       char Reserved[3];
       int  Offset_Virtual_Devices;
       int  Number_Virtual_Devices;
     /*char Array_Virtual_Devices[10][1];*/ /* Variable list size */
    }  Qpa_PAST0100_t;

#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(pop)       /* @B1A*/
#endif                       /* @B1A*/
 #endif
