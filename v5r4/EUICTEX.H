 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/EUICTEX                                    */
 /*                                                                */
 /* Descriptive Name: Conditioning Tag Exit Program                */
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
 /*              an EXIT program for a condition tag		   */
 /*                                                                */
 /* Header Files Included: None.                                   */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: Qui_CTX_t                                      */
 /*                                                                */
 /* Function Prototype List: None.                                 */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= P9942426     5D20  010202 ROCH:     New Include           */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

 #ifndef EUICTEX_h
 #define EUICTEX_h

 #if (__OS400_TGTVRM__>=510)
   #pragma datamodel(P128)
 #endif

 /******************************************************************/
 /* Parm structure for a UIM EXIT program for condition tag        */
 /* checking                                                       */
 /******************************************************************/
 typedef _Packed struct Qui_CTX
    {
       int  StrucLevel;
       char Reserv1[8];
       int  CallType;
       char ApplHandle[8];
       char ObjectName[10];
       char LibraryName[10];
       char ObjectType[10];
       char ModuleName[32];
       char PanelName[10];
       char CondName[10];
       char ReturnCode[1];
    } Qui_CTX_t;

 #if (__OS400_TGTVRM__>=510)
   #pragma datamodel(pop)
 #endif

 #endif
