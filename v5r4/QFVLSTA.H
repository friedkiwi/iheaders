 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QFVLSTA                                    */
 /*                                                                */
 /* Descriptive Name: List activities.                             */
 /*                                                                */
 /* 5763-SS1,5722-SS1  (C) Copyright IBM Corp. 1994,2001           */
 /* All rights reserved.                                           */
 /* US Government Users Restricted Rights -                        */
 /* Use, duplication or disclosure restricted                      */
 /* by GSA ADP Schedule Contract with IBM Corp.                    */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /* Description: The List Activities API retrieves a list of       */
 /*              activities from a qualified change request        */
 /*              description.                                      */
 /*                                                                */
 /* Header Files Included: None.                                   */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: Qfv_Lsta_Input_t                               */
 /*                 Qfv_Lsta_Conditions_t                          */
 /*                 Qfv_Lsta_Header_t                              */
 /*                 Qfv_Lsta_CRDA0100_t                            */
 /*                 Qfv_Lsta_CRDA0200_t                            */
 /*                 Qfv_Lsta_CRDA0300_t                            */
 /*                                                                */
 /* Function Prototype List: QFVLSTA                               */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON    LEVEL DATE   PGMR      CHANGE DESCRIPTION       */
 /* ---- --------- ----- ------ --------- -------------------------*/
 /* $A0= PM601636  3D10  940619 HHUGO     New Include              */
 /* $A1= D98212.2 v5r1m0 010300 gchaney:  Teraspace stage 2        */
 /*                                                                */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

 #ifndef QFVLSTA_h
 #define QFVLSTA_h

 #if (__OS400_TGTVRM__>=510)                                /* @A1A*/
     #pragma datamodel(P128)                                /* @A1A*/
 #endif                                                     /* @A1A*/

 /******************************************************************/
 /* Prototype for calling List activities API QFVLSTA              */
 /******************************************************************/
 #ifdef __ILEC400__
      #pragma linkage (QFVLSTA,OS,nowiden)
 #else
      extern "OS"
 #endif
 void QFVLSTA (void *,           /* User Space Name                */
               char *,           /* Format                         */
               void *,           /* Change Request Description     */
               void *);          /* Error code                     */

 /******************************************************************/
 /* Type Definition for the Input Parameter Section.               */
 /******************************************************************/
 typedef _Packed struct Qfv_Lsta_Input
    {
       char User_Space[10];
       char User_Space_Lib[10];
       char Format[10];
       char Change_Request_Desc_Name[10];
       char Change_Request_Desc_Lib[10];
    } Qfv_Lsta_Input_t;

 /******************************************************************/
 /* Type Definition for the Header Section.                        */
 /******************************************************************/
 typedef _Packed struct Qfv_Lsta_Header
    {
       char User_Space[10];
       char User_Space_Lib[10];
       char Change_Request_Desc_Name[10];
       char Change_Request_Desc_Lib[10];
    } Qfv_Lsta_Header_t;

 /******************************************************************/
 /* Type Definition for the CRDA0100 format.                       */
 /******************************************************************/
 typedef _Packed struct Qfv_Lsta_CRDA0100
    {
       char Activity_Name[10];
    } Qfv_Lsta_CRDA0100_t;

 /******************************************************************/
 /* Type Definition for the conditions structure                   */
 /******************************************************************/
 typedef _Packed struct Qfv_Lsta_Conditions
    {
       char Condition_Activity[10];
       char Condition_Relation[3];
       char Reserved_3[3];
       int  Condition_Code;
       char Condition_Mode[10];
       char Reserved_2[2];
    } Qfv_Lsta_Conditions_t;

 /******************************************************************/
 /* Type Definition for the CRDA0200 format.                       */
 /******************************************************************/
 typedef _Packed struct Qfv_Lsta_CRDA0200
    {
       char Activity_Name[10];
       Qfv_Lsta_Conditions_t Conditions_Array[5];
       char Reserved[2];
       int  Number_Conditions;
       char Start_Time[40];
    } Qfv_Lsta_CRDA0200_t;

 /******************************************************************/
 /* Type Definition for the CRDA0300 format.                       */
 /****                                                          ****/
 /* NOTE: The following type definition only defines the fixed     */
 /*       portion of the format.  Any varying length field will    */
 /*       have to be defined by the user.                          */
 /******************************************************************/
 typedef _Packed struct Qfv_Lsta_CRDA0300
    {
       char Activity_Name[10];
       char Activity_Type[10];
       char Activity_Text[50];
       char Reserved_1[2];
       char Activity_Text_CCSID[50];
       Qfv_Lsta_Conditions_t Conditions_Array[5];
       char Reserved_2[2];
       int  Number_Conditions;
       int  Parameters_Length;
     /*char Function_Parameters[];*/ /* Varying length             */
    } Qfv_Lsta_CRDA0300_t;

 #if (__OS400_TGTVRM__>=510)                                /* @A1A*/
     #pragma datamodel(pop)                                 /* @A1A*/
 #endif                                                     /* @A1A*/

 #endif
