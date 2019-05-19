 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QSPRJOBQ                                   */
 /*                                                                */
 /* Descriptive Name: Retrieve Job Queue Information API           */
 /*                                                                */
 /* 5763-SS1,5722-SS1 (C) Copyright IBM Corp. 1994,2001            */
 /* All rights reserved.                                           */
 /* US Government Users Restricted Rights -                        */
 /* Use, duplication or disclosure restricted                      */
 /* by GSA ADP Schedule Contract with IBM Corp.                    */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /*                                                                */
 /* Description: The Retrieve Job Queue Information API retrieves  */
 /*              information associated with a specific job queue. */
 /*                                                                */
 /* Header Files Included: None.                                   */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List:  Qsp_JOBQ0100_t                                */
 /*                  Qsp_JOBQ0200_t                                */
 /*                                                                */
 /* Function Prototype List: QSPRJOBQ                              */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= D2862000     3D10  940424 DETTMAN:  New Include           */
 /* $A1= D97895       5D10  990525 AAM:      Add JOBQ0200 format.  */
 /* $A3= D98212.4     5D10  991228 GCHANEY:  Compiler directive for*/
 /*                                          16 byte pointers.     */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

 #ifndef QSPRJOBQ_h
 #define QSPRJOBQ_h
#if (__OS400_TGTVRM__>=510)
#pragma datamodel(P128)
#endif

 /******************************************************************/
 /*  Prototype for QSPRJOBQ API                                    */
 /******************************************************************/
 #ifdef  __ILEC400__
       #pragma linkage(QSPRJOBQ,OS,nowiden)
 #else
       extern "OS"
 #endif
 void QSPRJOBQ(void *,           /* Receiver variable             */
               int,              /* Length of receiver variable    */
               char *,           /* Format name                    */
               void *,           /* Job queue name                 */
               void *);          /* Error code                     */

 /******************************************************************/
 /* Type Definition for the JOBQ0100 format.                       */
 /******************************************************************/
 typedef _Packed struct Qsp_JOBQ0100
    {
       int  Bytes_Returned;
       int  Bytes_Available;
       char Job_Queue_Name[10];
       char Job_Queue_Lib_Name[10];
       char Operator_Controlled[10];
       char Authority_Check[10];
       int  Number_Jobs;
       char Job_Queue_Status[10];
       char Subsystem_Name[10];
       char Text_Description[50];
       char Subsystem_Lib_Name[10];
       int  Sequence_Number;
       int  Maximum_Active;
       int  Current_Active;
    } Qsp_JOBQ0100_t;

 typedef _Packed struct Qsp_JOBQ0200
    {
       int  Bytes_Returned;
       int  Bytes_Available;
       char Job_Queue_Name[10];
       char Job_Queue_Lib_Name[10];
       char Operator_Controlled[10];
       char Authority_Check[10];
       int  Number_Jobs;
       char Job_Queue_Status[10];
       char Subsystem_Name[10];
       char Subsystem_Lib_Name[10];
       char Text_Description[50];
       int  Sequence_Number;
       int  Maximum_Active;
       int  Current_Active;
       int  Max_Active_Priority1;
       int  Max_Active_Priority2;
       int  Max_Active_Priority3;
       int  Max_Active_Priority4;
       int  Max_Active_Priority5;
       int  Max_Active_Priority6;
       int  Max_Active_Priority7;
       int  Max_Active_Priority8;
       int  Max_Active_Priority9;
       int  Active_Jobs_Priority0;
       int  Active_Jobs_Priority1;
       int  Active_Jobs_Priority2;
       int  Active_Jobs_Priority3;
       int  Active_Jobs_Priority4;
       int  Active_Jobs_Priority5;
       int  Active_Jobs_Priority6;
       int  Active_Jobs_Priority7;
       int  Active_Jobs_Priority8;
       int  Active_Jobs_Priority9;
       int  RLS_Jobs_on_Queue_Priority0;
       int  RLS_Jobs_on_Queue_Priority1;
       int  RLS_Jobs_on_Queue_Priority2;
       int  RLS_Jobs_on_Queue_Priority3;
       int  RLS_Jobs_on_Queue_Priority4;
       int  RLS_Jobs_on_Queue_Priority5;
       int  RLS_Jobs_on_Queue_Priority6;
       int  RLS_Jobs_on_Queue_Priority7;
       int  RLS_Jobs_on_Queue_Priority8;
       int  RLS_Jobs_on_Queue_Priority9;
       int  SCH_Jobs_on_Queue_Priority0;
       int  SCH_Jobs_on_Queue_Priority1;
       int  SCH_Jobs_on_Queue_Priority2;
       int  SCH_Jobs_on_Queue_Priority3;
       int  SCH_Jobs_on_Queue_Priority4;
       int  SCH_Jobs_on_Queue_Priority5;
       int  SCH_Jobs_on_Queue_Priority6;
       int  SCH_Jobs_on_Queue_Priority7;
       int  SCH_Jobs_on_Queue_Priority8;
       int  SCH_Jobs_on_Queue_Priority9;
       int  HLD_Jobs_on_Queue_Priority0;
       int  HLD_Jobs_on_Queue_Priority1;
       int  HLD_Jobs_on_Queue_Priority2;
       int  HLD_Jobs_on_Queue_Priority3;
       int  HLD_Jobs_on_Queue_Priority4;
       int  HLD_Jobs_on_Queue_Priority5;
       int  HLD_Jobs_on_Queue_Priority6;
       int  HLD_Jobs_on_Queue_Priority7;
       int  HLD_Jobs_on_Queue_Priority8;
       int  HLD_Jobs_on_Queue_Priority9;
    } Qsp_JOBQ0200_t;
#if (__OS400_TGTVRM__>=510)
#pragma datamodel(pop)
#endif
 #endif
