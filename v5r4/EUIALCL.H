 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/EUIALCL                                    */
 /*                                                                */
 /* Descriptive Name: Action List Option/Pull-Down Field Choice    */
 /*                   Exit Program                                 */
 /*                                                                */
 /* 5763-SS1,5722-SS1  (C) Copyright IBM Corp. 1994,2001           */
 /* All rights reserved.                                           */
 /* US Government Users Restricted Rights -                        */
 /* Use, duplication or disclosure restricted                      */
 /* by GSA ADP Schedule Contract with IBM Corp.                    */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /* Description: Include header file for the UIM call parms for    */
 /*              a CALL program for a action list option or a      */
 /*              pull-down field choice                            */
 /*                                                                */
 /* Header Files Included: None.                                   */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: Qui_ALC_t                                      */
 /*                                                                */
 /* Function Prototype List: None.                                 */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= D2862000     3D10  940412 ROCH:     New Include           */
 /* $A1=D98212.1    v5r1m0  001006 ROCH: Teraspace stage 2	   */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

 #ifndef EUIALCL_h
 #define EUIALCL_h

 #if (__OS400_TGTVRM__>=510)                                 /*@A1A*/
   #pragma datamodel(P128)                                   /*@A1A*/
 #endif                                                      /*@A1A*/

 /******************************************************************/
 /* Parm structure for a UIM CALL program for a action list option */
 /* ot pull-down field choice                                      */
 /******************************************************************/
 typedef _Packed struct Qui_ALC
    {
       int  StrucLevel;
       char Reserv1[8];
       int  CallType;
       char ApplHandle[8];
       char PanelName[10];
       char ListName[10];
       char ListEntry[4];
       int  ListOption;
       int  FuncQualifier;
       char FieldName[10];
    } Qui_ALC_t;

 #if (__OS400_TGTVRM__>=510)                                /*@A1A*/
   #pragma datamodel(pop)                                   /*@A1A*/
 #endif                                                     /*@A1A*/

 #endif
