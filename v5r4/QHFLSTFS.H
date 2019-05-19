 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QHFLSTFS                                   */
 /*                                                                */
 /* Descriptive Name: List Registered FIle Systems API             */
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
 /* Description: The List Registered File Systems API returns      */
 /*              information similar to the Display Hierarchical   */
 /*              File Systems command.                             */
 /*                                                                */
 /* Header Files Included: H/QUSGEN                                */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List:          Qhf_HFSL0100_Input_Parm_t             */
 /*                          Qhf_HFSL0100_t                        */
 /*                                                                */
 /* Function Prototype List: QHFLSTFS                              */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= D2862000     3D10  940410 DETTMAN:  New Include           */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

 #ifndef QHFLSTFS_h
 #define QHFLSTFS_h

 /******************************************************************/
 /* Includes for structures used by API                            */
 /******************************************************************/
 #include <qusgen.h>
#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(P128)      /* @B1A*/
#endif                       /* @B1A*/

 /******************************************************************/
 /*  Prototype for QHFLSTFS API                                    */
 /******************************************************************/
 #ifdef  __ILEC400__
       #pragma linkage(QHFLSTFS,OS,nowiden)
 #else
       extern "OS"
 #endif
 void QHFLSTFS(void *,           /* Qualified user space name      */
               char *,           /* Format name                    */
               void *);          /* Error code                     */

 /******************************************************************/
 /* Type Definition for the HFSL0100 input parameter section.      */
 /******************************************************************/
 typedef _Packed struct Qhf_HFSL0100_Input_Parm
    {
       char User_Space_Name[10];
       char User_Space_Lib_Name[10];
       char Format_Name[8];
    } Qhf_HFSL0100_Input_Parm_t;

 /******************************************************************/
 /* Type Definition for the HFSL0100 format.                       */
 /******************************************************************/
 typedef _Packed struct Qhf_HFSL0100
    {
       char File_System_Name[10];
       char Version[6];
       char Text_Description[50];
    } Qhf_HFSL0100_t;

#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(pop)       /* @B1A*/
#endif                       /* @B1A*/
 #endif
