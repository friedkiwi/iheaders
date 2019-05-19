 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QSYLOBJP                                   */
 /*                                                                */
 /* Descriptive Name: List Objects That Adopt Owner Authority.     */
 /*                                                                */
 /* 5763-SS1, 5722-SS1  (C) Copyright IBM Corp. 1994,1999, 2001    */
 /* All rights reserved.                                           */
 /* US Government Users Restricted Rights -                        */
 /* Use, duplication or disclosure restricted                      */
 /* by GSA ADP Schedule Contract with IBM Corp.                    */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /*                                                                */
 /* Description: The List Objects That Adopt Owner Authority API   */
 /*              puts a list of objects that adopt an object       */
 /*              owner's authority into a user space.              */
 /*                                                                */
 /* Header Files Included: H/QSY                                   */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: Qsy_OBJP0100_List_T                            */
 /*                 Qsy_OBJP0110_List_T                            */
 /*                 Qsy_OBJP0200_List_T                            */
 /*                 Qsy_OBJP_Header_T                              */
 /*                 Qsy_OBJP_Input_T                               */
 /*                                                                */
 /* Function Prototype List: QSYLOBJP                              */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= D2862000     3D10  931222 ROCH      New Include           */
 /* $01= P3985077     3D60  950317 ROCH      Change header file    */
 /*                                          declaration           */
 /* $02= D9761200     4D50  990523 ROCH      Add new formats.      */
 /* $03= D9841627     v5r2m0  010630 ROCH      Add IASP support.   */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

 #ifndef QSYLOBJP_h
 #define QSYLOBJP_h

  #include <qsy.h>                                          /* @01C*/
#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(P128)      /* @B1A*/
#endif                       /* @B1A*/

 /******************************************************************/
 /* Prototype for calling Security API QSYLOBJP                    */
 /******************************************************************/
  #ifdef __ILEC400__
       #pragma linkage (QSYLOBJP,OS,nowiden)
  #else
       extern "OS"
  #endif
 void QSYLOBJP (void *,          /* Qualified user space name      */
                char *,          /* Format name                    */
                char *,          /* User name                      */
                char *,          /* Object type                    */
                void *,          /* Continuation handle            */
		void *);         /* Error code                     */


 /******************************************************************/
 /* Input Parm structure for QSYLOBJP                              */
 /******************************************************************/
 typedef struct Qsy_OBJP_Input
    {
       Qsy_Qual_Name_T Object;
       char  Format[8];
       char  User_Name[10];
       char  Object_Type[10];
       char  Continuation_Handle[20];
    } Qsy_OBJP_Input_T;

 /******************************************************************/
 /* Header structure for QSYLOBJP                                  */
 /******************************************************************/
 typedef struct Qsy_OBJP_Header
    {
       char  User_Name[10];
       char  Continue_Value[20];
    } Qsy_OBJP_Header_T;

 /******************************************************************/
 /* Record structure for OBJP0100 format                           */
 /******************************************************************/
 typedef struct Qsy_OBJP0100_List
    {
       Qsy_Qual_Name_T  Object;
       char  Object_Type[10];
       char  Object_In_Use;
       char  ASP_Device_of_Lib[10];                       /* @03A */
       char  ASP_Device_of_Object[10];                    /* @03A */
    } Qsy_OBJP0100_List_T;

 /******************************************************************/
 /* Record structure for OBJP0110 format                           */
 /******************************************************************/
 typedef struct Qsy_OBJP0110_List
    {
       int   Offset_Path_Name;
       int   Length_Path_Name;
       char  ASP_Device_of_Object[10];                     /* @03A */
       char  Reserved[2];                                  /* @03A */
     /*Qsy_Path_Info_T Path_Name;*/       /* Varying length        */
    } Qsy_OBJP0110_List_T;                                  /* @02A*/

 /******************************************************************/
 /* Record structure for OBJP0200 format                           */
 /******************************************************************/
 typedef struct Qsy_OBJP0200_List
    {
       Qsy_Qual_Name_T  Object;
       char  Object_Type[10];
       char  Object_In_Use;
       char  Object_Attribute[10];
       char  Object_Text[50];
       char  ASP_Device_of_Lib[10];                        /* @03A */
       char  ASP_Device_of_Object[10];                     /* @03A */
    } Qsy_OBJP0200_List_T;


#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(pop)       /* @B1A*/
#endif                       /* @B1A*/
 #endif
