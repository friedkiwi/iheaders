 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/ESPDQRCD                                   */
 /*                                                                */
 /* Descriptive Name: Spool data queue entries                     */
 /*                                                                */
 /* 5722-SS1  (C) Copyright IBM Corp. 2002                         */
 /* All rights reserved.                                           */
 /* US Government Users Restricted Rights -                        */
 /* Use, duplication or disclosure restricted                      */
 /* by GSA ADP Schedule Contract with IBM Corp.                    */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /*                                                                */
 /* Description: Describes the format of the entries placed on a   */
 /*              data queue when a spooled file is placed on an    */
 /*              output queue.                                     */
 /*                                                                */
 /* Header Files Included: None.                                   */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: Qsp_DTAQ_01_E_t                                */
 /*                 Qsp_DTAQ_02_E_t                                */
 /*                                                                */
 /* Function Prototype List: None.                                 */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= D9822500     5D10  991210 RJOHNSON: New Include           */
 /* $A2= D97260       5D20  010105 ROCH:     Decouple Splf from Job*/
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

#ifndef ESPDQRCD_h
#define ESPDQRCD_h
#if (__OS400_TGTVRM__>=510)
#pragma datamodel(P128)
#endif

/*******************************************************************/
/*  Format of entry placed on a data queue specified on the output */
/*  queue the spooled was placed on.                               */
/*******************************************************************/
typedef _Packed struct Qsp_DTAQ_01_E
{
     char Function[10];
     char Record_Type[2];
     char Qual_Job_Name[26];
     char Splf_Name[10];
     int  Splf_Number;
     char Output_Queue_Name[10];
     char Output_Queue_Lib[10];
       char  Job_System_Name[8];
       char  Splf_Create_Date[7];
       char  Reserved2[1];
       char  Splf_Create_Time[6];
       char  Reserved[34];
} Qsp_DTAQ_01_E_t;

/*******************************************************************/
/*  Format of entry placed on a data queue specified in the        */
/*  environment variable QIBM_NOTIFY_CRTSPLF.                      */
/*******************************************************************/
typedef _Packed struct Qsp_DTAQ_02_E
{
     char Function[10];
     char Record_Type[2];
     char Qual_Job_Name[26];
     char Splf_Name[10];
     int  Splf_Number;
     char Output_Queue_Name[10];
     char Output_Queue_Lib[10];
     char Creating_Qual_Job[26];
     char User_Data[10];
     int  Auxiliary_Storage_Pool;
     char Thread_Id[8];
     char System_Name[10];
     char Creation_Date[7];
     char Creation_Time[6];
     char Reserved[1];
} Qsp_DTAQ_02_E_t;

#if (__OS400_TGTVRM__>=510)
#pragma datamodel(pop)
#endif

#endif
