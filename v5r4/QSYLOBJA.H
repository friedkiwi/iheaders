 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QSYLOBJA                                   */
 /*                                                                */
 /* Descriptive Name: List Objects User Is Authorized to, Owns,    */
 /*                   or Is Primary Group of.                      */
 /*                                                                */
 /* 5763-SS1, 5722-SS1  (C) Copyright IBM Corp. 1994, 2001         */
 /* All rights reserved.                                           */
 /* US Government Users Restricted Rights -                        */
 /* Use, duplication or disclosure restricted                      */
 /* by GSA ADP Schedule Contract with IBM Corp.                    */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /*                                                                */
 /* Description: The List Objects a User is Authorized To, Owns, or*/
 /*              Is Primary Group of API puts a list of objects a  */
 /*              user is authorized to, wons, or is the primary    */
 /*              group owner for into a user space.                */
 /*                                                                */
 /* Header Files Included: H/QSY                                   */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: Qsy_OBJA0100_List_T                            */
 /*                 Qsy_OBJA0110_List_T                            */
 /*                 Qsy_OBJA0200_List_T                            */
 /*                 Qsy_OBJA0210_List_T                            */
 /*                 Qsy_OBJA0300_List_T                            */
 /*                 Qsy_OBJA0310_List_T                            */
 /*                 Qsy_LOBJA_Header_T                             */
 /*                 Qsy_LOBJA_Input_T                              */
 /*                                                                */
 /* Function Prototype List: QSYLOBJA                              */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= D2862000     3D10  931222 XZY0432:  New Include           */
 /* @01= P3985077     3D60  950317 SUDARMAN: Change header file    */
 /*                                          declaration           */
 /* @02= D9841627   v5r2m0  010722 KHD:      Add IASP support      */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

 #ifndef QSYLOBJA_h
 #define QSYLOBJA_h

  #include <qsy.h>                                          /* @01C*/
#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(P128)      /* @B1A*/
#endif                       /* @B1A*/


 /******************************************************************/
 /* Prototype for calling Security API QSYLOBJA                    */
 /******************************************************************/
  #ifdef __ILEC400__
       #pragma linkage (QSYLOBJA,OS,nowiden)
  #else
       extern "OS"
  #endif
 void QSYLOBJA (void *,          /* Qualified user space name      */
                char *,          /* Format name                    */
                char *,          /* User ID                        */
                char *,          /* Object type                    */
                char *,          /* Returned objects               */
                void *,          /* Continuation handle            */
                void *);         /* Error code                     */

 /******************************************************************/
 /* Input Parameter structure for QSYLOBJA                         */
 /****                                                          ****/
 /* NOTE: The following type definition only defines the fixed     */
 /*       portion of the format.  Any varying length field will    */
 /*       have to be defined by the user.                          */
 /******************************************************************/
 typedef struct Qsy_LOBJA_Input
    {
       char  User_Space[10];
       char  User_Space_Library[10];
       char  Format[8];
       char  User_Name[10];
       char  Object_Type[10];
       char  Returned_Objects[10];
       char  Continuation_Handle[20];
       int   Offset_Request_List;
       int   Number_Request_List;
     /*char  Request_List[][10];*//* Varying length                */
    } Qsy_LOBJA_Input_T;

 /******************************************************************/
 /* Header structure for QSYLOBJA                                  */
 /******************************************************************/
 typedef struct Qsy_LOBJA_Header
    {
       char  User_Name[10];       /* User ID                       */
       char  Continue_Value[20];  /* Continuation handle           */
       int   Reason_Code;         /* Reason code                   */
    } Qsy_LOBJA_Header_T;

 /******************************************************************/
 /* Record structure for OBJA0100 format                           */
 /******************************************************************/
 typedef struct Qsy_OBJA0100_List
    {
       Qsy_Qual_Name_T  Object;
       char  Object_Type[10];
       char  Auth_Holder;
       char  Ownership;
       char  ASP_Device_of_Lib[10];
       char  ASP_Device_of_Object[10];
    } Qsy_OBJA0100_List_T;

 /******************************************************************/
 /* Record structure for OBJA0110 format                           */
 /****                                                          ****/
 /* NOTE: The following type definition only defines the fixed     */
 /*       portion of the format.  Any varying length field will    */
 /*       have to be defined by the user.                          */
 /******************************************************************/
 typedef struct Qsy_OBJA0110_List
    {
       int   Offset_Path_Name;
       int   Length_Path_Name;
       char  Object_Type[10];
       char  Authority_Holder;
       char  Ownership;
       char  ASP_Device_of_Object[10];
       char  Reserved[2];                               /* @02A    */
     /*char  Path_Name[];*/       /* Varying length                */
    } Qsy_OBJA0110_List_T;

 /******************************************************************/
 /* Record structure for OBJA0200 format                           */
 /******************************************************************/
 typedef struct Qsy_OBJA0200_List
    {
       Qsy_Qual_Name_T  Object;
       char  Object_Type[10];
       char  Auth_Holder;
       char  Ownership;
       char  Object_Auth[10];
       char  Autl_Management;
       char  Object_Operational;
       char  Object_Management;
       char  Object_Existence;
       char  Data_Read;
       char  Data_Add;
       char  Data_Update;
       char  Data_Delete;
       char  Data_Execute;
       char  Reserved[10];
       char  Object_Alter;
       char  Object_Reference;
       char  ASP_Device_of_Lib[10];
       char  ASP_Device_of_Object[10];
    } Qsy_OBJA0200_List_T;

 /******************************************************************/
 /* Record structure for OBJA0210 format                           */
 /****                                                          ****/
 /* NOTE: The following type definition only defines the fixed     */
 /*       portion of the format.  Any varying length field will    */
 /*       have to be defined by the user.                          */
 /******************************************************************/
 typedef struct Qsy_OBJA0210_List
    {
       int   Path_Offset;
       int   Path_Length;
       char  Object_Type[10];
       char  Auth_Holder;
       char  Ownership;
       char  Object_Auth[10];
       char  Autl_Management;
       char  Object_Operational;
       char  Object_Management;
       char  Object_Existence;
       char  Object_Alter;
       char  Object_Reference;
       char  Reserved[10];
       char  Data_Read;
       char  Data_Add;
       char  Data_Update;
       char  Data_Delete;
       char  Data_Execute;
       char  ASP_Device_of_Object[10];                      /* @A2A*/
       char  Reserved2[3];                                  /* @A2A*/
     /*char  Path_Name;*/        /* Varying length                 */
    } Qsy_OBJA0210_List_T;

 /******************************************************************/
 /* Record structure for OBJA0300 format                           */
 /******************************************************************/
 typedef struct Qsy_OBJA0300_List
    {
       Qsy_Qual_Name_T  Object;
       char  Object_Type[10];
       char  Auth_Holder;
       char  Ownership;
       char  Object_Auth[10];
       char  Autl_Management;
       char  Object_Operational;
       char  Object_Management;
       char  Object_Existence;
       char  Data_Read;
       char  Data_Add;
       char  Data_Update;
       char  Data_Delete;
       char  Object_Attribute[10];
       char  Object_Text[50];
       char  Data_Execute;
       char  Reserved[10];
       char  Object_Alter;
       char  Object_Reference;
       char  ASP_Device_of_Lib[10];
       char  ASP_Device_of_Object[10];
    } Qsy_OBJA0300_List_T;

 /******************************************************************/
 /* Record structure for OBJA0310 format                           */
 /****                                                          ****/
 /* NOTE: The following type definition only defines the fixed     */
 /*       portion of the format.  Any varying length field will    */
 /*       have to be defined by the user.                          */
 /******************************************************************/
 typedef struct Qsy_OBJA0310_List
    {
       int   Path_Offset;
       int   Path_Length;
       char  Object_Type[10];
       char  Auth_Holder;
       char  Ownership;
       char  Object_Auth[10];
       char  Autl_Management;
       char  Object_Operational;
       char  Object_Management;
       char  Object_Existence;
       char  Object_Alter;
       char  Object_Reference;
       char  Reserved1[10];
       char  Data_Read;
       char  Data_Add;
       char  Data_Update;
       char  Data_Delete;
       char  Data_Execute;
       char  Reserved2[10];
       char  Object_Attribute[10];
       char  Object_Text[50];
       char  ASP_Device_of_Object[10];
       char  Reserved3[1];
     /*char  Path_Name;*/        /* Varying length                 */
    } Qsy_OBJA0310_List_T;

#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(pop)       /* @B1A*/
#endif                       /* @B1A*/
 #endif
