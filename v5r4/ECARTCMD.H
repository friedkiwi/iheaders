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
 /* Header File Name: H/ECARTCMD                                   */
 /*                                                                */
 /* Descriptive Name: Command Analyzer Retrieve Exit Program.      */
 /*                                                                */
 /* 5769-SS1  (C) Copyright IBM Corp. 1999                         */
 /* All rights reserved.                                           */
 /* US Government Users Restricted Rights -                        */
 /* Use, duplication or disclosure restricted                      */
 /* by GSA ADP Schedule Contract with IBM Corp.                    */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /* Description:  The Command Analyzer Retrieve Exit Program       */
 /*      allows an application to retrieve the command that will   */
 /*      be run by the command analyzer.                           */
 /*                                                                */
 /* Header Files Included: None.                                   */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List:  Qca_Rtv_RTVC0100_t                            */
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
 /* $A1=D98212.1  v5r1m0 991107 gchaney: Teraspace stage 2         */
 /* $PC  D99697       5D40  041031 AJMEYER:  Proxy Command Support */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /* End Change Activity                                            */
 /*** END HEADER FILE SPECIFICATIONS *******************************/

#ifndef _ECARTCMD_H
#define _ECARTCMD_H

#if (__OS400_TGTVRM__>=510)                                    /*@A1A*/
    #pragma datamodel(P128)                                    /*@A1A*/
#endif                                                         /*@A1A*/
/*********************************************************************/
/* Type definition for format RTVC0100                               */
/*********************************************************************/
   typedef _Packed struct Qca_Rtv_RTVC0100
   {
       char  Exit_Point_Name[20];
       char  Exit_Point_Format_Name[8];
       char  Command_Name[10];
       char  Library_Name[10];
       char  Reserved[4];
       int   Original_Command_String_Offset;
       int   Original_Command_String_Length;
       int   Replacement_Command_String_Off;
       int   Replacement_Command_String_Len;
       int   Proxy_Command_Chain_Off;                        /* @PCA*/
       int   Number_Of_Proxy_Commands;                       /* @PCA*/
     /*char  Original_Command_String[]; */
     /*char  Replacement_Command_String[]; */
     /*char  Proxy_Command_Chain[]; */
   }  Qca_Rtv_RTVC0100_t;


#if (__OS400_TGTVRM__>=510)                                   /*@A1A*/
    #pragma datamodel(pop)                                    /*@A1A*/
#endif                                                        /*@A1A*/

#endif /* _ECARTCMD_H */

