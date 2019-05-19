/*** START HEADER FILE SPECIFICATIONS *****************************/
/*                                                                */
/* Header File Name: H/QLGTRDTA                                   */
/*                                                                */
/* Descriptive Name: QLGTRDTA API.                                */
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
/* Description: The Truncate Character Data API truncates a       */
/*              CCSID-tagged string of character data to a        */
/*              requested length.                                 */
/*                                                                */
/* Header Files Included: None.                                   */
/*                                                                */
/* Macros List: None.                                             */
/*                                                                */
/* Structure List: None.                                          */
/*                                                                */
/* Function Prototype List: QLGTRDTA                              */
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

#ifndef QLGTRDTA_h
#define QLGTRDTA_h
#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(P128)      /* @B1A*/
#endif                       /* @B1A*/

/******************************************************************/
/* Prototype for calling QLGTRDTA API                             */
/******************************************************************/
#ifdef  __ILEC400__
      #pragma linkage(QLGTRDTA,OS,nowiden)
#else
      extern "OS"
#endif
void QLGTRDTA (char *,           /* Output data buffer            */
               int  *,           /* Length of ouput data returned */
               char *,           /* Remaining data buffer         */
               int  *,           /* Remaining data length         */
               char *,           /* Input data buffer             */
               int,              /* Length of buffers             */
               int,              /* Truncate length               */
               int,              /* CCSID of input data           */
               void *);          /* Error code                    */
#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(pop)       /* @B1A*/
#endif                       /* @B1A*/
#endif
