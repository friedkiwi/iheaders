/*** START HEADER FILE SPECIFICATIONS ********************************/
/*                                                                   */
/* Header File Name: H/QFVLSTNL                                      */
/*                                                                   */
/* Descriptive Name: List Node List Entries.                         */
/*                                                                   */
/* 5763-SS1,5722-SS1  (C) Copyright IBM Corp. 1994,2001              */
/* All rights reserved.                                              */
/* US Government Users Restricted Rights -                           */
/* Use, duplication or disclosure restricted                         */
/* by GSA ADP Schedule Contract with IBM Corp.                       */
/*                                                                   */
/* Licensed Materials-Property of IBM                                */
/*                                                                   */
/*                                                                   */
/* Description: The List Node List Entries API returns, in a user    */
/*              space, a list of the nodes contained in the          */
/*              specified node list object.                          */
/*                                                                   */
/* Header Files Included: None.                                      */
/*                                                                   */
/* Macros List: None.                                                */
/*                                                                   */
/* Structure List: Qfv_Lstnl_Input_t                                 */
/*                 Qfv_Lstnl_Header_t                                */
/*                 Qfv_NODL0100_t                                    */
/*                                                                   */
/* Function Prototype List: QFVLSTNL.                                */
/*                                                                   */
/* Change Activity:                                                  */
/*                                                                   */
/* CFD List:                                                         */
/*                                                                   */
/* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION       */
/* ---- ------------ ----- ------ --------- ------------------------ */
/* $A0= D2862000     3D10  940327 ROCH:     New Include              */
/* $A1= D98212.2    v5r1m0 010300 gchaney  : Teraspace stage 2       */
/*                                                                   */
/* End CFD List.                                                     */
/*                                                                   */
/*  Additional notes about the Change Activity                       */
/* End Change Activity.                                              */
/*** END HEADER FILE SPECIFICATIONS **********************************/

#ifndef QFVLSTNL_h
 #define QFVLSTNL_h

 #if (__OS400_TGTVRM__>=510)                                  /* @A1A*/
     #pragma datamodel(P128)                                  /* @A1A*/
 #endif                                                       /* @A1A*/

 /********************************************************************/
 /*  Prototype for QFVLSTNL API                                      */
 /********************************************************************/
 #ifdef __ILEC400__
    #pragma linkage (QFVLSTNL,OS,nowiden)
 #else
    extern "OS"
 #endif
 void QFVLSTNL (void *,           /* Qualified User Space Name       */
                char *,           /* Format Name                     */
                void *,           /* Qualified Node List Name        */
                void *);          /* Error Code                      */


 /*********************************************************************/
 /* Type Definition for the Input Parameter Section format.           */
 /*********************************************************************/
 typedef _Packed struct Qfv_Lstnl_Input {
                char  User_Space_Name_S[10];
                char  User_Space_Lib_S[10];
                char  Format_Name_S[8];
                char  Node_List_Obj_Name_S[10];
                char  Node_List_Obj_Lib_S[10];
 } Qfv_Lstnl_Input_t;

 /*********************************************************************/
 /* Type Definition for the Header Section format.                    */
 /*********************************************************************/
 typedef _Packed struct Qfv_Lstnl_Header {
                char  User_Space_Name_U[10];
                char  User_Space_Lib_U[10];
                char  Node_List_Obj_Name_U[10];
                char  Node_List_Obj_Lib_U[10];
 } Qfv_Lstnl_Header_t;

 /*********************************************************************/
 /* Type Definition for the Qfv_NODL0100 List Data Section Format.    */
 /*********************************************************************/
 typedef _Packed struct Qfv_NODL0100 {
                char  Node_Type;
                char  SNA_Node_Name[20];
                char  Text_Description[50];
                char  Reserved;
                int   Text_Desc_CCSID;
                char  Node_Name[256];
                char  Reserved2;
 } Qfv_NODL0100_t;

 #if (__OS400_TGTVRM__>=510)                                  /* @A1A*/
     #pragma datamodel(pop)                                   /* @A1A*/
 #endif                                                       /* @A1A*/

#endif
