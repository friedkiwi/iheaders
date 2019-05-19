#ifndef __QWTSJUID_h
#define __QWTSJUID_h
#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(P128)      /* @B1A*/
#endif                       /* @B1A*/
/*** START HEADER FILE SPECIFICATIONS *****************************/
/*                                                                */
/* Header File Name: H/QWTSJUID                                   */
/*                                                                */
/* Descriptive Name: Set Job User Identity                        */
/*                                                                */
/* 5769-SS1  (C) Copyright IBM Corp. 1998,1998                    */
/* All rights reserved.                                           */
/* US Government Users Restricted Rights -                        */
/* Use, duplication or disclosure restricted                      */
/* by GSA ADP Schedule Contract with IBM Corp.                    */
/*                                                                */
/* Licensed Materials-Property of IBM                             */
/*                                                                */
/*                                                                */
/* Description: The Set Job User Identity API sets or clears      */
/*              the job user identity.                            */
/*                                                                */
/* Header Files Included: H/QWTSJUID                              */
/*                                                                */
/* Macros List: None.                                             */
/*                                                                */
/* Structure List:  None                                          */
/*                                                                */
/* Function Prototype List: QWTSJUID                              */
/*                                                                */
/*                                                                */
/* Change Activity:                                               */
/*                                                                */
/* CFD List:                                                      */
/*                                                                */
/* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
/* ---- ------------ ----- ------ --------- ----------------------*/
/* $A0= D95604       4D30  971217 ROCH:     New Include           */
/*                                                                */
/* End CFD List.                                                  */
/*                                                                */
/*  Additional notes about the Change Activity                    */
/* End Change Activity.                                           */
/*** END HEADER FILE SPECIFICATIONS *******************************/

#define QWTSJUID_SET     1
#define QWTSJUID_CLEAR   2
/******************************************************************/
/* Prototype for calling Work Management API QWTSJUID             */
/******************************************************************/
#ifdef __ILEC400__
     #pragma linkage (QWTSJUID,OS,nowiden)
#else
     extern "OS"
#endif
void QWTSJUID(int ,             /* Operation requested           */
             void *);           /* Error code                    */

#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(pop)       /* @B1A*/
#endif                       /* @B1A*/
#endif
