 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QLYWRTBI                                   */
 /*                                                                */
 /* Descriptive Name: Write Build information API.                 */
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
 /* Description: The Write Build Information (QLYWRTBI) API writes */
 /*              more records to the space.                        */
 /*                                                                */
 /* Header Files Included: H/QLYWRTBI                              */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: Qly_Proc_Member_Start_Rec_t                    */
 /*                 Qly_Proc_Object_Start_Rec_t                    */
 /*                 Qly_Normal_Proc_End_Rec_t                      */
 /*                 Qly_Normal_End_Call_Next_Rec_t                 */
 /*                 Qly_Normal_Multiple_End_Rec_t                  */
 /*                 Qly_Abnormal_Proc_End_Rec_t                    */
 /*                 Qly_Include_Rec_t                              */
 /*                 Qly_Module_Reference_Rec_t                     */
 /*                 Qly_SrvPgm_Reference_Rec_t                     */
 /*                 Qly_BndDir_Reference_Rec_t                     */
 /*                 Qly_File_Reference_Rec_t                       */
 /*                 Qly_Format_Reference_Rec_t                     */
 /*                 Qly_Message_Reference_Rec_t                    */
 /*                 Qly_Object_Exists_Error_Rec_t                  */
 /*                 Qly_Ext_Reference_Error_Rec_t                  */
 /*                 Qly_Start_New_Pgm_Rec_t                        */
 /*                                                                */
 /* Function Prototype List: QLYWRTBI                              */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= D2862000     3D10  940213 LUPA      New Include           */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

#ifndef QLYWRTBI_h
 #define QLYWRTBI_h
#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(P128)      /* @B1A*/
#endif                       /* @B1A*/

 /******************************************************************/
 /* Prototype for QLYWRTBI API.                                    */
 /******************************************************************/
 #ifdef __ILEC400__
      #pragma linkage (QLYWRTBI,OS,nowiden)
 #else
      extern "OS"
 #endif
 void QLYWRTBI( void*,               /* Input Buffer               */
                int,                 /* Buffer Length              */
                void*);              /* Error code structure       */

 /******************************************************************/
 /* Type Definition for the Processer_Member_Start_Rec.            */
 /******************************************************************/
 typedef _Packed struct Qly_Proc_Member_Start_Rec{
      int     Record_Length;
      char    Record_Type[2];
      char    Reserved_1[2];
      char    Proc_Command[10];
      char    Source_Obj_Name_S[10];
      char    Source_Lib_Name_S[10];
      char    Source_Obj_Type_S[7];
      char    Source_Mbr_Name_S[10];
      char    Source_Obj_Name_U[10];
      char    Source_Lib_Name_U[10];
      char    Source_Mbr_Name_U[10];
      char    Target_Obj_Name[10];
      char    Target_Lib_Name[10];
      char    Target_Obj_Type[7];
      char    Target_Mbr_Name[10];
      char    Reserved_2[2];
 } Qly_Proc_Member_Start_Rec_t;

 /******************************************************************/
 /* Type Definition for the Processer_Object_Start_Rec.            */
 /******************************************************************/
 typedef _Packed struct Qly_Proc_Object_Start_Rec {
      int     Record_Length;
      char    Record_Type[2];
      char    Reserved_1[2];
      char    Proc_Command[10];
      char    Source_Obj_Name_S[10];
      char    Source_Lib_Name_S[10];
      char    Source_Obj_Type_S[7];
      char    Source_Obj_Name_U[10];
      char    Source_Lib_Name_U[10];
      char    Source_Obj_Type_U[7];
      char    Target_Obj_Name[10];
      char    Target_Lib_Name[10];
      char    Target_Obj_Type[7];
      char    Reserved_2;
 } Qly_Proc_Object_Start_Rec_t;

 /******************************************************************/
 /* Type Definition for the Normal_Processer_End_Rec               */
 /******************************************************************/
 typedef _Packed struct Qly_Normal_Proc_End_Rec{
      int     Record_Length;
      char    Record_Type[2];
      char    Reserved[2];
      char    Obj_Name[10];
      char    Lib_Name[10];
      char    Obj_Type[7];
      char    Mbr_Name[10];
      char    Message_Id[7];
 } Qly_Normal_Proc_End_Rec_t;

 /******************************************************************/
 /* Type Definition for the Normal_Processer_End_Call_Next_Rec.    */
 /******************************************************************/
 typedef _Packed struct Qly_Normal_End_Call_Next_Rec{
      int     Record_Length;
      char    Record_Type[2];
      char    Reserved[2];
      char    Obj_Name[10];
      char    Lib_Name[10];
      char    Obj_Type[7];
      char    Mbr_Name[10];
      char    Message_Id[7];
 } Qly_Normal_End_Call_Next_Rec_t;

 /******************************************************************/
 /* Type Definition for the Normal_Multiple_End_Rec.               */
 /******************************************************************/
 typedef _Packed struct Qly_Normal_Multiple_End_Rec {
      int     Record_Length;
      char    Record_Type[2];
      char    Reserved[2];
      char    Library[10];
      char    File[10];
      char    Member[10];
      char    Part_Type[32];
      char    Part_Language[32];
      char    Reserved_2[22];
 } Qly_Normal_Multiple_End_Rec_t;                           /* @A1A*/

 /******************************************************************/
 /* Type Definition for the Abnormal_Processor_End_Rec.            */
 /******************************************************************/
 typedef _Packed struct Qly_Abnormal_Proc_End_Rec{
      int     Record_Length;
      char    Record_Type[2];
      char    Reserved_1[2];
      char    Message_Id[7];
      char    Reserved_2;
 } Qly_Abnormal_Proc_End_Rec_t;

 /******************************************************************/
 /* Type Definition for the Include_Rec.                           */
 /******************************************************************/
 typedef _Packed struct Qly_Include_Rec{
      int     Record_Length;
      char    Record_Type[2];
      char    Reserved_1[2];
      int     Nesting_Lvl;
      char    Incl_Obj_Name_S[10];
      char    Incl_Lib_Name_S[10];
      char    Incl_Mbr_Name_S[10];
      char    Incl_Obj_Type_S[7];
      char    Incl_Obj_Name_U[10];
      char    Incl_Lib_Name_U[10];
      char    Incl_Mbr_Name_U[10];
      char    Reserved_2;
 } Qly_Include_Rec_t;

 /******************************************************************/
 /* Type Definition for the File_Reference_Rec.                    */
 /******************************************************************/
 typedef _Packed struct Qly_File_Reference_Rec{
      int     Record_Length;
      char    Record_Type[2];
      char    Reserved_1[2];
      char    File_Name_S[10];
      char    Lib_Name_S[10];
      char    Based_On_Indicator;
      char    File_Name_U[10];
      char    Lib_Name_U[10];
      char    Reserved_2[3];
      int     Nesting_Lvl;
 } Qly_File_Reference_Rec_t;

 /******************************************************************/
 /* Type Definition for the Module_Reference_Rec.                  */
 /******************************************************************/
 typedef _Packed struct Qly_Module_Reference_Rec {
      int     Record_Length;
      char    Record_Type[2];
      char    Reserved_1[2];
      char    Mod_Obj_Name_S[10];
      char    Mod_Lib_Name_S[10];
      char    Mod_Obj_Name_U[10];
      char    Mod_Lib_Name_U[10];
 } Qly_Module_Reference_Rec_t;

 /******************************************************************/
 /* Type Definition for the SrvPgm_Reference_Rec.                  */
 /******************************************************************/
 typedef _Packed struct Qly_SrvPgm_Reference_Rec {
      int     Record_Length;
      char    Record_Type[2];
      char    Reserved_1[2];
      char    Srv_Obj_Name_S[10];
      char    Srv_Lib_Name_S[10];
      char    Srv_Obj_Name_U[10];
      char    Srv_Lib_Name_U[10];
      char    Signature[16];
 } Qly_SrvPgm_Reference_Rec_t;

 /******************************************************************/
 /* Type Definition for the BndDir_Reference_Rec.                  */
 /******************************************************************/
 typedef _Packed struct Qly_BndDir_Reference_Rec {
      int     Record_Length;
      char    Record_Type[2];
      char    Reserved_1[2];
      char    Bnd_Obj_Name_S[10];
      char    Bnd_Lib_Name_S[10];
      char    Bnd_Obj_Name_U[10];
      char    Bnd_Lib_Name_U[10];
 } Qly_BndDir_Reference_Rec_t;

 /******************************************************************/
 /* Type Definition for the Record_Format_Reference_Rec.           */
 /******************************************************************/
 typedef _Packed struct Qly_Format_Reference_Rec{
      int     Record_Length;
      char    Record_Type[2];
      char    Reserved_1[2];
      char    File_Name_S[10];
      char    Lib_Name_S[10];
      char    Rec_Format_Name[10];
      char    Rec_Format_Lvl_Id[13];
      char    File_Name_U[10];
      char    Lib_Name_U[10];
      char    Reserved_2;
      int     Nesting_Lvl;
 } Qly_Format_Reference_Rec_t;

 /******************************************************************/
 /* Type Definition for the Field_Reference_Rec.                   */
 /******************************************************************/
 typedef _Packed struct Qly_Field_Reference_Rec{
      int     Record_Length;
      char    Record_Type[2];
      char    Reserved_1[2];
      char    File_Name_S[10];
      char    Lib_Name_S[10];
      char    Rec_Format_Name[10];
      char    Rec_Format_Lvl_Id[13];
      char    Field[10];
      char    Reserved_2[3];
      int     Field_Length;
      int     Decimal_Pos;
      char    Data_Type;
      char    FV_Length;
      char    File_Name_U[10];
      char    Lib_Name_U[10];
      char    Reserved_3[2];
 } Qly_Field_Reference_Rec_t;

 /******************************************************************/
 /* Type Definition for the Message_Reference_Rec.                 */
 /******************************************************************/
 typedef _Packed struct Qly_Message_Reference_Rec{
      int     Record_Length;
      char    Record_Type[2];
      char    Reserved_1[2];
      char    Msg_Id[7];
      char    File_Name_S[10];
      char    Lib_Name_S[10];
      char    File_Name_U[10];
      char    Lib_Name_U[10];
      char    Reserved_2;
      int     Nesting_Lvl;
 } Qly_Message_Reference_Rec_t;

 /******************************************************************/
 /* Type Definition for the External_Reference_Error_Rec.          */
 /******************************************************************/
 typedef _Packed struct Qly_Ext_Reference_Error_Rec{
      int     Record_Length;
      char    Record_Type[2];
      char    Reserved_1[2];
      char    Obj_Name_S[10];
      char    Lib_Name_S[10];
      char    Obj_Type[7];
      char    Obj_Name_U[10];
      char    Lib_Name_U[10];
      char    Reserved_2;
 } Qly_Ext_Reference_Error_Rec_t;

 /******************************************************************/
 /* Type Definition for the Object_Exists_Error_Rec.               */
 /******************************************************************/
 typedef _Packed struct Qly_Object_Exists_Error_Rec{
      int     Record_Length;
      char    Record_Type[2];
      char    Reserved_1[2];
      char    Obj_Name[10];
      char    Lib_Name[10];
      char    Obj_Type[7];
      char    Reserved_2;
 } Qly_Object_Exists_Error_Rec_t;

 /******************************************************************/
 /* Type Definition for the Start_New_Pgm_Rec.                     */
 /******************************************************************/
 typedef _Packed struct Qly_Start_New_Pgm_Rec {
      int     Record_Length;
      char    Record_Type[2];
      char    Reserved_1[2];
      char    New_Pgm_Name[10];
      char    Obj_Name[10];
      char    Lib_Name[10];
      char    Msg_Id[7];
      char    Reserved_2[3];
      char    Obj_Type[7];
      char    Reserved_3;
 } Qly_Start_New_Pgm_Rec_t;

#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(pop)       /* @B1A*/
#endif                       /* @B1A*/
#endif
