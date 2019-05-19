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
 /* Header File Name: H/QSQGNDDL                                   */
 /*                                                                */
 /* Descriptive Name: Generate Data Definition Language (QSQGNDDL) */
 /*                                                                */
 /* 5722-SS1 (C) Copyright IBM Corp. 2000                          */
 /* All rights reserved.                                           */
 /* US Government Users Restricted Rights -                        */
 /* Use, duplication or disclosure restricted                      */
 /* by GSA ADP Schedule Contract with IBM Corp.                    */
 /*                                                                */
 /* Licensed Materials-Property of IBM                             */
 /*                                                                */
 /*                                                                */
 /* Description: The Generate Data Definition Language API         */
 /*              generates SQL statements that can be used to      */
 /*              recreate a database object.                       */
 /*                                                                */
 /* Header Files Included: None.                                   */
 /*                                                                */
 /* Macros List: None.                                             */
 /*                                                                */
 /* Structure List: None.                                          */
 /*                                                                */
 /* Function Prototype List: QSQGNDDL                              */
 /*                                                                */
 /* Change Activity:                                               */
 /*                                                                */
 /* CFD List:                                                      */
 /*                                                                */
 /* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
 /* ---- ------------ ----- ------ --------- ----------------------*/
 /* $A0= D9807400     5D10  990726 ROCH:     New Include           */
 /* $A1= P9934931     5D10  991107 ROCH:     Teraspace stage 2     */
 /* $A2= P9A90965     5D40  050305 ROCH:     Trigger, Constraint   */
 /*                                          and system name option*/
 /*                                                                */
 /*                                                                */
 /* End CFD List.                                                  */
 /*                                                                */
 /*  Additional notes about the Change Activity                    */
 /* End Change Activity.                                           */
 /******************************************************************/

#ifndef QSQGNDDL_h
#define QSQGNDDL_h

#if (__OS400_TGTVRM__>=510)                                 /*@A1A*/
   #pragma datamodel(P128)                                  /*@A1A*/
#endif                                                      /*@A1A*/

/*********************************************************************/
/* Prototypes for calling Reverse Engineer Database Objects QSQGNDDL */
/*********************************************************************/
#ifdef __ILEC400__
     #pragma linkage (QSQGNDDL,OS,nowiden)
#else
     extern "OS"
#endif

void QSQGNDDL(void *,               /* Input Template              */
              int  *,               /* Length of Input Template      */
              char *,               /* Input Template Format Name    */
              void *);              /* Error Code                    */

/********************************************************************/
/* Type Definition for the SQLR0100 format.                         */
/*                                                                  */
/* NOTE: The following type definition only defines the fixed       */
/*       portion of the format.  Any varying length field will have */
/*       to be defined by the user.                                 */
/********************************************************************/
typedef _Packed struct Qsq_SQLR0100
      {
         char  Object_Name[258];
         char  Object_Library[258];
         char  Object_Type[10];
         char  Source_File_Name[10];
         char  Source_File_Library[10];
         char  Source_File_Member[10];
         long  Severity_Level;
         char  Replace_Option;
         char  Statement_Formatting_Option;
         char  Date_Format[3];
         char  Date_Separator;
         char  Time_Format[3];
         char  Time_Separator;
         char  Naming_Option[3];
         char  Decimal_Point;
         char  Standards_Option;
         char  Drop_Option;
         long  Message_Level;
         char  Comment_Option;
         char  Label_Option;
         char  Header_Option;
         char  Trigger_Option;
         char  Constraint_Option;
         char  System_Name_Option;
         /*char  Reserved[1]; */ /* Variable length */
      }Qsq_SQLR0100_t;

#if (__OS400_TGTVRM__>=510)                         /*@A1A*/
   #pragma datamodel(pop)                           /*@A1A*/
#endif                                              /*@A1A*/

#endif
