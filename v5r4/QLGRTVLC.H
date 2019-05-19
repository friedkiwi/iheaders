/*** START HEADER FILE SPECIFICATIONS ********************************/
/*                                                                   */
/* Header File Name: H/QLGRTVLC                                      */
/*                                                                   */
/* Descriptive Name: Retrieve Locale Information API.                */
/*                                                                   */
/* 5716-SS1  (C) Copyright IBM Corp. 1995,1995                       */
/* All rights reserved.                                              */
/* US Government Users Restricted Rights -                           */
/* Use, duplication or disclosure restricted                         */
/* by GSA ADP Schedule Contract with IBM Corp.                       */
/*                                                                   */
/* Licensed Materials-Property of IBM                                */
/*                                                                   */
/*                                                                   */
/* Description: The Retrieve Locale Information API retrieves        */
/*              information from one category of a locale or         */
/*              retrieves all categories of a locale.                */
/*                                                                   */
/* Header Files Included: h/qlg                                      */
/*                        h/qlglcl                                   */
/*                                                                   */
/* Macros List: None.                                                */
/*                                                                   */
/* Structure List: None.  (Formats are in QLG and QLGLCL)            */
/*                                                                   */
/* Function Prototype List: QLGRTVLC.                                */
/*                                                                   */
/* Change Activity:                                                  */
/*                                                                   */
/* CFD List:                                                         */
/*                                                                   */
/* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION       */
/* ---- ------------ ----- ------ --------- ------------------------ */
/* $A0= D2870900     3D60  941204 ROCH:     New Include              */
/*                                                                   */
/* End CFD List.                                                     */
/*                                                                   */
/*  Additional notes about the Change Activity                       */
/* End Change Activity.                                              */
/*** END HEADER FILE SPECIFICATIONS **********************************/

#ifndef QLGRTVLC_h
 #define QLGRTVLC_h

 /******************************************************************/
 /* Includes for structures.                                       */
 /******************************************************************/
 #include <qlg.h>
 #include <qlglcl.h>
#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(P128)      /* @B1A*/
#endif                       /* @B1A*/

 /******************************************************************/
 /*  Prototype for QLGRTVLC API                                    */
 /******************************************************************/
 #ifdef __ILEC400__
      #pragma linkage (QLGRTVLC,OS,nowiden)
 #else
      extern "OS"
 #endif
    void QLGRTVLC(void *,                /* Receiver Variable      */
                  int   ,                /* Length Receiver Var    */
                  char *,                /* Format Name            */
                  void *,                /* Locale Path Name       */
                  int   ,                /* Locale category key    */
                  void *);               /* Error Code             */

#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(pop)       /* @B1A*/
#endif                       /* @B1A*/
#endif
