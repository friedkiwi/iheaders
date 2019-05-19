/*** START HEADER FILE SPECIFICATIONS ********************************/
/*                                                                   */
/* Header File Name: H/QUIOPNDA                                      */
/*                                                                   */
/* Descriptive Name: Open Display Application                        */
/*                                                                   */
/* 5763-SS1  (C) Copyright IBM Corp. 1994,1994                       */
/* All rights reserved.                                              */
/* US Government Users Restricted Rights -                           */
/* Use, duplication or disclosure restricted                         */
/* by GSA ADP Schedule Contract with IBM Corp.                       */
/*                                                                   */
/* Licensed Materials-Property of IBM                                */
/*                                                                   */
/* Description: The Open Display Application API initiates a UIM     */
/*              display application by opening the panel group that  */
/*              the application program specifies.                   */
/*                                                                   */
/* Header Files Included: None.                                      */
/*                                                                   */
/* Macros List: None.                                                */
/*                                                                   */
/* Structure List: None.                                             */
/*                                                                   */
/* Function Prototype List: QUIOPNDA                                 */
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

#ifndef QUIOPNDA_h
 #define QUIOPNDA_h
#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(P128)      /* @B1A*/
#endif                       /* @B1A*/

 /********************************************************************/
 /*  Prototype for calling User Interface Manager API QUIOPNDA       */
 /********************************************************************/
 #ifdef __ILEC400__
    #pragma linkage (QUIOPNDA,OS,nowiden)
 #else
    extern "OS"
 #endif
 void QUIOPNDA (char *,           /* Application handle              */
                void *,           /* Qualified panel group name      */
                int,              /* Application scope               */
                int,              /* Exit parameter interface        */
                char *,           /* Full-screen help                */
                void *,           /* Error code                      */
                ...);             /* Optional Parameter Group:
                                       Open data receiver
                                       Length of open data receiver
                                       Length of available open data */
#if (__OS400_TGTVRM__>=510)  /* @B1A*/
#pragma datamodel(pop)       /* @B1A*/
#endif                       /* @B1A*/
#endif
