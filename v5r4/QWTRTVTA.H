 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: QWTRTVTA                                     */
 /*                                                                */
 /* Descriptive Name: Retrieve Thread Attibute API                 */
 /*                                                                */
 /* 5722-SS1  (C) Copyright IBM Corp. 2002                         */
 /* All rights reserved.                                           */
 /* US Government Users Restricted Rights -                        */
 /* Use, duplication or disclosure restricted                      */
 /* by GSA ADP Schedule Contract with IBM Corp.                    */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /*                                                                */
 /* Description: The Retrieve Thread Attribute API retrieves the   */
 /*              thread and job attributes for the specified thread*/
 /*              and places the entries in the receiver variable   */
 /*              in the calling program.                           */
 /*                                                                */
 /* Header Files Included:  H/QWCATTR                              */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List:  Qwt_RTVT_Receiver_InfoData                    */
 /*                  Qwt_RTVT_Library_Info_t                       */
 /*                  Qwt_RTVT_ASP_Group_Info_t                     */
 /*                  Qwt_RTVT0100_t                                */
 /*                  Qwt_RTVT0200_t                                */
 /*                  Qwt_RTVT0300_t                                */
 /*                  Qwc_JIDF0100_t                                */
 /*                  Qwc_JIDF0200_t                                */
 /*    *Note - Qwc_JIDF0100_t and Qwc_JIDF0200_t are defined in    */
 /*            H/QWCATTR header file                               */
 /*                                                                */
 /* Function Prototype List: QWTRTVTA                              */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR  CHANGE DESCRIPTION        */
 /* ---- ------------ ----- ------ ----  ------------------------- */
 /* $A0= D9803113     5D20  000430 ROCH: New Include               */
 /* $A1= D98603       5D20  010228 ROCH: Add ASP group information */
 /*                                      and support for formats   */
 /*                                      RTVT0200 and RTVT0300.    */
 /* $A2= D98578       5D20  011128 ROCH: Add Reset Statistics Parm */
 /*                                      to Prototype              */
 /* $A3=P9958328      5D20  020127 ROCH: Add Lenth 10 to LIBRARY_AS*/
 /*                                      P_NAME                    */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

 #ifndef QWTRTVTA_h
 #define QWTRTVTA_h

 #include <qwcattr.h>

 #if (__OS400_TGTVRM__>=510)
 #pragma datamodel(P128)
 #endif

 /********************************************************************/
 /*  Prototype for QWTRTVTA API                                      */
 /********************************************************************/
 #ifdef  __ILEC400__
       #pragma linkage(QWTRTVTA,OS,nowiden)
 #else
       extern "OS"
 #endif
 void QWTRTVTA(void *,         /* Receiver variable                */
               int,              /* Length of receiver variable      */
               char *,           /* Format name                      */
               void *,           /* Job identification information   */
               char *,           /* Format of job identification     */
               int,              /* Number of fields to return       */
               void *,           /* Keys of fields to be returned    */
               void *,           /* Reset Statistics                 */
               void *);          /* Error code                       */

 /********************************************************************/
 /* Type Definition for the RTVT0100 format.                         */
 /****                                                            ****/
 /* NOTE: The following type definition only defines the fixed       */
 /*       portion of the format.  Any varying length field will      */
 /*       have to be defined by the user.                            */
 /********************************************************************/

 typedef _Packed struct Qwt_RTVT_Receiver_InfoData
    {
       int  Length_Field_Info_Rtnd;
       int  Key_Field;
       char Type_Of_Data;
       char Reserved[3];
       int  Length_Data;
    /*char Data[];*/            /* Varying length                 */
    /*char Reserved[];*/        /* Varying length                 */
    } Qwt_RTVT_Receiver_InfoData_t;

 typedef _Packed struct Qwt_RTVT_Library_Info {
      char Library_Name[10];
      char Library_Description[50];
      int Library_ASP_Number;
      char Library_ASP_Name[10];
    /*char Reserved[]; */        /* Varying length                */
  } Qwt_RTVT_Library_Info_t;

 typedef _Packed struct Qwt_RTVT_ASP_Group_Info {
      char ASP_Group_Name[10];
    /*char Reserved[]; */       /* Varying length                 */
 } Qwt_RTVT_ASP_Group_Info_t;

 typedef _Packed struct Qwt_RTVT0100
    {
       int  Bytes_Returned;
       int  Bytes_Available;
       char Job_Name_Used[10];
       char User_Name_Used[10];
       char Job_Number_Used[6];
       char Reserved[2];
       unsigned int  Returned_Thread_Handle;
       char Returned_Thread_Id[8];
       char Status[10];
       char Reserved_1[2];
       int  Offset_Key_Fields;
       int  Number_Fields_Rtn;
     /*char Reserved_2[]; *//* Varying length */
     /*Qwt_RTVT_Receiver_InfoData_t Entry[]; *//* Varying length */
    } Qwt_RTVT0100_t;

 typedef _Packed struct Qwt_RTVT0200
    {
       int  Bytes_Returned;
       int  Bytes_Available;
       char Job_Name_Used[10];
       char User_Name_Used[10];
       char Job_Number_Used[6];
       char Reserved[2];
       unsigned int  Returned_Thread_Handle;
       char Returned_Thread_Id[8];
       int  Offset_System_Library_List;
       int  Number_System_Library_List;
       int  Offset_Product_Library_List;
       int  Number_Product_Library_List;
       int  Offset_Current_Library_List;
       int  Number_Current_Library_List;
       int  Offset_User_Library_List;
       int  Number_User_Library_List;
       int  Length_Library_List_Entry;
       int  Offset_ASP_Group;
       int  Number_ASP_Group;
       int  Length_ASP_Group_Entry;
     /*Qwt_RTVT_Library_Info_t Sys_Lib[]; *//* Varying length */
     /*Qwt_RTVT_Library_Info_t Prod_Lib[]; *//* Varying length */
     /*Qwt_RTVT_Library_Info_t Cur_Lib[]; *//* Varying length */
     /*Qwt_RTVT_Library_Info_t User_Lib[]; *//* Varying length */
     /*Qwt_RTVT_ASP_Group_Info_t ASP_Info[]; *//* Varying length */
    } Qwt_RTVT0200_t;

 typedef _Packed struct Qwt_RTVT0300
    {
       int  Bytes_Returned;
       int  Bytes_Available;
       char Job_Name_Used[10];
       char User_Name_Used[10];
       char Job_Number_Used[6];
       char Reserved[2];
       unsigned int  Returned_Thread_Handle;
       char Returned_Thread_Id[8];
       unsigned long long Elapsed_time;
       int  Offset_Key_Fields;
       int  Number_Fields_Rtn;
     /*char Reserved_1[]; */                /* Varying length */
     /*Qwt_RTVT_Receiver_InfoData_t Entry[]; *//* Varying length */
    } Qwt_RTVT0300_t;

 #if (__OS400_TGTVRM__>=510)
 #pragma datamodel(pop)
 #endif

 #endif
