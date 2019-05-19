 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QWDLSJBQ                                   */
 /*                                                                */
 /* Descriptive Name: List Subsystem Job Queues API                */
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
 /* Description: The List Subsystem Job Queues API lists the job   */
 /*              queues for a subsystem.                           */
 /*                                                                */
 /* Header Files Included: None.                                   */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List:   Qwd_Lsjbq_Input_t                            */
 /*                   Qwd_Lsjbq_Header_t                           */
 /*                   Qwd_SJQL0100_t                               */
 /*                                                                */
 /* Function Prototype List: QWDLSJBQ                              */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= D2862000     3D10  940424 DETTMAN:  New Include           */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

 #ifndef QWDLSJBQ_h
 #define QWDLSJBQ_h
#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(P128)      /* @B1A*/
#endif                       /* @B1A*/

 /******************************************************************/
 /*  Prototype for QWDLSJBQ API                                    */
 /******************************************************************/
 #ifdef  __ILEC400__
       #pragma linkage(QWDLSJBQ,OS,nowiden)
 #else
       extern "OS"
 #endif
 void QWDLSJBQ(void *,           /* Qualified user space name      */
               char *,           /* List format                    */
               void *,           /* Subsystem and library name     */
               void *);          /* Error code                     */

 /******************************************************************/
 /* Type Definition for the SJQL0100 input parameter section.      */
 /******************************************************************/
typedef _Packed struct Qwd_Lsjbq_Input
    {
       char User_Space_Name[10];
       char User_Space_Lib_Name[10];
       char Format_Name[8];
       char Subsystem_Name[10];
       char Subsystem_Lib_Name[10];
    } Qwd_Lsjbq_Input_t;

 /******************************************************************/
 /* Type Definition for the SJQL0100 header section.               */
 /******************************************************************/
 typedef _Packed struct Qwd_Lsjbq_Header
    {
       char Subsystem_Name[10];
       char Subsystem_Lib_Name[10];
    } Qwd_Lsjbq_Header_t;

 /******************************************************************/
 /* Type Definition for the SJQL0100 format.                       */
 /******************************************************************/
 typedef _Packed struct Qwd_SJQL0100
    {
       char Job_Queue_Name[10];
       char Job_Queue_Lib_Name[10];
       int  Sequence_Number;
       char Allocation_Indicator[10];
       char Reserved[2];
       int  Maximum_Active;
       int  Maximum_Priority_1;
       int  Maximum_Priority_2;
       int  Maximum_Priority_3;
       int  Maximum_Priority_4;
       int  Maximum_Priority_5;
       int  Maximum_Priority_6;
       int  Maximum_Priority_7;
       int  Maximum_Priority_8;
       int  Maximum_Priority_9;
    } Qwd_SJQL0100_t;

#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(pop)       /* @B1A*/
#endif                       /* @B1A*/
#endif
