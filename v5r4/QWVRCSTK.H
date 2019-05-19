/* begin_generated_IBM_copyright_prolog                              */
/* This is an automatically generated copyright prolog.              */
/* After initializing,  DO NOT MODIFY OR MOVE                        */
/* ----------------------------------------------------------------- */
/*                                                                   */
/* Product(s):                                                       */
/*     5722-SS1                                                      */
/*                                                                   */
/* (C)Copyright IBM Corp.  2000, 2005                                */
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
/* Header File Name: QWVRCSTK                                     */
/*                                                                */
/* Descriptive Name: Retrieve Call Stack API                      */
/*                                                                */
/* Description: The Retrieve Call Stack API retrieves the call    */
/*              stack information for the specified thread and    */
/*              places the entries in the receiver variable in    */
/*              the calling program.                              */
/*                                                                */
/* Header Files Included: None.                                   */
/*                                                                */
/* Macros List: None.                                             */
/*                                                                */
/* Structure List:  Qwv_RCSTK_Entry_t                             */
/*                  Qwv_CSTK0100_t                                */
/*                  Qwv_Entry_t                                   */
/*                  Qwv_CSTK0200_t                                */
/*                  Qwv_CSTK0300_t                                */
/*                  Qwv_STKE0100_t                                */
/*                  Qwv_STKE0200_t                                */
/*                  Qwv_STKE0300_t                                */
/*                  Qwv_STKE0400_t                                */
/*                  Qwc_JIDF0100_t                                */
/*                  Qwc_JIDF0200_t                                */
/*                                                                */
/*                  Note: Structures Qwc_JIDF0100_t and           */
/*                  Qwc_JIDF0200_t are defined in H/QWCATTR       */
/*                  header file                                   */
/*                                                                */
/* Function Prototype List: QWVRCSTK                              */
/*                                                                */
/* Change Activity:                                               */
/*                                                                */
/* CFD List:                                                      */
/*                                                                */
/* FLAG REASON     LEVEL   DATE   PGMR  CHANGE DESCRIPTION        */
/* ---- ---------- ------- ------ ----  ------------------------- */
/* $A0= D9803103   v5r1m0  000430 ROCH: New Include               */
/* $A1= D9860301   v5r2m0  010223 ROCH: Add IASP support          */
/* $A2= D9921414   v5r3m0  021215 ROCH: ADD 64BIT Act Group Num   */
/* $A3= D9999801   v5r4m0  041017 ROCH: Add new structures and    */
/*                                      output formats.           */
/*                                                                */
/* End CFD List.                                                  */
/*                                                                */
/*  Additional notes about the Change Activity                    */
/* End Change Activity.                                           */
/*** END HEADER FILE SPECIFICATIONS *******************************/

#ifndef QWVRCSTK_h
#define QWVRCSTK_h

#include <qwcattr.h>

#if (__OS400_TGTVRM__>=510)
 #pragma datamodel(P128)
#endif

/******************************************************************/
/*  Prototype for QWVRCSTK API                                    */
/******************************************************************/
#ifdef  __ILEC400__
      #pragma linkage(QWVRCSTK,OS,nowiden)
#else
      extern "OS"
#endif

void QWVRCSTK(void *,           /* Receiver variable              */
              int,              /* Length of receiver variable    */
              char *,           /* Format name                    */
              void *,           /* Job identification information */
              char *,           /* Format of job identification   */
              void *);          /* Error code                     */

/******************************************************************/
/* Type Definition for the CSTK0100 format.                       */
/******************************************************************/
typedef _Packed struct Qwv_RCSTK_Entry
{
      int  Entry_Length;
      int  Stmt_Displacement;
      int  Stmt_Returned;
      int  Proc_Displacement;
      int  Proc_Length;
      int  Request_Level;
      char Program_Name[10];
      char Program_Library[10];
      int  Instruction;
      char Module_Name[10];
      char Module_Library[10];
      char Control_Bdy;
      char Reserved[3];
      unsigned int  Act_Group_Number;
      char Act_Group_Name[10];
      char Reserved_2[2];
      char Program_ASP_Name[10];
      char Program_Library_ASP_Name[10];
      int Program_ASP_Number;
      int Program_Library_ASP_Number;
      unsigned long long Act_Group_Number_Long;
      /*char Stmt_Identifier[][10]; */  /* Varying length */
      /*char Proc_Name[]; */            /* Varying length */
} Qwv_RCSTK_Entry_t;

typedef _Packed struct Qwv_CSTK0100
{
      int  Bytes_Returned;
      int  Bytes_Available;
      int  Entry_Available;
      int  Entry_Offset;
      int  Entry_Returned;
      char Returned_Thread_Id[8];
      char Information_Status;
      /*Qwv_RCSTK_Entry_t Entry[]; */  /* Varying length */
} Qwv_CSTK0100_t;

#if (__OS400_TGTVRM__>=540)

/******************************************************************/
/* Type Definition for the CSTK0200 and CSTK0300 formats.         */
/******************************************************************/
typedef _Packed struct Qwv_Entry
{
      int  Entry_Length;
      int  Data_Displacement;
      char Data_Format[8];
      int  Data_Length;
      /*char Reserved[]; */     /* Varying length */
      /*char Entry[]; */        /* Varying length */
} Qwv_Entry_t;

typedef _Packed struct Qwv_CSTK0200
{
      int  Bytes_Returned;
      int  Bytes_Available;
      int  Entry_Available;
      int  Entry_Offset;
      int  Entry_Returned;
      char Returned_Thread_Id[8];
      char Information_Status;
      /*char Reserved[]; */
      /*Qwv_Entry_t Entry[]; */  /* Varying length */
} Qwv_CSTK0200_t;

typedef _Packed struct Qwv_CSTK0300
{
      int  Bytes_Returned;
      int  Bytes_Available;
      int  Entry_Available;
      int  Entry_Offset;
      int  Entry_Returned;
      char Returned_Thread_Id[8];
      char Information_Status;
      /*char Reserved[]; */
      /*Qwv_Entry_t Entry[]; */  /* Varying length */
} Qwv_CSTK0300_t;

/******************************************************************/
/* Type Definition for the STKE0100 format.                       */
/******************************************************************/
typedef _Packed struct Qwv_STKE0100
{
      int  Stmt_Displacement;
      int  Stmt_Returned;
      int  Proc_Displacement;
      int  Proc_Length;
      int  Request_Level;
      char Program_Name[10];
      char Program_Library[10];
      char Module_Name[10];
      char Module_Library[10];
      int  Instruction;
      unsigned long long Act_Group_Number;
      char Act_Group_Name[10];
      char Control_Bdy;
      char Reserved;
      char Program_ASP_Name[10];
      char Program_Library_ASP_Name[10];
      int  Program_ASP_Number;
      int  Program_Library_ASP_Number;
      /*char Reserved2[]; */            /* Varying length */
      /*char Stmt_Identifier[][10]; */  /* Varying length */
      /*char Proc_Name[]; */            /* Varying length */
} Qwv_STKE0100_t;

/******************************************************************/
/* Type Definition for the STKE0200 format.                       */
/******************************************************************/
typedef _Packed struct Qwv_STKE0200
{
      int  Proc_Displacement;
      int  Proc_Length;
      int  Load_Module_Displacement;
      int  Load_Module_Length;
      int  Path_Displacement;
      int  Path_Length;
      int  Source_Displacement;
      int  Source_Length;
      unsigned int Line_Number;
      unsigned long long Instruction_Address;
      unsigned int Instruction_Offset;
      char Bit_32_Indicator;
      char Kernel_Indicator;
      char Alt_Indicator;
      /*char Reserved[]; */            /* Varying length */
      /*char Proc_Name[]; */           /* Varying length */
      /*char Load_Module[]; */         /* Varying length */
      /*char Path[]; */                /* Varying length */
      /*char Source[]; */              /* Varying length */
} Qwv_STKE0200_t;

/******************************************************************/
/* Type Definition for the STKE0300 format.                       */
/******************************************************************/
typedef _Packed struct Qwv_STKE0300
{
      int  Proc_Displacement;
      int  Proc_Length;
      int  Load_Module_Displacement;
      int  Load_Module_Length;
      unsigned int Instruction_Offset;
      /*char Reserved[]; */            /* Varying length */
      /*char Proc_Name[]; */           /* Varying length */
      /*char Load_Module[]; */         /* Varying length */
} Qwv_STKE0300_t;

/******************************************************************/
/* Type Definition for the STKE0400 format.                       */
/******************************************************************/
typedef _Packed struct Qwv_STKE0400
{
      int  Class_Displacement;
      int  Class_Length;
      int  Method_Displacement;
      int  Method_Length;
      int  Sig_Displacement;
      int  Sig_Length;
      int  Dir_Displacement;
      int  Dir_Length;
      int  File_Displacement;
      int  File_Length;
      int  CCSID;
      int  Line_Number;
      int  Byte_Code_Offset;
      char Method_Type;
      /*char Reserved[]; */            /* Varying length */
      /*char Class_Name[]; */          /* Varying length */
      /*char Method_Name[]; */         /* Varying length */
      /*char Signature_Name[]; */      /* Varying length */
      /*char Directory_Name[]; */      /* Varying length */
      /*char File_Name[] */            /* Varying length */
} Qwv_STKE0400_t;
#endif

 #if (__OS400_TGTVRM__>=510)
 #pragma datamodel(pop)
 #endif

 #endif
