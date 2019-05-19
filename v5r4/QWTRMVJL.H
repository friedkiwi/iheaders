/* begin_generated_IBM_copyright_prolog                              */
/* This is an automatically generated copyright prolog.              */
/* After initializing,  DO NOT MODIFY OR MOVE                        */
/* ----------------------------------------------------------------- */
/*                                                                   */
/* Product(s):                                                       */
/*     5722-SS1                                                      */
/*                                                                   */
/* (C)Copyright IBM Corp.  2005, 2005                                */
/*                                                                   */
/* All rights reserved.                                              */
/* US Government Users Restricted Rights -                           */
/* Use, duplication or disclosure restricted                         */
/* by GSA ADP Schedule Contract with IBM Corp.                       */
/*                                                                   */
/* Licensed Materials-Property of IBM                                */
/*                                                                   */
/*  ---------------------------------------------------------------  */
/*                                                                   */
/* end_generated_IBM_copyright_prolog                                */
 /*** START HEADER FILE SPECIFICATIONS *****************************/
 /*                                                                */
 /* Header File Name: H/QWTRMVJL                                   */
 /*                                                                */
 /* Descriptive Name: Remove pending job log API                   */
 /*                                                                */
 /* Description: The Remove Pending Job Log API will remove one    */
 /*              or more completed jobs from a JOBLOG PENDING      */
 /*              status.  Job messages are removed.                */
 /*              The job log can no longer be written after        */
 /*              this API completes.                               */
 /*                                                                */
 /* Header Files Included: None.                                   */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: Qwt_RJLS0100_t                                 */
 /*                                                                */
 /* Function Prototype List: QWTRMVJL                              */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON   LEVEL DATE   PGMR      CHANGE DESCRIPTION        */
 /* ---- -------- ----- ------ --------- --------------------------*/
 /* $A0=D9983601  v5r4m0 040606 ROCHESTER: New Include             */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

 #ifndef QWTRMVJL_h
 #define QWTRMVJL_h
#if (__OS400_TGTVRM__>=510)
#pragma datamodel(P128)
#endif

 /******************************************************************/
 /*  Prototype for QWTRMVJL API                                    */
 /******************************************************************/
 #ifdef  __ILEC400__
       #pragma linkage(QWTRMVJL,OS,nowiden)
 #else
       extern "OS"
 #endif
 void QWTRMVJL(void *,           /* Job selection information      */
              char *,            /* Job selection format name      */
              void *);           /* Error code                     */

 /******************************************************************/
 /* Type Definition for the RJLS0100 format                        */
 /******************************************************************/

 typedef _Packed struct  Qwt_RJLS0100
    {
       int  Length_Job_Selection_Info;
       int  Days_Completed;
       char Job_Name[10];
       char User_Name[10];
       char Job_Number[6];
       char Log_Output[10];
    } Qwt_RJLS0100_t;

#if (__OS400_TGTVRM__>=510)
#pragma datamodel(pop)
#endif
 #endif
