/*** START HEADER FILE SPECIFICATIONS ********************************/
/*                                                                   */
/* Header File Name: H/QUIADDLM                                      */
/*                                                                   */
/* Descriptive Name: Add List Multiple Entries                       */
/*                                                                   */
/* 5763-SS1  (C) Copyright IBM Corp. 1994,1994                       */
/* All rights reserved.                                              */
/* US Government Users Restricted Rights -                           */
/* Use, duplication or disclosure restricted                         */
/* by GSA ADP Schedule Contract with IBM Corp.                       */
/*                                                                   */
/* Licensed Materials-Property of IBM                                */
/*                                                                   */
/* Description: The Add List Multiple Entries API adds one or more   */
/*              new entries to a list.                               */
/*                                                                   */
/* Header Files Included: None.                                      */
/*                                                                   */
/* Macros List: None.                                                */
/*                                                                   */
/* Structure List: None.                                             */
/*                                                                   */
/* Function Prototype List: QUIADDLM                                 */
/*                                                                   */
/* Change Activity:                                                  */
/*                                                                   */
/* CFD List:                                                         */
/*                                                                   */
/* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION       */
/* ---- ------------ ----- ------ --------- ------------------------ */
/* $A0= D2862000     3D10  940204 ROCH:     New Include              */
/* $A1= P3667654     4D50  981214 ROCH:     Chg record count to int* */
/*                                                                   */
/* End CFD List.                                                     */
/*                                                                   */
/*  Additional notes about the Change Activity                       */
/* End Change Activity.                                              */
/*** END HEADER FILE SPECIFICATIONS **********************************/

#ifndef QUIADDLM_h
#define QUIADDLM_h
#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(P128)      /* @B1A*/
#endif                       /* @B1A*/

#ifdef __ILEC400__
    #pragma linkage (QUIADDLM,OS,nowiden)
#else
    extern "OS"
#endif
/********************************************************************/
/*  Prototype for calling User Interface Manager API QUIADDLM       */
/********************************************************************/
void QUIADDLM (char *,           /* Application handle              */
               void *,           /* Variable buffer                 */
               int,              /* Variable buffer length          */
               char *,           /* Variable record name            */
               char *,           /* List name                       */
               char *,           /* Option                          */
               char *,           /* List entry handle               */
               int,              /* Number of records               */
               void *,           /* Record numbers                  */
               int,              /* Record size                     */
               int  *,           /* Record count                    */
               void *);          /* Error code                      */

#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(pop)       /* @B1A*/
#endif                       /* @B1A*/
#endif
