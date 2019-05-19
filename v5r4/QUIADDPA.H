/*** START HEADER FILE SPECIFICATIONS ********************************/
/*                                                                   */
/* Header File Name: H/QUIADDPA                                      */
/*                                                                   */
/* Descriptive Name: Add Print Application                           */
/*                                                                   */
/* 5763-SS1  (C) Copyright IBM Corp. 1994,1994                       */
/* All rights reserved.                                              */
/* US Government Users Restricted Rights -                           */
/* Use, duplication or disclosure restricted                         */
/* by GSA ADP Schedule Contract with IBM Corp.                       */
/*                                                                   */
/* Licensed Materials-Property of IBM                                */
/*                                                                   */
/* Description: The Add Print Application API enables print functions*/
/*              in a previously opened display application by        */
/*              opening the printer file for the application.        */
/*                                                                   */
/* Header Files Included: None.                                      */
/*                                                                   */
/* Macros List: None.                                                */
/*                                                                   */
/* Structure List: None.                                             */
/*                                                                   */
/* Function Prototype List: QUIADDPA                                 */
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

#ifndef QUIADDPA_h
 #define QUIADDPA_h
#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(P128)      /* @B1A*/
#endif                       /* @B1A*/

 /********************************************************************/
 /*  Prototype for calling User Interface Manager API QUIADDPA       */
 /********************************************************************/
 #ifdef __ILEC400__
    #pragma linkage (QUIADDPA,OS,nowiden)
 #else
    extern "OS"
 #endif
 void QUIADDPA (char *,           /* Application handle              */
                void *,           /* Qlfd prt file name              */
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
