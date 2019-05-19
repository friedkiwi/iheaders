 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QSYRAUTU                                   */
 /*                                                                */
 /* Descriptive Name: Retrieve Authorized Users.                   */
 /*                                                                */
 /* 5763-SS1  (C) Copyright IBM Corp. 1994,1994                    */
 /* 5716-SS1  (C) Copyright IBM Corp. 1995,1995                    */
 /* 5722-SS1  (C) Copyright IBM Corp. 2000                         */
 /* All rights reserved.                                           */
 /* US Government Users Restricted Rights -                        */
 /* Use, duplication or disclosure restricted                      */
 /* by GSA ADP Schedule Contract with IBM Corp.                    */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /*                                                                */
 /* Description: The Retrieve Authorized Users API provides        */
 /*              information about the authorized users of the     */
 /*              system.                                           */
 /*                                                                */
 /* Header Files Included: H/QSY                                   */
 /*                        H/TYPES                                 */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: Qsy_AUTU0100_T                                 */
 /*                 Qsy_AUTU0150_T                                 */
 /*                 Qsy_AUTU0200_T                                 */
 /*                 Qsy_AUTU0250_T                                 */
 /*                 Qsy_RAUTU_Feedback_Info_T                      */
 /*                                                                */
 /* Function Prototype List: QSYRAUTU                              */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= D9459801     3D70  960320 ROCH:     New Include           */
 /* $A1= D9797800     5D10  990930 ROCH:     Add optional parameter*/
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

 #ifndef QSYRAUTU_h
 #define QSYRAUTU_h

  #include <sys/types.h>

  #include <qsy.h>
#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(P128)      /* @B1A*/
#endif                       /* @B1A*/

 /******************************************************************/
 /* Record structure for AUTU0100 format                           */
 /******************************************************************/
 typedef struct Qsy_AUTU0100
    {
       char  Profile_name[10];
       char  User_Group_Indicator;
       char  Group_Members_Indicator;
    } Qsy_AUTU0100_T;

 /******************************************************************/
 /* Record structure for AUTU0150 format                           */
 /******************************************************************/
 typedef struct Qsy_AUTU0150
    {
       char  Profile_name[10];
       char  User_Group_Indicator;
       char  Group_Members_Indicator;
       char  Text_Description[50];
    } Qsy_AUTU0150_T;

 /******************************************************************/
 /* Record structure for AUTU0200 format                           */
 /******************************************************************/
 typedef struct Qsy_AUTU0200
    {
       char  Profile_name[10];
       char  User_Group_Indicator;
       char  Group_Members_Indicator;
       int   Group_Profile_Number;
       char  Group_Profiles[16][10];
    } Qsy_AUTU0200_T;

 /******************************************************************/
 /* Record structure for AUTU0250 format                           */
 /******************************************************************/
 typedef struct Qsy_AUTU0250
    {
       char  Profile_name[10];
       char  User_Group_Indicator;
       char  Group_Members_Indicator;
       char  Text_Description[50];
       char  Reserved_1[2];
       int   Group_Profile_Number;
       char  Group_Profiles[16][10];
    } Qsy_AUTU0250_T;

 /******************************************************************/
 /* Record structure for Return Records Feedback Information       */
 /******************************************************************/
 typedef struct Qsy_RAUTU_Feedback_Info
    {
       int   Bytes_Returned;
       int   Bytes_Available;
       int   Profile_Number;
       int   Entry_Length;
    } Qsy_RAUTU_Feedback_Info_T;

 /******************************************************************/
 /* Prototype for calling Security API QSYRAUTU                    */
 /******************************************************************/
  #ifdef __ILEC400__
       #pragma linkage (QSYRAUTU,OS,nowiden)
  #else
       extern "OS"
  #endif
 void QSYRAUTU (void *,          /* Receiver variable              */
               int,              /* Receiver variable length       */
               Qsy_RAUTU_Feedback_Info_T *,
                                 /* Feedback information           */
               char *,           /* Format name                    */
               char *,           /* Selection criteria             */
               char *,           /* Starting profile name          */
               char *,           /* Starting profile option        */
               char *,           /* Group profile name             */
               void *,           /* Error code                     */
               ...);             /* Optional Parameter:            */
                                 /*   char *   Ending profile name */

#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(pop)       /* @B1A*/
#endif                       /* @B1A*/
 #endif
