 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QSPMOVSP                                   */
 /*                                                                */
 /* Descriptive Name: Move spooled file                            */
 /*                                                                */
 /* 5763-SS1, 5722-SS1(C) Copyright IBM Corp. 1994,2002            */
 /* All rights reserved.                                           */
 /* US Government Users Restricted Rights -                        */
 /* Use, duplication or disclosure restricted                      */
 /* by GSA ADP Schedule Contract with IBM Corp.                    */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /*                                                                */
 /* Description: The Move Spooled File API can:                    */
 /*              - Move a spooled file to the top of an output     */
 /*                queue.                                          */
 /*              - Move a spooled after another spooled file.      */
 /*                                                                */
 /* Header Files Included: H/QSPMOVSP                              */
 /*                                                                */
 /* Macros List: none.                                             */
 /*                                                                */
 /* Structure List: Qsp_MSPF0100_t                                 */
 /*                 Qsp_MSPF0200_t                                 */
 /*                                                                */
 /* Function Prototype List: QSPMOVSP                              */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= D2862000     3D10  940424 ROCH:     New Include           */
 /* $A1= D98212.4     5D10  991228 GCHANEY:  Compiler directive for*/
 /*                                          16 byte pointers.     */
 /* $A2= D97260       5D20  010105 ROCH:     Decouple Splf from Job*/
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/
#ifndef QSPMOVSP_h
#define QSPMOVSP_h
#if (__OS400_TGTVRM__>=510)
#pragma datamodel(P128)
#endif

  #ifdef __ILEC400__
       #pragma linkage (QSPMOVSP,OS,nowiden)
  #else
       extern "OS"
  #endif
/********************************************************************/
/*  Prototype for calling QSPMOVSP                                  */
/********************************************************************/

void QSPMOVSP(void *,               /* Function information          */
              int,                  /* Length of function information*/
              char *,               /* Function information format   */
              void *);              /* Error code                    */

/********************************************************************/
/*  Structure for MSPF0100 move a spooled file to the next position */
/*  on the output queue.                                            */
/********************************************************************/

typedef _Packed struct Qsp_MSPF0100 {
        char Source_Job_Name[10];
        char Source_Job_User_Name[10];
        char Source_Job_Number[6];
        char Source_Internal_Job_ID[16];
        char Source_Internal_Spool_File_ID[16];
        char Source_Spooled_File_Name[10];
        int  Source_Spooled_File_Number;
        char Target_Output_Queue_Name[10];
        char Target_Output_Queue_Library[10];
        char  Source_Job_System_Name[8];
        char  Source_Splf_Create_Date[7];
        char  Reserved[1];
        char  Source_Splf_Create_Time[6];
      } Qsp_MSPF0100_t;

/********************************************************************/
/*  Structure for MSPF0200 for a spooled file after another spooled */
/*  file.                                                           */
/********************************************************************/

typedef _Packed struct Qsp_MSPF0200 {
        char Source_Job_Name[10];
        char Source_Job_User_Name[10];
        char Source_Job_Number[6];
        char Source_Internal_Job_ID[16];
        char Source_Internal_Spool_File_ID[16];
        char Source_Spooled_File_Name[10];
        int  Source_Spooled_File_Number;
        char Target_Job_Name[10];
        char Target_Job_User_Name[10];
        char Target_Job_Number[6];
        char Target_Internal_Job_ID[16];
        char Target_Internal_Spool_File_ID[16];
        char Target_Spooled_File_Name[10];
        int  Target_Spooled_File_Number;
        char  Source_Job_System_Name[8];
        char  Source_Splf_Create_Date[7];
        char  Reserved[1];
        char  Source_Splf_Create_Time[6];
        char  Target_Job_System_Name[8];
        char  Target_Splf_Create_Date[7];
        char  Reserved2[1];
        char  Target_Splf_Create_Time[6];
      } Qsp_MSPF0200_t;

#if (__OS400_TGTVRM__>=510)
#pragma datamodel(pop)
#endif
#endif
