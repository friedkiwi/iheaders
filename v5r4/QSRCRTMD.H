/*** START HEADER FILE SPECIFICATIONS *****************************/
/*                                                                */
/* Header File Name:  qsrcrtmd.h                                  */
/*                                                                */
/* Descriptive Name: Definition for QSRCRTMD OPM API              */
/*                                                                */
/* 5769-SS1                                                       */
/* (C) Copyright IBM Corp. 1999,1999                              */
/* All rights reserved.                                           */
/* US Government Users Restricted Rights -                        */
/* Use, duplication or disclosure restricted                      */
/* by GSA ADP Schedule Contract with IBM Corp.                    */
/*                                                                */
/* Licensed Materials-Property of IBM                             */
/*                                                                */
/* Description: This header file defines the functions in         */
/*              the program QSRCRTMD.                             */
/*                                                                */
/* Header Files Included: None                                    */
/*                                                                */
/* Macros List: None                                              */
/*                                                                */
/* Structure List: None                                           */
/*                                                                */
/* Function Prototype List: QSRCRTMD                              */
/*                                                                */
/* Change Activity:                                               */
/*                                                                */
/* CFD List:                                                      */
/*                                                                */
/* FLAG REASON       LEVEL DATE   PGMR     CHANGE DESCRIPTION     */
/* ---- ------------ ----- ------ -------- ---------------------- */
/* $A0= D9563900     4D40  980422 ROCH     New Include            */
/* End CFD List.                                                  */
/*                                                                */
/*  Additional notes about the Change Activity                    */
/* End Change Activity.                                           */
/*** END HEADER FILE SPECIFICATIONS *******************************/

#ifndef QSRCRTMD_h
 #define QSRCRTMD_h
#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(P128)      /* @B1A*/
#endif                       /* @B1A*/

/******************************************************************/
/* Prototypes for calling QSRCRTMD API (OPM)                      */
/******************************************************************/
#ifdef __ILEC400__
  #pragma linkage(QSRCRTMD, OS, NOWIDEN)
#else
  extern "OS nowiden"
#endif
  void QSRCRTMD(
                  void *,       /* Qualified Media Definition     */
                  void *,       /* Input Data                     */
                  int,          /* Length of Data                 */
                  char *,       /* Format name                    */
                  char *,       /* Public authority               */
                  char *,       /* Text description               */
                  char,         /* Replace existing *MEDDFN       */
                  void *);      /* Error code                     */


#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(pop)       /* @B1A*/
#endif                       /* @B1A*/
#endif
