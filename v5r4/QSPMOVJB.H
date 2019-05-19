 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QSPMOVJB                                   */
 /*                                                                */
 /* Descriptive Name: Move job API                                 */
 /*                                                                */
 /* 5763-SS1, 5722-SS1(C) Copyright IBM Corp. 1994,2001            */
 /* All rights reserved.                                           */
 /* US Government Users Restricted Rights -                        */
 /* Use, duplication or disclosure restricted                      */
 /* by GSA ADP Schedule Contract with IBM Corp.                    */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /*                                                                */
 /* Description: The Move Job API performs one of the two          */
 /*              functions.  They are to:                          */
 /*              - Move one job at a time to the top of a job queue*/
 /*              - Move a job after another job                    */
 /*                                                                */
 /* Header Files Included: None.                                   */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: Qsp_MJOB0100_t                                 */
 /*                 Qsp_MJOB0200_t                                 */
 /*                                                                */
 /* Function Prototype List: QSPMOVJB                              */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= D2862000     3D10  940118 MOREY:    New Include           */
 /* $A1= D98212.4     5D10  991228 GCHANEY:  Compiler directive for*/
 /*                                          16 byte pointers.     */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

#ifndef QSPMOVJB_h
#define QSPMOVJB_h
#if (__OS400_TGTVRM__>=510)
#pragma datamodel(P128)
#endif

  #ifdef __ILEC400__
       #pragma linkage (QSPMOVJB,OS,nowiden)
  #else
       extern "OS"
  #endif

/**********************************************************************/
/*  Prototype for calling QSPMOVJB                                    */
/**********************************************************************/

void QSPMOVJB(void *,               /* Function information           */
              int,                  /* Length of function information */
              char *,               /* Function information format    */
              void *);              /* Error code                     */

/**********************************************************************/
/*  Structure for MJOB0100 move a job to the next position on queue   */
/**********************************************************************/


typedef _Packed struct Qsp_MJOB0100 {
       char Source_Job_Name[10];
       char Source_Job_User_Name[10];
       char Source_Job_Number[6];
       char Source_Internal_Job_ID[16];
       char Target_Job_Queue_Name[10];
       char Target_Job_Queue_Library[10];
     } Qsp_MJOB0100_t;

/**********************************************************************/
/*  Structure for MJOB0200 for job after another job                  */
/**********************************************************************/


typedef _Packed struct Qsp_MJOB0200 {
        char Source_Job_Name[10];
        char Source_Job_User_Name[10];
        char Source_Job_Number[6];
        char Source_Internal_Job_ID[16];
        char Target_Job_Name[10];
        char Target_Job_User_Name[10];
        char Target_Job_Number[6];
        char Target_Internal_Job_ID[16];
      } Qsp_MJOB0200_t;


#if (__OS400_TGTVRM__>=510)
#pragma datamodel(pop)
#endif
#endif
