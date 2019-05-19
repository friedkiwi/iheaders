/*** START HEADER FILE SPECIFICATIONS ****************************/
/*                                                               */
/* Header File Name: H/QSPRWTRI                                  */
/*                                                               */
/* Descriptive Name: Retrieve Writer Information.                */
/*                                                               */
/* 5763-SS1, 5722-SS1(C) Copyright IBM Corp. 1994,2002           */
/* All rights reserved.                                          */
/* US Government Users Restricted Rights -                       */
/* Use, duplication or disclosure restricted                     */
/* by GSA ADP Schedule Contract with IBM Corp.                   */
/*                                                               */
/* Licensed Materials-Property of IBM                            */
/*                                                               */
/*                                                               */
/* Description: The Retrieve Writer Information API retrieves    */
/*              writer information associated with the specified */
/*              printer only when a writer is started to the     */
/*              printer.                                         */
/*                                                               */
/* Header Files Included: None.                                  */
/*                                                               */
/* Macros List: None.                                            */
/*                                                               */
/* Structure List: Qsp_WTRI0100_t                                */
/*                                                               */
/* Function Prototype List: QSPRWTRI                             */
/*                                                               */
/* Change Activity:                                              */
/*                                                               */
/* CFD List:                                                     */
/*                                                               */
/* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION   */
/* ---- ------------ ----- ------ --------- ---------------------*/
/* $A0= D2862000     3D10  940317 XZS2523:  New Include          */
/* $A1= D9171000     3D60  950116 RJOHNSON: Added field          */
/*                                          Initialize_Printer   */
/*                                          to WTRI0100 format.  */
/* $A2= D98212.4     5D10  991228 GCHANEY: Compiler directive for*/
/*                                         16 byte pointers.     */
/* $A3= D97976       5D10  000201 RJOHNSON: Add support for      */
/*                                          find by writer name  */
/*                                          and remote writers.  */
/* $A2= D97260       5D20  010105 ROCH:     Decouple Splf from   */
/*                                          job.                 */
/*                                                               */
/* End CFD List.                                                 */
/*                                                               */
/*  Additional notes about the Change Activity                   */
/* End Change Activity.                                          */
/*** END HEADER FILE SPECIFICATIONS ******************************/

 #ifndef QSPRWTRI_h
 #define QSPRWTRI_h
#if (__OS400_TGTVRM__>=510)
#pragma datamodel(P128)
#endif

  #ifdef __ILEC400__
       #pragma linkage (QSPRWTRI,OS,nowiden)
  #else
       extern "OS"
  #endif
 /****************************************************************/
 /* Prototype for call Retrieve Writer Information API           */
 /*  QSPRWTRI                                                    */
 /****************************************************************/
 void QSPRWTRI (void *,          /* Receiver variable            */
                int,             /* Receiver variable length     */
                char *,          /* Format name                  */
                char *,          /* Printer name                 */
                void *,          /* Error code                   */
                ...);            /* Optional Parameter
                                      Writer name                */

/*****************************************************************/
/* Structure for WTRI0100 format                                 */
/*****************************************************************/
typedef _Packed struct Qsp_WTRI0100
{
     int  Bytes_Returned;
     int  Bytes_Avail;
     char User_Started[10];
     char Status[1];
     char Msg_Wait_Stat[1];
     char Held_Stat[1];
     char End_Pending_Stat[1];
     char Hold_Pending_Stat[1];
     char Between_Files_Stat[1];
     char Between_Copies_Stat[1];
     char Data_Wait_Stat[1];
     char Device_Wait_Stat[1];
     char On_JobQ_Stat[1];
     char Writer_Type;
     char Reserved1[3];
     char Wtr_Job_Name[10];
     char Wtr_Job_User_Name[10];
     char Wtr_Job_Number[6];
     char Prt_Device_Type[10];
     int  Number_Separators;
     int  Drawer_Separators;
     char Align_Forms[10];
     char OutQ_Name[10];
     char OutQ_Lib_Name[10];
     char OutQ_Stat[1];
     char Reserved2[1];
     char Form_Type[10];
     char Msg_Option[10];
     char Auto_End_Wtr[10];
     char Allow_Direct_Prt[10];
     char MsgQ_Name[10];
     char MsgQ_Lib_Name[10];
     char Reserved3[2];
     char Chg_Takes_Affect[10];
     char Next_OutQ_Name[10];
     char Next_OutQ_Lib_Name[10];
     char Next_Form_Type[10];
     char Next_Msg_Option[10];
     int  Next_File_Separators;
     int  Next_Separator_Drawer;
     char Splf_Name[10];
     char Job_Name[10];
     char User_Name[10];
     char Job_Number[6];
     int  Splf_Number;
     int  Page_Being_Written;
     int  Total_Pages;
     int  Copies_Left;
     int  Total_Copies;
     char Msg_Key[4];
     char Initialize_Printer;
     char Printer_Device_Name[10];
     char  Job_System_Name[8];
     char  Splf_Create_Date[7];
     char  Splf_Create_Time[6];
} Qsp_WTRI0100_t;
#if (__OS400_TGTVRM__>=510)
#pragma datamodel(pop)
#endif
 #endif

