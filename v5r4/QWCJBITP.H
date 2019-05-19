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
 /*** START HEADER FILE SPECIFICATIONS *******************************/
 /*                                                                  */
 /* Header File Name: H/QWCJBITP                                     */
 /*                                                                  */
 /* Descriptive Name: Call Job Interrupt Program API.                */
 /*                                                                  */
 /* 5722-SS1 (C) Copyright IBM Corp. 2005, 2005                      */
 /* All rights reserved.                                             */
 /* US Government Users Restricted Rights -                          */
 /* Use, duplication or disclosure restricted                        */
 /* by GSA ADP Schedule Contract with IBM Corp.                      */
 /*                                                                  */
 /* Licensed Materials-Property of IBM                               */
 /*                                                                  */
 /* Description: The Call Job Interrupt Program (QWCJBITP) API will  */
 /* call a program to run in the initial thread of a specified job.  */
 /*                                                                  */
 /* Header Files Included:   None.                                   */
 /*                                                                  */
 /* Macros List:             None.                                   */
 /*                                                                  */
 /* Structure List:          QWC_JITP0100_t                          */
 /*                                                                  */
 /* Function Prototype List: QWCJBITP                                */
 /*                                                                  */
 /* Change Activity:                                                 */
 /*                                                                  */
 /* CFD List:                                                        */
 /*                                                                  */
 /* FLAG REASON       LEVEL  DATE   PGMR  CHANGE DESCRIPTION         */
 /* ---- ------------ -----  ------ ----- ---------------------------*/
 /* $A0= D99802       V5R4M0 040905 ROCH: New Include                */
 /*                                                                  */
 /* End CFD List.                                                    */
 /*                                                                  */
 /* Additional notes about the Change Activity                       */
 /* End Change Activity.                                             */
 /*** END HEADER FILE SPECIFICATIONS *********************************/

 #ifndef QWCJBITP_h
 #define QWCJBITP_h

 /********************************************************************/
 /* Type Definition for the JITP0100 format for the input variable.  */
 /********************************************************************/
 typedef _Packed struct QWC_JITP0100
 {
     char Program_Name[10];
     char Program_Library[10];
     char Target_Job_Name[10];
     char Target_Job_User[10];
     char Target_Job_Number[6];
     char Reserved_1[2];
     int  Program_Data_Offset;
     int  Program_Data_Length;
     /*char Program_Data[];*/      /* Varying length                 */
 } QWC_JITP0100_t;

 /********************************************************************/
 /*  Prototype for QWCJBITP API                                      */
 /********************************************************************/
 #ifdef  __ILEC400__
       #pragma linkage(QWCJBITP,OS,nowiden)
 #else
       extern "OS"
 #endif

 void QWCJBITP(void *,             /* Input variable                 */
               char *,             /* Input variable format          */
               void *);            /* Error Code                     */

 /********************************************************************/
 /* End include                                                      */
 /********************************************************************/
 #endif
