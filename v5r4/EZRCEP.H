/*** START HEADER FILE SPECIFICATIONS ********************************/
/*                                                                   */
/* Header File Name       :  H/EZRCEP                                */
/*                                                                   */
/* Descriptive Name       :  Remote Command/Remote Program Call      */
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
/* Description: This include defines the parameter structure for     */
/*              the exit point defined for the Remote Command/       */
/*              Remote Program Call server.                          */
/*                                                                   */
/*              QIBM_QZRC_RMT format CZRC0100                        */
/*                                                                   */
/*                                                                   */
/* Header Files Included: None.                                      */
/*                                                                   */
/* Macros List: None.                                                */
/*                                                                   */
/* Structure List: Qzrc_Rmtsrv_Format_t                              */
/*                                                                   */
/* Function Prototype List: None.                                    */
/*                                                                   */
/* Change Activity:                                                  */
/*                                                                   */
/* CFD List:                                                         */
/*                                                                   */
/* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION       */
/* ---- ------------ ----- ------ --------- ----------------------   */
/* $A0= P3978167     3D60  950131 ROCHESTER:New Include              */
/* $A1= P9934931     5D10  001105 ROCHESTER:Teraspace stage 2        */
/*                                                                   */
/* End CFD List.                                                     */
/*                                                                   */
/*  Additional notes about the Change Activity                       */
/* End Change Activity.                                              */
/*** END HEADER FILE SPECIFICATIONS **********************************/

#ifndef EZRCEP_h
 #define EZRCEP_h

 #if (__OS400_TGTVRM__>=510)                                  /*@A1A*/
     #pragma datamodel(P128)                                  /*@A1A*/
 #endif                                                       /*@A1A*/

  /* Server Id constants */
 #define QZRC_RMT_SERVER_ID    "*RMTSRV   "

  /* Format name constants */
 #define QZRC_RMT_SERVER_FORMAT    "CZRC0100"

  /* Function Id constants */
 #define QZRC_RMT_COMMAND     0x1002      /* Remote command         */
 #define QZRC_RMT_PROGRAMCALL 0x1003      /* Remote program call    */


 /*******************************************************************/
 /* Typedef for Remote Cmd/Pgm Call Server exit program structure   */
 /*******************************************************************/

 typedef _Packed struct Qzrc_Rmtsrv_Format
  {
   char User_Profile[10];          /* User profile                  */
   char Server_ID[10];             /* Server ID                     */
   char Format_Name[8];            /* Format name                   */
   int  Function_ID;               /* Requested function            */
   char Object[10];                /* Object name                   */
   char Library[10];               /* object library name           */
   int  LenofOther;                /* length of last field          */
   char Other[6000];               /* remaining data                */
  }Qzrc_Rmtsrv_Format_t;

 #if (__OS400_TGTVRM__>=510)                                   /*@A1A*/
     #pragma datamodel(pop)                                    /*@A1A*/
 #endif                                                        /*@A1A*/

#endif
