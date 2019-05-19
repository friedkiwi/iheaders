/*** START HEADER FILE SPECIFICATIONS ********************************/
/*                                                                   */
/* Header File Name       :  H/EZHQEP                                */
/*                                                                   */
/* Descriptive Name       :  Data Queue Server                       */
/*                           Exit Program Structure                  */
/*                                                                   */
/* 5716-SS1,5722-SS1  (C) Copyright IBM Corp. 1995,2001              */
/* All rights reserved.                                              */
/* US Government Users Restricted Rights -                           */
/* Use, duplication or disclosure restricted                         */
/* by GSA ADP Schedule Contract with IBM Corp.                       */
/*                                                                   */
/* Licensed Materials-Property of IBM                                */
/*                                                                   */
/* Description: This include defines the parameter structures for    */
/*              the exit point defined for the Data Queue server.    */
/*                                                                   */
/*              QIBM_QZHQ_DATA_QUEUE format ZHQ00100                 */
/*                                                                   */
/*                                                                   */
/* Header Files Included: None.                                      */
/*                                                                   */
/* Macros List: None.                                                */
/*                                                                   */
/* Structure List: Qzhq_DataQueue_Format_t                           */
/*                                                                   */
/* Function Prototype List: None.                                    */
/*                                                                   */
/* Change Activity:                                                  */
/*                                                                   */
/* CFD List:                                                         */
/*                                                                   */
/* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION       */
/* ---- ------------ ----- ------ --------- ----------------------   */
/* $A0= P3978167     3D60  950203 ROCHESTER:New Include              */
/* $A1= P9934931     5D10  001105 ROCHESTER:Teraspace stage 2        */
/*                                                                   */
/* End CFD List.                                                     */
/*                                                                   */
/*  Additional notes about the Change Activity                       */
/* End Change Activity.                                              */
/*** END HEADER FILE SPECIFICATIONS **********************************/

#ifndef EZHQEP_h
 #define EZHQEP_h

 #if (__OS400_TGTVRM__>=510)                                  /*@A1A*/
     #pragma datamodel(P128)                                  /*@A1A*/
 #endif                                                       /*@A1A*/

  /* Server ID  constant */
 #define QZHQ_DATAQ_SERVER_ID   "*DATAQSRV "

  /* Format name constants */
 #define QZHQ_DATAQ_SERVER_FORMAT  "ZHQ00100"

  /* Function Id constants */
 #define QZHQ_QRYDATAQATTR    0x0001 /* Query Data Queue Attributes  */
 #define QZHQ_RECEIVEDATA     0x0002 /* Receive Data from Data Queue */
 #define QZHQ_CREATEDATAQUEUE 0x0003 /* Create Data Queue request    */
 #define QZHQ_DELETEDATAQUEUE 0x0004 /* Delete Data Queue request    */
 #define QZHQ_SENDDATA        0x0005 /* Send Data to Data Queue req  */
 #define QZHQ_CLEARDATAQUEUE  0x0006 /* Clear Data Queue request     */
 #define QZHQ_CANCELPENDINGRCV 0x0007/* Cancel Pending Receive req   */

  /* Key Operator constants */
 #define QZHQ_OP_NONE        0x0000  /* No operator                  */
 #define QZHQ_OP_EQ          "EQ"    /* Equal                        */
 #define QZHQ_OP_NE          "NE"    /* Not Equal                    */
 #define QZHQ_OP_GE          "GE"    /* Greater than or equal to     */
 #define QZHQ_OP_GT          "GT"    /* Greater than                 */
 #define QZHQ_OP_LE          "LE"    /* Less than or equal to        */
 #define QZHQ_OP_LT          "LT"    /* Less than                    */

 /********************************************************************/
 /* Typedef for Data Queue Server exit program structure             */
 /********************************************************************/

 typedef _Packed struct Qzhq_DataQueue_Format
  {
   char User_Profile[10];            /* User profile                 */
   char Server_ID[10];               /* Server ID                    */
   char Format_Name[8];              /* Format name                  */
   int  Function_ID;                 /* Requested function           */
   char Object[10];                  /* Object name                  */
   char Library[10];                 /* object library name          */
   char KeyOp[2];                    /* Key Operator                 */
   int  KeyLen;                      /* Key Length                   */
   char KeyValue[256];               /* Key Value                    */
  } Qzhq_DataQueue_Format_t;

 #if (__OS400_TGTVRM__>=510)                                   /*@A1A*/
     #pragma datamodel(pop)                                    /*@A1A*/
 #endif                                                        /*@A1A*/

#endif
