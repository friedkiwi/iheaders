/*** START HEADER FILE SPECIFICATIONS ********************************/
/*                                                                   */
/* Header File Name: H/QUIOPNPA                                      */
/*                                                                   */
/* Descriptive Name: Open Print Application                          */
/*                                                                   */
/* 5763-SS1  (C) Copyright IBM Corp. 1994,1994                       */
/* All rights reserved.                                              */
/* US Government Users Restricted Rights -                           */
/* Use, duplication or disclosure restricted                         */
/* by GSA ADP Schedule Contract with IBM Corp.                       */
/*                                                                   */
/* Licensed Materials-Property of IBM                                */
/*                                                                   */
/* Description: The Open Print Application API initiates a UIM print */
/*              application by opening the panel group that the      */
/*              application program specifies.                       */
/*                                                                   */
/* Header Files Included: None.                                      */
/*                                                                   */
/* Macros List: None.                                                */
/*                                                                   */
/* Structure List: None.                                             */
/*                                                                   */
/* Function Prototype List: QUIOPNPA                                 */
/*                                                                   */
/* Change Activity:                                                  */
/*                                                                   */
/* CFD List:                                                         */
/*                                                                   */
/* FLAG REASON       LEVEL DATE   PGMR      CHANGE DESCRIPTION       */
/* ---- ------------ ----- ------ --------- ------------------------ */
/* $A0= D2862000     3D10  940126 ROCH:     New Include              */
/*                                                                   */
/* End CFD List.                                                     */
/*                                                                   */
/*  Additional notes about the Change Activity                       */
/* End Change Activity.                                              */
/*** END HEADER FILE SPECIFICATIONS **********************************/

#ifndef QUIOPNPA_h
 #define QUIOPNPA_h
#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(P128)      /* @B1A*/
#endif                       /* @B1A*/

 /********************************************************************/
 /*  Prototype for calling User Interface Manager API QUIOPNPA       */
 /********************************************************************/
 #ifdef __ILEC400__
    #pragma linkage (QUIOPNPA,OS,nowiden)
 #else
    extern "OS"
 #endif
 void QUIOPNPA (char *,           /* Application handle              */
                void *,           /* Qualified panel group name      */
                int,              /* Application scope               */
                int,              /* Exit parameter interface        */
                void *,           /* Qlfd prt name dev file          */
                char *,           /* Alternative file name           */
                char *,           /* Share open data path            */
                char *,           /* User data                       */
                void *,           /* Error code                      */
                ...);             /* Optional Parameter Group:
                                       Open data receiver
                                       Length of open data receiver
                                       Length of available open data */
#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(pop)       /* @B1A*/
#endif                       /* @B1A*/
#endif
