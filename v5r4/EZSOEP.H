/*** START HEADER FILE SPECIFICATIONS ********************************/
/*                                                                   */
/* Header File Name       :  H/EZSOEP                                */
/*                                                                   */
/* Descriptive Name       :  Socket SIGNON server                    */
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
/*              the exit point defined for the socket signon         */
/*              server.                                              */
/*                                                                   */
/*                                                                   */
/* Header Files Included: None.                                      */
/*                                                                   */
/* Macros List: None.                                                */
/*                                                                   */
/* Structure List: Qzso_Signon_Format_t                              */
/*                                                                   */
/* Function Prototype List: None.                                    */
/*                                                                   */
/* Change Activity:                                                  */
/*                                                                   */
/* CFD List:                                                         */
/*                                                                   */
/* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION       */
/* ---- ------------ ----- ------ --------- ----------------------   */
/* $A0= P3978167     3D60  950201 DMK:      New Include              */
/* $A1= P9910447     4D50  991205 ROCHESTER:Include new function id  */
/* $A2= P9934931     5D10  001105 ROCHESTER:Teraspace stage 2        */
/* $A3= D99179       5D30  020724 ROCHESTER:Include new function id  */
/*                                                                   */
/* End CFD List.                                                     */
/*                                                                   */
/*  Additional notes about the Change Activity                       */
/* End Change Activity.                                              */
/*** END HEADER FILE SPECIFICATIONS **********************************/

#ifndef EZSOEP_h
 #define EZSOEP_h

 #if (__OS400_TGTVRM__>=510)                                  /*@A2A*/
     #pragma datamodel(P128)                                  /*@A2A*/
 #endif                                                       /*@A2A*/

  /* Application name constants */
 #define Signon_Server_ID    "*SIGNON   "

  /* Format name constants */
 #define SignonSrv_Format    "ZSOY0100"

  /* Function Id constants */
 #define Retrieve_Signon      0x7004    /* Retrieve signon info req */
 #define Change_Password      0x7005    /* Change password request  */
 #define Generate_Token       0x7007    /* Generate authentication  */
                                        /* token                @A1A*/
 #define Generate_Token_For_User 0x7008 /* Generate authentication  */
                                        /* token for another user   */
                                        /*                      @A3A*/
 #define Start_Server         0x7002    /* Start server request @A3A*/

 /*******************************************************************/
 /* Typedef for signon server exit program structure                */
 /*******************************************************************/

 typedef _Packed struct Qzso_Signon_Format_t
  {
   char UsrPrf[10];                /* User profile                  */
   char AppName[10];               /* Application name              */
   char FmtName[8];                /* Format name                   */
   int Function;                   /* Requested function            */
  }Qzso_Signon_Format_t;

 #if (__OS400_TGTVRM__>=510)                                   /*@A2A*/
     #pragma datamodel(pop)                                    /*@A2A*/
 #endif                                                        /*@A2A*/

#endif
