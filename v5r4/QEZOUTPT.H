/*** START HEADER FILE SPECIFICATIONS ****************************/
/*                                                               */
/* Header File Name: H/QEZOUTPT                                  */
/*                                                               */
/* Descriptive Name: Work with Printer Output API.               */
/*                                                               */
/* 5763-SS1,5722-SS1  (C) Copyright IBM Corp. 1994,1994,2001     */
/* All rights reserved.                                          */
/* US Government Users Restricted Rights -                       */
/* Use, duplication or disclosure restricted                     */
/* by GSA ADP Schedule Contract with IBM Corp.                   */
/*                                                               */
/* Licensed Materials-Property of IBM                            */
/*                                                               */
/*                                                               */
/* Description: The Work with Printer Output API uses the Work   */
/*               with Spooled FIles (WRKSPLF) command to display */
/*               basic or intermediate assistance level.         */
/*                                                               */
/* Header Files Included: None.                                  */
/*                                                               */
/* Macros List: None.                                            */
/*                                                               */
/* Structure List: None.                                         */
/*                                                               */
/* Function Prototype List: QEZOUTPT                             */
/*                                                               */
/* Change Activity:                                              */
/*                                                               */
/* CFD List:                                                     */
/*                                                               */
/* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION   */
/* ---- ------------ ----- ------ --------- ---------------------*/
/* $A0= D2862000     3D10  940317 XZS0786:  New Include          */
/* $A1= D98212.2    v5r1m0 010300 gchaney: Teraspace stage 2     */
/*                                                               */
/* End CFD List.                                                 */
/*                                                               */
/*  Additional notes about the Change Activity                   */
/* End Change Activity.                                          */
/*** END HEADER FILE SPECIFICATIONS ******************************/

#ifndef QEZOUTPT_h
#define QEZOUTPT_h

#if (__OS400_TGTVRM__>=510)                               /* @A1A*/
    #pragma datamodel(P128)                               /* @A1A*/
#endif                                                    /* @A1A*/

#ifdef __ILEC400__
    #pragma linkage (QEZOUTPT,OS,nowiden)
#else
    extern "OS"
#endif
/*****************************************************************/
/*  Prototype for calling Operational Assistant API QEZOUTPT     */
/*****************************************************************/
void QEZOUTPT();                 /* No parms                     */

#if (__OS400_TGTVRM__>=510)                               /* @A1A*/
    #pragma datamodel(pop)                                /* @A1A*/
#endif                                                    /* @A1A*/

#endif
