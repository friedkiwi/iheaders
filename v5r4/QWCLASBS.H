 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QWCLASBS                                   */
 /*                                                                */
 /* Descriptive Name: List Active Subsystems Job Queues API        */
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
 /* Description: The List Active Subsystems API retrieve a list of */
 /*              active subsystems.                                */
 /*                                                                */
 /* Header Files Included: None.                                   */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List:   Qwc_Lasbs_Input_t                            */
 /*                   Qwc_SBSL0100_t                               */
 /*                                                                */
 /* Function Prototype List: QWCLASBS                              */
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

 #ifndef QWCLASBS_h
 #define QWCLASBS_h
#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(P128)      /* @B1A*/
#endif                       /* @B1A*/

 /******************************************************************/
 /*  Prototype for QWCLASBS API                                    */
 /******************************************************************/
 #ifdef  __ILEC400__
       #pragma linkage(QWCLASBS,OS,nowiden)
 #else
       extern "OS"
 #endif
 void QWCLASBS(void *,           /* Qualified user space name      */
               char *,           /* List format                    */
               void *);          /* Error code                     */

 /******************************************************************/
 /* Type Definition for the SBSL0100 input parameter section.      */
 /******************************************************************/
typedef _Packed struct Qwc_Lasbs_Input
    {
       char User_Space_Name[10];
       char User_Space_Lib_Name[10];
       char Format_Name[8];
    } Qwc_Lasbs_Input_t;

 /******************************************************************/
 /* Type Definition for the SBSL0100 format.                       */
 /******************************************************************/
 typedef _Packed struct Qwc_SBSL0100
    {
       char Subsystem_Desc_Name[10];
       char Subsystem_Desc_Lib_Name[10];
    } Qwc_SBSL0100_t;

#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(pop)       /* @B1A*/
#endif                       /* @B1A*/
 #endif
