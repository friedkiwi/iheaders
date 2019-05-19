/*** START HEADER FILE SPECIFICATIONS *****************************/
/*                                                                */
/* Header File Name: H/QLGCNVSS                                   */
/*                                                                */
/* Descriptive Name: QLGCNVSS API                                 */
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
/* Description: The Convert Sort Sequence Table API converts a    */
/*              256-byte sort sequence table from one coded       */
/*              character set identifier (CCSID) encoding to      */
/*              another.                                          */
/*                                                                */
/* Header Files Included: None.                                   */
/*                                                                */
/* Macros List: None.                                             */
/*                                                                */
/* Structure List: None.                                          */
/*                                                                */
/* Function Prototype List: QLGCNVSS                              */
/*                                                                */
/* Change Activity:                                               */
/*                                                                */
/* CFD List:                                                      */
/*                                                                */
/* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION    */
/* ---- ------------ ----- ------ --------- ----------------------*/
/* $A0= D2862000     3D10  940414 BRINKER   New Include           */
/*                                                                */
/* End CFD List.                                                  */
/*                                                                */
/*  Additional notes about the Change Activity                    */
/* End Change Activity.                                           */
/*** END HEADER FILE SPECIFICATIONS *******************************/

#ifndef QLGCNVSS_h
#define QLGCNVSS_h
#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(P128)      /* @B1A*/
#endif                       /* @B1A*/

/******************************************************************/
/* Prototype for calling QLGCNVSS API                             */
/******************************************************************/
#ifdef  __ILEC400__
      #pragma linkage(QLGCNVSS,OS,nowiden)
#else
      extern "OS"
#endif
void QLGCNVSS (char *,    /* Converted sort sequence table        */
               char *,    /* Type of returned sort sequence table */
               char *,    /* Substitution values encountered      */
               char *,    /* Source sort sequence table           */
               int,       /* CCSID of source table                */
               int,       /* CCSID of converted table             */
               void *);   /* Error code                           */
#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(pop)       /* @B1A*/
#endif                       /* @B1A*/
#endif
