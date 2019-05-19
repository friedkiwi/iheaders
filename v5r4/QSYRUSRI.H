 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QSYRUSRI                                   */
 /*                                                                */
 /* Descriptive Name: Retrieve User Information.                   */
 /*                                                                */
 /* 5763-SS1,                                                      */
 /* 5716-SS1,                                                      */
 /* 5722-SS1  (C) Copyright IBM Corp. 1994,2003                    */
 /* All rights reserved.                                           */
 /* US Government Users Restricted Rights -                        */
 /* Use, duplication or disclosure restricted                      */
 /* by GSA ADP Schedule Contract with IBM Corp.                    */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /*                                                                */
 /* Description: The Retrieve User Information API provides        */
 /*              information about a user profile.                 */
 /*                                                                */
 /* Header Files Included: H/QSY                                   */
 /*                        H/TYPES                                 */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: Qsy_USRI0100_T                                 */
 /*                 Qsy_USRI0200_T                                 */
 /*                 Qsy_USRI0300_T                                 */
 /*                                                                */
 /* Function Prototype List: QSYRUSRI                              */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON   LEVEL  DATE   PGMR   CHANGE DESCRIPTION          */
 /* ---- -------- ------ ------ ------ ----------------------------*/
 /* $A0= D2862000 3D10   931222 ROCH:  New Include                 */
 /* $A1= D2870900 3D60   941229 ROCH:  Add Locale fields           */
 /* $01= P3985077 3D60   950317 ROCH:  Change header file          */
 /*                                    declaration                 */
 /* $02= P3988424 3D60   950428 ROCH:  Change include              */
 /* $03= D94598   3D70   960421 ROCH:  Add Group members           */
 /*                                    indicator field             */
 /* $04= P3650094 4D20   970716 ROCH:  Add digital certificate     */
 /*                                    indicator field             */
 /* $05= D9571100 4D30   971020 ROCH:  Add CHRIDCTL field.         */
 /* $06= D9717112 5D10   991212 ROCH:  Add IASP fields             */
 /* $07= D9412000 V5R3M0 021215 ROCH:  Add LCLPWDMGT fields.       */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

 #ifndef QSYRUSRI_h
 #define QSYRUSRI_h

  #include <sys/types.h>                                    /* @02C*/

  #include <qsy.h>                                          /* @01C*/
#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(P128)      /* @B1A*/
#endif                       /* @B1A*/

 /******************************************************************/
 /* Prototype for calling Security API QSYRUSRI                    */
 /******************************************************************/
  #ifdef __ILEC400__
       #pragma linkage (QSYRUSRI,OS,nowiden)
  #else
       extern "OS"
  #endif
 void QSYRUSRI (void *,          /* Receiver variable              */
               int,              /* Receiver variable length       */
               char *,           /* Format name                    */
               char *,           /* User ID                        */
               void *);          /* Error code                     */

 /******************************************************************/
 /* Record structure for USRI0100 format                           */
 /******************************************************************/
 typedef struct Qsy_USRI0100
    {
       int   Bytes_Returned;
       int   Bytes_Available;
       char  User_Profile[10];
       char  Previous_Signon[13];
       char  Reserved_1;
       int   Signon_Notval;
       char  User_Status[10];
       char  Pwdchg_Date[8];
       char  No_Password;
       char  Reserved_2;
       int   Pwdexp_Interval;
       char  Pwdexp_Date[8];
       int   Pwdexp_Days;
       char  Password_Expired;
       char  Display_Signon[10];
       char  Local_Pwd_Mgt;                                 /* @07A*/
    } Qsy_USRI0100_T;

 /******************************************************************/
 /* Record structure for USRI0200 format                           */
 /*******                                                          */
 /* NOTE:  The following type definition only defines the fixed    */
 /*        portion of the format. Any varying length field will    */
 /*        have to be defined by the user.                         */
 /******************************************************************/
 typedef struct Qsy_USRI0200
    {
       int   Bytes_Returned;
       int   Bytes_Available;
       char  User_Profile[10];
       char  User_Class[10];
       Qsy_Special_Auth_T  Special_Auth;
       char  Group_Profile[10];
       char  Owner[10];
       char  Group_Auth[10];
       char  Limit_Capabilities[10];
       char  Group_Auth_Type[10];
       char  Reserved_1[3];
       int   Supp_Group_Offset;
       int   Supp_Group_Number;
     /*char  Supp_Group_Names[];*/ /* Varying length               */
    } Qsy_USRI0200_T;


 /******************************************************************/
 /* Record structure for IASP Storage Descriptors                  */
 /******************************************************************/
 typedef struct Qsy_IASP_Storage_Dsc
    {
       char  IASP_Name[10];
       char  Reserved[2];
       int   Max_Storage;
       int   Storage_Used;
    } Qsy_IASP_Storage_Dsc_T;


 /******************************************************************/
 /* Record structure for USRI0300 format                           */
 /*******                                                          */
 /* NOTE:  The following type definition only defines the fixed    */
 /*        portion of the format. Any varying length field will    */
 /*        have to be defined by the user.                         */
 /******************************************************************/
 typedef struct Qsy_USRI0300
    {
       int   Bytes_Returned;
       int   Bytes_Available;
       char  User_Profile[10];
       char  Previous_Signon[13];
       char  Reserved_1;
       int   Signon_Notval;
       char  User_Status[10];
       char  Pwdchg_Date[8];
       char  No_Password;
       char  Reserved_2;
       int   Pwdexp_Interval;
       char  Pwdexp_Date[8];
       int   Pwdexp_Days;
       char  Password_Expired;
       char  User_Class[10];
       Qsy_Special_Auth_T  Special_Auth;
       char  Group_Profile[10];
       char  Owner[10];
       char  Group_Auth[10];
       char  Assistance_Level[10];
       char  Current_Library[10];
       Qsy_Qual_Name_T  Initial_Menu;
       Qsy_Qual_Name_T  Initial_Program;
       char  Limit_Capabilities[10];
       char  Text_Description[50];
       char  Display_Signon[10];
       char  Limit_DeviceSsn[10];
       char  Keyboard_Buffering[10];
       char  Reserved_3[2];
       int   Max_Storage;
       int   Storage_Used;
       char  Scheduling_Priority;
       Qsy_Qual_Name_T  Job_Description;
       char  Accounting_Code[15];
       Qsy_Qual_Name_T  Message_Queue;
       char  Msgq_Delivery[10];
       char  Reserved_4[2];
       int   Msgq_Severity;
       Qsy_Qual_Name_T  Output_Queue;
       char  Print_Device[10];
       char  Special_Environment[10];
       Qsy_Qual_Name_T  Attention_Program;
       char  Language_Id[10];
       char  Country_Id[10];
       int   CCSID;
       Qsy_User_Optn_T  User_Options;
       Qsy_Qual_Name_T  Sort_Sequence;
       char  Object_Audit[10];
       Qsy_Audit_Level_T  Audit_Level;
       char  Group_Auth_Type[10];
       int   Supp_Group_Offset;
       int   Supp_Group_Number;
       uid_t UID;
       gid_t GID;
       int   HomeDir_Offset;
       int   HomeDir_Len;
       char  Locale_Job_Attributes[16];
       int   Locale_Offset;
       int   Locale_Len;
       char  Group_Members_Indicator;
       char  Digital_Certificate_Indicator;
       char  Chrid_Control[10];
       int   IASP_Storage_Dsc_Offset;
       int   IASP_Storage_Dsc_Count;
       int   IASP_Storage_Dsc_Count_Rtn;
       int   IASP_Storage_Dsc_Length;
       char  Local_Pwd_Mgt;                                 /* @07A*/
     /*char  Supp_Group_Names[][10];*//* Varying length            */
     /*char  Qsy_Path_Info[];*/  /* Varying length                 */
     /*char  Qsy_Locale_Info[];*/  /* Varying length               */
     /*Qsy_IASP_Storage_Dsc_T  IASP_Stg_Dsc[]; */  /*Varying length*/
    } Qsy_USRI0300_T;

#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(pop)       /* @B1A*/
#endif                       /* @B1A*/
 #endif
