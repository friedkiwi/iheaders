 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QUSLJOB                                    */
 /*                                                                */
 /* Descriptive Name: List Job API                                 */
 /*                                                                */
 /* 5763-SS1  (C) Copyright IBM Corp. 1994,1994                    */
 /* All rights reserved.                                           */
 /* US Government Users Restricted Rights -                        */
 /* Use, duplication or disclosure restricted                      */
 /* by GSA ADP Schedule Contract with IBM Corp.                    */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /*                                                                */
 /* Description: The List Job API generates a list of all or some  */
 /*              jobs on the system.                               */
 /*                                                                */
 /* Header Files Included: None.                                   */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: Qus_Ljob_Input_t                               */
 /*                 Qus_Ljob_Header_t                              */
 /*                 Qus_JOBL0100_t                                 */
 /*                 Qus_Ljob_Key_Fields_t                          */
 /*                 Qus_JOBL0200_t                                 */
 /*                                                                */
 /* Function Prototype List: QUSLJOB                               */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= D2862000     3D10  940424 DETTMAN:  New Include           */
 /* $A0= D9752900     5D10  990402 ROCH:     Continuation handle   */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

 #ifndef QUSLJOB_h
 #define QUSLJOB_h
#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(P128)      /* @B1A*/
#endif                       /* @B1A*/

 /******************************************************************/
 /*  Prototype for QUSLJOB API                                    */
 /******************************************************************/
 #ifdef  __ILEC400__
       #pragma linkage(QUSLJOB,OS,nowiden)
 #else
       extern "OS"
 #endif
 void QUSLJOB(void *,            /* User space name and library    */
              char *,            /* Format name                    */
              void *,            /* Qualified job name             */
              char *,            /* Status                         */
              ...);              /* Optional Parameter Group 1:
                                      void *   Error code
                                    Optional Parameter Group 2:
                                      char *   Job type
                                      int      Number of fields to
                                                   return
                                      void *   Key of fields to
                                                   return
                                    Optional Parameter Group 3:
                                      char *   Continuation handle */

 /******************************************************************/
 /* Type Definition for the JOBL0100 and JOBL0200 input parameter  */
 /* section.                                                       */
 /****                                                          ****/
 /* NOTE: The following type definition only defines the fixed     */
 /*       portion of the format.  Any varying length field will    */
 /*       have to be defined by the user.                          */
 /******************************************************************/
typedef _Packed struct Qus_Ljob_Input
    {
       char Job_Name[10];
       char User_Name[10];
       char Job_Number[6];
       char Status[10];
       char User_Space[10];
       char User_Space_Lib[10];
       char Format[8];
       char Job_Type;
       char Reserved[3];
       int  Number_Fields_To_Return;
     /*int  Key_Of_Fields_To_Return[];*//* Varying length          */
     /*char Continue_Hdl[48];         */
    } Qus_Ljob_Input_t;

 /******************************************************************/
 /* Type Definition for the JOBL0100 and JOBL0200 header section.  */
 /******************************************************************/
 typedef _Packed struct Qus_Ljob_Header
    {
       char Job_Name[10];
       char User_Name[10];
       char Job_Number[6];
       char Continue_Hdl[48];
    } Qus_Ljob_Header_t;

 /******************************************************************/
 /* Type Definition for the JOBL0100 format.                       */
 /******************************************************************/
 typedef _Packed struct Qus_JOBL0100
    {
       char Job_Name_Used[10];
       char User_Name_Used[10];
       char Job_Number_Used[6];
       char Internal_Job_Id[16];
       char Status[10];
       char Job_Type;
       char Job_Subtype;
       char Reserved[2];
    } Qus_JOBL0100_t;

 /******************************************************************/
 /* Type Definition for the JOBL0200 format.                       */
 /****                                                          ****/
 /* NOTE: The following type definition only defines the fixed     */
 /*       portion of the format.  Any varying length field will    */
 /*       have to be defined by the user.                          */
 /******************************************************************/

 typedef _Packed struct Qus_Ljob_Key_Fields
    {
       int  Length_Field_Info_Rtnd;
       int  Key_Field;
       char Type_Of_Data;
       char Reserved[3];
       int  Length_Data;
     /*char Data[];*/            /* Varying length                 */
     /*char Reserved[];*/        /* Varying length                 */
    } Qus_Ljob_Key_Fields_t;

 typedef _Packed struct Qus_JOBL0200
    {
       char Job_Name_Used[10];
       char User_Name_Used[10];
       char Job_Number_Used[6];
       char Internal_Job_Id[16];
       char Status[10];
       char Job_Type;
       char Job_Subtype;
       char Reserved[2];
       char Job_Info_Status;
       char Reserved2[3];
       int  Number_Fields_Rtnd;
     /*Qus_Ljob_Key_Fields_t Key_Fields_Info[];*//* Varying length */
    } Qus_JOBL0200_t;

#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(pop)       /* @B1A*/
#endif                       /* @B1A*/
 #endif
