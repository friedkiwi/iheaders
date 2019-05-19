 /*** START HEADER FILE SPECIFICATIONS *******************************/
 /*                                                                  */
 /* Header File Name: H/ETASTGEX                                     */
 /*                                                                  */
 /* Descriptive Name: Storage Extension Exit Program.                */
 /*                                                                  */
 /* 5763-SS1,5722-SS1  (C) Copyright IBM Corp. 1994,2001             */
 /* All rights reserved.                                             */
 /* US Government Users Restricted Rights -                          */
 /* Use, duplication or disclosure restricted                        */
 /* by GSA ADP Schedule Contract with IBM Corp.                      */
 /*                                                                  */
 /* Licensed Materials-Property of IBM                               */
 /*                                                                  */
 /*                                                                  */
 /* Description: The Storage Extension exit program provides the     */
 /*              capability of restoring objects using storage       */
 /*              extension, that is, restoring objects that were     */
 /*              saved using *FREE.                                  */
 /*                                                                  */
 /* Header Files Included: None.                                     */
 /*                                                                  */
 /* Macros List: None.                                               */
 /*                                                                  */
 /* Structure List: Qta_Object_Description_Info_t                    */
 /*                 Qta_Control_Value_Struct_t                       */
 /*                                                                  */
 /* Function Prototype List: None.                                   */
 /*                                                                  */
 /* Change Activity:                                                 */
 /*                                                                  */
 /* CFD List:                                                        */
 /*                                                                  */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION      */
 /* ---- ------------ ----- ------ --------- ----------------------  */
 /* $A0= D2862000     3D10  940418 MOREY     New Include             */
 /* $MD= D94972       4D30  970617 ROCH      Enabling for DLOs       */
 /* $MS= P3656111     4D30  971002 ROCH      Fix: Enabling for DLOs  */
 /* $A1= P9934931     5D10  001105 ROCH      Teraspace stage 2       */
 /*                                                                  */
 /* End CFD List.                                                    */
 /*                                                                  */
 /*  Additional notes about the Change Activity                      */
 /* End Change Activity.                                             */
 /*** END HEADER FILE SPECIFICATIONS *********************************/

 #ifndef ETASTGEX_h
 #define ETASTGEX_h

 #if (__OS400_TGTVRM__>=510)                                   /*@A1A*/
     #pragma datamodel(P128)                                   /*@A1A*/
 #endif                                                        /*@A1A*/

 /********************************************************************/
 /* Type Definition for the Object Description Information Format    */
 /****                                                            ****/
 /* NOTE: The following type definition only defines the fixed       */
 /*       portion of the format.  Any varying length field will      */
 /*       have to be defined by the user.                            */
 /********************************************************************/
 typedef _Packed struct Qta_Object_Description_Info
    {
       char Struct1_Len[4];
       char Struct2_Len[4];
       char Object_Name[10];
       char Object_Lib_Name[10];
       char Object_Type[10];
       char Member_Name[10];
       char Job_Name[10];
       char User_ID[10];
       char Job_Number[6];
       char reserved1[2];                                     /* @MSC*/
       int  Path_Name_Offset;                                 /* @MSC*/
       int  Path_Name_Length;                                 /* @MSC*/
       char Request_Type[10];                                 /* @MDA*/
       char Date_Time_Stamp[13];                              /* @MDA*/
     /*Qlg_Path_Name_T Path_Name[];*/   /* Varying length        @MDA*/
    } Qta_Object_Description_Info_t;

 /********************************************************************/
 /* Type Definition for the Control Value Information Format         */
 /********************************************************************/
 typedef _Packed struct Qta_Control_Value_Struct
    {
       char Object_Restore_Info[1];
       char Date_Time_Stamp[13];                              /* @MDA*/
    } Qta_Control_Value_Struct_t;

 #if (__OS400_TGTVRM__>=510)                                  /*@A1A*/
     #pragma datamodel(pop)                                   /*@A1A*/
 #endif                                                       /*@A1A*/


#endif
