/*** START HEADER FILE SPECIFICATIONS ********************************/
/*                                                                   */
/* Header File Name: H/QTNADDCR                                      */
/*                                                                   */
/* Descriptive Name: Add Commitment Resource                         */
/*                                                                   */
/* 5763-SS1  (C) Copyright IBM Corp. 1994,1994                       */
/* All rights reserved.                                              */
/* US Government Users Restricted Rights -                           */
/* Use, duplication or disclosure restricted                         */
/* by GSA ADP Schedule Contract with IBM Corp.                       */
/*                                                                   */
/* Licensed Materials-Property of IBM                                */
/*                                                                   */
/*                                                                   */
/* Description: The Add Commitment Resource API adds an API          */
/*              commitment resource to a commitment definition.      */
/*                                                                   */
/* Header Files Included: None.                                      */
/*                                                                   */
/* Macros List: None.                                                */
/*                                                                   */
/* Structure List: Qtn_Input_Options_t                               */
/*                                                                   */
/* Function Prototype List: QTNADDCR.                                */
/*                                                                   */
/* Change Activity:                                                  */
/*                                                                   */
/* CFD List:                                                         */
/*                                                                   */
/* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION       */
/* ---- ------------ ----- ------ --------- ------------------------ */
/* $A0= D2862000     3D10  940410 LUPA:     New Include              */
/* $A1= D98840       5D20  010919 TN:       Add savepoints support   */
/*                                                                   */
/* End CFD List.                                                     */
/*                                                                   */
/*  Additional notes about the Change Activity                       */
/* End Change Activity.                                              */
/*** END HEADER FILE SPECIFICATIONS **********************************/

#ifndef QTNADDCR_h
 #define QTNADDCR_h
#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(P128)      /* @B1A*/
#endif                       /* @B1A*/

 /********************************************************************/
 /*  Prototype for QTNADDCR API                                      */
 /********************************************************************/
 #ifdef __ILEC400__
    #pragma linkage (QTNADDCR,OS,nowiden)
 #else
    extern "OS"
 #endif
 void QTNADDCR (int * ,           /* Resource Handle                 */
                char *,           /* Resource Name                   */
                void *,           /* Qualified C&R Exit Program      */
                void *,           /* C&R Exit Program information    */
                char *,           /* IPL Processing Option           */
                void *,           /* Error Code                      */
                ...);             /* Optional Parameter:
                                       Add Resource Options          */

 /********************************************************************/
 /*  Typedef for Input options structure.                            */
 /********************************************************************/
 typedef _Packed struct Qtn_Input_Options {
       int   Structure_Length;
       char  Q_Journal_Name[20];
       char  Resource_Protocol;
       char  Classify;
       char  Prepare;
       char  Rollback_Required;
       char  Reaquire_Locks;
       char  Last_Agent;
       char  Allow_Save;
       char  Savepoint_Compatible;                            /* @A1A*/
       char  Set_Savepoint;                                   /* @A1A*/
       char  Rollback_Savepoint;                              /* @A1A*/
       char  Release_Savepoint;                               /* @A1A*/
 } Qtn_Input_Options_t;

#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(pop)       /* @B1A*/
#endif                       /* @B1A*/
#endif
