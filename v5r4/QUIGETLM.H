/* begin_generated_IBM_copyright_prolog                              */
/* This is an automatically generated copyright prolog.              */
/* After initializing,  DO NOT MODIFY OR MOVE                        */
/* ----------------------------------------------------------------- */
/*                                                                   */
/* Product(s):                                                       */
/*     5763-SS1                                                      */
/*     5722-SS1                                                      */
/*                                                                   */
/* (C)Copyright IBM Corp.  1994, 2005                                */
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
/*** START HEADER FILE SPECIFICATIONS ********************************/
/*                                                                   */
/* Header File Name: H/QUIGETLM                                      */
/*                                                                   */
/* Descriptive Name: Get List Multiple Entries                       */
/*                                                                   */
/* Description: The Get List Multiple Entries API accesses one or    */
/*              more entries in a list and updates the corresponding */
/*              dialog variables with the values contained in the    */
/*              list entry.                                          */
/*                                                                   */
/* Header Files Included: None.                                      */
/*                                                                   */
/* Macros List: None.                                                */
/*                                                                   */
/* Structure List: None.                                             */
/*                                                                   */
/* Function Prototype List: QUIGETLM                                 */
/*                                                                   */
/* Change Activity:                                                  */
/*                                                                   */
/* CFD List:                                                         */
/*                                                                   */
/* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION       */
/* ---- ------------ ----- ------ --------- ------------------------ */
/* $A0= D2862000     3D10  940204 ROCH:     New Include              */
/* $B0= P9A73188    v5r4m0 040705 trewarth: Changing 14th parameter  */
/*                                          record count from int to */
/*                                          int* to correct invalid  */
/*                                          output type              */
/*                                                                   */
/* End CFD List.                                                     */
/*                                                                   */
/*  Additional notes about the Change Activity                       */
/* End Change Activity.                                              */
/*** END HEADER FILE SPECIFICATIONS **********************************/

#ifndef QUIGETLM_h
#define QUIGETLM_h
#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(P128)      /* @B1A*/
#endif                       /* @B1A*/

#ifdef __ILEC400__
    #pragma linkage (QUIGETLM,OS,nowiden)
#else
    extern "OS"
#endif
/********************************************************************/
/*  Prototype for calling User Interface Manager API QUIGETLM       */
/********************************************************************/
void QUIGETLM (char *,           /* Application handle              */
               void *,           /* Variable buffer                 */
               int,              /* Variable buffer length          */
               char *,           /* Variable record name            */
               char *,           /* List name                       */
               char *,           /* Positioning option              */
               char *,           /* Copy option                     */
               void *,           /* Selection criteria              */
               char *,           /* Selection handle                */
               char *,           /* Extend option                   */
               char *,           /* List entry handle               */
               int,              /* Number of records               */
               int,              /* Record size                     */
               int *,            /* Record count                @B0C*/
               void *);          /* Error code                      */

#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(pop)       /* @B1A*/
#endif                       /* @B1A*/
#endif
