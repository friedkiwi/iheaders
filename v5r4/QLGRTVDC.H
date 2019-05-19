/*** START HEADER FILE SPECIFICATIONS *****************************/
/*                                                                */
/* Header File Name: H/QLGRTVDC                                   */
/*                                                                */
/* Descriptive Name: QLGRTVDC API.                                */
/*                                                                */
/* 5722-SS1  (C) Copyright IBM Corp. 2001,2001                    */
/* All rights reserved.                                           */
/* US Government Users Restricted Rights -                        */
/* Use, duplication or disclosure restricted                      */
/* by GSA ADP Schedule Contract with IBM Corp.                    */
/*                                                                */
/* Licensed Materials-Property of IBM                             */
/*                                                                */
/*                                                                */
/* Description: The Retrieve Default CCSID Data API retrieves     */
/*              the CCSID based on a language ID.                 */
/*                                                                */
/* Header Files Included: None.                                   */
/*                                                                */
/* Macros List: None.                                             */
/*                                                                */
/* Structure List: None.                                          */
/*                                                                */
/* Function Prototype List: QLGRTVDC                              */
/*                                                                */
/* Change Activity:                                               */
/*                                                                */
/* CFD List:                                                      */
/*                                                                */
/* FLAG REASON      LEVEL  DATE   PGMR      CHANGE DESCRIPTION    */
/* ---- ----------- ------ ------ --------- ----------------------*/
/* $A0= P9954302    V5R2M0 011002 VIET      New Include           */
/*                                                                */
/* End CFD List.                                                  */
/*                                                                */
/*  Additional notes about the Change Activity                    */
/* End Change Activity.                                           */
/*** END HEADER FILE SPECIFICATIONS *******************************/

#ifndef QLGRTVCD_h
#define QLGRTVCD_h
#if (__OS400_TGTVRM__>=510)
#pragma datamodel(P128)
#endif

/******************************************************************/
/* Prototype for calling QLGRTVDC API                             */
/******************************************************************/
#ifdef  __ILEC400__
      #pragma linkage(QLGRTVDC,OS,nowiden)
#else
      extern "OS"
#endif
void QLGRTVDC (int *,           /* Default CCSID                 */
               char *,           /* Language ID                   */
               void *);          /* Error code                    */

#if (__OS400_TGTVRM__>=510)
#pragma datamodel(pop)
#endif
#endif

