 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/EUITAEX                                    */
 /*                                                                */
 /* Descriptive Name: Text Area Data Exit Program                  */
 /*                                                                */
 /* 5763-SS1,5722-SS1  (C) Copyright IBM Corp. 1994,2001           */
 /* All rights reserved.                                           */
 /* US Government Users Restricted Rights -                        */
 /* Use, duplication or disclosure restricted                      */
 /* by GSA ADP Schedule Contract with IBM Corp.                    */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /*                                                                */
 /* Description: Include header file for the UIM call parms for    */
 /*              an EXIT program for text area processing          */
 /*                                                                */
 /* Header Files Included: None.                                   */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: Qui_TAX_t                                      */
 /*                                                                */
 /* Function Prototype List: None.                                 */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= D2862000     3D10  940411 ROCH:     New Include           */
 /* $A1=D98212.1    v5r1m0  001006 ROCH: Teraspace stage 2	   */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

 #ifndef EUITAEX_h
 #define EUITAEX_h

 #if (__OS400_TGTVRM__>=510)                                 /*@A1A*/
   #pragma datamodel(P128)                                   /*@A1A*/
 #endif                                                      /*@A1A*/

 /******************************************************************/
 /* Parm structure for a UIM EXIT program for a text area          */
 /******************************************************************/
 typedef _Packed struct Qui_TAX
    {
       int  StrucLevel;
       char Reserv1[8];
       int  CallType;
       char ApplHandle[8];
       char PanelName[10];
       int  FuncKey;
       int  FuncKeyQ;
       int  Width;
       int  Depth;
       char Bidi[1];
       int  CodePage;
    } Qui_TAX_t;

 #if (__OS400_TGTVRM__>=510)                                /*@A1A*/
   #pragma datamodel(pop)                                   /*@A1A*/
 #endif                                                     /*@A1A*/

 #endif
