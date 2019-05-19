 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QSYLATLO                                   */
 /*                                                                */
 /* Descriptive Name: List Objects Secured by Authorization List.  */
 /*                                                                */
 /* 5716-SS1, 5722-SS1  (C) Copyright IBM Corp. 1994, 2001         */
 /* All rights reserved.                                           */
 /* US Government Users Restricted Rights -                        */
 /* Use, duplication or disclosure restricted                      */
 /* by GSA ADP Schedule Contract with IBM Corp.                    */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /*                                                                */
 /* Description: The List Objects Secured by Authorization List    */
 /*              API puts a list of objects secured by an          */
 /*              authorization list into a user space.             */
 /*                                                                */
 /* Header Files Included: H/QSY                                   */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: Qsy_ATLO0100_List_T                            */
 /*                 Qsy_ATLO0110_List_T                            */
 /*                 Qsy_ATLO0200_List_T                            */
 /*                 Qst_ATLO0210_List_T                            */
 /*                 Qsy_ATLO0300_List_T                            */
 /*                 Qsy_ATLO0400_List_T                            */
 /*                 Qsy_LATLO_Header_T                             */
 /*                 Qsy_LATLO_Input_T                              */
 /*                                                                */
 /* Function Prototype List: QSYLATLO                              */
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
 /* $02= D94766       3D70  960605 KARENS:   Add formats 150 & 250 */
 /* $03= P3627776     3P70  960730 KARENS:   Change 150 to 300,    */
 /*                                          250 to 400, add new   */
 /*                                          fields to 300, 400,   */
 /*                                          and header.           */
 /* $04= D98416.27    v5r2m0 010630 ROCH :   Add IASP support.     */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

 #ifndef QSYLATLO_h
 #define QSYLATLO_h

  #include <qsy.h>                                          /* @01C*/
#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(P128)      /* @B1A*/
#endif                       /* @B1A*/

 /******************************************************************/
 /* Prototype for calling Security API QSYLATLO                    */
 /******************************************************************/
  #ifdef __ILEC400__
       #pragma linkage (QSYLATLO,OS,nowiden)
  #else
       extern "OS"
  #endif
 void QSYLATLO (void *,          /* Qualified User Space Name      */
                char *,          /* Format name                    */
                char *,          /* Authorization List             */
                void *);         /* Error code                     */

 /******************************************************************/
 /* Header structure for QSYLATLO                                  */
 /******************************************************************/
 typedef struct Qsy_LATLO_Input
    {
       Qsy_Qual_Name_T Object;
       char  Format[8];
       char  Authorization_List[10];
    } Qsy_LATLO_Input_T;

 /******************************************************************/
 /* Header structure for QSYLATLO                                  */
 /******************************************************************/
 typedef struct Qsy_LATLO_Header
    {
       char  Authorization_List[10];
       char  Autl_Library[10];
       char  Owner[10];
       char  Primary_Group[10];
       int   Reason_Code;
       int   QSYS_Object_Offset;
       int   QSYS_Entry_Number;
       int   QSYS_Number_of_Objects;
       int   QDLS_Object_Offset;
       int   QDLS_Entry_Number;
       int   QDLS_Number_of_Objects;
       int   Dir_Object_Offset;
       int   Dir_Entry_Number;
       int   Dir_Number_of_Objects;
    } Qsy_LATLO_Header_T;

 /******************************************************************/
 /* Record structure for ATLO0100 format                           */
 /******************************************************************/
 typedef struct Qsy_ATLO0100_List
    {
       Qsy_Qual_Name_T  Object;
       char  Object_Type[10];
       char  Auth_Holder;
       char  ASP_Device_of_Lib[10];
       char  ASP_Device_of_Object[10];
    } Qsy_ATLO0100_List_T;

 /******************************************************************/
 /* Record structure for ATLO0110 format                           */
 /*******                                                          */
 /* NOTE:  The following type definition only defines the fixed    */
 /*        portion of the format. Any varying length field will    */
 /*        have to be defined by the user.                         */
 /******************************************************************/
 typedef struct Qsy_ATLO0110_List
    {
       int   Path_Name_Offset;
       int   Path_Name_Length;
       char  Object_Type[10];
       char  Auth_Holder;
       char  Reserved;
       char  ASP_Device_of_Object[10];
       char  Reserved2[2];
 /*    Qsy_Path_Name_Info_T Path_Name;*/ /* Varying length         */
    } Qsy_ATLO0110_List_T;

 /******************************************************************/
 /* Record structure for ATLO0200 format                           */
 /******************************************************************/
 typedef struct Qsy_ATLO0200_List
    {
       Qsy_Qual_Name_T  Object;
       char  Object_Type[10];
       char  Auth_Holder;
       char  Object_Owner[10];
       char  Object_Attribute[10];
       char  Object_Text[50];
       char  Primary_Group[10];
       char  ASP_Device_of_Lib[10];
       char  ASP_Device_of_Object[10];
    } Qsy_ATLO0200_List_T;

 /******************************************************************/
 /* Record structure for ATLO0210 format                           */
 /*******                                                          */
 /* NOTE:  The following type definition only defines the fixed    */
 /*        portion of the format. Any varying length field will    */
 /*        have to be defined by the user.                         */
 /******************************************************************/
 typedef struct Qsy_ATLO0210_List
    {
       int   Path_Name_Offset;
       int   Path_Name_Length;
       char  Object_Type[10];
       char  Auth_Holder;
       char  Object_Owner[10];
       char  Object_Attribute[10];
       char  Object_Text[50];
       char  Primary_Group[10];
       char  Reserved;
       char  ASP_Device_of_Object[10];
       char  Reserved2[2];

 /*    Qsy_Path_Name_Info_T Path_Name;*/ /* Varying length         */
    } Qsy_ATLO0210_List_T;

 /******************************************************************/
 /* Record structure for ATLO0300 format                           */
 /******************************************************************/
 typedef struct Qsy_ATLO0300_List
    {
       int              Entry_length;
       Qsy_Qual_Name_T  Object;
       char             Object_Type[10];
       char             Auth_Holder;
       char             DLO_Name[12];
       char             Folder_Name[63];
       char             Res1[2];
       int              Displacement_to_Path;
       int              Length_of_Path;
       char             ASP_Device_of_Lib[10];
       char             ASP_Device_of_Object[10];
 /*    Qsy_Path_Name_Info_T Path_Name;*/ /* Varying length         */
    } Qsy_ATLO0300_List_T;

 /******************************************************************/
 /* Record structure for ATLO0400 format                           */
 /******************************************************************/
 typedef struct Qsy_ATLO0400_List
    {
       int              Entry_length;
       Qsy_Qual_Name_T  Object;
       char             Object_Type[10];
       char             Auth_Holder;
       char             DLO_Name[12];
       char             Folder_Name[63];
       char             Res1[2];
       int              Displacement_to_Path;
       int              Length_of_Path;
       char             Object_Owner[10];
       char             Object_Attribute[10];
       char             Object_Text[50];
       char             Primary_Group[10];
       char             ASP_Device_of_Lib[10];
       char             ASP_Device_of_Object[10];
 /*    Qsy_Path_Name_Info_T Path_Name;*/ /* Varying length         */
    } Qsy_ATLO0400_List_T;

#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(pop)       /* @B1A*/
#endif                       /* @B1A*/
 #endif
