 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QGYRPRTA                                   */
 /*                                                                */
 /* Descriptive Name: Retrieve Printer Attributes                  */
 /*                                                                */
 /* 5716-SS1, 5722-SS1 (C) Copyright IBM Corp. 1996,2002           */
 /* All rights reserved.                                           */
 /* US Government Users Restricted Rights -                        */
 /* Use, duplication or disclosure restricted                      */
 /* by GSA ADP Schedule Contract with IBM Corp.                    */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /*                                                                */
 /* Description: The QGYRPRTA API retrieves attributes about a     */
 /*              specific printer device.                          */
 /*                                                                */
 /* Header Files Included: None.                                   */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: Qgy_Rprta_RecVar_t                             */
 /*                                                                */
 /* Function Prototype List:  QGYRPRTA                             */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= XXXXXXXXXXXX 3D70  960604 DPW       New Include           */
 /* $A1= D98212.4     5D10  991228 GCHANEY:  Compiler directive for*/
 /*                                          16 byte pointers.     */
 /* $A2= D97314       5D10  000416 KJV:      Printer publishing    */
 /* $A3= D97260       5D20  010105 ROCH:     Decouple Splf from Job*/
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

 #ifndef QGYRPRTA_h
 #define QGYRPRTA_h
#if (__OS400_TGTVRM__>=510)
#pragma datamodel(P128)
#endif

 /******************************************************************/
 /* Prototype for calling QGYRPRTA API                             */
 /******************************************************************/
 #ifdef  __ILEC400__
       #pragma linkage(QGYRPRTA,OS,nowiden)
 #else
       extern "OS"
 #endif


 void   QGYRPRTA  (void *,     /* Receiver variable                 */
                   int   ,     /* Length of receiver variable       */
                   char *,     /* Format name                       */
                   char *,     /* Device name                       */
                   void *      /* Error code                        */
                  );

 /*******************************************************************/
 /* Type Definition for the Receiver Variable Format                */
 /*******************************************************************/
 typedef _Packed struct Qgy_Rprta_RecVar
 {
    int   Bytes_Retd;
    int   Bytes_Avail;
    char  Dev_Name[10];
    char  Writer_Started;
    char  Writer_Status;
    int   Dev_Status;
    int   Overall_Status;
    char  Text_Description[50];
    char  Reserved1[2];
    char  Started_By_User[10];
    char  Writing_Status;
    char  Wait_Msg_Status;
    char  Held_Status;
    char  End_Pending_Status;
    char  Hold_Pending_Status;
    char  Betw_Files_Status;
    char  Betw_Copies_Status;
    char  Wait_Data_Status;
    char  Wait_Dev_Status;
    char  On_Job_Q_Status;
    char  Reserved2[4];
    char  Writer_Job_Name[10];
    char  Writer_Job_User_Name[10];
    char  Writer_Job_No[6];
    char  Prtr_Dev_Type[10];
    int   Num_Seps;
    int   Drawer_Seps;
    char  Align_Forms[10];
    char  Out_Q_Name[10];
    char  Out_Q_Lib_Name[10];
    char  Out_Q_Status;
    char  Publish_Status;
    char  Form_Type[10];
    char  Msg_Option[10];
    char  Auto_End_Writer[10];
    char  Allow_Dir_Prtg[10];
    char  Msg_Q_Name[10];
    char  Msg_Q_Lib_Name[10];
    char  Reserved4[2];
    char  Chgs_Take_Effect[10];
    char  N_Out_Q_Name[10];
    char  N_Out_Q_Lib_Name[10];
    char  N_Form_Type[10];
    char  N_Msg_Option[10];
    int   N_File_Seps;
    int   N_Sep_Drawer;
    char  SF_Name[10];
    char  Job_Name[10];
    char  User_Name[10];
    char  Job_No[6];
    int   SF_No;
    int   Page_Being_Written;
    int   Total_Pages;
    int   Copies_Left;
    int   Total_Copies;
    char  Adv_Fn_Prtg[10];
    char  Msg_Key[4];
    char  Reserved[11];
    char  Job_System_Name[8];
    char  Splf_Create_Date[7];
    char  Splf_Create_Time[6];
 } Qgy_Rprta_RecVar_t;

#if (__OS400_TGTVRM__>=510)
#pragma datamodel(pop)
#endif

 #endif

