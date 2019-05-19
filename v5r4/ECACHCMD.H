/* begin_generated_IBM_copyright_prolog                              */
/* This is an automatically generated copyright prolog.              */
/* After initializing,  DO NOT MODIFY OR MOVE                        */
/* ----------------------------------------------------------------- */
/*                                                                   */
/* Product(s):                                                       */
/*     5722-SS1                                                      */
/*                                                                   */
/* (C)Copyright IBM Corp.  1999, 2005                                */
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
 /* Header File Name: H/ECACHCMD                                   */
 /*                                                                */
 /* Descriptive Name: Command Analyzer Change Exit Program.        */
 /*                                                                */
 /* 5769-SS1  (C) Copyright IBM Corp. 1999                        */
 /* All rights reserved.                                           */
 /* US Government Users Restricted Rights -                        */
 /* Use, duplication or disclosure restricted                      */
 /* by GSA ADP Schedule Contract with IBM Corp.                    */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /* Description:  The Command Analyzer Change Exit Program         */
 /*      allows an application to change the command that will be  */
 /*      run by the command analyzer.                              */
 /*                                                                */
 /* Header Files Included: None.                                   */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List:  Qca_Chg_CHGC0100_t                            */
 /*                                                                */
 /* Function Prototype List:                                       */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0  D95252       4D50  990303 ACCOLA:   New Include           */
 /* $A1= D98212.1     v5r1m0 991107 gchaney: Teraspace stage 2     */
 /* $PC  D99697       5D40  041031 AJMEYER:  Proxy Command Support */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /* End Change Activity                                            */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

#ifndef _ECACHCMD_H
#define _ECACHCMD_H

#if (__OS400_TGTVRM__>=510)                                  /*@A1A*/
    #pragma datamodel(P128)                                  /*@A1A*/
#endif                                                       /*@A1A*/

/*********************************************************************/
/* Type definition for format CHGC0100                               */
/*********************************************************************/
   typedef _Packed struct Qca_Chg_CHGC0100
   {
       char  Exit_Point_Name[20];
       char  Exit_Point_Format_Name[8];
       char  Command_Name[10];
       char  Library_Name[10];
       char  Change_Allowed;
       char  Prompt_Command;
       char  Reserved[2];
       int   Command_String_Offset;
       int   Command_String_Length;
       int   Proxy_Command_Chain_Off;                        /* @PCA*/
       int   Number_Of_Proxy_Commands;                       /* @PCA*/
     /*char  Command_String[]; */
     /*char  Proxy_Command_Chain[]; */
   }  Qca_Chg_CHGC0100_t;

#if (__OS400_TGTVRM__>=510)                                     /*@A1A*/
    #pragma datamodel(pop)                                      /*@A1A*/
#endif                                                          /*@A1A*/

#endif /* _ECACHCMD_H */

