#ifndef QSYRTVSA_h
#define QSYRTVSA_h
 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QSYRTVSA                                   */
 /*                                                                */
 /* Descriptive Name: Retrieve Security Attributes                 */
 /*                                                                */
 /* 5722-SS1  (C) Copyright IBM Corp. 2000, 2001                   */
 /* All rights reserved.                                           */
 /* US Government Users Restricted Rights -                        */
 /* Use, duplication or disclosure restricted                      */
 /* by GSA ADP Schedule Contract with IBM Corp.                    */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /*                                                                */
 /* Description: The Retrieve Security Attributes API              */
 /*              provides information about the current and pending*/
 /*              security attributes of the system.                */
 /*                                                                */
 /* Header Files Included: H/QSYRTVSA                              */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: Qsy_RTVSA_RTSA0100_t                           */
 /*                                                                */
 /* Function Prototype List: QSYRTVSA                              */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON   LEVEL  DATE   PGMR  CHANGE DESCRIPTION           */
 /* ---- -------- ------ ------ ----- -----------------------------*/
 /* $A0= D98311   5D10   000604 ROCH: New Include                  */
 /* $01= D9891100 v5r2m0 010916 ROCH: Add change security sysvals  */
 /*                                   and add digital certificates */
 /*                                   values.                      */
 /* $02= D99074  v5r2m0  011105 ROCH: Add allow service tool ID    */
 /*                                   password chg.                */
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
 /* Record structure for RTSA0100 format                           */
 /******************************************************************/
 typedef _Packed struct Qsy_RTVSA_RTSA0100
    {
       int   Bytes_Returned;
       int   Bytes_Available;
       int   Current_Security_Level;
       int   Pending_Security_Level;
       int   Current_Password_Level;
       int   Pending_Password_Level;
       char  Allow_Change_Security_Sysvals;                 /* @01A*/
       char  Allow_Add_Digital_Certificates;                /* @01A*/
       char  Allow_Srv_Tools_UserID_Pwd_Chg;                /* @02A*/

    } Qsy_RTVSA_RTSA0100_t;


 /******************************************************************/
 /* Prototype for calling Security API QSYRTVSA                    */
 /******************************************************************/
  #ifdef __ILEC400__
       #pragma linkage (QSYRTVSA,OS,nowiden)
  #else
       extern "OS"
  #endif
 void QSYRTVSA (void *,        /* Receiver variable              */
                int,             /* Receiver variable length       */
                char *,          /* Format name                    */
                void *);         /* Error code                     */

#if (__OS400_TGTVRM__>=510)
#pragma datamodel(pop)
#endif
 #endif
