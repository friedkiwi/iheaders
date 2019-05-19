/*** START HEADER FILE SPECIFICATIONS *****************************/
/*                                                                */
/* Header File Name: H/QLGVLID                                    */
/*                                                                */
/* Descriptive Name: QLGVLID API.                                 */
/*                                                                */
/* 5763-SS1  (C) Copyright IBM Corp. 1994,1994                    */
/* All rights reserved.                                           */
/* US Government Users Restricted Rights -                        */
/* Use, duplication or disclosure restricted                      */
/* by GSA ADP Schedule Contract with IBM Corp.                    */
/*                                                                */
/* Licensed Materials-Property of IBM                             */
/*                                                                */
/*                                                                */
/* Description: The Validate Language ID API validates a language */
/*              identifier to ensure it is supported.             */
/*                                                                */
/* Header Files Included: None.                                   */
/*                                                                */
/* Macros List: None.                                             */
/*                                                                */
/* Structure List: None.                                          */
/*                                                                */
/* Function Prototype List: QLGVLID                               */
/*                                                                */
/* Change Activity:                                               */
/*                                                                */
/* CFD List:                                                      */
/*                                                                */
/* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
/* ---- ------------ ----- ------ --------- ----------------------*/
/* $A0= D2862000     3D10  940413 BRINKER   New Include           */
/*                                                                */
/* End CFD List.                                                  */
/*                                                                */
/*  Additional notes about the Change Activity                    */
/* End Change Activity.                                           */
/*** END HEADER FILE SPECIFICATIONS *******************************/

#ifndef QLGVLID_h
#define QLGVLID_h
#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(P128)      /* @B1A*/
#endif                       /* @B1A*/

/******************************************************************/
/* Prototype for calling QLGVLID API                              */
/******************************************************************/
#ifdef  __ILEC400__
      #pragma linkage(QLGVLID,OS,nowiden)
#else
      extern "OS"
#endif
void QLGVLID (char *,                 /* Language ID to validate */
              void *);                /* Error code              */
#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(pop)       /* @B1A*/
#endif                       /* @B1A*/
#endif
