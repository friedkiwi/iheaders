 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QSYLUSRA                                   */
 /*                                                                */
 /* Descriptive Name: List Users Authorized to Object.             */
 /*                                                                */
 /* 5763-SS1, 5722-SS1  (C) Copyright IBM Corp. 1994,2001          */
 /* All rights reserved.                                           */
 /* US Government Users Restricted Rights -                        */
 /* Use, duplication or disclosure restricted                      */
 /* by GSA ADP Schedule Contract with IBM Corp.                    */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /*                                                                */
 /* Description: The List Users Authorized to Object API puts a    */
 /*              list of users privately authorized to an object,  */
 /*              including an authorization list, into a user space*/
 /*                                                                */
 /* Header Files Included: H/QSY                                   */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: Qsy_LUSRA0100_List_T                           */
 /*                 Qsy_LUSRA_Header_T                             */
 /*                 Qsy_LUSRA_Input_T                              */
 /*                                                                */
 /* Function Prototype List: QSYLUSRA                              */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= D2862000     3D10  931222 XZY0432:  New Include           */
 /* $01= P3985077     3D60  950317 SUDARMAN: Change header file    */
 /*                                          declaration           */
 /* $02= D28502.4     4D20  970423 GJS:      Add field level       */
 /*                                          field.                */
 /* $03= D9841629   v5r2m0  010915 ROCH      Add IASP support.     */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

 #ifndef QSYLUSRA_h
 #define QSYLUSRA_h

  #include <qsy.h>                                           /* 01C*/
#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(P128)      /* @B1A*/
#endif                       /* @B1A*/

 /******************************************************************/
 /* Prototype for calling Security API QSYLUSRA                    */
 /******************************************************************/
  #ifdef __ILEC400__
       #pragma linkage (QSYLUSRA,OS,nowiden)
  #else
       extern "OS"
  #endif
 void QSYLUSRA (void *,          /* Qualified user space name      */
                char *,          /* Format name                    */
                void *,          /* Qualified object name          */
                char *,          /* Object type                    */
		void *,          /* Error code                     */
                ...);            /* char * ASP_Device_Name    @03C */


 /******************************************************************/
 /* Input Parameter structure for QSYLUSRA                         */
 /******************************************************************/
 typedef struct Qsy_USRA_Input
    {
       Qsy_Qual_Name_T  User_Space;
       char  Format[8];
       Qsy_Qual_Name_T  Object;
       char  Object_Type[10];
       char  ASP_Device_Name[10];                         /*@03A*/
    } Qsy_LUSRA_Input_T;

 /******************************************************************/
 /* Header structure for QSYLUSRA                                  */
 /******************************************************************/
 typedef struct Qsy_USRA_Header
    {
       Qsy_Qual_Name_T  Object;
       char  Object_Type[10];
       char  Object_Owner[10];
       char  Auth_List[10];
       char  Primary_Group[10];
       char  Field_Auth_Flag;
       char  ASP_Device_of_Lib[10];                        /*@03A*/
       char  ASP_Device_of_Object[10];                     /*@03A*/
    } Qsy_LUSRA_Header_T;

 /******************************************************************/
 /* Record structure for USRA0100 format                           */
 /******************************************************************/
 typedef struct Qsy_USRA0100
    {
       char  User_Name[10];
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
    } Qsy_LUSRA0100_List_T;

#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(pop)       /* @B1A*/
#endif                       /* @B1A*/
 #endif
