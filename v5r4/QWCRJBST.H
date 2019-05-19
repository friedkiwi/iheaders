 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QWCRJBST                                   */
 /*                                                                */
 /* Descriptive Name: Retrieve Job Status API                      */
 /*                                                                */
 /* 5763-SS1  (C) Copyright IBM Corp. 1996,1996                    */
 /* All rights reserved.                                           */
 /* US Government Users Restricted Rights -                        */
 /* Use, duplication or disclosure restricted                      */
 /* by GSA ADP Schedule Contract with IBM Corp.                    */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /*                                                                */
 /* Description: The Retrieve Job Status API returns status and    */
 /*              job identification information about the job that */
 /*              is identified by the job identifier parameter.    */
 /*                                                                */
 /* Header Files Included: None.                                   */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /*------------------------                                        */
 /* Structure List:  Qwc_Rjbst_Returned_Information                */
 /*                                                                */
 /* Function Prototype List: QWCRJBST                              */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= P3629806     4D10  961001 TDP:      New Include           */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

 #ifndef QWCRJBST_h
 #define QWCRJBST_h
#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(P128)      /* @B1A*/
#endif                       /* @B1A*/

 /******************************************************************/
 /*  Prototype for QWCRJBST API                                    */
 /******************************************************************/
 #ifdef  __ILEC400__
       #pragma linkage(QWCRJBST,OS,nowiden)
 #else
       extern "OS"
 #endif

 void QWCRJBST(void *,           /* Receiver variable              */
               int,              /* Length of receiver variable    */
               void *,           /* Job Identifier                 */
               char *,           /* Format of Job Identifier       */
               void *);          /* Error code                     */

 /******************************************************************/
 /* Type Definition for the Returned Information                   */
 /******************************************************************/
 typedef _Packed struct Qwc_Rjbst_Returned_Information
    {
       int  Bytes_Returned ;
       int  Bytes_Available ;
       char Job_Status[10];
       char Internal_Job_Identifier[16];
       char Qualified_Job_Name[26];
    } Qwc_Rjbst_Returned_Information_t;
#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(pop)       /* @B1A*/
#endif                       /* @B1A*/
 #endif
